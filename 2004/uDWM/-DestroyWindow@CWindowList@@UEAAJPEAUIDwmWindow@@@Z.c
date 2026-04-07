/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027020
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011610 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180011E08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18001BB90 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___ @ 0x180052BA4 (CWindowList--ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x18009AF88 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009B814 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x18009C2C0 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::DestroyWindow(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  int v5; // edi
  struct CWindowData *v6; // rbx
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  __int64 v9; // rsi
  struct CWindowData *v10; // rax
  struct CWindowData **v11; // rcx
  __int64 v12; // rbx
  CWindowData *v13; // rax
  int v14; // eax
  CRippleEffect *v15; // rcx
  struct CWindowData *v16; // [rsp+58h] [rbp+28h] BYREF
  struct CWindowData **v17; // [rsp+60h] [rbp+30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v16 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v13 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( v13 )
    v6 = CWindowData::CWindowData(v13);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
    goto LABEL_23;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, struct CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v14 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v14;
  if ( v14 >= 0 )
  {
LABEL_3:
    v16 = v6;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x886u);
    v6 = v16;
  }
  if ( v5 < 0 )
  {
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x908u);
    goto LABEL_6;
  }
  if ( v6 )
  {
    v8 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v6 + 3);
    if ( v8 )
    {
      (**v8)(v8, 0LL);
      *((_QWORD *)v16 + 3) = 0LL;
      v6 = v16;
    }
    v9 = *((_QWORD *)v6 + 5);
    if ( (*((_BYTE *)v6 + 612) & 4) != 0 )
    {
      v17 = &v16;
      CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___(this, &v17);
      v6 = v16;
    }
    if ( (*((_BYTE *)v6 + 608) & 4) == 0 )
    {
      v10 = *(struct CWindowData **)v6;
      if ( *(struct CWindowData **)(*(_QWORD *)v6 + 8LL) != v6
        || (v11 = (struct CWindowData **)*((_QWORD *)v6 + 1), *v11 != v6) )
      {
        __fastfail(3u);
      }
      *v11 = v10;
      *((_QWORD *)v10 + 1) = v11;
      *((_QWORD *)v16 + 1) = v16;
      *(_QWORD *)v16 = v16;
      CWindowList::ImmediateDestroyWindow(this, v16);
    }
    v12 = *((_QWORD *)this + 64);
    if ( v12 && v9 == *(_QWORD *)(v12 + 16) )
    {
      if ( *(_QWORD *)v12 )
      {
        CAnimatedGlassSheet::StopAnimation(*(CAnimatedGlassSheet **)v12);
        CAnimatedGlassSheet::Hide(*(CAnimatedGlassSheet **)v12);
      }
      v15 = *(CRippleEffect **)(v12 + 8);
      if ( v15 )
        CRippleEffect::Stop(v15);
      *(_QWORD *)(v12 + 16) = 0LL;
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
