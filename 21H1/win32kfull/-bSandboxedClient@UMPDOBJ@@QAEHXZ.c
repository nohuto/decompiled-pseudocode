/*
 * XREFs of ?bSandboxedClient@UMPDOBJ@@QAEHXZ @ 0x1F4402
 * Callers:
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ @ 0x1F3ADD (-FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z @ 0x20DF1E (-UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall UMPDOBJ::bSandboxedClient(UMPDOBJ *this)
{
  int v1; // esi

  v1 = 0;
  if ( *((_DWORD *)this + 58) )
    return *((_DWORD *)this + 54) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
  return v1;
}
