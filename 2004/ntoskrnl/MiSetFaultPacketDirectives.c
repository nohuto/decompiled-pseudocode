/*
 * XREFs of MiSetFaultPacketDirectives @ 0x140543A68
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x140543A8C (MiValidVirtualizationFault.c)
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
