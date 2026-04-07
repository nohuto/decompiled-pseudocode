/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029AA0
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002A144 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002C660 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x1800223B0 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x1800268C8 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180029B5C (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(__int64 a1, struct CCanvasVisual ***a2, unsigned int a3)
{
  CTopLevelWindow *v6; // rax
  struct CCanvasVisual **v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax

  *a2 = 0LL;
  v6 = (CTopLevelWindow *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            840LL);
  if ( v6 )
    v7 = (struct CCanvasVisual **)CTopLevelWindow::CTopLevelWindow(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = CTopLevelWindow::Initialize(v7, 1);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x136Du);
    }
    else
    {
      v10 = CTopLevelWindow::InitializeVisualTreeClone(a1, v7, a3);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x136Eu);
      }
      else
      {
        *a2 = v7;
        v7 = 0LL;
      }
    }
    if ( v7 )
      CBaseObject::Release((CBaseObject *)v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x136Cu);
  }
  return v9;
}
