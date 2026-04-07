/*
 * XREFs of ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x18001817C
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180005DA4 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800159E0 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180017B00 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001CE70 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001D930 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180043990 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::Create(struct CCanvasVisual **a1)
{
  __int64 v2; // rax
  struct CCanvasVisual *v3; // rbx
  int v4; // eax
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x15u);
    return (unsigned int)v5;
  }
  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         280LL);
  v3 = (struct CCanvasVisual *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 32) = &VisualCollection::`vftable';
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_DWORD *)(v2 + 72) = 0;
    *(_QWORD *)(v2 + 176) = 0x3FF0000000000000LL;
    *(_QWORD *)(v2 + 168) = 0x3FF0000000000000LL;
    *(_QWORD *)(v2 + 184) = 0x3FF0000000000000LL;
    *(_DWORD *)(v2 + 128) = 0x7FFFFFFF;
    *(_DWORD *)(v2 + 136) = 0x7FFFFFFF;
    *(_DWORD *)(v2 + 132) = 0x7FFFFFFF;
    *(_DWORD *)(v2 + 140) = 0x7FFFFFFF;
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 96) = 0LL;
    *(_QWORD *)(v2 + 104) = 0LL;
    *(_DWORD *)(v2 + 192) = -2;
    *(_QWORD *)(v2 + 40) = v2;
    *(_QWORD *)(v2 + 248) = 0LL;
    *(_QWORD *)(v2 + 256) = 0LL;
    *(_QWORD *)(v2 + 264) = 0LL;
    *(_DWORD *)(v2 + 272) = 0;
    *(_QWORD *)v2 = &CCanvasVisual::`vftable';
    *(_QWORD *)(v2 + 240) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(struct CCanvasVisual *))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x15u);
    }
    else
    {
      *a1 = v3;
      v5 = 0;
      v3 = 0LL;
    }
    if ( v5 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x15u);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v5;
}
