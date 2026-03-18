/*
 * XREFs of DrvIsUniformSpaceMapping @ 0x1C00A74A0
 * Callers:
 *     IsValidKernelDpiAwarenessContext @ 0x1C000EC44 (IsValidKernelDpiAwarenessContext.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00A7048 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C00A7360 (NtUserGetUniformSpaceMapping.c)
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C00A7440 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
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
