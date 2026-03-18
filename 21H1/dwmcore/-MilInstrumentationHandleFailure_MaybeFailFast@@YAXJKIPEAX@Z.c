/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800CF460
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1800CF69C (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(unsigned int a1, __int64 a2, unsigned int a3, void *a4)
{
  if ( a1 == -2003303421
    || a1 == -2003302654
    || a1 == -2147024890
    || IsOOM(a1)
    || g_dwFailFastForThreadId && g_dwFailFastForThreadId == GetCurrentThreadId() )
  {
    ModuleFailFastForHRESULT(a1, 0LL);
  }
  DoStackCapture(a1, a3, a4);
}
