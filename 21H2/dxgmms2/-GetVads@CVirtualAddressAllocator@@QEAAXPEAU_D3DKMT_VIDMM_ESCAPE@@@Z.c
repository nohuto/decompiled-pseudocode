/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00E29D4
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00D672C (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // edx
  UINT v5; // edi
  __int32 v6; // edx
  __int32 v7; // edx
  __int32 v8; // edx
  int v9; // edx
  struct _KTHREAD *v10; // rcx
  __int64 Value; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  struct _KTHREAD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbp
  _DWORD *v25; // r12
  UINT64 *p_IndexShift; // r14
  __int64 v27; // rcx
  __int64 v28; // r10
  UINT NumPtes; // r15d
  struct _KTHREAD *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rsi
  unsigned int j; // r8d
  __int64 v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // r11d
  __int64 v37; // rdx
  UINT v38; // r8d
  __int64 v39; // rcx
  UINT v40; // r10d
  unsigned int v41; // r15d
  __int64 v42; // rdx
  _QWORD *v43; // rsi
  _QWORD *v44; // rdx
  UINT64 NtHandle; // rax
  __int64 PhysicalAdapterIndex; // rcx
  int v47; // eax
  _QWORD **v48; // r8
  _QWORD *v49; // rcx
  _QWORD *v50; // rcx
  _QWORD *v51; // rsi
  _QWORD *v52; // rcx
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v53; // r8d
  UINT64 v54; // rax
  HANDLE hProcess; // rdx
  _QWORD **v56; // rsi
  _QWORD *i; // rax
  char v58[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v59; // [rsp+28h] [rbp-40h]
  int v60; // [rsp+30h] [rbp-38h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v59);
  Command = a2->GetVads.Command;
  v5 = 0;
  v60 = 2;
  a2->GetVads.Status = 0;
  if ( Command == D3DKMT_VAD_ESCAPE_GETNUMVADS )
  {
    v56 = (_QWORD **)(this + 3);
    a2->SetFault.Value = 0;
    for ( i = *v56; i != v56; i = (_QWORD *)*i )
      a2->SetFault.Value = ++v5;
    goto LABEL_86;
  }
  v6 = Command - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
            goto LABEL_86;
          v10 = this[11];
          Value = a2->SetFault.Value;
          if ( (unsigned int)Value < *((_DWORD *)v10 + 1754) )
          {
            v12 = *((_QWORD *)v10 + 5028) + 1584 * Value;
            a2->Evict.AllocationHandle = *(_DWORD *)(v12 + 24);
            while ( 1 )
            {
              v13 = *(unsigned int *)(v12 + 24);
              if ( (unsigned int)v13 > 0x20 )
                v13 = 32LL;
              if ( v5 >= v13 )
                break;
              v14 = 3LL * v5;
              v15 = *(_QWORD *)(*((_QWORD *)this[11] + 464)
                              + 8LL
                              * (v5 + *(_DWORD *)(1584LL * a2->SetFault.Value + *((_QWORD *)this[11] + 5028) + 20)));
              a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bAperture = *(_BYTE *)(v15 + 80) & 1;
              *(&a2->GetVads.GetVad.VadAddress + v14) = *(_QWORD *)(v15 + 48);
              *(&a2->GetVads.GetVad.NumMappedRanges + 2 * v14) = *(_DWORD *)(v15 + 376);
              *(&a2->GetVads.GetVad.VadType + 2 * v14) = *(_DWORD *)(v15 + 20);
              a2->GetVads.GetPte.PageTableIndex[2 * v14 + 5] = *(_DWORD *)(v15 + 476);
              a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bReservedSysMem = (*(_DWORD *)(v15 + 80) & 0x1000) != 0;
              ++v5;
            }
            goto LABEL_86;
          }
        }
        else
        {
          v16 = this[11];
          v17 = a2->SetFault.Value;
          if ( (unsigned int)v17 < *((_DWORD *)v16 + 1754) )
          {
            v18 = *((_QWORD *)v16 + 5028) + 1584 * v17;
            v19 = *(_QWORD *)(v18 + 440);
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v19 & 1;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v19 & 2) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v19 & 4) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v19 & 0x10) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v19 & 0x40) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v19 & 0x80) != 0;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v19) & 1;
            a2->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v19 + 8);
            a2->GetVads.GetVad.VadType = *(_DWORD *)(v19 + 16);
            if ( *(_DWORD *)(v19 + 16) )
            {
              do
              {
                v20 = v5++;
                v21 = 5 * v20;
                a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v21 / 5].IndexBitCount = *(_DWORD *)(v18 + 48 * v20 + 92);
                *(&a2->GetVads.GetVad.EndAddress + v21) = *(_QWORD *)(v18 + 48 * v20 + 104);
                a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v21 / 5].IndexShift = *(_QWORD *)(v18 + 48 * v20 + 112);
                *(&a2->GetVads.GetVadRange.pOwner + v21) = *(_QWORD *)(v18 + 48 * v20 + 120);
                *(&a2->GetVads.GetVadRange.OwnerOffset + v21) = *(_QWORD *)(v18 + 48 * v20 + 128);
              }
              while ( v5 < *(_DWORD *)(v19 + 16) );
            }
            goto LABEL_86;
          }
        }
      }
      else
      {
        v22 = this[11];
        v23 = a2->SetFault.Value;
        if ( (unsigned int)v23 < *((_DWORD *)v22 + 1754) && a2->GetVads.GetPte.NumPtes <= 0x40 )
        {
          v24 = *((_QWORD *)v22 + 5028) + 1584 * v23;
          v25 = *(_DWORD **)(v24 + 440);
          if ( a2->Evict.AllocationHandle < v25[4] )
          {
            p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
            memset(&a2->Defrag + 1, 0, 0x400uLL);
            v27 = a2->SetFault.Value;
            v28 = 0LL;
            NumPtes = a2->GetVads.GetPte.NumPtes;
            a2->GetVads.GetPte.NumPtes = 0;
            v30 = this[15];
            LODWORD(v31) = v25[4];
            v27 *= 32LL;
            v32 = *(_QWORD *)((char *)v30 + v27);
            for ( j = *(_DWORD *)((char *)v30 + v27 + 16);
                  (_DWORD)v31;
                  j = *(_DWORD *)(v24 + 48LL * (unsigned int)(v31 - 1) + 88) )
            {
              v31 = (unsigned int)(v31 - 1);
              if ( !v32 || !(_DWORD)v31 && !v28 )
                break;
              v34 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v31);
              v35 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v31);
              if ( !(_DWORD)v31 && (*(_DWORD *)v28 & 0x40) != 0 )
                v35 >>= 4;
              if ( v35 >= j )
              {
                WdLogSingleEntry0(3LL);
                goto LABEL_86;
              }
              v36 = 0;
              if ( (_DWORD)v31 == 1 && (*v25 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
                v36 = j;
              if ( (_DWORD)v31 == a2->Evict.AllocationHandle )
              {
                v38 = j - v35;
                if ( v38 >= NumPtes )
                  v38 = NumPtes;
                if ( (_DWORD)v31 )
                {
                  v40 = 0;
                  if ( v38 )
                  {
                    v41 = v36 + v35;
                    do
                    {
                      *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v32 + 40) + 16LL * (v41 + v40));
                      if ( (_DWORD)v31 == 1 )
                      {
                        if ( (*v25 & 0x80u) != 0 )
                        {
                          *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | -(__int64)(v36 != 0) & 0x80000;
                        }
                        else
                        {
                          v42 = 0LL;
                          if ( (**(_DWORD **)(v32 + 40) & 0x60000) == 0x20000LL )
                            v42 = 0x80000LL;
                          *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | v42;
                        }
                      }
                      ++v40;
                      p_IndexShift += 2;
                    }
                    while ( v40 < v38 );
                  }
                  a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v32 + 4);
                }
                else
                {
                  if ( v38 )
                  {
                    do
                    {
                      v39 = 2LL * (v5 + v35);
                      ++v5;
                      *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v28 + 32) + 8 * v39);
                      p_IndexShift += 2;
                    }
                    while ( v5 < v38 );
                  }
                  a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v28 + 4);
                  a2->GetVads.GetPte.b64KBPte = (*(_DWORD *)v28 & 0x40) != 0;
                }
                a2->GetVads.GetPte.NumPtes = v38;
                goto LABEL_86;
              }
              v37 = *(_QWORD *)(v32 + 48);
              if ( (_DWORD)v31 == 1 )
                v28 = *(_QWORD *)(v37 + 8LL * ((unsigned int)v34 + v36));
              else
                v32 = *(_QWORD *)(v37 + 8 * v34);
            }
            goto LABEL_86;
          }
        }
      }
    }
    else
    {
      v43 = this + 3;
      v44 = (_QWORD *)*v43;
      if ( (_QWORD *)*v43 == v43 )
        goto LABEL_86;
      NtHandle = a2->EvictByNtHandle.NtHandle;
      while ( NtHandle < *(v44 - 2) || NtHandle >= *(v44 - 1) )
      {
        v44 = (_QWORD *)*v44;
        if ( v44 == v43 )
          goto LABEL_86;
      }
      PhysicalAdapterIndex = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
      if ( (unsigned int)PhysicalAdapterIndex < ((*((_DWORD *)v44 + 8) >> 4) & 0x7Fu) )
      {
        v47 = 0;
        v48 = (_QWORD **)&v44[2 * PhysicalAdapterIndex + 7 + PhysicalAdapterIndex];
        v49 = *v48;
        if ( *v48 != v48 )
        {
          while ( v47 != a2->GetVads.GetVadRange.VaRangeIndex )
          {
            v49 = (_QWORD *)*v49;
            ++v47;
            if ( v49 == v48 )
              goto LABEL_82;
          }
          v50 = v49 - 1;
          if ( v50 )
          {
            a2->GetVads.GetVadRange.StartAddress = v50[12];
            a2->GetVads.GetVad.StartAddress = v50[13];
            a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)v50 + 16) << 28) >> 28;
            a2->GetVads.GetVadRange.pOwner = v50[7];
            a2->GetVads.GetVadRange.Protection = *((_DWORD *)v50 + 22);
            a2->GetVads.GetVad.EndAddress = v50[10];
            a2->GetVads.GetVadRange.OwnerOffset = v50[9];
            goto LABEL_86;
          }
        }
      }
    }
LABEL_82:
    a2->GetVads.Status = -1073741811;
    WdLogSingleEntry0(3LL);
    goto LABEL_86;
  }
  v51 = this + 3;
  v52 = (_QWORD *)*v51;
  if ( (_QWORD *)*v51 == v51 )
    goto LABEL_82;
  v53 = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
  while ( 1 )
  {
    ++v5;
    if ( v53 != -1 )
      break;
    hProcess = a2->Evict.hProcess;
    v54 = *(v52 - 2);
    if ( (unsigned __int64)hProcess >= v54 && (unsigned __int64)hProcess < *(v52 - 1) )
      goto LABEL_78;
LABEL_81:
    v52 = (_QWORD *)*v52;
    if ( v52 == v51 )
      goto LABEL_82;
  }
  if ( v53 != v5 )
    goto LABEL_81;
  v54 = *(v52 - 2);
LABEL_78:
  a2->GetVads.GetVad.StartAddress = v54;
  a2->GetVads.GetVad.EndAddress = *(v52 - 1);
  a2->GetVads.GetVad.VadType = v52[4] & 0xF;
  a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)v52 + 9);
LABEL_86:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
}
