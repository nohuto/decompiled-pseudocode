/*
 * XREFs of ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1803B4580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B4F78 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z @ 0x1803B529C (-_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z.c)
 */

__int64 __fastcall AccessibleElementBase::GetRuntimeId(AccessibleElementBase *this, struct tagSAFEARRAY **a2)
{
  __int64 v4; // rbx
  AccessibleElementBase *v5; // rcx
  int RuntimeIdArray; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  LODWORD(v4) = AccessibleElementBase::_GetElement(
                  (AccessibleElementBase *)((char *)this - 8),
                  &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
                  &v9);
  if ( (int)v4 >= 0 )
  {
    v4 = *(_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( v4 )
    {
      RuntimeIdArray = AccessibleElementBase::_GetRuntimeIdArray(v5, (unsigned __int64)this - 8, a2);
      LODWORD(v4) = RuntimeIdArray;
      if ( RuntimeIdArray < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF6,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)RuntimeIdArray);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v4;
}
