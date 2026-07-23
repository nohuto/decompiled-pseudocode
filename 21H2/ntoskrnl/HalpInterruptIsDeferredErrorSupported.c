/*
 * XREFs of HalpInterruptIsDeferredErrorSupported @ 0x1404BC8D8
 * Callers:
 *     HalpIsCmciImplemented @ 0x14099AC64 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
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
  if ( ((unsigned __int8)v2 & (unsigned __int8)-(CpuInfo != 0)) == 1 && *(_DWORD *)(HalpInterruptController + 216) == 2 )
  {
    v2 = *(_DWORD *)(HalpInterruptController + 232);
    v3 = -8;
    if ( HalpInterruptFindLines(&v2) )
      return 1;
  }
  return result;
}
