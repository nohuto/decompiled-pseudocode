/*
 * XREFs of ?OnCursorParametersChanged@SystemCursorService@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x180140000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x18013D4E4 (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 */

__int64 __fastcall SystemCursorService::OnCursorParametersChanged(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v12 = a3;
  v6 = *(_QWORD *)(v3 + 64);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)(v6 + 8) + 48LL))(v6 + 8, a2, &v12);
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)v7);
  }
  std::weak_ptr<SystemCursor>::lock(a1 + 168, &v9);
  if ( v9 && *(_QWORD *)(v9 + 24) == a2 )
    *(_DWORD *)(a1 + 184) = v12;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0LL;
}
