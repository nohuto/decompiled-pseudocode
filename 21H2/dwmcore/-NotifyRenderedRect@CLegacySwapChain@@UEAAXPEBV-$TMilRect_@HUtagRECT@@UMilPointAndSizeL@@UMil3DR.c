/*
 * XREFs of ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180082280
 * Callers:
 *     ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@A@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180109090 (-NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@A@EAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSi.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BI@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18010A0B0 (-NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BI@EAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndS.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x18029245C (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006E4C8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CLegacySwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *); // rcx
  int v5; // eax
  int v6; // r10d
  int v7; // eax
  __int64 i; // rdi
  int v9; // eax
  _DWORD *v10; // r8
  __int64 v11; // r9
  int *v12; // rax
  int v13; // esi
  int v14; // edi
  int v15; // r11d
  int v16; // r10d
  _DWORD *v17; // rdx
  __int64 v18; // [rsp+28h] [rbp-29h] BYREF
  struct tagRECT v19; // [rsp+30h] [rbp-21h] BYREF
  _BYTE v20[80]; // [rsp+48h] [rbp-9h] BYREF
  void *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 - 320) + 8LL) + 16LL)
                                                + *(_QWORD *)(a1 - 320)
                                                + 8LL);
  (**v4)(v4, &v18);
  v19.left = 0;
  v19.top = 0;
  v5 = v18;
  v6 = HIDWORD(v18);
  *(_QWORD *)&v19.right = v18;
  if ( a2 )
  {
    if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v19.left, a2) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v20, &v19);
      v7 = FastRegion::CRegion::Union((FastRegion::CRegion *)(a1 - 160), (const struct CRegion *)v20);
      if ( v7 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v7, retaddr);
      CRegion::Subtract(
        (CRegion *)(*(_QWORD *)(*(_QWORD *)(a1 - 296) + 8LL * *(unsigned int *)(a1 - 272)) + 16LL),
        (const struct CRegion *)v20);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 - 196); i = (unsigned int)(i + 1) )
      {
        if ( (_DWORD)i != *(_DWORD *)(a1 - 272) )
        {
          v9 = FastRegion::CRegion::Union(
                 (FastRegion::CRegion *)(*(_QWORD *)(*(_QWORD *)(a1 - 296) + 8 * i) + 16LL),
                 (const struct CRegion *)v20);
          if ( v9 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
        }
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v20);
    }
  }
  else
  {
    if ( (int)v18 <= 0 || SHIDWORD(v18) <= 0 )
    {
      **(_DWORD **)(a1 - 160) = 0;
    }
    else
    {
      v10 = *(_DWORD **)(a1 - 160);
      v10[1] = 0;
      v10[7] = 0;
      v10[3] = 0;
      v10[8] = v5;
      v10[2] = v5;
      *v10 = 2;
      v10[4] = 16;
      v10[6] = 16;
      v10[5] = v6;
    }
    v11 = 0LL;
    for ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 - 296) + 8LL * *(unsigned int *)(a1 - 272)) + 16LL) = 0;
          (unsigned int)v11 < *(_DWORD *)(a1 - 196);
          v11 = (unsigned int)(v11 + 1) )
    {
      if ( (_DWORD)v11 != *(_DWORD *)(a1 - 272) )
      {
        v12 = *(int **)(*(_QWORD *)(a1 - 296) + 8 * v11);
        v13 = *v12;
        v14 = v12[2];
        v15 = v12[1];
        v16 = v12[3];
        if ( *v12 >= v14 || v15 >= v16 )
        {
          **((_DWORD **)v12 + 2) = 0;
        }
        else
        {
          v17 = (_DWORD *)*((_QWORD *)v12 + 2);
          *v17 = 2;
          v17[7] = v13;
          v17[8] = v14;
          v17[1] = v13;
          v17[4] = 16;
          v17[2] = v14;
          v17[3] = v15;
          v17[6] = 16;
          v17[5] = v16;
        }
      }
    }
  }
}
