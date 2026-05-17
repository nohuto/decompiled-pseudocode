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

int __stdcall RtlLargeIntegerToChar(_DWORD *a1, unsigned int a2, int a3, void *a4)
{
  unsigned int v4; // esi
  int v6; // ebx
  int v7; // edi
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // esi
  unsigned __int64 v11; // rax
  bool v12; // zf
  int v13; // ebx
  signed int v14; // ebx
  int v15; // edi
  bool v16; // cc
  int v17; // esi
  int v18; // [esp-4h] [ebp-88h]
  unsigned __int64 v19; // [esp+14h] [ebp-70h] BYREF
  _BYTE *v20; // [esp+1Ch] [ebp-68h]
  void *v21; // [esp+20h] [ebp-64h]
  _BYTE v22[7]; // [esp+65h] [ebp-1Fh] BYREF
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v21 = a4;
  v4 = a2;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      v6 = 1;
      goto LABEL_11;
    }
    if ( a2 == 8 )
    {
      v18 = 3;
LABEL_8:
      v6 = v18;
LABEL_11:
      v7 = (1 << v6) - 1;
      goto LABEL_14;
    }
    if ( a2 != 10 )
    {
      if ( a2 != 16 )
        return -1073741811;
      v18 = 4;
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
  v20 = v22;
  LODWORD(v8) = *a1;
  v9 = a1[1];
  if ( v6 )
  {
    do
    {
      v10 = v7 & v8;
      HIDWORD(v8) = v9;
      v11 = v8 >> v6;
      v19 = v11;
      HIDWORD(v8) = v20 - 1;
      v20 = (_BYTE *)HIDWORD(v8);
      *(_BYTE *)HIDWORD(v8) = RtlpIntegerChars[v10];
      v9 = HIDWORD(v19);
      v12 = (HIDWORD(v19) | (unsigned int)v11) == 0;
      LODWORD(v8) = v19;
    }
    while ( !v12 );
  }
  else
  {
    do
    {
      LODWORD(v8) = RtlExtendedLargeIntegerDivide(v8, v9, v4, (unsigned int *)&v19);
      v13 = HIDWORD(v8);
      HIDWORD(v19) = HIDWORD(v8);
      HIDWORD(v8) = v20 - 1;
      v20 = (_BYTE *)HIDWORD(v8);
      *(_BYTE *)HIDWORD(v8) = RtlpIntegerChars[v19];
      v9 = v13;
    }
    while ( v13 | (unsigned int)v8 );
  }
  v14 = (signed int)&v22[-HIDWORD(v8)];
  v15 = a3;
  LODWORD(v8) = v21;
  if ( a3 < 0 )
  {
    v15 = -a3;
    v16 = v14 <= -a3;
    if ( v14 >= -a3 )
      goto LABEL_22;
    v17 = v15 - v14;
    memset(v21, 48, v15 - v14);
    v15 = v14;
    LODWORD(v8) = (char *)v21 + v17;
    v21 = (char *)v21 + v17;
    HIDWORD(v8) = v20;
  }
  v16 = v14 <= v15;
LABEL_22:
  if ( !v16 )
    return -2147483643;
  ms_exc.registration.TryLevel = 0;
  memcpy((void *)v8, (const void *)HIDWORD(v8), v14);
  if ( v14 < v15 )
    *((_BYTE *)v21 + v14) = 0;
  return 0;
}
