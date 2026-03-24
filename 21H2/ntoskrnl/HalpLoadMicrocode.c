/*
 * XREFs of HalpLoadMicrocode @ 0x140866020
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14027B610 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402EB390 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402EB4F0 (KeSetSystemGroupAffinityThread.c)
 *     HalpMcUpdateUnlock @ 0x1403840E0 (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x140387EE4 (HalpMcUpdateLock.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1F98 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcUpdateMicrocode @ 0x1403A6514 (HalpMcUpdateMicrocode.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpMcUpdateInitialize @ 0x140790E20 (HalpMcUpdateInitialize.c)
 *     HalpMcExportAllData @ 0x140791900 (HalpMcExportAllData.c)
 *     HalpUnloadMicrocode @ 0x1408661D0 (HalpUnloadMicrocode.c)
 *     PoDisableSleepStates @ 0x1408E3C20 (PoDisableSleepStates.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpLoadMicrocode(__int64 a1)
{
  bool IsMicrosoftCompatibleHvLoaded; // r15
  _QWORD *v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rcx
  int updated; // ebx
  PVOID v6; // rdi
  ULONG ActiveProcessorCount; // eax
  char v8; // si
  int *v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // [rsp+20h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  v16 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded(a1);
  updated = HalpMcUpdateInitialize(0LL, v2);
  if ( updated < 0 )
    goto LABEL_22;
  if ( IsMicrosoftCompatibleHvLoaded && qword_140C4A338 )
  {
    v6 = HalpMcExportAllData(&v16, 0LL, NonPagedPoolNx);
    if ( v6 )
    {
      updated = qword_140C4A338(v6, v16);
      ExFreePoolWithTag(v6, 0x206C6148u);
    }
    else
    {
      updated = -1073741801;
    }
    HalpUnloadMicrocode();
  }
  else
  {
    updated = HalpMcUpdateLock(v4, v3);
    if ( updated < 0 )
    {
LABEL_22:
      HalpMcUpdateInitialize(0LL, 0LL);
      return (unsigned int)updated;
    }
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v8 = 0;
    if ( ActiveProcessorCount )
    {
      v9 = KiProcessorIndexToNumberMappingTable;
      v10 = ActiveProcessorCount;
      do
      {
        v11 = *v9;
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v11 >> 6);
        Affinity.Mask = 1LL << (v11 & 0x3F);
        if ( v8 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v8 = 1;
        }
        HalpMcUpdateMicrocode(v13, v12, v14);
        ++v9;
        --v10;
      }
      while ( v10 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    HalpMcUpdateUnlock();
  }
  if ( updated < 0 )
    goto LABEL_22;
  if ( IsMicrosoftCompatibleHvLoaded && !HalMcSleepDisabled )
  {
    updated = PoDisableSleepStates(1LL, 14LL, &v16);
    if ( updated >= 0 )
      HalMcSleepDisabled = 1;
  }
  return (unsigned int)updated;
}
