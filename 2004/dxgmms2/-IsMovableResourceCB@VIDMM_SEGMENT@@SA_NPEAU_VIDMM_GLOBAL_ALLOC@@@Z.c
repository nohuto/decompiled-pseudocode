/*
 * XREFs of ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8830
 * Callers:
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C88D0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00CA030 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ @ 0x1C0015D08 (-Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ.c)
 */

char __fastcall VIDMM_SEGMENT::IsMovableResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  __int64 v6; // rax

  if ( (unsigned int)Feature_Servicing_2102c_29352024__private_IsEnabled() )
  {
    v2 = (_DWORD *)*((_QWORD *)a1 + 62);
    if ( (*v2 & 0x300) != 0 )
      return 0;
    if ( (*((_DWORD *)a1 + 19) & 0x8000100) != 0 )
      return 0;
    v3 = *((_QWORD *)a1 + 12);
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 32) & 1) != 0 )
        return 0;
    }
    v4 = *((_DWORD *)a1 + 20);
    if ( (v4 & 0x400) != 0 )
      return 0;
    if ( (v4 & 0x100000) == 0 )
      return 1;
    return v2[3] == 0;
  }
  else
  {
    if ( (**((_DWORD **)a1 + 62) & 0x300) != 0 )
      return 0;
    if ( (*((_DWORD *)a1 + 19) & 0x8000100) != 0 )
      return 0;
    v6 = *((_QWORD *)a1 + 12);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 32) & 1) != 0 )
        return 0;
    }
    return (*((_DWORD *)a1 + 20) & 0x400) == 0;
  }
}
