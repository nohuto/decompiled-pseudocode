/*
 * XREFs of HalpCmciResetState @ 0x1404BCF10
 * Callers:
 *     HalpCmciHandler @ 0x1404BCCE8 (HalpCmciHandler.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     HalpCmciResetStateAMD @ 0x1404BCF60 (HalpCmciResetStateAMD.c)
 */

char __fastcall HalpCmciResetState(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int8 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  result = -HalpGetCpuInfo(0LL, 0LL, 0LL, &v5);
  if ( (v5 & (unsigned __int8)-(result != 0)) == 1 )
    return HalpCmciResetStateAMD(a1, a2);
  return result;
}
