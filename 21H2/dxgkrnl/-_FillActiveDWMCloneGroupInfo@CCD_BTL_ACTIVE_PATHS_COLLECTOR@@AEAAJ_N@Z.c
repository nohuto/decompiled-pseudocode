/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C01AC0EC
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01ABFD8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01E878C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(
        CCD_TOPOLOGY **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // r12
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  unsigned int i; // edi
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v17; // rax
  SESSION_VIEW *v18; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v20; // rdx
  unsigned int j; // ebp
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rdx
  __int64 v25; // rax
  unsigned int v27; // eax
  unsigned int k; // ebp
  __int64 v29; // rax
  unsigned __int16 v30; // cx
  const struct _LUID *v31; // rax
  __int64 v32; // r9
  CCD_TOPOLOGY *v33; // rdi
  __int64 v34; // rbx
  __int64 CurrentProcess; // rax

  v5 = a2;
  v6 = *((_QWORD *)*this + 8);
  if ( !v6 || !*(_WORD *)(v6 + 20) )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v6, a2, a3, a4);
  if ( Current )
  {
    v12 = *((_QWORD *)Current + 11);
    if ( v12 )
    {
      for ( i = 0; ; ++i )
      {
        v14 = *((_QWORD *)*this + 8);
        if ( v14 )
          v15 = *(_WORD *)(v14 + 20);
        else
          v15 = 0;
        if ( i >= v15 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v17 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v17 | 0x4000000000000LL;
          if ( (v17 & 0x1000000000LL) != 0 )
          {
            v27 = i | 0xFE5A0000;
            goto LABEL_25;
          }
          if ( v17 >= 0 )
          {
            v27 = i | 0xFE580000;
LABEL_25:
            *((_DWORD *)PathDescriptor + 46) = v27;
            continue;
          }
          v18 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 35);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v18 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v18);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v20 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v12 + 296))(
                      (__int64)PathDescriptor + 16,
                      v20,
                      (__int64)PathDescriptor + 144) )
                WdLogSingleEntry5(
                  2LL,
                  *((int *)PathDescriptor + 5),
                  *((unsigned int *)PathDescriptor + 4),
                  *((unsigned int *)PathDescriptor + 6),
                  *this,
                  *((_QWORD *)*this + 8));
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v22 = *((_QWORD *)*this + 8);
                v23 = v22 ? *(_WORD *)(v22 + 20) : 0;
                if ( j >= v23 )
                  break;
                v24 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v25 = *(_QWORD *)v24;
                if ( (*(_QWORD *)v24 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 35) == *((_QWORD *)v24 + 35) )
                {
                  *((_DWORD *)v24 + 46) = i | 0xFE590000;
                  *(_QWORD *)v24 = v25 | 0x4000000000800LL;
                  *((_QWORD *)v24 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( v5 )
          {
            for ( k = i; ; ++k )
            {
              v29 = *((_QWORD *)*this + 8);
              v30 = v29 ? *(_WORD *)(v29 + 20) : 0;
              if ( k >= v30 )
                break;
              v31 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v31 + 2, v31[3].LowPart) )
              {
                *(_QWORD *)v32 |= 0x4000000000000uLL;
                *(_DWORD *)(v32 + 184) = i | 0xFE580000;
              }
            }
          }
          else
          {
            WdLogSingleEntry4(
              2LL,
              *((int *)PathDescriptor + 5),
              *((unsigned int *)PathDescriptor + 4),
              *((unsigned int *)PathDescriptor + 6),
              *((unsigned int *)PathDescriptor + 7));
          }
        }
      }
    }
  }
  v33 = *this;
  v34 = *((_QWORD *)*this + 8);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  WdLogSingleEntry3(2LL, CurrentProcess, v33, v34);
  return 3221225473LL;
}
