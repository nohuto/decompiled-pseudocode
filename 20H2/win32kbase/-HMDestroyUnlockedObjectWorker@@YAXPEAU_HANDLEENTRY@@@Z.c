/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648
 * Callers:
 *     HMUnlockObjectWorker @ 0x1C0021290 (HMUnlockObjectWorker.c)
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     DestroyThreadsObjects @ 0x1C0051B28 (DestroyThreadsObjects.c)
 *     HMUnlockObjectInternal @ 0x1C0054B50 (HMUnlockObjectInternal.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0056B00 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ThreadUnlockWorker1 @ 0x1C00873E0 (ThreadUnlockWorker1.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7700 (HMDestroyUnlockedObject.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0021290 (HMUnlockObjectWorker.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0021988 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C0021A3C (EtwTraceUserDestroyHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0056CE0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C0119598 (HMCleanupGrantedHandle.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD **v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  char EtwUserHandleType; // al
  char v10; // al
  void *v11; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v4 = (_QWORD **)gpKernelHandleTable;
  v5 = a1 - qword_1C0248D48;
  v6 = 0LL;
  *((_BYTE *)a1 + 25) |= 2u;
  v7 = *((unsigned __int8 *)a1 + 24);
  v8 = 3LL * (unsigned int)(v5 >> 5);
  if ( (_BYTE)v7 == 19 || (_BYTE)v7 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v7, v2, v3);
    EtwTraceUserDestroyHandle(*v4[v8], EtwUserHandleType, 0);
    if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v4[v8]);
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v10 = *((_BYTE *)a1 + 24);
    if ( v10 == 19 )
    {
      v11 = (void *)v4[v8][4];
    }
    else
    {
      if ( v10 != 22 )
      {
LABEL_15:
        HMRemoveHandleForObjectWorker((__int64)a1);
        goto LABEL_4;
      }
      v6 = v4[v8][2];
      v11 = *(void **)(v6 + 32);
    }
    ObfDereferenceObject(v11);
    goto LABEL_15;
  }
  (*(&gahti + 3 * v7))((ULONG_PTR)v4[3 * (unsigned int)(v5 >> 5)]);
LABEL_4:
  if ( !gbInDestroyHandleTableObjects && v6 )
    HMUnlockObjectWorker(v6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
}
