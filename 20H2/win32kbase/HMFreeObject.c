/*
 * XREFs of HMFreeObject @ 0x1C00213D0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C001FD54 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     HMDestroyObject @ 0x1C0021390 (HMDestroyObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C008A588 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     DestroyMonitor @ 0x1C00B4360 (DestroyMonitor.c)
 *     DestroyKL @ 0x1C00BCED8 (DestroyKL.c)
 *     DestroyKF @ 0x1C00BCF68 (DestroyKF.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0021290 (HMUnlockObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C0021A3C (EtwTraceUserDestroyHandle.c)
 *     UnlockObjectAssignment @ 0x1C0052170 (UnlockObjectAssignment.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0056CE0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0057A20 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     SharedFree @ 0x1C00A11C0 (SharedFree.c)
 *     HMCleanupGrantedHandle @ 0x1C0119598 (HMCleanupGrantedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall HMFreeObject(_DWORD *a1)
{
  __int64 v2; // r15
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  _QWORD *v6; // r14
  char *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
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
  v5 = (unsigned __int64)&unk_1C020365C;
  v6 = gpKernelHandleTable;
  v7 = (char *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)v4;
  v8 = 3LL * (unsigned __int16)v4;
  v9 = (unsigned __int8)v7[24];
  v10 = *((_WORD *)&unk_1C020365C + 12 * v9);
  if ( a1[2] )
  {
    v5 = (unsigned __int8)v7[24];
    if ( (unsigned int)v9 > 0xC )
    {
      if ( (unsigned int)v9 > 0x12 )
      {
        v5 = (unsigned int)(v9 - 19);
        if ( (_DWORD)v9 != 19 )
        {
          v5 = (unsigned int)(v9 - 20);
          if ( (_DWORD)v9 != 20 )
          {
            v5 = (unsigned int)(v9 - 21);
            if ( (_DWORD)v9 != 21 )
              v5 = (unsigned int)(v9 - 22);
          }
        }
      }
      else if ( (_DWORD)v9 != 18 )
      {
        v5 = (unsigned int)(v9 - 13);
        if ( (_DWORD)v9 != 13 )
        {
          v5 = (unsigned int)(v9 - 14);
          if ( (_DWORD)v9 != 14 )
          {
            v5 = (unsigned int)(v9 - 15);
            if ( (_DWORD)v9 != 15 )
              v5 = (unsigned int)(v9 - 16);
          }
        }
      }
    }
    else if ( (_DWORD)v9 != 12 )
    {
      if ( (unsigned int)v9 > 6 )
      {
        v5 = (unsigned int)(v9 - 7);
        if ( (_DWORD)v9 != 7 )
        {
          v5 = (unsigned int)(v9 - 8);
          if ( (_DWORD)v9 != 8 )
          {
            v5 = (unsigned int)(v9 - 9);
            if ( (_DWORD)v9 != 9 )
              v5 = (unsigned int)(v9 - 10);
          }
        }
      }
      else if ( (_DWORD)v9 != 6 )
      {
        if ( !(_BYTE)v9 )
          goto LABEL_38;
        v5 = (unsigned int)(v9 - 1);
        if ( (_DWORD)v9 != 1 )
        {
          v5 = (unsigned int)(v9 - 2);
          if ( (_DWORD)v9 != 2 )
          {
            v5 = (unsigned int)(v9 - 3);
            if ( (_DWORD)v9 != 3 )
              v5 = (unsigned int)(v9 - 4);
          }
        }
      }
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v9, v4, v3);
  }
LABEL_38:
  if ( !v7[24] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v9, v4, v3);
  if ( v6[v8 + 2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v9, v4, v3);
  if ( (v10 & 2) != 0 )
  {
    v11 = v6[v8 + 1];
  }
  else if ( (v10 & 1) != 0 )
  {
    v11 = *(_QWORD *)(v6[v8 + 1] + 424LL);
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
  EtwUserHandleType = GetEtwUserHandleType(v11, v9, v12);
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
        goto LABEL_62;
      }
      RtlFreeHeap(*(PVOID *)(v14 + 128), 0, v16);
    }
    else
    {
      Win32FreePool(*((_QWORD *)a1 + 5));
    }
    HMFreeUserOrIsolatedType(v10, v7[24], a1);
LABEL_62:
    UnlockObjectAssignment(&v26);
    goto LABEL_76;
  }
  if ( (v10 & 0x40) != 0 )
  {
    v17 = (void *)*((_QWORD *)a1 + 5);
    if ( !v17 )
    {
      SharedFree(a1);
      goto LABEL_76;
    }
    SharedFree(v17);
    v18 = v7[24];
    goto LABEL_72;
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
LABEL_72:
      HMFreeUserOrIsolatedType(v10, v18, a1);
      goto LABEL_76;
    }
    v2 = *(_QWORD *)(v6[v8] + 16LL);
    v20 = *(void **)(v2 + 32);
  }
  ObfDereferenceObject(v20);
LABEL_76:
  v21 = *((_WORD *)v7 + 13) + 1;
  *(_OWORD *)v7 = 0LL;
  *((_OWORD *)v7 + 1) = 0LL;
  *(_OWORD *)&v6[v8] = 0LL;
  v6[v8 + 2] = 0LL;
  v22 = 1;
  if ( v21 != -1 )
    v22 = v21;
  *((_WORD *)v7 + 13) = v22;
  v23 = (v7 - (char *)qword_1C0248D48) >> 5;
  if ( (v23 & 1) != 0 )
  {
    v6[v8] = qword_1C0248CD0;
    qword_1C0248CD0 = v23;
  }
  else
  {
    v6[v8] = qword_1C0248CC8;
    qword_1C0248CC8 = v23;
  }
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObjectWorker(v2);
  return 1LL;
}
