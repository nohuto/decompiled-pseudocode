/*
 * XREFs of ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C02E6A74
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C013BFB0 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C013C270 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0012F90 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00ECF14 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C02E6EF0 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveCloneGroupByModality(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned int v5; // ebx
  __int16 v9; // ax
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 v12; // rdi
  int v13; // r10d
  unsigned int v14; // r11d
  unsigned int v15; // edi
  __int64 v16; // rdx

  v3 = *((_QWORD *)this + 8);
  v4 = -1;
  v5 = 0;
  if ( v3 )
    v9 = *(_WORD *)(v3 + 20);
  else
    v9 = 0;
  if ( v9 )
  {
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
    v10 = *((_QWORD *)this + 8);
    v11 = 0;
    if ( *(_WORD *)(v10 + 20) )
    {
      while ( 1 )
      {
        v12 = v11;
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v11 + v10 + 48),
               a2,
               a3) )
        {
          break;
        }
        v11 = v13 + 1;
        if ( v11 >= v14 )
          goto LABEL_10;
      }
      v4 = *(_DWORD *)(272 * v12 + v10 + 232);
    }
LABEL_10:
    v15 = 0;
    if ( *(_WORD *)(v10 + 20) )
    {
      v16 = v10;
      do
      {
        v10 = v16;
        if ( v4 != *(_DWORD *)(272LL * v15 + v16 + 232) )
        {
          if ( v5 != v15 )
          {
            CCD_TOPOLOGY::SwapPathsDescriptors(this, v15, v5);
            v10 = *((_QWORD *)this + 8);
          }
          ++v5;
        }
        ++v15;
        v16 = v10;
      }
      while ( v15 < *(unsigned __int16 *)(v10 + 20) );
    }
    *(_WORD *)(v10 + 20) = v5;
  }
  return 0LL;
}
