/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C
 * Callers:
 *     ThreadUnlockWorker1 @ 0x1C000FE20 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0070FB0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 *     HMUnlockObjectInternal @ 0x1C0073480 (HMUnlockObjectInternal.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7D70 (HMDestroyUnlockedObject.c)
 * Callees:
 *     HMRemoveHandleForObjectWorker @ 0x1C005AB78 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C005AC2C (EtwTraceUserDestroyHandle.c)
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00712BC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C0121D68 (HMCleanupGrantedHandle.c)
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
  v5 = a1 - qword_1C0250D48;
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
