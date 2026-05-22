/*
 * XREFs of ?SetResult@BamoAsyncResult_PROPVARIANT_PrincipalImpl@BamoImpl@@QEAAJPEAUtagPROPVARIANT@@@Z @ 0x18011AA00
 * Callers:
 *     ?Thunk_SetResult_0@?$IAsyncResult_PROPVARIANT_Principal_Receive@VBamoAsyncResult_PROPVARIANT_PrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18011AB10 (-Thunk_SetResult_0@-$IAsyncResult_PROPVARIANT_Principal_Receive@VBamoAsyncResult_PROPVARIANT_Pri.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_PROPVARIANT_PrincipalImpl::SetResult(
        BamoImpl::BamoAsyncResult_PROPVARIANT_PrincipalImpl *this,
        struct tagPROPVARIANT *a2)
{
  int v4; // ecx
  _QWORD *i; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i && *(_DWORD *)(i[5] + 36LL) != v4; i = (_QWORD *)i[6] )
    ;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v11,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(i[5] + 24LL) + 32LL));
  v7 = (*(__int64 (__fastcall **)(char *, __int64, struct tagPROPVARIANT *))(*((_QWORD *)this - 2) + 72LL))(
         (char *)this - 16,
         v6,
         a2);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      7772LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v7);
  v8 = v11;
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 128));
    *(_DWORD *)(v8 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
