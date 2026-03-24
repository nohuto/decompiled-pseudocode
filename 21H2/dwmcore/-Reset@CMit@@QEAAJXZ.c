/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x1800B5140
 * Callers:
 *     ?Initialize@CInputManager@@QEAAJXZ @ 0x1800B5058 (-Initialize@CInputManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Start@CMit@@QEAAJXZ @ 0x1800B5190 (-Start@CMit@@QEAAJXZ.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rcx

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
