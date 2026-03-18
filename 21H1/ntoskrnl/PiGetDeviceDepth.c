/*
 * XREFs of PiGetDeviceDepth @ 0x1406E7960
 * Callers:
 *     PiControlGetDeviceDepth @ 0x1406E78C0 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceDepth @ 0x14071FDF4 (PiCMGetDeviceDepth.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetDeviceDepth(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // r8

  *a2 = 0;
  v4 = -1073741810;
  PpDevNodeLockTree(0LL);
  v5 = (_QWORD *)PnpDeviceObjectFromDeviceInstanceWithTag(a1, 1131441744LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5[39] + 40LL);
    if ( v6 )
    {
      v4 = 0;
      *a2 = *(_DWORD *)(v6 + 152);
    }
    ObfDereferenceObjectWithTag(v5, 0x43706E50u);
  }
  PpDevNodeUnlockTree(0LL);
  return v4;
}
