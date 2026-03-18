/*
 * XREFs of ?TraceMoveRemovedMoveRegions@METAREGION@@AAEXPAU_RECTL@@@Z @ 0x228585
 * Callers:
 *     ?bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x2285DC (-bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall METAREGION::TraceMoveRemovedMoveRegions(METAREGION *this, struct _RECTL *a2)
{
  int v3; // eax

  EtwLogicalSurfRemovedTranslationFromMoveEvent(*((_DWORD *)this + 7), a2->left, a2->top, a2->right, a2->bottom);
  EtwTraceMoveRegion(*(_DWORD *)this, *(int *)this >> 31, 0, 0, *((_DWORD *)this + 5));
  EtwTraceMoveRegion(*(_DWORD *)this, *(int *)this >> 31, 1, 0, *(_DWORD *)this);
  v3 = *((_DWORD *)this + 1);
  if ( v3 )
    EtwTraceMoveRegion(v3, v3 >> 31, 1, 0, *((_DWORD *)this + 1));
}
