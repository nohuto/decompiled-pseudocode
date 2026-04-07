/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180017B00
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180013A2C (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002B480 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180013E08 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180014BCC (-Initialize@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180015978 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x18001817C (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(struct CCanvasVisual **this, char a2)
{
  int inserted; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  struct CVisual **v7; // rsi
  struct CVisual **v8; // r14
  struct CVisual **v9; // rbp
  struct CVisual **v10; // r15
  struct CVisual **v11; // r12
  struct CVisual *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct CVisual *v15; // rbp
  struct CVisual *v17; // rdx
  int v18; // r9d
  struct CVisual *v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-38h]
  struct _MARGINS v21; // [rsp+30h] [rbp-28h] BYREF

  inserted = CVisual::Initialize((CVisual *)this);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 171;
LABEL_28:
    v18 = inserted;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v20);
    return v5;
  }
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)v6 = &AcrylicHostBackdrop::`vftable';
      *(_DWORD *)(v6 + 8) = 1;
      *(_BYTE *)(v6 + 24) = a2;
    }
    this[101] = (struct CCanvasVisual *)v6;
    if ( !v6 )
    {
      v5 = -2147024882;
      v20 = 178;
      v18 = -2147024882;
      goto LABEL_30;
    }
    inserted = AcrylicHostBackdrop::Initialize((AcrylicHostBackdrop *)v6);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v20 = 180;
      goto LABEL_28;
    }
  }
  if ( a2 )
  {
    *((_BYTE *)this + 240) |= 8u;
    return v5;
  }
  v7 = this + 32;
  inserted = CCanvasVisual::Create(this + 32);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 185;
    goto LABEL_28;
  }
  v8 = this + 33;
  inserted = CCanvasVisual::Create(this + 33);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 186;
    goto LABEL_28;
  }
  v9 = this + 67;
  inserted = CCanvasVisual::Create(this + 67);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 187;
    goto LABEL_28;
  }
  v10 = this + 68;
  inserted = CCanvasVisual::Create(this + 68);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 188;
    goto LABEL_28;
  }
  v11 = this + 35;
  inserted = CTopLevelAtlasedRectsVisual::Create(this + 35);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 189;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v7 + 32), *v8, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 191;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v8 + 32), *v11, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 192;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v8 + 32), *v10, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 193;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v10 + 32), *v9, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 194;
    goto LABEL_28;
  }
  v12 = *v9;
  v21 = 0LL;
  CVisual::SetInsetFromParent((struct _MARGINS *)v12, &v21);
  CVisual::SetInsetFromParent((struct _MARGINS *)*v11, &v21);
  if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
  {
    v17 = *v7;
    *((_BYTE *)this + 816) = 1;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), v17, 0LL, 0, 1);
    v5 = inserted;
    if ( inserted >= 0 )
      goto LABEL_22;
    v20 = 223;
    goto LABEL_28;
  }
  v13 = *((_QWORD *)this[101] + 2);
  v14 = *(_QWORD *)(v13 + 48);
  if ( !v14 || (v15 = *(struct CVisual **)(v13 + 16)) == 0LL )
  {
    v19 = *v7;
    *((_BYTE *)this + 816) = 1;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), v19, 0LL, 0, 0);
    v5 = inserted;
    if ( inserted >= 0 )
      goto LABEL_22;
    v20 = 217;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(v14 + 32), *v7, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 209;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), v15, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v20 = 210;
    goto LABEL_28;
  }
LABEL_22:
  *((_DWORD *)*v10 + 48) = -1;
  return v5;
}
