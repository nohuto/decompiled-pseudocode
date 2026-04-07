/*
 * XREFs of ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000E560
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D930 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000E2DC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001110C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180014E38 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 */

bool __fastcall CThumbnailVisual::_IsThumbnailCVIStatic(CThumbnailVisual *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 46);
  v2 = 0;
  if ( v1 && (*(_DWORD *)(v1 + 36) & 0x100000) != 0 && *((_BYTE *)this + 474) )
    return !CThumbnailVisual::_IsImmersiveIconic(this);
  return v2;
}
