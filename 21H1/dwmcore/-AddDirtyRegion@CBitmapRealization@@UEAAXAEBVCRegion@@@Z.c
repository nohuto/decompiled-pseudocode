/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180093B1C
 * Callers:
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180093BA4 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800EFC30 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FI@EAAXAEBVCRegion@@@Z @ 0x1800F0020 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FI@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HI@EAAXAEBVCRegion@@@Z @ 0x1800F0030 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HI@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18026451C (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18026594C (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBitmapRealization::AddDirtyRegion(
        CBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this - 11);
  if ( v2 )
    *(_BYTE *)(v2 + 152) = 0;
  v5 = *((_QWORD *)this - 38);
  if ( v5 )
  {
    v9 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)(v5 + 56), a2);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
  }
  v6 = *((_QWORD *)this - 37);
  v7 = *((_QWORD *)this - 36);
  while ( v6 != v7 )
  {
    v8 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) + 264LL),
           a2);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    v6 += 8LL;
  }
}
