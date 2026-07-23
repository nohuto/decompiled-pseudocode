/*
 * XREFs of _LdrpQueueWork@4 @ 0x4B2DE91E
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpSignalModuleMapped@4 @ 0x4B2D0A7B (_LdrpSignalModuleMapped@4.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 */

void __thiscall LdrpQueueWork(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // eax

  if ( **(int **)(this + 24) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (_DWORD *)dword_4B3A5D04;
    v3 = (_DWORD *)(this + 36);
    if ( *(int **)dword_4B3A5D04 != &LdrpWorkQueue )
      __fastfail(3u);
    *v3 = &LdrpWorkQueue;
    *(_DWORD *)(this + 40) = v2;
    *v2 = v3;
    dword_4B3A5D04 = this + 36;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
