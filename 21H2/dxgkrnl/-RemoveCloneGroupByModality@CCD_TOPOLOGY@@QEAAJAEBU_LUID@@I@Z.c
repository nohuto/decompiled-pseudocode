/*
 * XREFs of ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03A9CF8
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01D6840 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C01ACA50 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03AA310 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveCloneGroupByModality(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned int v5; // ebx
  __int64 v9; // r9
  unsigned int v10; // r10d
  __int64 v11; // rdi
  int v12; // r10d
  unsigned int v13; // r11d
  unsigned int v14; // edi
  __int64 v15; // rdx

  v3 = *((_QWORD *)this + 8);
  v4 = -1;
  v5 = 0;
  if ( v3 && *(_WORD *)(v3 + 20) )
  {
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
    v9 = *((_QWORD *)this + 8);
    v10 = 0;
    if ( *(_WORD *)(v9 + 20) )
    {
      while ( 1 )
      {
        v11 = v10;
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v10 + v9 + 56),
               a2,
               a3) )
        {
          break;
        }
        v10 = v12 + 1;
        if ( v10 >= v13 )
          goto LABEL_8;
      }
      v4 = *(_DWORD *)(296 * v11 + v9 + 240);
    }
LABEL_8:
    v14 = 0;
    if ( *(_WORD *)(v9 + 20) )
    {
      v15 = v9;
      do
      {
        v9 = v15;
        if ( v4 != *(_DWORD *)(296LL * v14 + v15 + 240) )
        {
          if ( v5 != v14 )
          {
            CCD_TOPOLOGY::SwapPathsDescriptors(this, v14, v5);
            v9 = *((_QWORD *)this + 8);
          }
          ++v5;
        }
        ++v14;
        v15 = v9;
      }
      while ( v14 < *(unsigned __int16 *)(v9 + 20) );
    }
    *(_WORD *)(v9 + 20) = v5;
  }
  return 0LL;
}
