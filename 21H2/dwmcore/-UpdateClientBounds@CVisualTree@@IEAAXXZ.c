/*
 * XREFs of ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800CB560
 * Callers:
 *     ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800CB3D0 (-EnsureClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ?EnsureClientInfo@CVisualTree@@MEAAXXZ @ 0x1800CB530 (-EnsureClientInfo@CVisualTree@@MEAAXXZ.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CVisualTree::UpdateClientBounds(CVisualTree *this)
{
  float *v1; // rdi
  char v2; // si
  const struct FastRegion::Internal::CRgnData **v3; // r15
  _DWORD *v4; // rax
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  int *v7; // rax
  int v8; // r9d
  int v9; // r10d
  int v10; // edx
  int v11; // eax
  __int128 v12; // [rsp+28h] [rbp-49h] BYREF
  __int128 v13; // [rsp+38h] [rbp-39h] BYREF
  const struct FastRegion::Internal::CRgnData *v14; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v15[3]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v16[2]; // [rsp+5Ch] [rbp-15h] BYREF
  _DWORD v17[3]; // [rsp+64h] [rbp-Dh] BYREF
  _DWORD v18[10]; // [rsp+70h] [rbp-1h] BYREF
  _DWORD v19[4]; // [rsp+98h] [rbp+27h] BYREF
  void *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (float *)((char *)this + 4592);
  v2 = 0;
  *((_DWORD *)this + 1151) = 0;
  v3 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 4608);
  v4 = (_DWORD *)*((_QWORD *)this + 576);
  *((_DWORD *)this + 1150) = 0;
  *((_DWORD *)this + 1149) = 0;
  *((_DWORD *)this + 1148) = 0;
  *v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 568);
  v6 = (_QWORD *)*((_QWORD *)this + 567);
  if ( !(v5 - v6) )
    goto LABEL_2;
  while ( v6 != v5 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD, __int128 *))*v6)(*v6, &v13) )
    {
      v15[0] = 0;
      v14 = (const struct FastRegion::Internal::CRgnData *)v15;
      v7 = PixelAlign(v19, (__int64)&v13);
      v8 = v7[2];
      v9 = *v7;
      v10 = v7[3];
      if ( *v7 < v8 && v7[1] < v10 )
      {
        v16[0] = v7[1];
        v15[0] = 2;
        v15[1] = v9;
        v15[2] = v8;
        v16[1] = (unsigned int)v18 + 1 - 5 - (unsigned int)v16;
        v17[2] = v9;
        v18[0] = v8;
        v17[1] = (unsigned int)v18 + 1 - 5 - (unsigned int)v17 + 8;
        v17[0] = v10;
      }
      v12 = v13;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v1, (float *)&v12);
      v11 = FastRegion::CRegion::Union(v3, &v14);
      if ( v11 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v14);
    }
    else
    {
      v2 = 1;
    }
    ++v6;
  }
  if ( v2 )
LABEL_2:
    *(_OWORD *)v1 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
}
