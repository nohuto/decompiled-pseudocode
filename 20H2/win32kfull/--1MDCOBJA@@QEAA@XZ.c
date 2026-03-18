/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C015D534
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00FA3E0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00FA978 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJA::~MDCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
