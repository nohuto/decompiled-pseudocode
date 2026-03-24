/*
 * XREFs of KsepMatchInitMachineInfo @ 0x140A6A0D0
 * Callers:
 *     KsepMatchInitialize @ 0x140A9224C (KsepMatchInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140371F74 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140526EE8 (KsepDebugPrint.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitCpuInfo @ 0x140A6A58C (KsepMatchInitCpuInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A6A61C (KsepMatchInitAcpiOemInfo.c)
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
    KsepLogError(0, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
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
    KsepLogError(0, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v1);
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
    KsepLogError(0, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v2);
  }
  KsepMatchMachineInfo = (__int64)&xmmword_140C53FB8;
  qword_140C2AF68 = (__int64)&xmmword_140C541F8;
  qword_140C2AF70 = (__int64)&xmmword_140C54230;
  qword_140C2AF78 = (__int64)&xmmword_140C54268;
  return 0LL;
}
