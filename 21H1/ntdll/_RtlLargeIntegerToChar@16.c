/*
 * XREFs of _RtlLargeIntegerToChar@16 @ 0x4B350590
 * Callers:
 *     _RtlInt64ToUnicodeString@16 @ 0x4B350510 (_RtlInt64ToUnicodeString@16.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlExtendedLargeIntegerDivide@16 @ 0x4B308360 (_RtlExtendedLargeIntegerDivide@16.c)
 */

NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v4; // esi
  int v6; // ebx
  int v7; // edi
  unsigned __int64 v8; // rax
  int HighPart; // ecx
  int v10; // esi
  unsigned __int64 v11; // rax
  bool v12; // zf
  int v13; // ebx
  LONG v14; // ebx
  LONG v15; // edi
  bool v16; // cc
  LONG v17; // esi
  size_t v18; // [esp-4h] [ebp-88h]
  int v19; // [esp-4h] [ebp-88h]
  unsigned __int64 v20; // [esp+14h] [ebp-70h] BYREF
  _BYTE *v21; // [esp+1Ch] [ebp-68h]
  void *v22; // [esp+20h] [ebp-64h]
  _BYTE v23[7]; // [esp+65h] [ebp-1Fh] BYREF
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v22 = String;
  v4 = Base;
  if ( Base )
  {
    if ( Base == 2 )
    {
      v6 = 1;
      goto LABEL_11;
    }
    if ( Base == 8 )
    {
      v19 = 3;
LABEL_8:
      v6 = v19;
LABEL_11:
      v7 = (1 << v6) - 1;
      goto LABEL_14;
    }
    if ( Base != 10 )
    {
      if ( Base != 16 )
        return -1073741811;
      v19 = 4;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = 10;
  }
  v6 = 0;
  v7 = 0;
LABEL_14:
  v21 = v23;
  LODWORD(v8) = Value->LowPart;
  HighPart = Value->HighPart;
  if ( v6 )
  {
    do
    {
      v10 = v7 & v8;
      HIDWORD(v8) = HighPart;
      v11 = v8 >> v6;
      v20 = v11;
      HIDWORD(v8) = v21 - 1;
      v21 = (_BYTE *)HIDWORD(v8);
      *(_BYTE *)HIDWORD(v8) = RtlpIntegerChars[v10];
      HighPart = HIDWORD(v20);
      v12 = (HIDWORD(v20) | (unsigned int)v11) == 0;
      LODWORD(v8) = v20;
    }
    while ( !v12 );
  }
  else
  {
    do
    {
      LODWORD(v8) = RtlExtendedLargeIntegerDivide(v8, HighPart, v4, (unsigned int *)&v20);
      v13 = HIDWORD(v8);
      HIDWORD(v20) = HIDWORD(v8);
      HIDWORD(v8) = v21 - 1;
      v21 = (_BYTE *)HIDWORD(v8);
      *(_BYTE *)HIDWORD(v8) = RtlpIntegerChars[v20];
      HighPart = v13;
    }
    while ( v13 | (unsigned int)v8 );
  }
  v14 = (LONG)&v23[-HIDWORD(v8)];
  v15 = OutputLength;
  LODWORD(v8) = v22;
  if ( OutputLength < 0 )
  {
    v15 = -OutputLength;
    v16 = v14 <= -OutputLength;
    if ( v14 >= -OutputLength )
      goto LABEL_22;
    v17 = v15 - v14;
    LODWORD(v18) = v15 - v14;
    memset(v22, 48, v18);
    v15 = v14;
    LODWORD(v8) = (char *)v22 + v17;
    v22 = (char *)v22 + v17;
    HIDWORD(v8) = v21;
  }
  v16 = v14 <= v15;
LABEL_22:
  if ( !v16 )
    return -2147483643;
  ms_exc.registration.TryLevel = 0;
  LODWORD(v18) = v14;
  memcpy((void *)v8, (const void *)HIDWORD(v8), v18);
  if ( v14 < v15 )
    *((_BYTE *)v22 + v14) = 0;
  return 0;
}
