/*
 * XREFs of ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180044A40
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180043980 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009A414 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180025100 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002A4B0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180043938 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CC8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x1800440DC (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004457C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004471C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180094E20 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x18009A008 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 */

__int64 __fastcall CWindowIconic::SetRepresentationType(__int64 a1, int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int CentralImage; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 != v3 )
  {
    if ( a2 == 1 )
    {
      CentralImage = CBitmapSourceArray::CopyAndAddRef(
                       (CBitmapSourceArray *)(a1 + 32),
                       (const struct CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v12 = 746;
        goto LABEL_26;
      }
      v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             80LL);
      if ( v9 )
        v9 = CTimeline<unsigned int>::CTimeline<unsigned int>(v9, v10, v11, *(unsigned int *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v9;
      if ( !v9 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2ECu);
        return v4;
      }
      CTopLevelWindow::StartIconicAnimation(*(CTopLevelWindow **)(a1 + 88));
    }
    else if ( v3 == 1 )
    {
      CWindowIconic::CleanupAnimationResources((CTopLevelWindow **)a1);
    }
    if ( !a3 )
      return v4;
    CentralImage = CWindowIconic::OnWindowStyleUpdated((CWindowIconic *)a1, 0);
    v4 = CentralImage;
    if ( CentralImage >= 0 )
    {
      CentralImage = CWindowIconic::LoadCentralImage((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage >= 0 )
      {
        CentralImage = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)a1, 1);
        v4 = CentralImage;
        if ( CentralImage >= 0 )
        {
          CentralImage = CWindowIconic::UpdateClientArea((CWindowIconic *)a1);
          v4 = CentralImage;
          if ( CentralImage >= 0 )
          {
            CentralImage = CVisual::RenderRecursive(*(CVisual **)(a1 + 88));
            v4 = CentralImage;
            if ( CentralImage >= 0 )
            {
              CentralImage = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 64LL))(*(_QWORD *)(a1 + 104));
              v4 = CentralImage;
              if ( CentralImage >= 0 )
                return v4;
              v12 = 766;
            }
            else
            {
              v12 = 765;
            }
          }
          else
          {
            v12 = 762;
          }
        }
        else
        {
          v12 = 761;
        }
      }
      else
      {
        v12 = 760;
      }
    }
    else
    {
      v12 = 759;
    }
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, v12);
  }
  return v4;
}
