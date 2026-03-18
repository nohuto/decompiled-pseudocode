/*
 * XREFs of HvlIsSingleGroupRequired @ 0x1403C2F24
 * Callers:
 *     HvlpSelectVpSet @ 0x140544EF0 (HvlpSelectVpSet.c)
 *     KiPerformGroupConfiguration @ 0x140B0610C (KiPerformGroupConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HviGetImplementationLimits @ 0x140647C04 (HviGetImplementationLimits.c)
 */

bool HvlIsSingleGroupRequired()
{
  char v0; // r8
  int v2; // r9d
  __int64 *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v7 = 0LL;
  if ( !HvlHypervisorConnected )
    return 0;
  v2 = KeRootProcSpecified;
  if ( !KeRootProcSpecified && KeRootProcNumaNodeLpsSpecified )
  {
    v3 = &KeRootProcNumaNodeLps;
    v4 = (unsigned int)(KeRootProcSpecified + 64);
    do
    {
      v5 = *v3;
      v6 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  if ( (HvlpRootFlags & 1) != 0 && (unsigned int)(v2 - 1) <= 0x3F && !KeDynamicPartitioningSupported )
    return 1;
  if ( (HvlpFlags & 0x80u) == 0 )
  {
    HviGetImplementationLimits(&v7);
    v0 = 1;
    if ( (_DWORD)v7 == -1 )
      return (HvlEnlightenments & 0x4004) != 0;
  }
  return v0;
}
