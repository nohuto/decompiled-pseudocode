/*
 * XREFs of ?SetConvertGraspToSystemGesture@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180074454
 * Callers:
 *     ?Thunk_SetConvertGraspToSystemGesture_43@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180074A90 (-Thunk_SetConvertGraspToSystemGesture_43@-$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipal.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::SetConvertGraspToSystemGesture(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2,
        unsigned int a3)
{
  int v6; // ecx
  _QWORD *i; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v6; i = (_QWORD *)i[6] )
    ;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v14,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  LOBYTE(v9) = a2;
  v10 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD))(*((_QWORD *)this - 2) + 120LL))(
          (char *)this - 16,
          v8,
          v9,
          a3);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9480LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v10);
  v11 = v14;
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 128));
    *(_DWORD *)(v11 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
