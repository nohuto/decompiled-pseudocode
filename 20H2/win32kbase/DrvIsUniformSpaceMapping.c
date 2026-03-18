/*
 * XREFs of DrvIsUniformSpaceMapping @ 0x1C00201B0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C001FD54 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C0020070 (NtUserGetUniformSpaceMapping.c)
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C0020150 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C002FFD4 (IsValidKernelDpiAwarenessContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUniformSpaceMapping(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( gbUniformSpaceDpiMode && a1 )
    return (*(_DWORD *)(a1 + 16) & 2) != 0;
  return v1;
}
