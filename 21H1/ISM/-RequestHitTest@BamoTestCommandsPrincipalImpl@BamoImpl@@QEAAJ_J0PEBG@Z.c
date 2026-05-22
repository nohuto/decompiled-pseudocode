/*
 * XREFs of ?RequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x180171058
 * Callers:
 *     ?Thunk_RequestHitTest_24@?$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180171330 (-Thunk_RequestHitTest_24@-$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImp.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoTestCommandsPrincipalImpl::RequestHitTest(
        BamoImpl::BamoTestCommandsPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int v8; // ecx
  _QWORD *i; // rdi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v8; i = (_QWORD *)i[6] )
    ;
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v15,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  v11 = (*(__int64 (__fastcall **)(char *, __int64, __int64, __int64, const unsigned __int16 *))(*((_QWORD *)this - 2)
                                                                                               + 72LL))(
          (char *)this - 16,
          v10,
          a2,
          a3,
          a4);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      51707LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
  v12 = v15;
  if ( v15 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v15 + 128));
    *(_DWORD *)(v12 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
