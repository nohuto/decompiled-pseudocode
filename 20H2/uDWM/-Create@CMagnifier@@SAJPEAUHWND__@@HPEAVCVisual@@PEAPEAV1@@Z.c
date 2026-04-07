/*
 * XREFs of ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x18008ACC8
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18008C2C0 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x18008AB5C (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x18008AD98 (-Initialize@CMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifier::Create(HWND a1, int a2, struct CVisual *a3, struct CMagnifier **a4)
{
  CMagnifier *v8; // rax
  volatile signed __int32 *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax

  v8 = (CMagnifier *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       376LL);
  if ( v8 )
    v9 = (volatile signed __int32 *)CMagnifier::CMagnifier(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v11 = CMagnifier::Initialize((CMagnifier *)v9);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *a4 = (struct CMagnifier *)v9;
      _InterlockedIncrement(v9 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5Eu);
    }
    CBaseObject::Release((CBaseObject *)v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Cu);
  }
  return v10;
}
