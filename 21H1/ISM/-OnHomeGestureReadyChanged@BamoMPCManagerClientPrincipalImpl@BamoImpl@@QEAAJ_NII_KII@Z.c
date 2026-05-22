/*
 * XREFs of ?OnHomeGestureReadyChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJ_NII_KII@Z @ 0x18010D140
 * Callers:
 *     ?Thunk_OnHomeGestureReadyChanged_63@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180046EB0 (-Thunk_OnHomeGestureReadyChanged_63@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPr.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureReadyChanged(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        char a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  int v11; // ecx
  _QWORD *i; // rdi
  __int64 v13; // rbx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v11; i = (_QWORD *)i[6] )
    ;
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v19,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  LOBYTE(v14) = a2;
  v15 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD, int, unsigned __int64, unsigned int, unsigned int))(*((_QWORD *)this - 2) + 120LL))(
          (char *)this - 16,
          v13,
          v14,
          a3,
          a4,
          a5,
          a6,
          a7);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10266LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v15);
  v16 = v19;
  if ( v19 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 128));
    *(_DWORD *)(v16 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
