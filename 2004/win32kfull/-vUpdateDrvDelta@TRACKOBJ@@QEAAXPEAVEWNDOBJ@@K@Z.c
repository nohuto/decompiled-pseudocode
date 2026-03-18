/*
 * XREFs of ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0287CC4
 * Callers:
 *     GreClientRgnUpdated @ 0x1C00753E0 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0287604 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C02884BC (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TRACKOBJ::vUpdateDrvDelta(TRACKOBJ *this, struct EWNDOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // r9

  if ( !ERECTL::bEmpty((struct EWNDOBJ *)((char *)a2 + 4)) )
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 40))(v4, v3);
}
