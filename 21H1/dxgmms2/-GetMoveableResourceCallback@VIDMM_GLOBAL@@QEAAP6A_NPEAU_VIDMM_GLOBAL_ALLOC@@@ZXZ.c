/*
 * XREFs of ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00B1414
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00C5F10 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00C7D60 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00CA304 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     <none>
 */

bool (__fastcall *__fastcall VIDMM_GLOBAL::GetMoveableResourceCallback(
        VIDMM_GLOBAL *this))(struct _VIDMM_GLOBAL_ALLOC *)
{
  bool (__fastcall *result)(struct _VIDMM_GLOBAL_ALLOC *); // rax

  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2625LL) )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  result = VIDMM_SEGMENT::IsMovableResourceCB;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 144LL) != 1 )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  return result;
}
