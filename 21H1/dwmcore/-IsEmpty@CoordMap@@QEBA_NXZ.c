/*
 * XREFs of ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180011EFC
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18001084C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180011370 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CoordMap::IsEmpty(CoordMap *this)
{
  return ((*((_QWORD *)this + 1) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) & 0xFFFFFFFFFFFFFFF0uLL) == 0;
}
