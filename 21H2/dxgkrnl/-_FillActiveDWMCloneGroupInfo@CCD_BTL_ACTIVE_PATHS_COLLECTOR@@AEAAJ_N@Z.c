/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C01320C0
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C0131FAC (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C016D91C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000C868 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130DBC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013527C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, __int64 a2)
{
  char v3; // r12
  __int64 v4; // rcx
  __int16 v5; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int i; // edi
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v14; // rax
  SESSION_VIEW *v15; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int j; // ebp
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rdx
  __int64 v24; // rax
  unsigned int v26; // eax
  unsigned int k; // ebp
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  const struct _LUID *v30; // rax
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax

  v3 = a2;
  v4 = *((_QWORD *)*this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( !v5 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v4, a2);
  if ( Current )
  {
    v9 = *((_QWORD *)Current + 11);
    if ( v9 )
    {
      for ( i = 0; ; ++i )
      {
        v11 = *((_QWORD *)*this + 8);
        if ( v11 )
          v12 = *(_WORD *)(v11 + 20);
        else
          v12 = 0;
        if ( i >= v12 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v14 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v14 | 0x4000000000000LL;
          if ( (v14 & 0x1000000000LL) != 0 )
          {
            v26 = i | 0xFE5A0000;
            goto LABEL_26;
          }
          if ( v14 >= 0 )
          {
            v26 = i | 0xFE580000;
LABEL_26:
            *((_DWORD *)PathDescriptor + 46) = v26;
            continue;
          }
          v15 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 32);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v15 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v15);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v17 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v9 + 296))(
                      (__int64)PathDescriptor + 16,
                      v17,
                      (__int64)PathDescriptor + 144) )
              {
                v36 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
                v36[3] = *((int *)PathDescriptor + 5);
                v36[4] = *((unsigned int *)PathDescriptor + 4);
                v36[5] = *((unsigned int *)PathDescriptor + 6);
                v36[6] = *this;
                v36[7] = *((_QWORD *)*this + 8);
                WdLogEvent5_WdError(v36);
              }
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v21 = *((_QWORD *)*this + 8);
                v22 = v21 ? *(_WORD *)(v21 + 20) : 0;
                if ( j >= v22 )
                  break;
                v23 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v24 = *(_QWORD *)v23;
                if ( (*(_QWORD *)v23 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 32) == *((_QWORD *)v23 + 32) )
                {
                  *((_DWORD *)v23 + 46) = i | 0xFE590000;
                  *(_QWORD *)v23 = v24 | 0x4000000000800LL;
                  *((_QWORD *)v23 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( v3 )
          {
            for ( k = i; ; ++k )
            {
              v28 = *((_QWORD *)*this + 8);
              v29 = v28 ? *(_WORD *)(v28 + 20) : 0;
              if ( k >= v29 )
                break;
              v30 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v30 + 2, v30[3].LowPart) )
              {
                *(_QWORD *)v31 |= 0x4000000000000uLL;
                *(_DWORD *)(v31 + 184) = i | 0xFE580000;
              }
            }
          }
          else
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(0LL, 0x1000000000LL);
            v32[3] = *((int *)PathDescriptor + 5);
            v32[4] = *((unsigned int *)PathDescriptor + 4);
            v32[5] = *((unsigned int *)PathDescriptor + 6);
            v32[6] = *((unsigned int *)PathDescriptor + 7);
            WdLogEvent5_WdError(v32);
          }
        }
      }
    }
  }
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
  v33[3] = PsGetCurrentProcess(v35, v34);
  v33[4] = *this;
  v33[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v33);
  return 3221225473LL;
}
