/*
 * XREFs of ?Thunk_Materialize_BamoInputSiteElementProxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180005F20
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800064C0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CreateInputSiteElementProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputSiteElementProxy@@@Z @ 0x180006554 (-CreateInputSiteElementProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputSiteElementPro.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoInputSiteElementProxy_10(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // esi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rbx
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // rbx
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct BamoInputSiteElementProxy *v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = **a2;
  v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  v5 = 0LL;
  if ( !*((_DWORD *)v4 + 43) )
  {
    v5 = v4;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v4);
  }
  v6 = CreateInputSiteElementProxy(v4, &v15);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E5F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v13);
    goto LABEL_12;
  }
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 128));
    *((_DWORD *)v5 + 42) = GetCurrentThreadId();
  }
  if ( !v15 )
  {
LABEL_12:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E64,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v15 + 48LL))(v15);
  v9 = *(void (__fastcall ****)(_QWORD))(v8 + 16);
  *(_QWORD *)(v8 + 16) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v9 )
    (**v9)(v9);
  *(_DWORD *)(v8 + 24) = v3;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 56LL);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 40LL))(
          v10,
          *(unsigned int *)(a1 + 36),
          v3,
          v8);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDB60,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v13);
    __debugbreak();
  }
  return 0LL;
}
