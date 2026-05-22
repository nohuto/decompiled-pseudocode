/*
 * XREFs of ?Thunk_Materialize_BamoActivationControllerProxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800059C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180006230 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoActivationControllerProxy_10(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rbx
  void *v6; // rdi
  __int64 v7; // rbx
  void (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = **a2;
  v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  v5 = 0LL;
  if ( !*((_DWORD *)v4 + 43) )
  {
    v5 = v4;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v4);
  }
  v6 = operator new(0x50uLL);
  memset_0(v6, 0, 0x50uLL);
  *((_DWORD *)v6 + 6) = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_DWORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 11) = 0;
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoActivationControllerProxyImpl::`vftable';
  *((_BYTE *)v6 + 48) = 0;
  *((_QWORD *)v6 + 7) = 0LL;
  *((_QWORD *)v6 + 8) = 0LL;
  *((_QWORD *)v6 + 9) = 0LL;
  *(_QWORD *)v6 = &ActivationControllerBamoProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v6 + 1) = &ActivationControllerBamoProxy::`vftable'{for `IActivationControllerProxy'};
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 128));
    *((_DWORD *)v5 + 42) = GetCurrentThreadId();
  }
  v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 48LL))(v6);
  v8 = *(void (__fastcall ****)(_QWORD))(v7 + 16);
  *(_QWORD *)(v7 + 16) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v8 )
    (**v8)(v8);
  *(_DWORD *)(v7 + 24) = v3;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 56LL);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 40LL))(
          v9,
          *(unsigned int *)(a1 + 36),
          v3,
          v7);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD904,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v10,
      v12);
    __debugbreak();
  }
  return 0LL;
}
