/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00BE6CC
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00B0754 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // edx
  UINT v5; // edi
  unsigned __int64 VaRangeIndex; // rdx
  int v7; // edx
  struct _KTHREAD *PhysicalAdapterIndex; // rcx
  __int64 Value; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbp
  _DWORD *v21; // r12
  UINT64 *p_IndexShift; // r14
  __int64 v23; // rcx
  __int64 v24; // r10
  UINT NumPtes; // r15d
  struct _KTHREAD *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rsi
  unsigned int j; // r8d
  unsigned int v30; // r11d
  __int64 v31; // rdx
  UINT v32; // r8d
  __int64 v33; // rcx
  UINT v34; // r10d
  int v35; // r15d
  __int64 v36; // rdx
  unsigned __int64 *v37; // rsi
  UINT64 NtHandle; // rax
  int v39; // eax
  struct _KTHREAD **v40; // r8
  __int64 v41; // rax
  struct _KTHREAD **v42; // rsi
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v43; // r8d
  UINT64 v44; // rax
  _QWORD **v45; // rsi
  _QWORD *i; // rax
  _BYTE v47[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v48; // [rsp+28h] [rbp-40h]
  int v49; // [rsp+30h] [rbp-38h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v48);
  Command = a2->GetVads.Command;
  v5 = 0;
  v49 = 2;
  a2->GetVads.Status = 0;
  if ( Command == D3DKMT_VAD_ESCAPE_GETNUMVADS )
  {
    v45 = (_QWORD **)(this + 3);
    a2->SetFault.Value = 0;
    for ( i = *v45; i != v45; i = (_QWORD *)*i )
      a2->SetFault.Value = ++v5;
    goto LABEL_84;
  }
  VaRangeIndex = (unsigned int)(Command - 1);
  if ( (_DWORD)VaRangeIndex )
  {
    v7 = VaRangeIndex - 1;
    if ( v7 )
    {
      VaRangeIndex = (unsigned int)(v7 - 1);
      if ( (_DWORD)VaRangeIndex )
      {
        VaRangeIndex = (unsigned int)(VaRangeIndex - 1);
        if ( (_DWORD)VaRangeIndex )
        {
          if ( (_DWORD)VaRangeIndex != 1 )
            goto LABEL_84;
          PhysicalAdapterIndex = this[11];
          Value = a2->SetFault.Value;
          if ( (unsigned int)Value < *((_DWORD *)PhysicalAdapterIndex + 1750) )
          {
            v10 = *((_QWORD *)PhysicalAdapterIndex + 5027) + 1584 * Value;
            a2->Evict.AllocationHandle = *(_DWORD *)(v10 + 24);
            while ( 1 )
            {
              v11 = *(unsigned int *)(v10 + 24);
              if ( (unsigned int)v11 > 0x20 )
                v11 = 32LL;
              if ( v5 >= v11 )
                break;
              v12 = 3LL * v5;
              v13 = *(_QWORD *)(*((_QWORD *)this[11] + 464)
                              + 8LL
                              * (v5 + *(_DWORD *)(1584LL * a2->SetFault.Value + *((_QWORD *)this[11] + 5027) + 20)));
              a2->GetVads.GetSegmentCaps.SegmentCaps[v12 / 3].bAperture = *(_BYTE *)(v13 + 80) & 1;
              *(&a2->GetVads.GetVad.VadAddress + v12) = *(_QWORD *)(v13 + 48);
              *(&a2->GetVads.GetVad.NumMappedRanges + 2 * v12) = *(_DWORD *)(v13 + 376);
              *(&a2->GetVads.GetVad.VadType + 2 * v12) = *(_DWORD *)(v13 + 20);
              a2->GetVads.GetPte.PageTableIndex[2 * v12 + 5] = *(_DWORD *)(v13 + 476);
              a2->GetVads.GetSegmentCaps.SegmentCaps[v12 / 3].bReservedSysMem = (*(_DWORD *)(v13 + 80) & 0x1000) != 0;
              ++v5;
            }
            goto LABEL_84;
          }
        }
        else
        {
          PhysicalAdapterIndex = this[11];
          v14 = a2->SetFault.Value;
          if ( (unsigned int)v14 < *((_DWORD *)PhysicalAdapterIndex + 1750) )
          {
            v15 = *((_QWORD *)PhysicalAdapterIndex + 5027) + 1584 * v14;
            v16 = *(_QWORD *)(v15 + 440);
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v16 & 1;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v16 & 2) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v16 & 4) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v16 & 0x10) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v16 & 0x40) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v16 & 0x80) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v16) & 1;
            a2->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v16 + 8);
            a2->GetVads.GetVad.VadType = *(_DWORD *)(v16 + 16);
            if ( *(_DWORD *)(v16 + 16) )
            {
              do
              {
                v17 = v5++;
                v18 = 5 * v17;
                a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v18 / 5].IndexBitCount = *(_DWORD *)(v15 + 48 * v17 + 92);
                *(&a2->GetVads.GetVad.EndAddress + v18) = *(_QWORD *)(v15 + 48 * v17 + 104);
                a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v18 / 5].IndexShift = *(_QWORD *)(v15 + 48 * v17 + 112);
                *(&a2->GetVads.GetVadRange.pOwner + v18) = *(_QWORD *)(v15 + 48 * v17 + 120);
                *(&a2->GetVads.GetVadRange.OwnerOffset + v18) = *(_QWORD *)(v15 + 48 * v17 + 128);
              }
              while ( v5 < *(_DWORD *)(v16 + 16) );
            }
            goto LABEL_84;
          }
        }
      }
      else
      {
        PhysicalAdapterIndex = this[11];
        v19 = a2->SetFault.Value;
        if ( (unsigned int)v19 < *((_DWORD *)PhysicalAdapterIndex + 1750) && a2->GetVads.GetPte.NumPtes <= 0x40 )
        {
          v20 = *((_QWORD *)PhysicalAdapterIndex + 5027) + 1584 * v19;
          v21 = *(_DWORD **)(v20 + 440);
          if ( a2->Evict.AllocationHandle < v21[4] )
          {
            p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
            memset(&a2->Defrag + 1, 0, 0x400uLL);
            v23 = a2->SetFault.Value;
            v24 = 0LL;
            NumPtes = a2->GetVads.GetPte.NumPtes;
            a2->GetVads.GetPte.NumPtes = 0;
            v26 = this[15];
            LODWORD(v27) = v21[4];
            v23 *= 32LL;
            v28 = *(_QWORD *)((char *)v26 + v23);
            for ( j = *(_DWORD *)((char *)v26 + v23 + 16);
                  (_DWORD)v27;
                  j = *(_DWORD *)(v20 + 48LL * (unsigned int)(v27 - 1) + 88) )
            {
              v27 = (unsigned int)(v27 - 1);
              if ( !v28 || !(_DWORD)v27 && !v24 )
                break;
              PhysicalAdapterIndex = (struct _KTHREAD *)*(&a2->GetVads.GetVadRange.VaRangeIndex + v27);
              VaRangeIndex = (unsigned __int64)PhysicalAdapterIndex;
              if ( !(_DWORD)v27 && (*(_DWORD *)v24 & 0x40) != 0 )
                VaRangeIndex = (unsigned int)PhysicalAdapterIndex >> 4;
              if ( (unsigned int)VaRangeIndex >= j )
                goto LABEL_68;
              v30 = 0;
              if ( (_DWORD)v27 == 1 && (*v21 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
                v30 = j;
              if ( (_DWORD)v27 == a2->Evict.AllocationHandle )
              {
                v32 = j - VaRangeIndex;
                if ( v32 >= NumPtes )
                  v32 = NumPtes;
                if ( (_DWORD)v27 )
                {
                  v34 = 0;
                  if ( v32 )
                  {
                    v35 = v30 + VaRangeIndex;
                    do
                    {
                      *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v28 + 24) + 16LL * (v35 + v34));
                      if ( (_DWORD)v27 == 1 )
                      {
                        if ( (*v21 & 0x80u) != 0 )
                        {
                          *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | -(__int64)(v30 != 0) & 0x80000;
                        }
                        else
                        {
                          v36 = 0LL;
                          if ( (**(_DWORD **)(v28 + 24) & 0x60000) == 0x20000LL )
                            v36 = 0x80000LL;
                          *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | v36;
                        }
                      }
                      ++v34;
                      p_IndexShift += 2;
                    }
                    while ( v34 < v32 );
                  }
                  a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v28 + 4);
                }
                else
                {
                  if ( v32 )
                  {
                    do
                    {
                      v33 = 2LL * (v5 + (unsigned int)VaRangeIndex);
                      ++v5;
                      *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v24 + 24) + 8 * v33);
                      p_IndexShift += 2;
                    }
                    while ( v5 < v32 );
                  }
                  a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v24 + 4);
                  a2->GetVads.GetPte.b64KBPte = (*(_DWORD *)v24 & 0x40) != 0;
                }
                a2->GetVads.GetPte.NumPtes = v32;
                goto LABEL_84;
              }
              v31 = *(_QWORD *)(v28 + 32);
              if ( (_DWORD)v27 == 1 )
                v24 = *(_QWORD *)(v31 + 8LL * ((unsigned int)PhysicalAdapterIndex + v30));
              else
                v28 = *(_QWORD *)(v31 + 8LL * (_QWORD)PhysicalAdapterIndex);
            }
            goto LABEL_84;
          }
        }
      }
    }
    else
    {
      v37 = (unsigned __int64 *)(this + 3);
      VaRangeIndex = *v37;
      if ( (unsigned __int64 *)*v37 == v37 )
        goto LABEL_84;
      NtHandle = a2->EvictByNtHandle.NtHandle;
      while ( NtHandle < *(_QWORD *)(VaRangeIndex - 16) || NtHandle >= *(_QWORD *)(VaRangeIndex - 8) )
      {
        VaRangeIndex = *(_QWORD *)VaRangeIndex;
        if ( (unsigned __int64 *)VaRangeIndex == v37 )
          goto LABEL_84;
      }
      PhysicalAdapterIndex = (struct _KTHREAD *)a2->GetVads.GetVadRange.PhysicalAdapterIndex;
      if ( (unsigned int)PhysicalAdapterIndex < ((*(_DWORD *)(VaRangeIndex + 32) >> 4) & 0x7Fu) )
      {
        v39 = 0;
        v40 = (struct _KTHREAD **)(VaRangeIndex
                                 + 8 * ((unsigned int)PhysicalAdapterIndex + 2LL * (_QWORD)PhysicalAdapterIndex + 7));
        PhysicalAdapterIndex = *v40;
        if ( *v40 != (struct _KTHREAD *)v40 )
        {
          VaRangeIndex = a2->GetVads.GetVadRange.VaRangeIndex;
          while ( v39 != (_DWORD)VaRangeIndex )
          {
            PhysicalAdapterIndex = *(struct _KTHREAD **)PhysicalAdapterIndex;
            ++v39;
            if ( PhysicalAdapterIndex == (struct _KTHREAD *)v40 )
              goto LABEL_67;
          }
          PhysicalAdapterIndex = (struct _KTHREAD *)((char *)PhysicalAdapterIndex - 8);
          if ( PhysicalAdapterIndex )
          {
            a2->GetVads.GetVadRange.StartAddress = *((_QWORD *)PhysicalAdapterIndex + 12);
            a2->GetVads.GetVad.StartAddress = *((_QWORD *)PhysicalAdapterIndex + 13);
            a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)PhysicalAdapterIndex + 16) << 28) >> 28;
            a2->GetVads.GetVadRange.pOwner = *((_QWORD *)PhysicalAdapterIndex + 7);
            a2->GetVads.GetVadRange.Protection = *((_DWORD *)PhysicalAdapterIndex + 22);
            a2->GetVads.GetVad.EndAddress = *((_QWORD *)PhysicalAdapterIndex + 10);
            a2->GetVads.GetVadRange.OwnerOffset = *((_QWORD *)PhysicalAdapterIndex + 9);
            goto LABEL_84;
          }
        }
      }
    }
LABEL_67:
    a2->GetVads.Status = -1073741811;
LABEL_68:
    v41 = WdLogNewEntry5_WdWarning(PhysicalAdapterIndex, VaRangeIndex);
    WdLogEvent5_WdWarning(v41);
    goto LABEL_84;
  }
  v42 = this + 3;
  PhysicalAdapterIndex = *v42;
  if ( *v42 == (struct _KTHREAD *)v42 )
    goto LABEL_67;
  v43 = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
  while ( 1 )
  {
    ++v5;
    if ( v43 != -1 )
      break;
    VaRangeIndex = a2->GetVads.GetVad.VadAddress;
    v44 = *((_QWORD *)PhysicalAdapterIndex - 2);
    if ( VaRangeIndex >= v44 && VaRangeIndex < *((_QWORD *)PhysicalAdapterIndex - 1) )
      goto LABEL_76;
LABEL_79:
    PhysicalAdapterIndex = *(struct _KTHREAD **)PhysicalAdapterIndex;
    if ( PhysicalAdapterIndex == (struct _KTHREAD *)v42 )
      goto LABEL_67;
  }
  if ( v43 != v5 )
    goto LABEL_79;
  v44 = *((_QWORD *)PhysicalAdapterIndex - 2);
LABEL_76:
  a2->GetVads.GetVad.StartAddress = v44;
  a2->GetVads.GetVad.EndAddress = *((_QWORD *)PhysicalAdapterIndex - 1);
  a2->GetVads.GetVad.VadType = *((_DWORD *)PhysicalAdapterIndex + 8) & 0xF;
  a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)PhysicalAdapterIndex + 9);
LABEL_84:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
}
