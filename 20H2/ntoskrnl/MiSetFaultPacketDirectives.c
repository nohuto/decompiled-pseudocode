/*
 * XREFs of MiSetFaultPacketDirectives @ 0x140547438
 * Callers:
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiValidVirtualizationFault @ 0x14054745C (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetFaultPacketDirectives(__int64 a1, int a2)
{
  if ( a2 == -1073741801 )
  {
    *(_DWORD *)(a1 + 80) |= 2u;
  }
  else if ( a2 == -1073740748 )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
  }
}
