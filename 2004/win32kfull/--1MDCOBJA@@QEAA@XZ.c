/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C015A46C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C002DAE0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E05C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJA::~MDCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
