/*
 * XREFs of ?Thunk_UpdateAttachableInputObjectSample_10@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000F950
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000BEF4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateAttachableInputObjectSample_10(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbx
  __int64 v7; // rdx
  void (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rsi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 32LL);
  v6 = 0LL;
  v16 = 0LL;
  if ( (_DWORD)v3 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**(_QWORD **)(v5 + 56) + 56LL))(
            *(_QWORD *)(v5 + 56),
            *(unsigned int *)(v4 + 36),
            v3,
            &v16);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x331,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11,
        v14);
      __debugbreak();
    }
    v6 = v16;
  }
  v7 = (__int64)v6 - 16;
  v8 = (void (__fastcall ***)(_QWORD))(((unsigned __int64)v6 - 16) & -(__int64)(v6 != 0LL));
  v9 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v8;
  if ( v8 )
    (**v8)(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, v7, v3);
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v17,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL));
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x98FC,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        v14);
    v13 = v17;
    if ( v17 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v17 + 128));
      *(_DWORD *)(v13 + 168) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
