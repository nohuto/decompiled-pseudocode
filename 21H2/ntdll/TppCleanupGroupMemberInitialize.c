/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x18001241C
 * Callers:
 *     TppWorkInitialize @ 0x1800122AC (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x180076CD0 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007A804 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x18007FE30 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x1800134C0 (RtlAddRefActivationContext.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x18004F4CC (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  unsigned int v7; // eax
  int v8; // r14d
  _ACTIVATION_CONTEXT *v9; // rcx
  NTSTATUS v10; // ebx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 **v13; // rcx
  _RTL_SRWLOCK *v14; // rsi
  volatile signed __int32 *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _RTL_SRWLOCK *v18; // rdx
  __int64 *v19; // rcx
  _ACTIVATION_CONTEXT *v21; // rcx
  __int128 ActivationContext; // [rsp+48h] [rbp-30h] BYREF

  ActivationContext = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  v6 = (volatile signed __int32 **)(a1 + 144);
  if ( !a3 )
  {
    *v6 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    goto LABEL_30;
  }
  *v6 = *(volatile signed __int32 **)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_30:
    v7 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a3 + 60);
  if ( v7 >= 3 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 192) = v7;
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 && *v6 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
      RtlAddRefActivationContext(v9);
  }
  else
  {
    v10 = RtlQueryInformationActivationContext(
            1u,
            0LL,
            0LL,
            ActivationContextBasicInformation,
            &ActivationContext,
            0x10uLL,
            0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( (BYTE8(ActivationContext) & 1) != 0 )
    {
      RtlReleaseActivationContext((PACTIVATION_CONTEXT)ActivationContext);
      *(_QWORD *)&ActivationContext = -1LL;
    }
    *(_QWORD *)(a1 + 96) = ActivationContext;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_12:
    v10 = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*v6 + 9);
      v11 = (__int64 *)(a1 + 152);
      v12 = (__int64)(*v6 + 20);
      v13 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v13 != (__int64 *)v12 )
        __fastfail(3u);
      *v11 = v12;
      *(_QWORD *)(a1 + 160) = v13;
      *v13 = v11;
      *(_QWORD *)(v12 + 8) = v11;
      v14 = (_RTL_SRWLOCK *)(*v6 + 18);
    }
    else
    {
      v14 = &TppCleanupGroupMemberpNoPoolListLock;
      RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      v16 = (_QWORD *)(a1 + 152);
      v17 = off_180166AA8;
      if ( *off_180166AA8 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v16 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v17;
      *v17 = v16;
      off_180166AA8 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v14);
    v15 = *(volatile signed __int32 **)(a1 + 16);
    if ( v15 )
    {
      _InterlockedAdd(v15, 1u);
      v10 = 0;
    }
    goto LABEL_27;
  }
  if ( v8 )
  {
    v18 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v19 = &TppPoolpSerializedPool;
  }
  else
  {
    v18 = &TppPoolpGlobalPoolLock;
    v19 = (__int64 *)&TppPoolpGlobalPool;
  }
  v10 = TppPoolpReferenceGlobalPool(v19, v18, v6);
  if ( v10 >= 0 )
    goto LABEL_12;
LABEL_27:
  if ( v10 < 0 )
  {
    v21 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
    if ( (unsigned __int64)&v21[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v21);
  }
  return (unsigned int)v10;
}
