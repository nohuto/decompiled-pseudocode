/*
 * XREFs of InitPepPerfStates @ 0x1C0035900
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002A3A0 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000548C (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00205D0 (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C00360D0 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C00361E0 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int *v3; // r14
  _DWORD *v4; // r13
  unsigned __int16 v5; // r9
  int v6; // ebx
  unsigned int v7; // edi
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  int FeedbackCounters; // eax
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int v13; // ecx
  int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // r10d
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // r9
  unsigned int *v20; // rsi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  __int64 v25; // rdx
  size_t v26; // rbx
  _DWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  char v31; // cl
  char v32; // r10
  char v33; // r11
  char v34; // bl
  __int64 i; // r8
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // eax
  unsigned __int16 v39; // r9
  _DWORD *v40; // rax
  __int64 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h]
  unsigned int v44; // [rsp+40h] [rbp-58h]
  _DWORD v45[2]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD *v46; // [rsp+50h] [rbp-48h]
  char v47; // [rsp+A0h] [rbp+8h]
  int v48; // [rsp+A8h] [rbp+10h] BYREF
  int v49; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v50; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 208);
  v48 = 0;
  v49 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = 0LL;
  v4 = 0LL;
  if ( !*(_BYTE *)(a1 + 1121) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v6 = -1073741823;
      goto LABEL_110;
    }
    v5 = 10;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v5,
      (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids);
    goto LABEL_5;
  }
  v7 = *(_DWORD *)(a1 + 1112);
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v5 = 11;
    goto LABEL_4;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1168) = WorkItem;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0xCu,
        (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids);
    goto LABEL_12;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v7 + 56, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    v6 = -1073741670;
    goto LABEL_110;
  }
  memset(PoolWithTag, 0, 8 * v7 + 56);
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v7, v3 + 14);
  v6 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_110;
    v11 = 13;
    goto LABEL_17;
  }
  v13 = 0;
  v14 = -1;
  v15 = -1;
  while ( v13 < v7 )
  {
    if ( !v3[2 * v13 + 15] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 14;
        goto LABEL_36;
      }
      goto LABEL_109;
    }
    v16 = v3[2 * v13 + 14];
    if ( ((v16 >> 1) & 3) > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v19 = 15;
      goto LABEL_42;
    }
    v17 = v16 & 0x78;
    if ( v17 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v19 = 16;
LABEL_42:
      LODWORD(v43) = (v3[2 * v13 + 14] >> 1) & 3;
      LODWORD(v42) = v13;
LABEL_43:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v19,
        (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
        v42,
        v43);
      goto LABEL_109;
    }
    if ( (v16 & 0x81) == 0x80 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 17;
        goto LABEL_36;
      }
LABEL_109:
      v6 = -1073741811;
      goto LABEL_110;
    }
    if ( v16 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 18;
LABEL_36:
        LODWORD(v42) = v13;
LABEL_37:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v18,
          (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
          v42);
      }
      goto LABEL_109;
    }
    if ( (v16 & 0x78) == 0 && v15 == -1 )
      v15 = v13;
    if ( v17 == 8 && v14 == -1 )
      v14 = v13;
    ++v13;
  }
  if ( v15 != -1 )
  {
    v20 = v3 + 3;
    v3[4] = v3[2 * v15 + 15];
    v3[12] = v15;
    v3[13] = v14;
    FeedbackCounters = PepNotifyQueryPerfCapabilities(
                         a1,
                         (_DWORD)v3,
                         (int)v3 + 4,
                         (int)v3 + 8,
                         (__int64)(v3 + 3),
                         (__int64)&v48,
                         (__int64)&v49);
    v6 = FeedbackCounters;
    if ( FeedbackCounters >= 0 )
    {
      v21 = *v3;
      v22 = v3[1];
      if ( *v3 >= v22 && (v23 = v3[2], v22 >= v23) && (v24 = *v20, v23 >= *v20) && v24 )
      {
        v25 = *(unsigned __int8 *)(a1 + 1120);
        if ( !(_BYTE)v25 )
        {
LABEL_102:
          v3[5] = 100 * v21 / v22;
          v3[6] = 100 * v23 / v22;
          v3[7] = 100 * v24 / v22;
          v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
          if ( v40 )
          {
            v40[2] = 0;
            *v40 = 1;
            v40[1] = 5;
            v40[3] = v48;
            v40[5] = v49;
            v40[4] = 1;
            *(_QWORD *)(a1 + 1192) = v40;
            *(_QWORD *)(a1 + 1176) = v3;
            v4 = 0LL;
            v3 = 0LL;
            v6 = 0;
            ProcLibTracePepPerfCapabilities(a1, 0);
            goto LABEL_110;
          }
          v6 = -1073741670;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_110;
          v11 = 30;
          LODWORD(v42) = -1073741670;
          v12 = 2;
          goto LABEL_19;
        }
        v26 = 24 * v25;
        v27 = ExAllocatePoolWithTag(NonPagedPoolNx, 24 * v25, 0x72637250u);
        v4 = v27;
        if ( !v27 )
          goto LABEL_12;
        memset(v27, 0, v26);
        v28 = *(unsigned __int8 *)(a1 + 1120);
        v29 = *(_QWORD *)(a1 + 1104);
        v45[1] = 0;
        v45[0] = v28;
        v46 = v4;
        v30 = PoFxProcessorNotification(v29, 41LL, v45);
        v6 = v30;
        if ( v30 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v42) = v30;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            2u,
            0x22u,
            (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
            v42);
        }
        if ( v6 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_110;
          v11 = 22;
          LODWORD(v42) = v6;
          goto LABEL_18;
        }
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v47 = 0;
        v34 = 0;
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v36 = *(unsigned __int8 *)(a1 + 1120);
          if ( (unsigned int)i >= v36 )
            break;
          v4[6 * i + 2] = 100 * v4[6 * i] / v3[1];
          v37 = v4[6 * i];
          v44 = v3[3];
          if ( v37 < v44 || (v38 = *v3, v50 = v38, v37 > v38) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v18 = 23;
LABEL_86:
              LODWORD(v42) = i;
              goto LABEL_37;
            }
            goto LABEL_109;
          }
          if ( (_DWORD)i )
          {
            if ( v37 >= v4[6 * (unsigned int)(i - 1)] )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_109;
              v19 = 24;
              LODWORD(v43) = i - 1;
              LODWORD(v42) = i;
              goto LABEL_43;
            }
            v38 = v50;
            v31 = v47;
          }
          if ( v37 == v38 )
            v32 = 1;
          if ( v37 == v44 )
            v33 = 1;
          if ( v37 == v3[2] )
            v34 = 1;
          if ( v37 == v3[1] )
          {
            v31 = 1;
            v47 = 1;
            if ( v4[6 * i + 1] != v3[4] )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_109;
              v18 = 25;
              goto LABEL_86;
            }
          }
        }
        if ( v32 )
        {
          if ( v33 )
          {
            if ( v34 )
            {
              if ( v31 )
              {
                v22 = v3[1];
                v23 = v3[2];
                v24 = v3[3];
                *((_BYTE *)v3 + 32) = v36;
                v21 = *v3;
                *((_QWORD *)v3 + 5) = v4;
                goto LABEL_102;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_109;
              v39 = 29;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_109;
              v39 = 28;
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_109;
            v39 = 27;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_109;
          v39 = 26;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_109;
        v39 = 21;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v39,
        (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids);
      goto LABEL_109;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_110;
    v11 = 20;
LABEL_17:
    LODWORD(v42) = FeedbackCounters;
LABEL_18:
    v12 = 3;
LABEL_19:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      3u,
      v11,
      (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
      v42);
    goto LABEL_110;
  }
  v6 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x13u,
      (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids);
LABEL_110:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v6;
}
