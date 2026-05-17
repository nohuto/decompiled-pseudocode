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

_PEB_LDR_DATA *__thiscall LdrpQueueWork(_DWORD *this)
{
  _PEB_LDR_DATA *result; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  result = (_PEB_LDR_DATA *)this[6];
  if ( (result->Length & 0x80000000) == 0 )
  {
    RtlEnterCriticalSection((int)&LdrpWorkQueueLock);
    v3 = (_DWORD *)dword_4B3A5D04;
    v4 = this + 9;
    if ( *(int **)dword_4B3A5D04 != &LdrpWorkQueue )
      __fastfail(3u);
    *v4 = &LdrpWorkQueue;
    this[10] = v3;
    *v3 = v4;
    dword_4B3A5D04 = (int)(this + 9);
    result = (_PEB_LDR_DATA *)RtlLeaveCriticalSection((int)&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb()->Ldr;
      if ( !result->ShutdownInProgress )
        return (_PEB_LDR_DATA *)TpPostWork(LdrpMapAndSnapWork);
    }
  }
  return result;
}
