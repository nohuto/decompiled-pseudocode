/*
 * XREFs of ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180152300
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1801526CC (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Uninitialize(struct HMIL_CONNECTION__ *this)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( this )
  {
    CConnection::Disconnect(this);
    CDrawListEntry::Release(this);
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024809, 0x43u, 0LL);
  }
  return v1;
}
