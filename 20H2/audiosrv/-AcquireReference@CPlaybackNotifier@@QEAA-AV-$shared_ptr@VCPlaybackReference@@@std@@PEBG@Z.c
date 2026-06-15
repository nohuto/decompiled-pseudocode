/*
 * XREFs of ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18000AAF0
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18000B820 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18000AF00 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800692C0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
volatile signed __int32 **__fastcall CPlaybackNotifier::AcquireReference(
        _Mtx_t a1,
        volatile signed __int32 **a2,
        __int64 a3)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // r15
  int v10; // eax
  std::_Ref_count_base *v11; // rcx
  int v12; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x88uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CPlaybackReference>::`vftable';
    *((_QWORD *)v7 + 16) = a1;
    _o_wcscpy_s(v7 + 4, 56LL, a3);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8 + 4;
  v10 = _Mtx_lock(a1);
  if ( v10 )
  {
    std::_Throw_C_error(v10);
LABEL_14:
    std::_Throw_C_error(v12);
LABEL_15:
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v8);
    return a2;
  }
  CPlaybackNotifier::UpdateAudioPlaybackStatus(a1, 0LL, a3);
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v9 = v8 + 4;
  }
  *a2 = v9;
  v11 = (std::_Ref_count_base *)a2[1];
  a2[1] = v8;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = _Mtx_unlock(a1);
  if ( v12 )
    goto LABEL_14;
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    goto LABEL_15;
  return a2;
}
