/*
 * XREFs of ?SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K@Z @ 0x180072A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18015493C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::SetInFocusAppView(
        RTL_SRWLOCK *this,
        void *a2)
{
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // rsi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  void *v8; // rcx
  const struct std::nothrow_t *v9; // rdx
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  void *v12; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v4 = this + 9;
  AcquireSRWLockExclusive(this + 9);
  v12 = v4;
  this[10].Ptr = a2;
  v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _QWORD *, void *))this[-3].Ptr + 9))(this - 3, v13, a2);
  v6 = (char *)&this[11];
  if ( v6 != (char *)v5 )
  {
    v7 = *((_QWORD *)v6 + 3);
    if ( v7 >= 8 )
    {
      v8 = *(void **)v6;
      v9 = (const struct std::nothrow_t *)(2 * v7 + 2);
      v11 = (unsigned __int64)v9;
      v12 = v8;
      if ( (unsigned __int64)v9 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v12, &v11);
        v9 = (const struct std::nothrow_t *)v11;
        v8 = v12;
      }
      operator delete(v8, v9);
    }
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 7LL;
    *(_WORD *)v6 = 0;
    *(_OWORD *)v6 = *(_OWORD *)v5;
    *((_OWORD *)v6 + 1) = *(_OWORD *)(v5 + 16);
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 7LL;
    *(_WORD *)v5 = 0;
  }
  if ( v14 >= 8 )
    std::_Deallocate<16,0>(v13[0], 2 * v14 + 2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
