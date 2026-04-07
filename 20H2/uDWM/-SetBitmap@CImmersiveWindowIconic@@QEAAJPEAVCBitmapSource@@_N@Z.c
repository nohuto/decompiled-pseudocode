/*
 * XREFs of ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x18008A8BC
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008A430 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x18008A7A8 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::SetBitmap(CImmersiveWindowIconic *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v4 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 37) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = CImmersiveWindowIconic::OnIconUpdated(this, 0);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xDAu);
  return v6;
}
