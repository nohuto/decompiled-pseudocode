/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801C97C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CDDisplayRenderTarget *this,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx

  if ( *((_QWORD *)this + 4) )
  {
    v3 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180377E28, 2LL, -2147467263, 0xC1u);
  }
  else
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180377E28, 2LL, -2003304442, 0xC5u);
  }
  return v3;
}
