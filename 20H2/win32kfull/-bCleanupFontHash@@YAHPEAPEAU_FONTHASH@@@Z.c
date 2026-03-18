/*
 * XREFs of ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C001C414
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C001C378 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C001C460 (-vFree@FHOBJ@@QEAAXXZ.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C001E730 (-bValid@FHOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall bCleanupFontHash(struct _FONTHASH **a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v3; // edi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)*a1;
  v5[0] = a1;
  v5[1] = v1;
  v2 = 0;
  v3 = FHOBJ::bValid((FHOBJ *)v5);
  if ( v3 )
    FHOBJ::vFree((FHOBJ *)v5);
  LOBYTE(v2) = v3 != 0;
  return v2;
}
