/*
 * XREFs of ?TryFireViewHitTest@DWMInputRouter@@UEAA_NPEAXKW4InputType@@UtagPOINT@@@Z @ 0x1801393B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall DWMInputRouter::TryFireViewHitTest(__int64 a1, unsigned int a2, unsigned int a3, int a4, __int64 a5)
{
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  _QWORD *v18; // rdi
  _QWORD *i; // rbx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  __int128 v22; // [rsp+28h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v27; // [rsp+90h] [rbp+30h] BYREF

  v9 = 0;
  v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 272);
  if ( v10 )
  {
    v21 = 0LL;
    v11 = **v10;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v21);
    v12 = v11(v10, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v21);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1726LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 48LL))(v21, &v27);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1730LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v9 = v27;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v21);
  }
  if ( *(_DWORD *)(a1 + 324) == a2 && v9 == a2 )
    return 0;
  *(_DWORD *)(a1 + 324) = a2;
  *(_QWORD *)&v22 = __PAIR64__(a3, a2);
  HIDWORD(v23) = a4;
  *((_QWORD *)&v22 + 1) = a5;
  v15 = *(_DWORD *)(a1 + 320);
  v16 = v15 == -1;
  v17 = v15 + 1;
  *(_DWORD *)(a1 + 320) = v17;
  if ( v16 )
    *(_DWORD *)(a1 + 320) = ++v17;
  LODWORD(v23) = v17;
  v18 = *(_QWORD **)(a1 + 712);
  for ( i = (_QWORD *)*v18; i != v18; i = (_QWORD *)*i )
  {
    v20 = i[7];
    if ( v20 )
    {
      v24 = v22;
      v25 = v23;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v20 + 24LL))(v20, &v24);
    }
  }
  return 1;
}
