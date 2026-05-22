/*
 * XREFs of ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800C1EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800C0998 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall SipcEndpoint::UnmapBuffer(SipcPort **this, void *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = SipcPort::FreeSection(this[1], a2);
  v3 = 0;
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v3;
}
