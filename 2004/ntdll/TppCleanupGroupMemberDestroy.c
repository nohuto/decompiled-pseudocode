/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180012088
 * Callers:
 *     TppWorkpFree @ 0x18000F0E0 (TppWorkpFree.c)
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 *     TppSimplepFree @ 0x180010BA0 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x180010BE0 (TpSimpleTryPost.c)
 *     TppWorkInitialize @ 0x1800122AC (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x180075BA0 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x1800796D4 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x18007D500 (TppIopFree.c)
 *     TpAllocJobNotification @ 0x18007F410 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x1800839F0 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180085160 (TppJobpFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x1800536F0 (TppCallbackEpilog.c)
 *     TppPoolpFree @ 0x180054E8C (TppPoolpFree.c)
 *     TppCleanupGroupRemoveMember @ 0x180075E1C (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180079200 (TppCallbackCheckThreadBeforeCallback.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  PVOID v7; // rcx
  void (__fastcall *v8)(_QWORD *, __int64); // rdi
  _RTL_SRWLOCK *v9; // rdx
  __int64 *v10; // rcx
  void *v11; // r8
  __int64 v12; // r11
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD v16[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v11 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v11);
  }
  v2 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v2 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = (_RTL_SRWLOCK *)a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 9);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[18] + 72LL));
    v7 = (PVOID)a1[18];
    if ( v7 == TppPoolpGlobalPool )
    {
      v9 = &TppPoolpGlobalPoolLock;
      v10 = (__int64 *)&TppPoolpGlobalPool;
    }
    else
    {
      if ( v7 != (PVOID)TppPoolpSerializedPool )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          TppPoolpFree(v7);
        goto LABEL_13;
      }
      v9 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
      v10 = &TppPoolpSerializedPool;
    }
    TppPoolpDereferenceGlobalPool(v10, v9);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v13 = a1 + 19;
  v14 = a1[19];
  v15 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v14 + 8) != a1 + 19 || (_QWORD *)*v15 != v13 )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  a1[20] = a1 + 19;
  *v13 = v13;
  RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v8 = (void (__fastcall *)(_QWORD *, __int64))a1[4];
  if ( v8 )
  {
    memset(v16, 0, 0xF8uLL);
    v16[11] = v8;
    v16[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback(v16);
    v8(v16, v12);
    TppCallbackEpilog(v16);
  }
}
