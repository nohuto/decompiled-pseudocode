/*
 * XREFs of FreeProcessMessageFilter @ 0x1C0106BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C0106C0C (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeProcessMessageFilter(__int64 a1)
{
  MsgLookupTableCleanUp(*(void ***)(a1 + 848));
  *(_QWORD *)(a1 + 848) = 0LL;
}
