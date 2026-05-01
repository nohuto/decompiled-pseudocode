/*
 * XREFs of ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1803F77C0
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1803F7514 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18044D8F8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall AppResizeData::ComputeLeftMinWidthMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v4; // r14d
  int v5; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r10d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v18[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h]
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  int v21; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = 0;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &v20);
  v4 = v20;
  v5 = DWORD2(v20);
  v19 = v20;
  v7 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&v20, v6);
  *(_QWORD *)v18 = 0LL;
  v8 = *((_QWORD *)this + 5);
  v9 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v8 + 104LL))(
          v8,
          0LL,
          5LL,
          &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
          v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v18 + 72LL))(
            *(_QWORD *)v18,
            &v20,
            (unsigned int)(v5 - v4 - v9));
    v13 = v21;
    v14 = (unsigned __int64)(439804651200LL * v21) >> 32;
    *(_OWORD *)a2 = v19;
    v15 = ((unsigned int)v14 >> 31) + (v14 >> 5) + 2 * (v13 / 100);
    if ( v12 > v15 )
      v15 = v12;
    v16 = v20 + v9 / 2 + v15;
    *((_DWORD *)a2 + 2) = v16;
    *(_DWORD *)a2 = v16 - 175 * v13 / 100;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  return v11;
}
