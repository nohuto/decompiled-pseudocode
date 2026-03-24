/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C000CD50
 * Callers:
 *     Bulk_MappingLoop @ 0x1C000CC80 (Bulk_MappingLoop.c)
 * Callees:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000C124 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDq @ 0x1C000C774 (WPP_RECORDER_SF_DDDq.c)
 *     Bulk_Transfer_Complete @ 0x1C000C840 (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000CFB8 (WPP_RECORDER_SF_DDDqq.c)
 *     Bulk_Stage_Acquire @ 0x1C000D0A4 (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C000D19C (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C000D20C (Bulk_TransferData_DetermineTransferMechanism.c)
 *     TR_ValidateSecureTransferType @ 0x1C000D364 (TR_ValidateSecureTransferType.c)
 *     Bulk_TransferData_Initialize @ 0x1C000D390 (Bulk_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000E080 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C003F950 (WPP_RECORDER_SF_DDDd.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0045208 (WPP_RECORDER_SF_DDDqd.c)
 */

bool __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // bp
  KSPIN_LOCK *v2; // r15
  int v4; // edi
  KIRQL v5; // al
  int v6; // r8d
  _QWORD *v7; // r13
  _DWORD *v8; // rsi
  unsigned int v9; // ecx
  int v10; // r8d
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // rax
  int v19; // edx
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 360) = 0LL;
  v33 = 0LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_DWORD *)(a1 + 344);
  *(_BYTE *)(a1 + 104) = v5;
  if ( *(_DWORD *)(a1 + 348) == v6 )
  {
    v4 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v19) = 5;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v19,
        14,
        20,
        (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v6);
    }
    goto LABEL_20;
  }
  v7 = (_QWORD *)(a1 + 368);
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_4;
  v8 = *(_DWORD **)(a1 + 376);
  v9 = v8[26];
  if ( v8[28] >= v9 )
    goto LABEL_4;
  if ( *(_DWORD *)(a1 + 332) != 3 )
  {
    v20 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 376));
    *(_QWORD *)(a1 + 360) = v20;
    if ( v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(_QWORD *)(a1 + 48);
        v23 = *(unsigned __int8 *)(v22 + 135);
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v22, v23, 21);
      }
    }
    else
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v24) = 5;
        WPP_RECORDER_SF_DDDq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v24, v21, 22);
      }
    }
    goto LABEL_20;
  }
  if ( v8[30] == v8[29] )
  {
    Bulk_Transfer_CompleteCancelable(a1, *(__int64 **)(a1 + 376), 0xC0001000, 1);
LABEL_4:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v33);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v32 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v32) = 5;
          WPP_RECORDER_SF_DDDd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v32,
            v10,
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
              v33,
              off_1C0060090);
      Bulk_TransferData_Initialize(a1, v12, v33);
      if ( (int)TR_ValidateSecureTransferType(a1, *(_QWORD *)(v12 + 48)) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = *(_QWORD *)(a1 + 48);
          v26 = *(unsigned __int8 *)(v25 + 135);
          LOBYTE(v25) = 2;
          WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v25, v26, 24);
        }
        v27 = 2147484416LL;
      }
      else
      {
        Bulk_TransferData_DetermineTransferMechanism(v12);
        if ( (int)Bulk_TransferData_ConfigureBuffer(v12) < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = *(_QWORD *)(a1 + 48);
            v29 = *(unsigned __int8 *)(v28 + 135);
            LOBYTE(v28) = 3;
            WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v28, v29, 25);
          }
          v27 = 3221229568LL;
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
                v31 = *(unsigned int *)(*(_QWORD *)(v12 + 48) + 64LL);
                if ( (unsigned int)v31 < *(_DWORD *)(v16 + 48) )
                  v1 = *(_WORD *)(*(_QWORD *)(v16 + 56) + 2 * v31);
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
            goto LABEL_20;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v30) = 3;
            WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v30, v14, 26);
          }
          *(_DWORD *)(v12 + 64) = 3;
          v27 = 3221291008LL;
        }
      }
      Bulk_Transfer_Complete(a1, v12, v27);
    }
  }
  v8[28] = v9;
LABEL_20:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  return v4 >= 0;
}
