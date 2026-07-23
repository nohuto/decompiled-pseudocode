/*
 * XREFs of _RtlIntegerToChar@16 @ 0x4B2D2AE0
 * Callers:
 *     _RtlIntegerToUnicodeString@12 @ 0x4B2D2A70 (_RtlIntegerToUnicodeString@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v4; // ebx
  int v5; // ecx
  int v6; // esi
  _BYTE *v7; // edx
  ULONG v9; // ebx
  LONG v10; // ebx
  LONG v11; // edi
  PSTR v12; // eax
  bool v13; // cc
  ULONG v15; // eax
  LONG v16; // esi
  size_t v17; // [esp-4h] [ebp-60h]
  int v18; // [esp-4h] [ebp-60h]
  _BYTE *v19; // [esp+14h] [ebp-48h]
  PSTR v20; // [esp+18h] [ebp-44h]
  _BYTE v21[7]; // [esp+3Dh] [ebp-1Fh] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v20 = String;
  v4 = Base;
  switch ( Base )
  {
    case 0u:
      v4 = 10;
      Base = 10;
      goto LABEL_5;
    case 2u:
      v5 = 1;
      goto LABEL_20;
    case 8u:
      v18 = 3;
LABEL_19:
      v5 = v18;
LABEL_20:
      v6 = (1 << v5) - 1;
      goto LABEL_6;
  }
  if ( Base != 10 )
  {
    if ( Base != 16 )
      return -1073741811;
    v18 = 4;
    goto LABEL_19;
  }
LABEL_5:
  v5 = 0;
  v6 = 0;
LABEL_6:
  v7 = v21;
  v19 = v21;
  do
  {
    if ( v5 )
    {
      v9 = Value & v6;
      Value >>= v5;
    }
    else
    {
      v15 = Value / v4;
      v9 = Value % v4;
      Value = v15;
      v7 = v19;
    }
    v19 = --v7;
    *v7 = RtlpIntegerChars[v9];
    v4 = Base;
  }
  while ( Value );
  v10 = v21 - v7;
  v11 = OutputLength;
  v12 = String;
  if ( OutputLength >= 0 )
    goto LABEL_11;
  v11 = -OutputLength;
  v13 = v10 <= -OutputLength;
  if ( v10 < -OutputLength )
  {
    v16 = v11 - v10;
    LODWORD(v17) = v11 - v10;
    memset(String, 48, v17);
    v11 = v10;
    v12 = &String[v16];
    v20 = &String[v16];
    v7 = v19;
LABEL_11:
    v13 = v10 <= v11;
  }
  if ( !v13 )
    return -2147483643;
  ms_exc.registration.TryLevel = 0;
  LODWORD(v17) = v10;
  memcpy(v12, v7, v17);
  if ( v10 < v11 )
    v20[v10] = 0;
  ms_exc.registration.TryLevel = -2;
  return 0;
}
