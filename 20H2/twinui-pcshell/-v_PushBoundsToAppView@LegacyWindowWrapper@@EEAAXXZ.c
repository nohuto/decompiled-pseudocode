/*
 * XREFs of ?v_PushBoundsToAppView@LegacyWindowWrapper@@EEAAXXZ @ 0x1802DA520
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyWindowWrapper::v_PushBoundsToAppView(LegacyWindowWrapper *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  int v4; // eax
  int v5[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((float *)this + 159) != *((float *)this + 124)
    || *((float *)this + 160) != *((float *)this + 125)
    || *((float *)this + 161) != *((float *)this + 126)
    || *((float *)this + 162) != *((float *)this + 127) )
  {
    v2 = *((_OWORD *)this + 31);
    v3 = *((_QWORD *)this + 78);
    *(_QWORD *)&v5[2] = *((_QWORD *)&v2 + 1);
    v5[0] = 0;
    v5[1] = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 56LL))(v3, v5);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        163LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    *(_OWORD *)((char *)this + 636) = *((_OWORD *)this + 31);
  }
}
