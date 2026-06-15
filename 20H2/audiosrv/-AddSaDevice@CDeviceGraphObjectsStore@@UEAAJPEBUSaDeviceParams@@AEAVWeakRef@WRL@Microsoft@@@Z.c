/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180037320
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180028820 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x1800E7320 (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        struct Microsoft::WRL::WeakRef *a3)
{
  char *v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r14
  unsigned __int64 *v8; // rsi
  __int64 *v9; // r13
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v13; // rcx

  v6 = (char *)this + 24;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v8 = (unsigned __int64 *)((char *)this + 24 * *((int *)a2 + 2));
  v9 = (__int64 *)v8[11];
  v10 = (__int64 *)v8[12];
  if ( (__int64 *)v8[13] == v10 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
      v8 + 11,
      (_QWORD *)v8[11],
      a3);
  }
  else
  {
    v11 = *(_QWORD *)a3;
    if ( v9 == v10 )
    {
      *v10 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v8[12] += 8LL;
    }
    else
    {
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *v10 = 0LL;
      *v10 = *(v10 - 1);
      *(v10 - 1) = 0LL;
      v8[12] += 8LL;
      std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v9, v10 - 1, v10);
      v13 = *v9;
      *v9 = v11;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_95ddedc4add13e06ef360afb0b04205c_Traceguids, 0LL);
  }
  if ( v6 )
    LeaveCriticalSection(v7);
  return 0LL;
}
