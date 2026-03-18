/*
 * XREFs of ?PanAssertMode@@YGHPAUDHPDEV__@@H@Z @ 0x1F57C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall PanAssertMode(struct DHPDEV__ *a1, int a2)
{
  HSEMAPHORE v2; // esi
  int v3; // edi

  v2 = (HSEMAPHORE)*((_DWORD *)a1 + 19);
  EngAcquireSemaphore(v2);
  v3 = (*((int (__stdcall **)(_DWORD, int))a1 + 110))(*((_DWORD *)a1 + 8), a2);
  if ( v2 )
    EngReleaseSemaphore(v2);
  return v3;
}
