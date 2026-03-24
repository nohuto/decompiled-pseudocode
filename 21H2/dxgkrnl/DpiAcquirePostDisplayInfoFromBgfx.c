/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1C017B43C
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0176470 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C017695C (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C01771F0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoDetectPostDevice @ 0x1C017B1B0 (DpiFdoDetectPostDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0199C54 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1C0192624 (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(__int64 a1, char a2, char a3)
{
  char v3; // r15
  char v4; // di
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // r14
  char v18; // r14
  PVOID PoolWithTag; // rsi
  KSPIN_LOCK *v20; // rdi
  NTSTATUS v21; // eax
  __int64 v22; // r12
  KSPIN_LOCK *v23; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _BYTE v29[4]; // [rsp+20h] [rbp-60h] BYREF
  NTSTATUS v30; // [rsp+24h] [rbp-5Ch]
  __int128 v31; // [rsp+28h] [rbp-58h] BYREF
  __int128 v32; // [rsp+38h] [rbp-48h]
  __int128 v33; // [rsp+48h] [rbp-38h]
  __int128 SystemInformation; // [rsp+58h] [rbp-28h] BYREF
  __int128 v35; // [rsp+68h] [rbp-18h]

  v29[0] = a2;
  v3 = 0;
  v4 = 0;
  SystemInformation = 0LL;
  v35 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( a3 )
  {
    if ( qword_1C00B2DB8 )
    {
      v7 = *(_QWORD *)(qword_1C00B2DB8 + 64);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v3 = *(_BYTE *)(v7 + 2741);
          if ( v3 )
            v4 = *(_BYTE *)(v7 + 2742);
        }
      }
    }
  }
  v8 = 0;
  v30 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( v30 >= 0 )
  {
    v10 = HIDWORD(SystemInformation);
    v8 = 1;
    v11 = SystemInformation;
    v12 = DWORD2(SystemInformation);
    *(_DWORD *)(a1 + 24) = -1;
    *(_DWORD *)(a1 + 28) = 0;
    *(_QWORD *)(a1 + 16) = v11;
    LODWORD(v11) = DWORD2(v35);
    *(_DWORD *)(a1 + 4) = v10;
    DWORD2(v32) = v10;
    v13 = v35;
    *(_DWORD *)a1 = v12;
    HIDWORD(v32) = v12;
    LODWORD(v33) = v13;
    v14 = v11 - 3;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v8 = 0;
LABEL_13:
        v16 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, (PVOID)(a1 + 32), 0x80u, 0LL);
        v17 = v16;
        if ( v16 < 0 )
        {
          memset((void *)(a1 + 32), 0, 0x80uLL);
          v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v28 + 24) = v17;
          WdLogEvent5_WdWarning(v28);
        }
        goto LABEL_15;
      }
      *(_DWORD *)(a1 + 12) = 22;
      v15 = 4 * v13;
      DWORD1(v33) = 5;
    }
    else
    {
      *(_DWORD *)(a1 + 12) = 20;
      v15 = 3 * v13;
      DWORD1(v33) = 4;
    }
    *(_DWORD *)(a1 + 8) = v15;
    goto LABEL_13;
  }
LABEL_15:
  if ( !v29[0] )
    goto LABEL_28;
  v18 = 0;
  v29[0] = 0;
  if ( v4 )
  {
    LOBYTE(v9) = v4;
    DxgDetermineBootImageMode(a1, 0LL, v9, v29);
    if ( !v29[0] || (int)InbvSetVirtualFrameBuffer(0LL, DpiEnterSystemDisplay) < 0 )
      goto LABEL_18;
  }
  else
  {
    if ( !a3 )
    {
LABEL_18:
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      goto LABEL_28;
    }
    PoolWithTag = 0LL;
    v20 = 0LL;
    if ( !v8 )
      goto LABEL_39;
    v21 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    v22 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 8));
    if ( v21 >= 0 )
      goto LABEL_39;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v22, 0x74727044u);
    v23 = (KSPIN_LOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x74727044u);
    v20 = v23;
    if ( !PoolWithTag || !v23 )
      goto LABEL_39;
    KeInitializeSpinLock(v23 + 3);
    *(_QWORD *)&v32 = v20;
    *(_QWORD *)&v31 = PoolWithTag;
    *((_QWORD *)&v31 + 1) = v22;
    if ( !v3 || DWORD2(SystemInformation) > 0xBB8 || (BYTE8(v33) = 0, HIDWORD(SystemInformation) > 0x7D0) )
      BYTE8(v33) = 1;
    if ( (int)InbvSetVirtualFrameBuffer(&v31, DpiEnterSystemDisplay) >= 0 )
    {
      DxgDetermineBootImageMode(a1, &v31, 0LL, v29);
      v18 = v29[0];
    }
    else
    {
LABEL_39:
      DxgDetermineBootImageMode(a1, 0LL, 0LL, 0LL);
    }
    if ( !v18 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x74727044u);
      if ( v20 )
        ExFreePoolWithTag(v20, 0x74727044u);
    }
  }
LABEL_28:
  if ( !v8 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = -1;
    memset((void *)(a1 + 32), 0, 0x80uLL);
  }
  return (unsigned int)v30;
}
