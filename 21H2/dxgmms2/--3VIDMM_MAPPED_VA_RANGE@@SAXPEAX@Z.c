/*
 * XREFs of ??3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z @ 0x1C005F0DC
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C000149C (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::operator delete(struct _SLIST_ENTRY *a1)
{
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    ++dword_1C005080C;
    if ( ExQueryDepthSList(&g_VaRangeLookasideList) < (unsigned __int16)word_1C0050800 )
    {
      ExpInterlockedPushEntrySList(&g_VaRangeLookasideList, a1);
    }
    else
    {
      ++dword_1C0050810;
      ((void (__fastcall *)(struct _SLIST_ENTRY *, union _SLIST_HEADER *))qword_1C0050828)(a1, &g_VaRangeLookasideList);
    }
  }
  else
  {
    operator delete(a1);
  }
}
