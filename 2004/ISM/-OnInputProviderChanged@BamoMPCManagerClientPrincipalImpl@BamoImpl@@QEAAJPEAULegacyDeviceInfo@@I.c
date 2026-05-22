/*
 * XREFs of ?OnInputProviderChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJPEAULegacyDeviceInfo@@I@Z @ 0x18010CDC0
 * Callers:
 *     ?Thunk_OnInputProviderChanged_51@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800468F0 (-Thunk_OnInputProviderChanged_51@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrinc.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnInputProviderChanged(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        struct LegacyDeviceInfo *a2,
        unsigned int a3)
{
  int v6; // ecx
  _QWORD *i; // rdi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v6; i = (_QWORD *)i[6] )
    ;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v13,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  v9 = (*(__int64 (__fastcall **)(char *, __int64, struct LegacyDeviceInfo *, _QWORD))(*((_QWORD *)this - 2) + 80LL))(
         (char *)this - 16,
         v8,
         a2,
         a3);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10165LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v9);
  v10 = v13;
  if ( v13 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 128));
    *(_DWORD *)(v10 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
