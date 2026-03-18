/*
 * XREFs of XmGroup7General @ 0x1404DFE20
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x140393A98 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140393B14 (XmEvaluateAddressSpecifier.c)
 *     longjmp @ 0x1403CC230 (longjmp.c)
 */

__int64 __fastcall XmGroup7General(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = 1;
  result = XmEvaluateAddressSpecifier(a1, &v3);
  if ( result )
  {
    if ( v3 != 4 )
      longjmp((_JBTYPE *)(a1 + 160), 12);
    XmSetDestinationValue(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
