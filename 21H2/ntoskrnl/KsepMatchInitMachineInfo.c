/*
 * XREFs of KsepMatchInitMachineInfo @ 0x140B01388
 * Callers:
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140368C88 (KsepLogError.c)
 *     KsepDebugPrint @ 0x14057D738 (KsepDebugPrint.c)
 *     KsepMatchInitBiosInfo @ 0x140B001A8 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitCpuInfo @ 0x140B01420 (KsepMatchInitCpuInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140B014B0 (KsepMatchInitAcpiOemInfo.c)
 */

__int64 KsepMatchInitMachineInfo()
{
  int matched; // ebx
  int v1; // ebx
  int v2; // ebx
  char v4; // al
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx

  matched = KsepMatchInitAcpiOemInfo();
  if ( matched < 0 )
  {
    v4 = KsepDebugFlag;
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v5 + 1] = matched;
    KsepHistoryErrors[2 * v5] = 655516;
    if ( (v4 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
  }
  v1 = KsepMatchInitCpuInfo();
  if ( v1 < 0 )
  {
    v6 = KsepDebugFlag;
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = v1;
    KsepHistoryErrors[2 * v7] = 655522;
    if ( (v6 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v1);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v1);
  }
  v2 = KsepMatchInitBiosInfo();
  if ( v2 < 0 )
  {
    v8 = KsepDebugFlag;
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = v2;
    KsepHistoryErrors[2 * v9] = 655528;
    if ( (v8 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v2);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v2);
  }
  KsepMatchMachineInfo = (__int64)&xmmword_140C5A8F8;
  qword_140C2A6E8 = (__int64)&xmmword_140C5AB38;
  qword_140C2A6F0 = (__int64)&xmmword_140C5AB70;
  qword_140C2A6F8 = (__int64)&xmmword_140C5ABA8;
  return 0LL;
}
