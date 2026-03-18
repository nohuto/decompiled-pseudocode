/*
 * XREFs of ?PanSetPalette@@YGHPAUDHPDEV__@@PAU_PALOBJ@@KKK@Z @ 0x1F6294
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall PanSetPalette(struct DHPDEV__ *a1, struct _PALOBJ *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  HSEMAPHORE v5; // esi
  int v6; // edi

  v5 = (HSEMAPHORE)*((_DWORD *)a1 + 19);
  EngAcquireSemaphore(v5);
  v6 = (*((int (__stdcall **)(_DWORD, struct _PALOBJ *, unsigned int, unsigned int, unsigned int))a1 + 127))(
         *((_DWORD *)a1 + 8),
         a2,
         a3,
         a4,
         a5);
  if ( v5 )
    EngReleaseSemaphore(v5);
  return v6;
}
