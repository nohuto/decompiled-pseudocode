/*
 * XREFs of ?PanDisablePDEV@@YGXPAUDHPDEV__@@@Z @ 0x1F5A07
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PanDisablePDEV(struct DHPDEV__ *a1)
{
  (*((void (__stdcall **)(_DWORD))a1 + 107))(*((_DWORD *)a1 + 8));
  EngDeleteSemaphore(*((HSEMAPHORE *)a1 + 19));
  Win32FreePool((PATHOBJ *)a1);
}
