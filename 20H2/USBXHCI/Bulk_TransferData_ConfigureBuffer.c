/*
 * XREFs of Bulk_TransferData_ConfigureBuffer @ 0x1C000D19C
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v9; // rax
  PMDL Mdl; // rax
  int v11; // edx
  __int64 v12; // r10
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rcx
  PVOID v19; // rax
  char Priority; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  v4 = *(_WORD *)(v1 + 2);
  if ( v4 <= 0x38u || v4 > 0x3Au )
  {
    v5 = *(_DWORD *)(a1 + 76);
    v6 = *(_QWORD *)(a1 + 56);
    if ( v5 > 0 )
    {
      if ( v5 > 2 )
      {
        if ( v5 != 3 )
          return v2;
        v9 = *(_QWORD *)(v1 + 48);
        if ( v9 )
        {
          *(_QWORD *)(a1 + 80) = v9;
          return v2;
        }
        Mdl = IoAllocateMdl(*(PVOID *)(v1 + 40), *(_DWORD *)(a1 + 104), 0, 0, 0LL);
        *(_QWORD *)(a1 + 80) = Mdl;
        if ( !Mdl )
        {
          if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 || (v12 = *(_QWORD *)(v6 + 120)) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v16 = 40;
              v17 = *(_QWORD *)(v6 + 56);
              v22 = *(_DWORD *)(v6 + 64);
              v21 = *(_DWORD *)(v17 + 144);
              Priority = *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL);
LABEL_28:
              LOBYTE(v11) = 2;
              WPP_RECORDER_SF_ddL(
                *(_QWORD *)(v17 + 80),
                v11,
                14,
                v16,
                (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
                Priority,
                v21,
                v22);
            }
            return (unsigned int)-1073741670;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v13 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
            LOBYTE(v13) = 5;
            WPP_RECORDER_SF_ddL(
              *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
              v13,
              14,
              39,
              (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
              *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
              *(_DWORD *)(v6 + 64));
            v12 = *(_QWORD *)(v6 + 120);
          }
          v14 = *(unsigned int *)(a1 + 104);
          *(_QWORD *)(a1 + 80) = v12;
          v15 = *(_QWORD *)(v1 + 40);
          *(_QWORD *)v12 = 0LL;
          *(_WORD *)(v12 + 10) = 0;
          *(_DWORD *)(v12 + 40) = v14;
          *(_QWORD *)(v12 + 32) = v15 & 0xFFFFFFFFFFFFF000uLL;
          *(_WORD *)(v12 + 8) = 8 * ((((unsigned __int64)(v15 & 0xFFF) + v14 + 4095) >> 12) + 6);
          *(_DWORD *)(v12 + 44) = v15 & 0xFFF;
        }
        MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 80));
        return v2;
      }
      v7 = *(_QWORD *)(v1 + 40);
      if ( v7 )
      {
        *(_QWORD *)(a1 + 88) = v7;
        return v2;
      }
      v18 = *(_QWORD *)(v1 + 48);
      if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
        v19 = *(PVOID *)(v18 + 24);
      else
        v19 = MmMapLockedPagesSpecifyCache(
                (PMDL)v18,
                0,
                MmCached,
                0LL,
                0,
                LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) | 0x10u);
      *(_QWORD *)(a1 + 88) = v19;
      if ( !v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 38;
          v17 = *(_QWORD *)(v6 + 56);
          v11 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
          v22 = *(_DWORD *)(v6 + 64);
          v21 = *(_DWORD *)(v17 + 144);
          Priority = *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL);
          goto LABEL_28;
        }
        return (unsigned int)-1073741670;
      }
    }
  }
  return v2;
}
