/*
 * XREFs of XmMoveGeneral @ 0x140396470
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140396A98 (XmSetSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140396BA4 (XmEvaluateAddressSpecifier.c)
 *     XmGetRegisterAddress @ 0x140396F28 (XmGetRegisterAddress.c)
 *     XmSetDataType @ 0x140396F58 (XmSetDataType.c)
 */

__int64 __fastcall XmMoveGeneral(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 RegisterAddress; // r9
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  XmSetDataType();
  result = XmEvaluateAddressSpecifier(a1, &v6);
  if ( result )
  {
    v3 = v6;
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      *(_QWORD *)(a1 + 88) = XmGetRegisterAddress(a1, v6);
    }
    else
    {
      *(_QWORD *)(a1 + 88) = result;
      RegisterAddress = XmGetRegisterAddress(a1, v3);
    }
    XmSetSourceValue(a1, RegisterAddress, v4, RegisterAddress);
    return 1LL;
  }
  return result;
}
