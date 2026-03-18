/*
 * XREFs of IopCallDriverReinitializationRoutines @ 0x14075CCF4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403BF4C4 (PnpCompleteSystemStartProcess.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140727BA8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x14076B870 (IopLoadUnloadDriver.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopInterlockedRemoveHeadList @ 0x14037CAB4 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

char __fastcall IopCallDriverReinitializationRoutines(char a1)
{
  char v1; // si
  char v2; // bl
  _QWORD *v3; // rdi

  v1 = 0;
  v2 = a1;
  if ( !a1 && !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  while ( 1 )
  {
    v3 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
    if ( v3 )
    {
      v1 = 1;
      do
      {
        ++*(_DWORD *)(*(_QWORD *)(v3[2] + 48LL) + 16LL);
        *(_DWORD *)(v3[2] + 16LL) &= ~8u;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v3[3])(
          v3[2],
          v3[4],
          *(unsigned int *)(*(_QWORD *)(v3[2] + 48LL) + 16LL));
        HalPutDmaAdapter((PADAPTER_OBJECT)v3[2]);
        ExFreePoolWithTag(v3, 0);
        v3 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
      }
      while ( v3 );
    }
    if ( v2 != 1 )
      break;
    IopInitSystemCompletedEnoughForReInitRoutines = 1;
    v2 = 0;
  }
  return v1;
}
