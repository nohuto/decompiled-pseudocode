/*
 * XREFs of ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x18041A5C8
 * Callers:
 *     ??$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeData@@AEAPEAUIAppLayout@@@Z @ 0x18041A1B8 (--$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVApp.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x18041AD00 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z @ 0x18041A3A8 (-AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z.c)
 *     ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18041A874 (-ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z @ 0x18041AA24 (-ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18041AAC4 (-ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 */

__int64 __fastcall AppResizeData::ComputeDropTargets(AppResizeData *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int128 v5; // xmm6
  int v6; // r12d
  int v7; // esi
  int v8; // edi
  int v9; // r14d
  int v10; // eax
  unsigned int v11; // r15d
  int v12; // eax
  unsigned int v13; // esi
  int v14; // ebx
  __int64 v15; // rdx
  __int128 v16; // [rsp+28h] [rbp-39h] BYREF
  __int128 v17; // [rsp+38h] [rbp-29h] BYREF
  __int128 v18; // [rsp+48h] [rbp-19h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &v19);
  v17 = v19;
  v18 = 0LL;
  v2 = AppResizeData::ComputeLeftMinWidthMagnetRect(this, (struct Geometry::CRect *)&v18);
  if ( v2 < 0 )
  {
    v3 = 122LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = AppResizeData::AddDropTarget(this, 1, &v18);
  if ( v2 < 0 )
  {
    v3 = 123LL;
    goto LABEL_3;
  }
  v5 = v17;
  v16 = v17;
  DWORD2(v16) = v18;
  v2 = AppResizeData::AddDropTarget(this, 0, &v16);
  if ( v2 < 0 )
  {
    v3 = 128LL;
    goto LABEL_3;
  }
  v17 = 0LL;
  v2 = AppResizeData::ComputeRightMinWidthMagnetRect(this, (struct Geometry::CRect *)&v17);
  if ( v2 < 0 )
  {
    v3 = 132LL;
    goto LABEL_3;
  }
  v2 = AppResizeData::AddDropTarget(this, 5, &v17);
  if ( v2 < 0 )
  {
    v3 = 133LL;
    goto LABEL_3;
  }
  v16 = v5;
  LODWORD(v16) = DWORD2(v17);
  v2 = AppResizeData::AddDropTarget(this, 6, &v16);
  if ( v2 < 0 )
  {
    v3 = 138LL;
    goto LABEL_3;
  }
  v16 = 0LL;
  AppResizeData::ComputeMiddleMagnetRect(this, (struct Geometry::CRect *)&v16);
  v6 = v16;
  v7 = DWORD2(v18);
  v8 = v17;
  if ( (int)v16 < SDWORD2(v18) || (v9 = DWORD2(v16), SDWORD2(v16) > (int)v17) )
  {
    if ( (int)v17 > SDWORD2(v18) )
    {
      v16 = v5;
      LODWORD(v16) = DWORD2(v18);
      DWORD2(v16) = v17;
      v14 = AppResizeData::AddDropTarget(this, 2, &v16);
      if ( v14 < 0 )
      {
        v15 = 178LL;
        goto LABEL_24;
      }
    }
  }
  else
  {
    v10 = AppResizeData::AddDropTarget(this, 3, &v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    if ( v6 > v7 )
    {
      v16 = v5;
      LODWORD(v16) = v7;
      DWORD2(v16) = v6;
      v12 = AppResizeData::AddDropTarget(this, 2, &v16);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
    }
    if ( v9 < v8 )
    {
      v16 = v5;
      LODWORD(v16) = v9;
      DWORD2(v16) = v8;
      v14 = AppResizeData::AddDropTarget(this, 4, &v16);
      if ( v14 < 0 )
      {
        v15 = 168LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
          (const char *)(unsigned int)v14);
        return (unsigned int)v14;
      }
    }
  }
  return 0LL;
}
