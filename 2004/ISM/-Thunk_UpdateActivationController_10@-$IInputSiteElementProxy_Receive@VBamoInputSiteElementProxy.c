/*
 * XREFs of ?Thunk_UpdateActivationController_10@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000DB30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateActivationController_10(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  void (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rsi
  int v11; // eax
  __int64 v12; // rbx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 32LL);
  v6 = 0LL;
  v15 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(v5 + 56) + 56LL))(
           *(_QWORD *)(v5 + 56),
           *(unsigned int *)(v4 + 36),
           v3,
           &v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x331,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7,
        v13);
      __debugbreak();
    }
    v6 = v15;
  }
  v8 = (void (__fastcall ***)(_QWORD))((v6 - 16) & -(__int64)(v6 != 0));
  v9 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v8;
  if ( v8 )
    (**v8)(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v6 && !*(_BYTE *)(v6 + 29) )
  {
    LOBYTE(v3) = *(_DWORD *)(v6 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v6 + 16) + 56LL))(
      *(_QWORD *)(v6 + 16),
      *(unsigned int *)(v6 + 24),
      v3);
  }
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v16,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL));
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x98AE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v11,
        v13);
    v12 = v16;
    if ( v16 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v16 + 128));
      *(_DWORD *)(v12 + 168) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
