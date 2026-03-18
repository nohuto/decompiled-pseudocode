/*
 * XREFs of TraceGreReleaseSemaphore @ 0x1C015A094
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01452C4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TraceGreReleaseSemaphore(__int64 a1, __int64 a2)
{
  return EtwTraceGreLockReleaseSemaphore(a1, a2);
}
