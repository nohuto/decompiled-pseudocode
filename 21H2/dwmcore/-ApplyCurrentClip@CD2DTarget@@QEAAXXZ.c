/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180080AB4
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18007F150 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180080A78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800DC490 (-PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANT.c)
 *     ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x1800E2090 (-PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x1800224C0 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]

  if ( *((_BYTE *)this + 72) )
  {
    v2 = *((_DWORD *)this + 17);
    if ( *((_BYTE *)this + 73) )
    {
      v3 = *((_QWORD *)this + 2);
      v8 = 0;
      v9 = 0;
      v4 = *(_QWORD *)(v3 + 200);
      v7 = *(_OWORD *)&_xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 240LL))(v4, &v7);
      v5 = *(_QWORD *)(v3 + 208);
      *(_BYTE *)(v3 + 439) = 0;
      v6 = *(_OWORD *)((char *)this + 52);
      *(_DWORD *)(v3 + 416) = v2;
      *(_OWORD *)(v3 + 400) = v6;
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 52, v2);
    }
    *((_BYTE *)this + 72) = 1;
  }
  else
  {
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
  }
}
