/*
 * XREFs of ?Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18009BE18
 * Callers:
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18009C448 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800199A0 (--0CVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z @ 0x18009BEEC (-Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CRippleEffect::Create(struct CBitmapSource **a1, struct CRippleEffect **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    384LL);
  v5 = v4;
  if ( v4 )
  {
    CVisual::CVisual(v4);
    *((_QWORD *)v5 + 33) = 0LL;
    *((_QWORD *)v5 + 35) = 0LL;
    *(_QWORD *)v5 = &CRippleEffect::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CRippleEffect::Initialize(v5, a1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x34u);
    }
    CBaseObject::Release(v5);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x32u);
  }
  return v6;
}
