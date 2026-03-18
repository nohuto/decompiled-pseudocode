/*
 * XREFs of HalpInterruptIsDeferredErrorSupported @ 0x14050910C
 * Callers:
 *     HalpIsCmciImplemented @ 0x140A5367C (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 *     HalpGetCpuInfo @ 0x1403AAE80 (HalpGetCpuInfo.c)
 */

bool HalpInterruptIsDeferredErrorSupported()
{
  char CpuInfo; // al
  bool result; // al
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  LOBYTE(v2) = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v2);
  result = 0;
  if ( ((unsigned __int8)v2 & (unsigned __int8)-(CpuInfo != 0)) == 1 && *(_DWORD *)(HalpInterruptController + 224) == 2 )
  {
    v2 = *(_DWORD *)(HalpInterruptController + 240);
    v3 = -8;
    if ( HalpInterruptFindLines(&v2) )
      return 1;
  }
  return result;
}
