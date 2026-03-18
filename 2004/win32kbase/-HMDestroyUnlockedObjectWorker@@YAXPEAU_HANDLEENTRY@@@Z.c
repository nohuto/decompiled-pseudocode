/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007447C
 * Callers:
 *     HMUnlockObjectWorker @ 0x1C0016F40 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C0023DF0 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectInternal @ 0x1C00763C0 (HMUnlockObjectInternal.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00953E0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C00955C0 (DestroyThreadsObjects.c)
 *     HMDestroyUnlockedObject @ 0x1C00C8490 (HMDestroyUnlockedObject.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0016F40 (HMUnlockObjectWorker.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0017438 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00174EC (EtwTraceUserDestroyHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00956EC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C011B058 (HMCleanupGrantedHandle.c)
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
  v5 = a1 - qword_1C024AD48;
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
