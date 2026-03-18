/*
 * XREFs of PiGetDeviceDepth @ 0x1407201F0
 * Callers:
 *     PiControlGetDeviceDepth @ 0x140720150 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceDepth @ 0x14072FDC4 (PiCMGetDeviceDepth.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071FA1C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetDeviceDepth(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // r8

  *a2 = 0;
  v4 = -1073741810;
  PpDevNodeLockTree(0);
  v5 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
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
  PpDevNodeUnlockTree(0);
  return v4;
}
