/*
 * XREFs of AuthzBasepValueInSet @ 0x140218D80
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x140218C94 (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepGetNextValue @ 0x140218EAC (AuthzBasepGetNextValue.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140218F84 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140219C44 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x14021A494 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14064A96C (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14064ABF8 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14064AD1C (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // r12
  int NextValue; // eax
  __int64 v11; // rdx
  int v12; // ebx
  unsigned __int16 v13; // di
  unsigned __int16 v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  int v18; // eax
  char v19; // al
  int v20; // eax
  _OWORD v21[2]; // [rsp+28h] [rbp-49h] BYREF
  int v22; // [rsp+48h] [rbp-29h]
  __int16 v23; // [rsp+4Ch] [rbp-25h]
  _OWORD v24[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+78h] [rbp+7h]
  _WORD v26[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v27; // [rsp+84h] [rbp+13h]
  int v28; // [rsp+88h] [rbp+17h]
  __int64 v29; // [rsp+90h] [rbp+1Fh]
  int v30; // [rsp+98h] [rbp+27h]
  __int64 v31; // [rsp+A0h] [rbp+2Fh]

  v4 = a1[1];
  v22 = 0;
  memset(v21, 0, sizeof(v21));
  v23 = 0;
  v8 = *a1;
  *a3 = 0;
  v24[1] = v4;
  v24[0] = v8;
  v25 = *((_QWORD *)a1 + 4);
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v26);
      v12 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_17:
        v12 = 0;
        goto LABEL_16;
      }
      if ( NextValue < 0 )
        goto LABEL_18;
      v13 = v24[0];
      if ( LOWORD(v24[0]) == 4 )
      {
        v18 = AuthzBasepGetNextValue(a2, v21);
        v12 = v18;
        if ( v18 == -2147483622 )
          goto LABEL_17;
        if ( v18 < 0 )
          goto LABEL_18;
        v19 = *((_BYTE *)a2 + 4);
        v28 = 0;
        v14 = *a2;
        v27 = v19;
        v29 = *((_QWORD *)a2 + 2);
        v30 = *((_DWORD *)a2 + 2);
        v31 = *((_QWORD *)a2 + 4) + v9;
        v26[0] = v14;
      }
      else
      {
        v14 = v26[0];
      }
      if ( (unsigned __int8)AuthzBasepOperandValueTypesCompatible(v24) )
        break;
      if ( !a4 )
      {
        v12 = -1073741406;
        goto LABEL_18;
      }
    }
    if ( HIDWORD(v24[0]) == 1 )
      v13 = v14;
    if ( v13 )
    {
      if ( v13 <= 2u )
        goto LABEL_30;
      if ( v13 == 3 )
      {
        LOBYTE(v15) = 0x80;
        v16 = AuthzBasepCompareUnicodeStringOperands(v15, v24, a3);
      }
      else
      {
        if ( v13 != 4 )
        {
          switch ( v13 )
          {
            case 5u:
              goto LABEL_28;
            case 6u:
LABEL_30:
              LOBYTE(v15) = 0x80;
              v20 = AuthzBasepCompareIntegerOperands(v15, v24);
              break;
            case 0x10u:
LABEL_28:
              LOBYTE(v15) = 0x80;
              v20 = AuthzBasepCompareOctetStringOperands(v15, v24);
              break;
            default:
              continue;
          }
          *a3 = v20;
          continue;
        }
        LOBYTE(v15) = 0x80;
        v16 = AuthzBasepCompareFQBNOperands(v15, v24, a3);
      }
      v12 = v16;
      if ( v16 < 0 )
        goto LABEL_18;
    }
  }
  while ( *a3 != 1 );
  if ( v12 >= 0 )
    goto LABEL_16;
LABEL_18:
  *a3 = -1;
LABEL_16:
  AuthzBasepRestartOperandValueEnumeration(a2, v11);
  return (unsigned int)v12;
}
