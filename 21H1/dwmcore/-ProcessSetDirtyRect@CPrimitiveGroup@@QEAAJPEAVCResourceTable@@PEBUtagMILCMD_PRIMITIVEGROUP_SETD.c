/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x1800766C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v5; // edx
  CPrimitiveGroup *v8; // rbx
  char v9; // di
  int v10; // esi
  bool v11; // al
  float *v12; // rdx
  int *v13; // rax
  int v14; // r9d
  int v15; // r10d
  int v16; // edx
  int v17; // eax
  _DWORD *v19; // [rsp+38h] [rbp-51h] BYREF
  _DWORD v20[3]; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v21[2]; // [rsp+4Ch] [rbp-3Dh] BYREF
  _DWORD v22[13]; // [rsp+54h] [rbp-35h] BYREF
  int v23[4]; // [rsp+88h] [rbp-1h] BYREF
  void *retaddr; // [rsp+E0h] [rbp+57h]

  v5 = *((_DWORD *)a3 + 2);
  v8 = this;
  v9 = 1;
  if ( v5 && (this = (CPrimitiveGroup *)(16LL * v5), (CPrimitiveGroup *)a5 == this) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = 0;
      v12 = (float *)&a4[16 * v10];
      if ( *v12 >= -16777216.0 && v12[1] >= -16777216.0 && v12[2] <= 16777216.0 )
        v11 = v12[3] <= 16777216.0;
      if ( !v11 )
        break;
      v20[0] = 0;
      v19 = v20;
      v13 = PixelAlign(v23, v12);
      v14 = v13[2];
      v15 = *v13;
      v16 = v13[3];
      if ( *v13 < v14 && v13[1] < v16 )
      {
        v21[0] = v13[1];
        v20[0] = 2;
        v20[1] = v15;
        v20[2] = v14;
        v21[1] = (unsigned int)v23 + 1 - 45 - (unsigned int)v21;
        v22[2] = v15;
        v22[3] = v14;
        v22[1] = (unsigned int)v23 + 1 - 45 - (unsigned int)v22 + 8;
        v22[0] = v16;
      }
      v17 = FastRegion::CRegion::Union((CPrimitiveGroup *)((char *)v8 + 592), (const struct CRegion *)&v19);
      if ( v17 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v17, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v19);
      if ( (unsigned int)++v10 >= *((_DWORD *)a3 + 2) )
      {
        (*(void (__fastcall **)(CPrimitiveGroup *, __int64, CPrimitiveGroup *))(*(_QWORD *)v8 + 72LL))(v8, 1LL, v8);
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x1B6u, 0LL);
  }
  **((_DWORD **)v8 + 74) = 0;
  if ( v9 )
    (*(void (__fastcall **)(CPrimitiveGroup *, _QWORD, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, 0LL, 0LL);
  return 0LL;
}
