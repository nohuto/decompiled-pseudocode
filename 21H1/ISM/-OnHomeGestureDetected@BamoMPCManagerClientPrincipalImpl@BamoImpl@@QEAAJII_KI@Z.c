/*
 * XREFs of ?OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KI@Z @ 0x18010D014
 * Callers:
 *     ?Thunk_OnHomeGestureDetected_57@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180046E70 (-Thunk_OnHomeGestureDetected_57@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrinci.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureDetected(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // ecx
  _QWORD *i; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v9; i = (_QWORD *)i[6] )
    ;
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v16,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  v12 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int64, unsigned int))(*((_QWORD *)this - 2) + 112LL))(
          (char *)this - 16,
          v11,
          a2,
          a3,
          a4,
          a5);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10242LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v12);
  v13 = v16;
  if ( v16 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v16 + 128));
    *(_DWORD *)(v13 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
