/*
 * XREFs of ?SetOnlyMixedWorldRouting@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800745F4
 * Callers:
 *     ?Thunk_SetOnlyMixedWorldRouting_38@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180074AB0 (-Thunk_SetOnlyMixedWorldRouting_38@-$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@B.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::SetOnlyMixedWorldRouting(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2)
{
  int v4; // ecx
  _QWORD *i; // rdi
  __int64 v6; // rbx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v4; i = (_QWORD *)i[6] )
    ;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v12,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  LOBYTE(v7) = a2;
  v8 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, v6, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9385LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v8);
  v9 = v12;
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 128));
    *(_DWORD *)(v9 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
