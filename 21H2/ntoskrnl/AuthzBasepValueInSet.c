/*
 * XREFs of AuthzBasepValueInSet @ 0x1402F47C8
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x1402F49EC (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402F3C20 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402F3D70 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepGetNextValue @ 0x1402F48F4 (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402F4CC0 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1405C1AC0 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x1405C1D48 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405C1E74 (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // r12
  int NextValue; // eax
  int v11; // ebx
  unsigned __int16 v12; // di
  unsigned __int16 v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  int v17; // eax
  char v18; // al
  int v19; // eax
  _OWORD v20[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v21; // [rsp+48h] [rbp-29h]
  _OWORD v22[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v23; // [rsp+78h] [rbp+7h]
  _WORD v24[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v25; // [rsp+84h] [rbp+13h]
  int v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+90h] [rbp+1Fh]
  int v28; // [rsp+98h] [rbp+27h]
  __int64 v29; // [rsp+A0h] [rbp+2Fh]

  v4 = a1[1];
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  *a3 = 0;
  v8 = *a1;
  v22[1] = v4;
  v22[0] = v8;
  v23 = *((_QWORD *)a1 + 4);
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v24);
      v11 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_17:
        v11 = 0;
        goto LABEL_16;
      }
      if ( NextValue < 0 )
        goto LABEL_18;
      v12 = v22[0];
      if ( LOWORD(v22[0]) == 4 )
      {
        v17 = AuthzBasepGetNextValue(a2, v20);
        v11 = v17;
        if ( v17 == -2147483622 )
          goto LABEL_17;
        if ( v17 < 0 )
          goto LABEL_18;
        v18 = *((_BYTE *)a2 + 4);
        v26 = 0;
        v13 = *a2;
        v25 = v18;
        v27 = *((_QWORD *)a2 + 2);
        v28 = *((_DWORD *)a2 + 2);
        v29 = *((_QWORD *)a2 + 4) + v9;
        v24[0] = v13;
      }
      else
      {
        v13 = v24[0];
      }
      if ( !AuthzBasepOperandValueTypesCompatible((__int64)v22) )
        break;
      if ( HIDWORD(v22[0]) == 1 )
        v12 = v13;
      if ( !v12 )
        goto LABEL_14;
      if ( v12 <= 2u )
      {
LABEL_30:
        LOBYTE(v14) = 0x80;
        v19 = AuthzBasepCompareIntegerOperands(v14, v22);
        goto LABEL_31;
      }
      switch ( v12 )
      {
        case 3u:
          v15 = AuthzBasepCompareUnicodeStringOperands(128, (__int64)v22, a3);
          goto LABEL_13;
        case 4u:
          LOBYTE(v14) = 0x80;
          v15 = AuthzBasepCompareFQBNOperands(v14, v22, a3);
LABEL_13:
          v11 = v15;
          if ( v15 < 0 )
            goto LABEL_18;
          break;
        case 5u:
          goto LABEL_28;
        case 6u:
          goto LABEL_30;
        case 0x10u:
LABEL_28:
          LOBYTE(v14) = 0x80;
          v19 = AuthzBasepCompareOctetStringOperands(v14, v22);
LABEL_31:
          *a3 = v19;
          break;
      }
LABEL_14:
      if ( *a3 == 1 )
        goto LABEL_15;
    }
  }
  while ( a4 );
  v11 = -1073741406;
LABEL_15:
  if ( v11 >= 0 )
    goto LABEL_16;
LABEL_18:
  *a3 = -1;
LABEL_16:
  AuthzBasepRestartOperandValueEnumeration(a2);
  return (unsigned int)v11;
}
