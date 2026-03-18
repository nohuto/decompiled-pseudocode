/*
 * XREFs of ?bIsProcessLocalSystem@@YGHXZ @ 0x1E7C8E
 * Callers:
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall bIsProcessLocalSystem()
{
  struct _KPROCESS *CurrentProcess; // eax

  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
  return bIsProcessLocalSystem(CurrentProcess);
}
