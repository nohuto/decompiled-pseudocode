/*
 * XREFs of _LdrpDetectDetour@0 @ 0x4B2AEB06
 * Callers:
 *     _LdrpEnableParallelLoading@4 @ 0x4B2AEBCB (_LdrpEnableParallelLoading@4.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 * Callees:
 *     _TpWaitForWork@8 @ 0x4B2AB500 (_TpWaitForWork@8.c)
 *     _TpReleaseWork@4 @ 0x4B2EC490 (_TpReleaseWork@4.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

void __stdcall LdrpDetectDetour()
{
  char *v0; // edi
  unsigned int v1; // esi
  char v2; // al
  size_t v3; // [esp-4h] [ebp-14h]
  int ThreadInformation; // [esp+Ch] [ebp-4h] BYREF

  if ( !LdrpDetourExist )
  {
    v0 = (char *)&LdrpThunkSignature;
    v1 = 0;
    while ( 1 )
    {
      LODWORD(v3) = 16;
      if ( memcmp(
             v0,
             *(int (__stdcall **)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, ULONG, ULONG))((char *)&LdrpCriticalLoaderFunctions + v1),
             v3) )
      {
        break;
      }
      v1 += 4;
      v0 += 16;
      if ( v1 >= 0x14 )
        goto LABEL_5;
    }
    if ( (ShowSnaps & 5) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrmap.c",
        3944,
        "LdrpDetectDetour",
        2,
        "!!! Detour detected, disable parallel loading\n");
    LdrpDetourExist = 1;
LABEL_5:
    if ( NtQueryInformationThread((HANDLE)0xFFFFFFFE, ThreadDynamicCodePolicyInfo, &ThreadInformation, 4u, 0) >= 0
      && ThreadInformation == 1 )
    {
      v2 = 1;
      LdrpDetourExist = 1;
    }
    else
    {
      v2 = LdrpDetourExist;
    }
    if ( v2 )
    {
      if ( LdrpMapAndSnapWork )
      {
        TpWaitForWork(LdrpMapAndSnapWork, 1u);
        TpReleaseWork(LdrpMapAndSnapWork);
        LdrpMapAndSnapWork = 0;
      }
    }
  }
}
