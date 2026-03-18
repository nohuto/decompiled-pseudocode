/*
 * XREFs of HMFreeObject @ 0x1C0070730
 * Callers:
 *     DestroyKL @ 0x1C004ED38 (DestroyKL.c)
 *     DestroyKF @ 0x1C004EDC8 (DestroyKF.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0055B68 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     DestroyMonitor @ 0x1C0057330 (DestroyMonitor.c)
 *     HMDestroyObject @ 0x1C005ADB0 (HMDestroyObject.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00A7048 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0050D24 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     UnlockObjectAssignment @ 0x1C00701F0 (UnlockObjectAssignment.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00712BC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0071484 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C0121D68 (HMCleanupGrantedHandle.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0131038 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall HMFreeObject(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  char *v4; // rbx
  char *v5; // rsi
  __int16 v6; // di
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  char v9; // al
  __int16 v10; // ax
  __int64 v11; // rbx
  PVOID *v13; // r15
  _QWORD *v14; // r8
  PVOID *v15; // rcx
  void *v16; // r8
  char EtwUserHandleType; // al
  int v18; // ecx
  int v19; // r8d
  void *v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0LL;
  GetDomainLockRef(14LL);
  v3 = *(unsigned int *)a1;
  v4 = (char *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)v3;
  v5 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)v3;
  v6 = *((_WORD *)&unk_1C020B6DC + 12 * (unsigned __int8)v4[24]);
  if ( *((_QWORD *)v5 + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(3LL * (unsigned __int8)v4[24]);
  if ( (v6 & 2) != 0 )
  {
    v7 = *((_QWORD *)v5 + 1);
  }
  else
  {
    if ( (v6 & 1) == 0 )
    {
      v7 = 0LL;
      goto LABEL_7;
    }
    v7 = *(_QWORD *)(*((_QWORD *)v5 + 1) + 416LL);
  }
  if ( v7 )
    --*(_DWORD *)(v7 + 68);
LABEL_7:
  --giheCount;
  if ( v7 )
    v8 = (unsigned __int64)PsGetProcessId(*(PEPROCESS *)v7) & 0xFFFFFFFC;
  else
    v8 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    EtwUserHandleType = GetEtwUserHandleType((unsigned __int8)v4[24], v3, v8);
    McTemplateK0pqqq_EtwWriteTransfer(v18, (unsigned int)&UserDestroyHandle, v19, **(_QWORD **)v5, EtwUserHandleType);
  }
  if ( (v4[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**(_QWORD **)v5);
    v4[25] &= ~0x20u;
  }
  if ( (v6 & 0x10) != 0 )
  {
    v13 = (PVOID *)a1[3];
    a1[3] = 0LL;
    if ( (v4[25] & 0x40) != 0 )
    {
      Win32FreePool(a1[5]);
      HMFreeUserOrIsolatedType(v6, v4[24], a1);
    }
    else
    {
      v14 = (_QWORD *)a1[5];
      if ( !v14 || v14 == a1 )
      {
        RtlFreeHeap(v13[16], 0, a1);
      }
      else
      {
        RtlFreeHeap(v13[16], 0, v14);
        if ( (v6 & 0x200) != 0 )
          HMFreeIsolatedType(v4[24], a1);
        else
          Win32FreePool(a1);
      }
    }
    if ( !v13 )
      goto LABEL_24;
    v15 = v13;
    goto LABEL_41;
  }
  if ( (v6 & 0x40) != 0 )
  {
    v16 = (void *)a1[5];
    if ( v16 )
    {
      RtlFreeHeap(gpvSharedAlloc, 0, v16);
      HMFreeUserOrIsolatedType(v6, v4[24], a1);
    }
    else
    {
      RtlFreeHeap(gpvSharedAlloc, 0, a1);
    }
    goto LABEL_24;
  }
  v9 = v4[24];
  if ( v9 == 19 )
  {
    v15 = *(PVOID **)(*(_QWORD *)v5 + 32LL);
    goto LABEL_41;
  }
  if ( v9 == 22 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
    v15 = *(PVOID **)(v1 + 32);
LABEL_41:
    ObfDereferenceObject(v15);
    goto LABEL_24;
  }
  if ( (v6 & 0x100) != 0 )
  {
    v20 = (void *)a1[3];
    UnlockObjectAssignment(&v20);
  }
  if ( (v6 & 0x200) != 0 )
  {
    HMFreeIsolatedType(v4[24], a1);
  }
  else if ( qword_1C0258BC0 && (int)qword_1C0258BC0(v7, v3, v8) >= 0 && qword_1C0258BC8 )
  {
    qword_1C0258BC8(a1);
  }
LABEL_24:
  v10 = *((_WORD *)v4 + 13) + 1;
  if ( *((_WORD *)v4 + 13) == 0xFFFE )
    v10 = 1;
  *(_OWORD *)v4 = 0LL;
  *((_OWORD *)v4 + 1) = 0LL;
  *(_OWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 2) = 0LL;
  *((_WORD *)v4 + 13) = v10;
  v11 = (v4 - (char *)qword_1C0250D48) >> 5;
  if ( (v11 & 1) != 0 )
  {
    *(_QWORD *)v5 = qword_1C0250CD0;
    qword_1C0250CD0 = v11;
  }
  else
  {
    *(_QWORD *)v5 = qword_1C0250CC8;
    qword_1C0250CC8 = v11;
  }
  if ( !gbInDestroyHandleTableObjects && v1 )
    HMUnlockObjectWorker(v1);
  return 1LL;
}
