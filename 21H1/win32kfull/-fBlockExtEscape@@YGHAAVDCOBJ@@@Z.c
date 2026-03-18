/*
 * XREFs of ?fBlockExtEscape@@YGHAAVDCOBJ@@@Z @ 0x1D7C39
 * Callers:
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D84D0 (-iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall fBlockExtEscape(void *this)
{
  int v2; // esi

  v2 = 0;
  if ( !*(_DWORD *)this || (*(_DWORD *)(*(_DWORD *)this + 52) & 0x400) == 0 || !UserIsRemoteAndNotDisconnectConnection() )
    return *(_DWORD *)(*(_DWORD *)this + 24) & 0x4000;
  return v2;
}
