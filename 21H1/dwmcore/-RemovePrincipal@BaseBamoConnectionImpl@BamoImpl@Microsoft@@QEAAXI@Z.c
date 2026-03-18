/*
 * XREFs of ?RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x180183348
 * Callers:
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180182FD0 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180169EE8 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::RemovePrincipal(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 43) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36D,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      a4);
    __debugbreak();
  }
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v9,
    this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**((_QWORD **)this + 7) + 48LL))(
         *((_QWORD *)this + 7),
         *((unsigned int *)this + 7),
         a2,
         0LL,
         &v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x37A,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v9;
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 128));
    *(_DWORD *)(v7 + 168) = GetCurrentThreadId();
  }
}
