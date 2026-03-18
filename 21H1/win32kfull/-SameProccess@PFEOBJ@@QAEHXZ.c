/*
 * XREFs of ?SameProccess@PFEOBJ@@QAEHXZ @ 0x1D7BCF
 * Callers:
 *     ?ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D8628 (-ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@@Z @ 0x207C74 (-ppfeFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall PFEOBJ::SameProccess(PFEOBJ *this)
{
  int v1; // esi

  v1 = 0;
  if ( !*(_DWORD *)(*(_DWORD *)this + 60)
    || *(_DWORD *)(*(_DWORD *)this + 60) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    return 1;
  }
  return v1;
}
