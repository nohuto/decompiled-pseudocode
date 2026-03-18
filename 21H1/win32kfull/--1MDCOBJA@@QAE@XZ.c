/*
 * XREFs of ??1MDCOBJA@@QAE@XZ @ 0xF624C
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 * Callees:
 *     <none>
 */

void __thiscall MDCOBJA::~MDCOBJA(int **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
