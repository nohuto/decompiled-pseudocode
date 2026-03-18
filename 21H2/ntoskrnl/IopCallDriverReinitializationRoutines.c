/*
 * XREFs of IopCallDriverReinitializationRoutines @ 0x1406DE8A0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403D2178 (PnpCompleteSystemStartProcess.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14067B998 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x1406DE800 (IopLoadUnloadDriver.c)
 * Callees:
 *     IopInterlockedRemoveHeadList @ 0x140255C70 (IopInterlockedRemoveHeadList.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
        ObfDereferenceObject((PVOID)v3[2]);
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
