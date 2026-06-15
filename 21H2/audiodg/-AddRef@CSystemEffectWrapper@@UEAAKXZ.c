/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x140019930
 * Callers:
 *     ?AddRef@CSystemEffectWrapper@@W7EAAKXZ @ 0x14002AA40 (-AddRef@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x14002AA50 (-AddRef@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x14002AA60 (-AddRef@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x14002AA70 (-AddRef@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x14002AA80 (-AddRef@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x14002AA90 (-AddRef@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x14002AAA0 (-AddRef@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x14002AAB0 (-AddRef@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x14002AAC0 (-AddRef@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::AddRef(CSystemEffectWrapper *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 16);
  if ( !v2 )
    v2 = (char *)this - 8;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
}
