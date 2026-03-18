/*
 * XREFs of VidSchiUpdateDdiHwContextPriority @ 0x1C00F63D0
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C003F7CC (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchSetAbsolutePriorityHwContext @ 0x1C00F5DE0 (VidSchSetAbsolutePriorityHwContext.c)
 *     VidSchSetInProcessPriorityHwContext @ 0x1C00F5F90 (VidSchSetInProcessPriorityHwContext.c)
 *     VidSchSetPriorityHwContext @ 0x1C00F6040 (VidSchSetPriorityHwContext.c)
 * Callees:
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C002CB44 (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 */

__int64 __fastcall VidSchiUpdateDdiHwContextPriority(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // eax
  _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES v8; // [rsp+20h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v8.realtimeBandPriorityLevel = 0;
  *(&v8.inProcessPriority + 1) = 0;
  v2 = *(_QWORD *)(v1 + 40);
  v3 = *(_QWORD *)(v1 + 32);
  if ( !*(_BYTE *)(a1 + 88) )
  {
    v6 = *(_DWORD *)(v2 + 24);
    if ( v6 )
    {
      if ( v6 == 5 )
      {
        if ( *(_BYTE *)(v2 + 2632) )
          goto LABEL_8;
        LODWORD(v4) = *(_DWORD *)(a1 + 68);
LABEL_13:
        v8.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_REALTIME;
        v8.realtimeBandPriorityLevel = v4;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)(a1 + 76) & 1) != 0 )
        goto LABEL_8;
      if ( *(_DWORD *)(a1 + 68) != -7 )
      {
        v8.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_NORMAL;
        goto LABEL_15;
      }
    }
    v8.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_IDLE;
    goto LABEL_15;
  }
  v4 = *(unsigned int *)(a1 + 84);
  v5 = gulPublicPriorityToSchedulingPriority[v4];
  if ( v5 > 0x10 )
    goto LABEL_13;
  if ( v5 == 16 )
  {
LABEL_8:
    v8.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_FOCUS;
    goto LABEL_15;
  }
  v8.priorityBand = v5 != 0;
LABEL_15:
  v8.inProcessPriority = *(_DWORD *)(a1 + 72);
  v8.hContext = *(HANDLE *)(a1 + 48);
  v8.quantum = 20000LL;
  v8.gracePeriodSamePriority = 10000LL;
  v8.gracePeriodLowerPriority = 0LL;
  return ADAPTER_RENDER::DdiSetContextSchedulingProperties(*(ADAPTER_RENDER **)(*(_QWORD *)(v3 + 16) + 2800LL), &v8);
}
