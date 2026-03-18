/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x1C000B870
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x1C0004220 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000B0E0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F4B0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C00131B0 (Usbh_PCE_QueueDriverReset_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C002E288 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E354 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int *a3,
        int a4,
        __int64 a5)
{
  __int64 v6; // r14
  unsigned int v9; // ebp
  _DWORD *v10; // rdx
  char *PoolWithTag; // rax
  int v12; // edx
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  void (__fastcall *v22)(_QWORD, int *); // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // rcx
  __int64 v30; // rax
  int v31[14]; // [rsp+40h] [rbp-38h] BYREF

  v6 = a2;
  v9 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a2);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    goto LABEL_55;
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10);
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x38uLL, 0x42554855u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    v9 = 0;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_OWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1413771367;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v6;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
    if ( !(_WORD)v6 )
      goto LABEL_53;
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v16);
      if ( (unsigned __int16)v6 <= *(unsigned __int8 *)(v16 + 2938) )
      {
        v17 = *(_QWORD *)(v16 + 3056);
        if ( v17 )
        {
          v18 = v17 + 2928 * v6 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v19 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v19 = 1044672615;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 16) = v6;
            *(_QWORD *)(v19 + 24) = v18;
          }
          if ( v18 )
          {
            *((_WORD *)PoolWithTag + 2) = v6;
            v20 = *a3;
            *((_DWORD *)PoolWithTag + 2) = *a3;
            *(_DWORD *)PoolWithTag = 1145332592;
            v21 = *(_QWORD *)(a1 + 64);
            v31[0] = 0;
            if ( !v21 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v21 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v21);
            v22 = *(void (__fastcall **)(_QWORD, int *))(v21 + 4592);
            if ( v22 )
            {
              v22(*(_QWORD *)(v21 + 4560), v31);
              v23 = v31[0];
              v20 = *((_DWORD *)v13 + 2);
            }
            else
            {
              v23 = 0;
            }
            *((_QWORD *)v13 + 5) = a5;
            *((_DWORD *)v13 + 8) = v23;
            *((_DWORD *)v13 + 12) = a4;
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              v16 = *(_QWORD *)(a1 + 64);
              if ( v16 )
              {
                v24 = *(_QWORD *)(v16 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
                *(_DWORD *)v24 = 1145262193;
                *(_QWORD *)(v24 + 24) = v20;
                *(_QWORD *)(v24 + 8) = 0LL;
                *(_QWORD *)(v24 + 16) = v18;
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_dD(
                WPP_GLOBAL_Control->DeviceExtension,
                v16,
                v20,
                50,
                (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                v6,
                *((_DWORD *)v13 + 2));
            }
            if ( a4 != 1 )
            {
LABEL_30:
              v25 = *((_DWORD *)v13 + 2);
              if ( (v25 & 0x16) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v18 + 2876));
                v25 = *((_DWORD *)v13 + 2);
              }
              if ( (v25 & 1) != 0 )
              {
                if ( *(_BYTE *)(v18 + 2839) )
                {
                  ExFreePoolWithTag(v13, 0);
                  goto LABEL_35;
                }
                v26 = v18 + 456;
                *(_BYTE *)(v18 + 2839) = 1;
                v28 = *(_QWORD **)(v18 + 464);
                v27 = v13 + 16;
                if ( *v28 == v18 + 456 )
                  goto LABEL_34;
              }
              else
              {
                v26 = v18 + 456;
                v27 = v13 + 16;
                v28 = *(_QWORD **)(v18 + 464);
                if ( *v28 == v18 + 456 )
                {
LABEL_34:
                  *v27 = v26;
                  v27[1] = v28;
                  *v28 = v27;
                  *(_QWORD *)(v26 + 8) = v27;
                  KeSetEvent((PRKEVENT)(v18 + 496), 0, 0);
                  goto LABEL_35;
                }
              }
              __fastfail(3u);
            }
            v30 = UsbhLatchPdo(a1, (unsigned __int16)v6, v13, 1230065731LL);
            if ( v30 )
            {
              if ( v30 == a5 )
                goto LABEL_30;
              UsbhUnlatchPdo(a1, v30, v13, 1230065731LL);
            }
            ExFreePoolWithTag(v13, 0);
            v9 = -1073741811;
            goto LABEL_35;
          }
        }
      }
LABEL_53:
      ExFreePoolWithTag(PoolWithTag, 0);
      v9 = -1073741811;
      goto LABEL_35;
    }
LABEL_55:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_35:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1,
      51,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      v9);
  return v9;
}
