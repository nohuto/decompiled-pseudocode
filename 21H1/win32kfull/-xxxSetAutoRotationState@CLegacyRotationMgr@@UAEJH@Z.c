/*
 * XREFs of ?xxxSetAutoRotationState@CLegacyRotationMgr@@UAEJH@Z @ 0x141298
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z @ 0x1413BE (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z.c)
 */

int __thiscall CLegacyRotationMgr::xxxSetAutoRotationState(CLegacyRotationMgr *this, int Data)
{
  int v2; // esi
  CLegacyRotationMgr *v3; // ecx
  int v4; // eax

  v2 = CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, Data);
  v4 = CLegacyRotationMgr::xxxSetSlateAutoRotationState(v3, Data);
  if ( v2 >= 0 )
    return v4;
  return v2;
}
