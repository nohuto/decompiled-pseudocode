/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x14062466C
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x1406230F8 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14062413C (PiDqIrpQueryCreate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     PiDqQueryGetObjectManager @ 0x1406238BC (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1406249E8 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataCreate @ 0x140624A2C (PiDqActionDataCreate.c)
 *     PiDqActionDataFree @ 0x140624BD4 (PiDqActionDataFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqQuerySerializeActionQueue(KSPIN_LOCK a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // r15
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _ERESOURCE *ObjectManager; // rax
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD v34[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+40h] [rbp-48h] BYREF
  int v36; // [rsp+48h] [rbp-40h]
  int v37; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+50h] [rbp-38h]
  __int64 v39; // [rsp+58h] [rbp-30h]
  PVOID v40; // [rsp+98h] [rbp+10h] BYREF
  int *v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v7 = 0;
  v34[0] = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v35 = a2;
  v36 = a3;
  v37 = 16;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = a1 + 64;
  v34[1] = a1 + 64;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  v10 = *(_DWORD *)(a1 + 216);
  ExReleasePushLockEx(v9, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( (v10 & 0x20) == 0 )
  {
    ObjectManager = PiDqQueryGetObjectManager(a1);
    v7 = PiDqObjectManagerEnumerateAndRegisterQuery(ObjectManager, a1);
  }
  if ( v7 < 0 )
  {
LABEL_30:
    *a4 = 0;
    *a5 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v35, PiDqSerializationAlloc, PiDqSerializationWrite, v34);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v34[0], &v35, 0LL, 0LL, 0LL, *(_DWORD *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a4 = v37;
        *a5 = 0;
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v9, 0LL);
        v40 = *(PVOID *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        ExReleasePushLockEx(v9, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
        do
        {
          if ( v40 )
          {
            NdrMesTypeEncode3(v34[0], "TP 3\a", &off_140003BB0, &off_140C01A50, 1, &v40);
            if ( BYTE5(v39) )
            {
              v7 = -1073741819;
              goto LABEL_30;
            }
            if ( BYTE4(v39) )
            {
              v30 = KeGetCurrentThread();
              --v30->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v9, 0LL);
              *(_QWORD *)(a1 + 184) = v40;
              v40 = 0LL;
              ExReleasePushLockEx(v9, 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
              *a5 = v39 + 16;
              break;
            }
            *a4 = v37;
            PiDqActionDataFree(v40);
            v40 = 0LL;
          }
          v19 = KeGetCurrentThread();
          --v19->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v9, 0LL);
          v20 = (_QWORD *)(a1 + 192);
          v21 = *(__int64 **)(a1 + 192);
          if ( v21 == (__int64 *)(a1 + 192) )
          {
            ExReleasePushLockEx(v9, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
            break;
          }
          v22 = *v21;
          if ( (_QWORD *)v21[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
            __fastfail(3u);
          *v20 = v22;
          *(_QWORD *)(v22 + 8) = v20;
          --*(_DWORD *)(a1 + 208);
          ExReleasePushLockEx(v9, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
          v7 = PiDqActionDataCreate(*(_QWORD *)(a1 + 24), a1 + 32, v21, &v40);
          PiDqQueryActionQueueEntryFree(v21);
          if ( v7 == -1073741772 )
            v7 = 0;
        }
        while ( v7 >= 0 );
      }
    }
    if ( v7 < 0 )
      goto LABEL_30;
  }
  if ( v40 )
    PiDqActionDataFree(v40);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v34[0] )
    MesHandleFree();
  return (unsigned int)v7;
}
