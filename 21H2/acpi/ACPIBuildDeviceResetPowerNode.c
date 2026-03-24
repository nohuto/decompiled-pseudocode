/*
 * XREFs of ACPIBuildDeviceResetPowerNode @ 0x1C004B128
 * Callers:
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C00157E0 (ACPIBuildProcessDevicePhasePrr.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C002C784 (WPP_RECORDER_SF_sqss.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C004CCCC (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildDeviceResetPowerNode(_QWORD *BugCheckParameter2, __int64 *BugCheckParameter3, __int64 a3)
{
  _OWORD *PoolWithTag; // rax
  unsigned int v7; // esi
  _OWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r9
  void *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rdx
  __int64 v18; // r9
  const char *v19; // rcx
  const char *v20; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x50706341u);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    BugCheckParameter2[51] = v8;
    v9 = *(_QWORD *)(a3 + 32);
    v22 = 0LL;
    if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v9 + 40), BugCheckParameter3, (unsigned __int64 *)&v22, 0) < 0 )
    {
      v10 = BugCheckParameter2[1];
      v11 = &unk_1C00701BA;
      if ( (v10 & 0x200000000000LL) != 0 && (v10 & 0x400000000000LL) != 0 )
        v11 = (void *)BugCheckParameter2[72];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, 0, (_DWORD)v11, 15);
      KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v9 + 40));
    }
    v12 = v22;
    if ( !v22 || *(_WORD *)(*(_QWORD *)v22 + 66LL) != 11 )
    {
      v18 = BugCheckParameter2[1];
      v19 = (const char *)&unk_1C00701BA;
      v20 = (const char *)&unk_1C00701BA;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v19 = (const char *)BugCheckParameter2[71];
        if ( (v18 & 0x400000000000LL) != 0 )
          v20 = (const char *)BugCheckParameter2[72];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x10u,
          BugCheckParameter4,
          *(const char **)(v9 + 40),
          (char)BugCheckParameter2,
          v19,
          v20);
      KeBugCheckEx(0xA5u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v9 + 40));
    }
    v13 = *(_QWORD *)(*(_QWORD *)v22 + 104LL);
    *((_QWORD *)v8 + 1) = v13;
    v14 = v13 + 48;
    *((_DWORD *)v8 + 4) = 7;
    *((_QWORD *)v8 + 4) = BugCheckParameter2;
    *((_DWORD *)v8 + 5) = 5;
    v15 = (_QWORD *)v8 + 5;
    v16 = *(_QWORD **)(v14 + 8);
    if ( *v16 != v14 )
      __fastfail(3u);
    *v15 = v14;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v14 + 8) = v15;
    AMLIDereferenceHandleEx(v12);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
