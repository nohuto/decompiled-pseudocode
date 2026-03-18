/*
 * XREFs of ?PanCompletePDEV@@YGXPAUDHPDEV__@@PAUHDEV__@@@Z @ 0x1F59A5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PanCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HSEMAPHORE v2; // esi

  v2 = (HSEMAPHORE)*((_DWORD *)a1 + 19);
  *((_DWORD *)a1 + 11) = a2;
  EngAcquireSemaphore(v2);
  (*((void (__stdcall **)(_DWORD, HDEV))a1 + 106))(*((_DWORD *)a1 + 8), a2);
  if ( v2 )
    EngReleaseSemaphore(v2);
}
