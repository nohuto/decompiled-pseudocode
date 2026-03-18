/*
 * XREFs of HMFreeObject @ 0x1C0017080
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0012894 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     HMDestroyObject @ 0x1C0017040 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C0019D20 (DestroyMonitor.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0041D24 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     DestroyKL @ 0x1C005C948 (DestroyKL.c)
 *     DestroyKF @ 0x1C005C9D8 (DestroyKF.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0016F40 (HMUnlockObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00174EC (EtwTraceUserDestroyHandle.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     SharedFree @ 0x1C003DDA0 (SharedFree.c)
 *     UnlockObjectAssignment @ 0x1C0076460 (UnlockObjectAssignment.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00956EC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0096F30 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     HMCleanupGrantedHandle @ 0x1C011B058 (HMCleanupGrantedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall HMFreeObject(_DWORD *a1)
{
  __int64 v2; // r15
  __int64 v3; // r9
  __int64 v4; // r8
  void *v5; // rdx
  _QWORD *v6; // r14
  char *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int16 v10; // bp
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned int EtwUserHandleType; // eax
  __int64 v14; // rcx
  bool v15; // zf
  _DWORD *v16; // r8
  void *v17; // rcx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // al
  void *v20; // rcx
  __int16 v21; // cx
  __int16 v22; // ax
  __int64 v23; // rbx
  _BYTE v25[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v25);
  v4 = (unsigned int)*a1;
  v5 = &unk_1C02056CC;
  v6 = gpKernelHandleTable;
  v7 = (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)v4;
  v8 = 3LL * (unsigned __int16)v4;
  v9 = (unsigned __int8)v7[24];
  v10 = *((_WORD *)&unk_1C02056CC + 12 * v9);
  if ( a1[2] )
  {
    if ( (unsigned int)v9 <= 5 )
    {
      if ( !v7[24] )
        goto LABEL_8;
      v9 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v9 )
      {
        v9 = (unsigned int)(v9 - 1);
        if ( (_DWORD)v9 )
          v9 = (unsigned int)(v9 - 1);
      }
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, &unk_1C02056CC, v4, v3);
  }
LABEL_8:
  if ( !v7[24] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v5, v4, v3);
  if ( v6[v8 + 2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v5, v4, v3);
  if ( (v10 & 2) != 0 )
  {
    v11 = v6[v8 + 1];
  }
  else if ( (v10 & 1) != 0 )
  {
    v11 = *(_QWORD *)(v6[v8 + 1] + 416LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
    --*(_DWORD *)(v11 + 68);
  --giheCount;
  if ( v11 )
    v12 = (unsigned __int64)PsGetProcessId(*(PEPROCESS *)v11) & 0xFFFFFFFC;
  else
    v12 = 0LL;
  LOBYTE(v11) = v7[24];
  EtwUserHandleType = GetEtwUserHandleType(v11, v5, v12);
  EtwTraceUserDestroyHandle(*(_QWORD *)v6[v8], EtwUserHandleType);
  if ( (v7[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(*(_QWORD *)v6[v8]);
    v7[25] &= ~0x20u;
  }
  if ( (v10 & 0x10) != 0 )
  {
    v14 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = 0LL;
    v15 = (v7[25] & 0x40) == 0;
    v26 = v14;
    if ( v15 )
    {
      v16 = (_DWORD *)*((_QWORD *)a1 + 5);
      if ( !v16 || v16 == a1 )
      {
        RtlFreeHeap(*(PVOID *)(v14 + 128), 0, a1);
        goto LABEL_32;
      }
      RtlFreeHeap(*(PVOID *)(v14 + 128), 0, v16);
    }
    else
    {
      Win32FreePool(*((_QWORD *)a1 + 5));
    }
    HMFreeUserOrIsolatedType(v10, v7[24], a1);
LABEL_32:
    UnlockObjectAssignment(&v26);
    goto LABEL_46;
  }
  if ( (v10 & 0x40) != 0 )
  {
    v17 = (void *)*((_QWORD *)a1 + 5);
    if ( !v17 )
    {
      SharedFree(a1);
      goto LABEL_46;
    }
    SharedFree(v17);
    v18 = v7[24];
    goto LABEL_42;
  }
  v19 = v7[24];
  if ( v19 == 19 )
  {
    v20 = *(void **)(v6[v8] + 32LL);
  }
  else
  {
    if ( v19 != 22 )
    {
      if ( (v10 & 0x100) != 0 )
      {
        v26 = *((_QWORD *)a1 + 3);
        UnlockObjectAssignment(&v26);
        v19 = v7[24];
      }
      v18 = v19;
LABEL_42:
      HMFreeUserOrIsolatedType(v10, v18, a1);
      goto LABEL_46;
    }
    v2 = *(_QWORD *)(v6[v8] + 16LL);
    v20 = *(void **)(v2 + 32);
  }
  ObfDereferenceObject(v20);
LABEL_46:
  v21 = *((_WORD *)v7 + 13) + 1;
  *(_OWORD *)v7 = 0LL;
  *((_OWORD *)v7 + 1) = 0LL;
  *(_OWORD *)&v6[v8] = 0LL;
  v6[v8 + 2] = 0LL;
  v22 = 1;
  if ( v21 != -1 )
    v22 = v21;
  *((_WORD *)v7 + 13) = v22;
  v23 = (v7 - (char *)qword_1C024AD48) >> 5;
  if ( (v23 & 1) != 0 )
  {
    v6[v8] = qword_1C024ACD0;
    qword_1C024ACD0 = v23;
  }
  else
  {
    v6[v8] = qword_1C024ACC8;
    qword_1C024ACC8 = v23;
  }
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObjectWorker(v2);
  return 1LL;
}
