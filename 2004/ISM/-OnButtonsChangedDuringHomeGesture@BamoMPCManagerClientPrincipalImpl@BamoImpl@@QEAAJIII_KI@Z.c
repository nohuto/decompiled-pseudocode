/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJIII_KI@Z @ 0x18010C694
 * Callers:
 *     ?Thunk_OnButtonsChangedDuringHomeGesture_71@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180046820 (-Thunk_OnButtonsChangedDuringHomeGesture_71@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManager.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnButtonsChangedDuringHomeGesture(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  int v10; // ecx
  _QWORD *i; // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v10; i = (_QWORD *)i[6] )
    ;
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v17,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  v13 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD, int, unsigned __int64, unsigned int))(*((_QWORD *)this - 2) + 128LL))(
          (char *)this - 16,
          v12,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10289LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v13);
  v14 = v17;
  if ( v17 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v17 + 128));
    *(_DWORD *)(v14 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
