/*
 * XREFs of EtwpRundownNotifications @ 0x1406BCF58
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1406EC060 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     EtwpReleaseQueueEntry @ 0x1406BBBFC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1406BBC64 (EtwpUnreferenceDataBlock.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  volatile signed __int32 **v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 1424);
  if ( v2 )
  {
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = v2 + 16;
    ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
    v6 = (_QWORD *)(v2 + 24);
    v7 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v12 = v7;
      v7 = (_QWORD *)*v7;
      if ( v12[3] == a2 )
      {
        if ( (_QWORD *)v7[1] != v12
          || (v13 = (_QWORD *)v12[1], (_QWORD *)*v13 != v12)
          || (*v13 = v7, v7[1] = v13, v14 = P[0], *((PVOID **)P[0] + 1) != P) )
        {
LABEL_15:
          __fastfail(3u);
        }
        *v12 = P[0];
        v12[1] = P;
        v14[1] = v12;
        P[0] = v12;
      }
    }
    ExReleasePushLockEx(v5, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    while ( 1 )
    {
      v11 = (volatile signed __int32 **)P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P )
        goto LABEL_15;
      v15 = *(_QWORD *)P[0];
      if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
        goto LABEL_15;
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v15 + 8) = P;
      EtwpUnreferenceDataBlock(v11[2]);
      EtwpReleaseQueueEntry((PADAPTER_OBJECT *)v11, 1);
    }
  }
}
