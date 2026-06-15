/*
 * XREFs of ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x1400192C0
 * Callers:
 *     ?Release@CSystemEffectWrapper@@W7EAAKXZ @ 0x14002AA90 (-Release@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x14002AAA0 (-Release@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x14002AAB0 (-Release@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x14002AAC0 (-Release@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x14002AAD0 (-Release@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x14002AAE0 (-Release@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x14002AAF0 (-Release@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x14002AB00 (-Release@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x14002AB10 (-Release@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::Release(CSystemEffectWrapper *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 16);
  if ( !v2 )
    v2 = (char *)this - 8;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
}
