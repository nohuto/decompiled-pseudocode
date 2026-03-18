/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x18002AE80
 * Callers:
 *     ?Initialize@CInputManager@@QEAAJXZ @ 0x18002AD98 (-Initialize@CInputManager@@QEAAJXZ.c)
 * Callees:
 *     ?Start@CMit@@QEAAJXZ @ 0x18002AED0 (-Start@CMit@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned int v4; // ecx

  v1 = 0;
  if ( this[2] || (v3 = CMit::Start((CMit *)this), v1 = v3, v3 >= 0) )
  {
    if ( !*((_BYTE *)this + 32) )
      SetEvent(this[3]);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x86u, 0LL);
  }
  return v1;
}
