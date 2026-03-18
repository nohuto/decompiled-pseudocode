/*
 * XREFs of ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00CB3AC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C34 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008696C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00CB7A0 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RunApertureCoherencyTest(VIDMM_GLOBAL *this, __int64 a2)
{
  unsigned int *v2; // r13
  unsigned int *v4; // r14
  int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // r12d
  _DWORD *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // r8
  __int64 v16; // rax
  struct _MDL *PagesForMdl; // rbp
  PMDL v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _MDL *v21; // rbx
  unsigned int *v22; // rax
  __int64 v23; // r12
  unsigned int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 i; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+98h] [rbp+10h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  v31 = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  v5 = 0;
  v6 = *((unsigned int *)this + 926);
  v7 = 0LL;
  v8 = 255;
  if ( !(_DWORD)v6 )
    goto LABEL_5;
  a2 = *((_QWORD *)this + 464);
  while ( 1 )
  {
    v9 = *(_DWORD **)(a2 + 8 * v7);
    if ( (v9[20] & 1) == 0 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= (unsigned int)v6 )
      goto LABEL_5;
  }
  v8 = v7;
  if ( (_DWORD)v7 == 255 )
  {
LABEL_5:
    v10 = WdLogNewEntry5_WdWarning(v6, a2);
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *, unsigned __int64 *))(*(_QWORD *)v9 + 184LL))(
           v9,
           1LL,
           &v31,
           &v30);
    if ( v5 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v13, v15);
      PagesForMdl = MmAllocatePagesForMdl(
                      gs_PhysicalAddressZero,
                      (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
                      gs_PhysicalAddressZero,
                      0x1000uLL);
      v18 = MmAllocatePagesForMdl(
              gs_PhysicalAddressZero,
              (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
              gs_PhysicalAddressZero,
              0x1000uLL);
      v21 = v18;
      if ( PagesForMdl
        && v18
        && (v2 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v22 = (unsigned int *)MmMapLockedPagesSpecifyCache(v21, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v4 = v22,
            v2)
        && v22 )
      {
        v23 = 0LL;
        if ( *((_DWORD *)this + 926) )
        {
          while ( 1 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v23) + 80LL) & 1) != 0 )
            {
              v5 = VIDMM_GLOBAL::ValidateApertureCoherency(this, v7, v30, v23, PagesForMdl, v2, v21, v4, 0);
              if ( v5 < 0 )
                break;
            }
            v23 = (unsigned int)(v23 + 1);
            if ( (unsigned int)v23 >= *((_DWORD *)this + 926) )
              goto LABEL_20;
          }
        }
        else
        {
LABEL_20:
          MmUnmapLockedPages(v2, PagesForMdl);
          v2 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
          MmUnmapLockedPages(v4, v21);
          v24 = (unsigned int *)MmMapLockedPagesSpecifyCache(v21, 0, MmCached, 0LL, 0, 0x40000010u);
          v4 = v24;
          if ( v2 && v24 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * i) + 80LL) & 0x11) == 0x11 )
              {
                v5 = VIDMM_GLOBAL::ValidateApertureCoherency(this, v7, v30, i, PagesForMdl, v2, v21, v4, 1u);
                if ( v5 < 0 )
                  break;
              }
            }
          }
          else
          {
            v28 = WdLogNewEntry5_WdWarning(v26, v25);
            WdLogEvent5_WdWarning(v28);
          }
        }
        v8 = v7;
      }
      else
      {
        v29 = WdLogNewEntry5_WdWarning(v20, v19);
        WdLogEvent5_WdWarning(v29);
      }
      if ( v4 )
        MmUnmapLockedPages(v4, v21);
      if ( v2 )
        MmUnmapLockedPages(v2, PagesForMdl);
      if ( v21 )
      {
        MmFreePagesFromMdl(v21);
        ExFreePoolWithTag(v21, 0);
      }
      if ( PagesForMdl )
      {
        MmFreePagesFromMdl(PagesForMdl);
        ExFreePoolWithTag(PagesForMdl, 0);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v14, v13);
      WdLogEvent5_WdWarning(v16);
      v5 = 0;
    }
  }
  if ( v31 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 192LL))(v11);
  }
  return (unsigned int)v5;
}
