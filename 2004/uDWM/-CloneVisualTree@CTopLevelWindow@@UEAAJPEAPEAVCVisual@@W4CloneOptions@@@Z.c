/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002B480
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002AC84 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002DE68 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180013B94 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180014780 (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180017B00 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x13A1u);
    }
    else
    {
      v10 = CTopLevelWindow::InitializeVisualTreeClone(a1, (__int64)v7, a3);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x13A2u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x13A0u);
  }
  return v9;
}
