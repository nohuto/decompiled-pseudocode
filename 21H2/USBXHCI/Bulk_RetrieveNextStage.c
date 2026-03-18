/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C000E980
 * Callers:
 *     Bulk_MappingLoop @ 0x1C000E8C4 (Bulk_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDq @ 0x1C000B234 (WPP_RECORDER_SF_DDDq.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_Transfer_Complete @ 0x1C000BCF8 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000E3C8 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000EBF0 (WPP_RECORDER_SF_DDDqq.c)
 *     Bulk_Stage_Acquire @ 0x1C000ECDC (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C000EDD4 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C000EE44 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     TR_ValidateSecureTransferType @ 0x1C000EF9C (TR_ValidateSecureTransferType.c)
 *     Bulk_TransferData_Initialize @ 0x1C000EFC8 (Bulk_TransferData_Initialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C00400A0 (WPP_RECORDER_SF_DDDd.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C00456C4 (WPP_RECORDER_SF_DDDqd.c)
 */

bool __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // bp
  KSPIN_LOCK *v2; // r15
  int v4; // edi
  KIRQL v5; // al
  int v6; // r8d
  _QWORD *v7; // r13
  int v8; // r8d
  _DWORD *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 360) = 0LL;
  v31 = 0LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_DWORD *)(a1 + 344);
  *(_BYTE *)(a1 + 104) = v5;
  if ( *(_DWORD *)(a1 + 348) == v6 )
  {
    v4 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x14u,
        (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v6);
    goto LABEL_21;
  }
  v7 = (_QWORD *)(a1 + 368);
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_3;
  v10 = *(_DWORD **)(a1 + 376);
  v11 = v10[26];
  if ( v10[28] >= v11 )
    goto LABEL_3;
  if ( *(_DWORD *)(a1 + 332) != 3 )
  {
    v19 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 376));
    *(_QWORD *)(a1 + 360) = v19;
    if ( v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = *(_QWORD *)(a1 + 48);
        v22 = *(unsigned __int8 *)(v21 + 135);
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v21, v22, 21);
      }
    }
    else
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v20, 0x16u, v30);
    }
    goto LABEL_21;
  }
  if ( v10[30] == v10[29] )
  {
    Bulk_Transfer_CompleteCancelable(a1, *(__int64 **)(a1 + 376), 0xC0001000, 1);
LABEL_3:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v31);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v29 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v29) = 5;
          WPP_RECORDER_SF_DDDd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v29,
            v8,
            23,
            (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_DWORD *)(a1 + 64),
            v4);
        }
        return v4 >= 0;
      }
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              v31,
              off_1C0061090);
      Bulk_TransferData_Initialize(a1, v12, v31);
      if ( (int)TR_ValidateSecureTransferType(a1, *(_QWORD *)(v12 + 48)) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = *(_QWORD *)(a1 + 48);
          v24 = *(unsigned __int8 *)(v23 + 135);
          LOBYTE(v23) = 2;
          WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v23, v24, 24);
        }
      }
      else
      {
        Bulk_TransferData_DetermineTransferMechanism(v12);
        if ( (int)Bulk_TransferData_ConfigureBuffer(v12) < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = *(_QWORD *)(a1 + 48);
            v26 = *(unsigned __int8 *)(v25 + 135);
            LOBYTE(v25) = 3;
            WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v25, v26, 25);
          }
        }
        else
        {
          v13 = *(_QWORD *)(v12 + 24);
          *(_DWORD *)(v12 + 64) = 1;
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void (__fastcall *)(__int64)))(WdfFunctions_01023 + 3144))(
                 WdfDriverGlobals,
                 v13,
                 Bulk_WdfEvtRequestCancel);
          if ( v4 >= 0 )
          {
            v15 = Bulk_Stage_Acquire(v12);
            *(_QWORD *)(a1 + 360) = v15;
            if ( !*(_DWORD *)(a1 + 348) )
            {
              v16 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
              if ( *(_DWORD *)(v16 + 24) > 1u )
              {
                v28 = *(unsigned int *)(*(_QWORD *)(v12 + 48) + 64LL);
                if ( (unsigned int)v28 < *(_DWORD *)(v16 + 48) )
                  v1 = *(_WORD *)(*(_QWORD *)(v16 + 56) + 2 * v28);
              }
              *(_WORD *)(a1 + 112) = v1;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v17, v15, 27);
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
            v18 = *(__int64 **)(a1 + 376);
            if ( (_QWORD *)*v18 != v7 )
              __fastfail(3u);
            *(_QWORD *)v12 = v7;
            *(_QWORD *)(v12 + 8) = v18;
            *v18 = v12;
            *(_QWORD *)(a1 + 376) = v12;
            goto LABEL_21;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v27) = 3;
            WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v27, v14, 26);
          }
          *(_DWORD *)(v12 + 64) = 3;
        }
      }
      Bulk_Transfer_Complete(a1, v12);
    }
  }
  v10[28] = v11;
LABEL_21:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  return v4 >= 0;
}
