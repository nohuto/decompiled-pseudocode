/*
 * XREFs of ?bCleanupFontHash@@YGHPAPAU_FONTHASH@@@Z @ 0xCD688
 * Callers:
 *     ?bCleanupFontTable@@YGHPAPAVPFT@@@Z @ 0xCD626 (-bCleanupFontTable@@YGHPAPAVPFT@@@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QBEHXZ @ 0x88B7E (-bValid@FHOBJ@@QBEHXZ.c)
 *     ?vFree@FHOBJ@@QAEXXZ @ 0xCD6B8 (-vFree@FHOBJ@@QAEXXZ.c)
 */

BOOL __thiscall bCleanupFontHash(int *this)
{
  int v1; // eax
  BOOL v2; // esi
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = *this;
  v4[0] = this;
  v4[1] = v1;
  v2 = FHOBJ::bValid((FHOBJ *)v4);
  if ( v2 )
    FHOBJ::vFree((FHOBJ *)v4);
  return v2;
}
