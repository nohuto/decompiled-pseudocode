/*
 * XREFs of Control_MapTransfer @ 0x1C0003FBC
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0003DB0 (Control_WdfEvtIoDefault.c)
 *     Control_EP_StartMapping @ 0x1C000ED30 (Control_EP_StartMapping.c)
 * Callees:
 *     Control_Transfer_Map @ 0x1C00040CC (Control_Transfer_Map.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C00041A4 (Control_Transfer_CompleteCancelable.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     TR_AcquireDoubleBuffer @ 0x1C000D28C (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C000D330 (TR_IsUrbUsingChainedMdl.c)
 */

void __fastcall Control_MapTransfer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  bool v7; // zf
  int v8; // eax
  int v9; // edi
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  PMDL Mdl; // rax
  __int64 v16; // r10
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // edx
  char v21; // di
  __int64 v22; // rcx
  PVOID v23; // rax
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx

  v1 = *(_QWORD *)(a1 + 344);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 48);
  if ( v3 )
  {
    if ( v3 <= 8 && *(_BYTE *)(a1 + 320) && (*(_DWORD *)(v4 + 32) & 1) == 0 )
    {
      v8 = 1;
    }
    else if ( (unsigned __int8)TR_IsUrbUsingChainedMdl(v4)
           || v5 > *(_DWORD *)(a1 + 24)
           || (v6 = TR_AcquireDoubleBuffer(a1), *(_QWORD *)(v1 + 88) = v6, v7 = v6 == 0, v8 = 2, v7) )
    {
      v8 = 3;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(v1 + 64) = v8;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 344);
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)(v10 + 48);
  if ( v11 > 0 )
  {
    if ( v11 > 2 )
    {
      if ( v11 == 3 )
      {
        v14 = *(_QWORD *)(v12 + 48);
        if ( v14 )
        {
          *(_QWORD *)(v10 + 72) = v14;
          goto LABEL_12;
        }
        Mdl = IoAllocateMdl(*(PVOID *)(v12 + 40), *(_DWORD *)(v10 + 104), 0, 0, 0LL);
        *(_QWORD *)(v10 + 72) = Mdl;
        if ( !Mdl )
        {
          if ( (*(_DWORD *)(v12 + 32) & 0x10) == 0 || (v16 = *(_QWORD *)(a1 + 120)) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v20) = 2;
              WPP_RECORDER_SF_dd(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v20,
                14,
                28,
                (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
            }
            v9 = -1073741670;
            goto LABEL_34;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v17) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v17,
              14,
              27,
              (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
            v16 = *(_QWORD *)(a1 + 120);
          }
          v18 = *(unsigned int *)(v10 + 104);
          *(_QWORD *)(v10 + 72) = v16;
          v19 = *(_QWORD *)(v12 + 40);
          *(_QWORD *)v16 = 0LL;
          *(_WORD *)(v16 + 10) = 0;
          *(_DWORD *)(v16 + 40) = v18;
          *(_QWORD *)(v16 + 32) = v19 & 0xFFFFFFFFFFFFF000uLL;
          *(_WORD *)(v16 + 8) = 8 * ((((unsigned __int64)(v19 & 0xFFF) + v18 + 4095) >> 12) + 6);
          *(_DWORD *)(v16 + 44) = v19 & 0xFFF;
        }
        MmBuildMdlForNonPagedPool(*(PMDL *)(v10 + 72));
        goto LABEL_12;
      }
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 40);
      if ( v13 )
      {
        *(_QWORD *)(v10 + 80) = v13;
LABEL_12:
        v9 = Control_Transfer_ValidateBuffer(a1);
        if ( v9 >= 0 )
        {
          v9 = Control_Transfer_Map(a1);
          if ( v9 >= 0 )
            return;
        }
        goto LABEL_34;
      }
      v22 = *(_QWORD *)(v12 + 48);
      if ( (*(_BYTE *)(v22 + 10) & 5) != 0 )
        v23 = *(PVOID *)(v22 + 24);
      else
        v23 = MmMapLockedPagesSpecifyCache(
                (PMDL)v22,
                0,
                MmCached,
                0LL,
                0,
                LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) | 0x10u);
      *(_QWORD *)(v10 + 80) = v23;
      if ( !v23 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v24) = 2;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v24,
            14,
            26,
            (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
        }
        v9 = -1073741670;
      }
    }
  }
  if ( v9 >= 0 )
    goto LABEL_12;
LABEL_34:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(*(_QWORD *)(a1 + 344) + 120LL) = v9;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    *(_DWORD *)(a1 + 108) = 2;
    v21 = 0;
    Control_Transfer_CompleteCancelable(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 108) = 0;
    v21 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v21 )
  {
    v25 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v25 + 37)
      || (v26 = *(_QWORD *)(v25 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 20)) == *(_DWORD *)(v26 + 8)) )
    {
      ESM_AddEvent((PVOID)(v25 + 288));
    }
  }
}
