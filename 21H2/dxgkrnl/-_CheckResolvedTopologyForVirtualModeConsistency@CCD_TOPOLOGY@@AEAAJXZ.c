/*
 * XREFs of ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0135C78
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01375F4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013527C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(CCD_TOPOLOGY *this)
{
  int v1; // r12d
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned __int16 v5; // cx
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned int k; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v13; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // r14
  __int64 v15; // r15
  unsigned int j; // ebp
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v20; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rdi
  __int64 v28; // r8
  char v29; // al
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax

  v1 = 0;
  v3 = 0;
LABEL_2:
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( v3 >= v5 )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *((_QWORD *)this + 8);
      if ( v7 )
        v8 = *(_WORD *)(v7 + 20);
      else
        v8 = 0;
      if ( i >= v8 )
        goto LABEL_9;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
      v21 = PathDescriptor;
      if ( !*((_BYTE *)PathDescriptor + 129) )
      {
        v23 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x20100LL) == 0x20100 )
        {
          if ( (v23 & 0x200) != 0 && ((*((_DWORD *)PathDescriptor + 33) - 2) & 0xFFFFFFFD) == 0 )
          {
            v24 = *((unsigned int *)PathDescriptor + 39);
            if ( __PAIR64__(*((_DWORD *)PathDescriptor + 24), *((_DWORD *)PathDescriptor + 25)) == *((_QWORD *)PathDescriptor + 19) )
              continue;
            v32 = *((_DWORD *)PathDescriptor + 38);
            v33 = v23 & 0xFFFFFFFFFF7FFFFFuLL;
            goto LABEL_42;
          }
          v24 = *((unsigned int *)PathDescriptor + 38);
          if ( *((_QWORD *)PathDescriptor + 12) != *((_QWORD *)PathDescriptor + 19) )
          {
            v32 = *((_DWORD *)PathDescriptor + 39);
            v33 = v23 & 0xFFFFFFFFFF7DFF78uLL;
LABEL_42:
            *((_QWORD *)v21 + 1) &= 0xFFFFFFFFFF7DFF78uLL;
            *(_QWORD *)v21 = v33;
            *((_DWORD *)v21 + 25) = v32;
            *((_DWORD *)v21 + 24) = v24;
            v34 = WdLogNewEntry5_WdWarning(v24, v33, v20);
            *(_QWORD *)(v34 + 24) = *((unsigned int *)v21 + 7);
            *(_QWORD *)(v34 + 32) = *((_QWORD *)v21 + 2);
            WdLogEvent5_WdWarning(v34);
            continue;
          }
        }
      }
    }
  }
  v13 = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
  v14 = v13;
  if ( (*(_QWORD *)v13 & 0x8000000000000LL) == 0 )
    goto LABEL_20;
  v15 = *((unsigned int *)v13 + 46);
  for ( j = v3 + 1; ; ++j )
  {
    v17 = *((_QWORD *)this + 8);
    if ( v17 )
      v18 = *(_WORD *)(v17 + 20);
    else
      v18 = 0;
    if ( j >= v18 )
      goto LABEL_19;
    v27 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v27 + 46) != (_DWORD)v15 )
      continue;
    *(_QWORD *)v27 &= ~0x8000000000000uLL;
    v29 = *((_BYTE *)v14 + 129);
    if ( v29 != *((_BYTE *)v27 + 129) )
      break;
    if ( !v29 && *((_QWORD *)v14 + 2) != *((_QWORD *)v27 + 2) )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(*((unsigned int *)v27 + 4), v25, v28);
      v30[3] = v3;
      v30[4] = *((_QWORD *)v14 + 2);
      v30[5] = j;
      v30[6] = *((_QWORD *)v27 + 2);
      WdLogEvent5_WdWarning(v30);
      v1 = -1073741823;
LABEL_19:
      if ( v1 < 0 )
        goto LABEL_9;
LABEL_20:
      ++v3;
      goto LABEL_2;
    }
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v28);
  v31[3] = v3;
  v31[4] = j;
  v31[5] = v15;
  WdLogEvent5_WdWarning(v31);
LABEL_9:
  for ( k = 0; ; ++k )
  {
    v10 = *((_QWORD *)this + 8);
    v11 = v10 ? *(_WORD *)(v10 + 20) : 0;
    if ( k >= v11 )
      break;
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    *(_QWORD *)v12 |= 0x8000000000000uLL;
  }
  return 0LL;
}
