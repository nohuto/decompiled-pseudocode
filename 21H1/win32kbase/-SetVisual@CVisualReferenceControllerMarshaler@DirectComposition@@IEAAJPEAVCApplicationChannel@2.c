/*
 * XREFs of ?SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C002978C
 * Callers:
 *     ?SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0029710 (-SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0029AC0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C01D7314 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CVisualReferenceControllerMarshaler::SetVisual(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  int WeakReferenceBase; // esi
  __int64 v6; // rdx
  struct DirectComposition::CVisualMarshaler *v9; // rax
  struct DirectComposition::CWeakReferenceBase *v11; // rbx
  struct DirectComposition::CWeakReferenceBase *v12; // rdx
  struct DirectComposition::CWeakReferenceBase *v13; // [rsp+40h] [rbp+8h] BYREF

  WeakReferenceBase = 0;
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    v9 = *(struct DirectComposition::CVisualMarshaler **)(v6 + 16);
  else
    v9 = 0LL;
  if ( a3 == v9 )
  {
    if ( v6 && !v9 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        (struct DirectComposition::CWeakReferenceBase *)v6);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
  else
  {
    v11 = 0LL;
    v13 = 0LL;
    if ( a3 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a3, &v13);
      if ( WeakReferenceBase < 0 )
        return (unsigned int)WeakReferenceBase;
      v11 = v13;
    }
    v12 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 7);
    if ( v12 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v12);
    *((_QWORD *)this + 7) = v11;
    *a4 = 1;
  }
  return (unsigned int)WeakReferenceBase;
}
