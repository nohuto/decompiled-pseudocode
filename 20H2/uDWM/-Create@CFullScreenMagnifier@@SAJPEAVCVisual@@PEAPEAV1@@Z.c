/*
 * XREFs of ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180046F24
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x180046E44 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x180046FB4 (--0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800514EC (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::Create(struct CVisual *a1, struct CFullScreenMagnifier **a2)
{
  CFullScreenMagnifier *v4; // rax
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rdi

  v4 = (CFullScreenMagnifier *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 256LL);
  v5 = 0;
  if ( v4 )
    v6 = (volatile signed __int32 *)CFullScreenMagnifier::CFullScreenMagnifier(v4, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    CFullScreenMagnifier::UpdateSettings((CFullScreenMagnifier *)v6, 1.0, 0.0, 0.0);
    *a2 = (struct CFullScreenMagnifier *)v6;
    _InterlockedIncrement(v6 + 2);
    CBaseObject::Release((CBaseObject *)v6);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x59u);
  }
  return v5;
}
