/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x1800137E4
 * Callers:
 *     TpReserveTaskPost @ 0x18000B6FC (TpReserveTaskPost.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     RtlpTpIoAlloc @ 0x180112D9C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180054C60 (TpReleasePool.c)
 *     TpSetPoolMaxThreads @ 0x180061620 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x1800616F0 (TpAllocPool.c)
 *     TpSetPoolStackInformation @ 0x18006FA30 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180080FC0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180083410 (TpSetPoolMinThreads.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3,
        __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  char v7; // bl
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  if ( *a1 )
  {
    v7 = 0;
    RtlAcquireSRWLockShared(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v7 = 1;
    }
    RtlReleaseSRWLockShared(v5);
    if ( v7 )
      return 0LL;
  }
  v15 = 0LL;
  result = TpAllocPool(&v15, 0LL);
  v14 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      goto LABEL_40;
    }
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(v15, (unsigned int)TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v9 = (unsigned int)TppPoolpGlobalPoolMaxThreadsOverride;
        if ( !TppPoolpGlobalPoolMaxThreadsOverride )
        {
          if ( !v15 || (v10 = *(_DWORD *)(v15 + 440)) == 0 )
            v10 = MEMORY[0x7FFE03C0];
          v9 = (unsigned int)(8 * v10);
          if ( (unsigned int)v9 < 0x300 )
            v9 = 768LL;
        }
        TpSetPoolMaxThreads(v15, v9);
        if ( TppPoolpGlobalPoolMaxThreadsOverride )
        {
          v12 = 0LL;
        }
        else
        {
          if ( !v15 || (v11 = *(_DWORD *)(v15 + 440)) == 0 )
            v11 = MEMORY[0x7FFE03C0];
          v12 = (unsigned int)(4 * v11);
          if ( (unsigned int)v12 < 0x180 )
            v12 = 384LL;
        }
        TpSetPoolMaxThreadsSoftLimit(v15, v12);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_27;
      v13 = TpSetPoolStackInformation(v15);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_27:
        *a1 = (volatile signed __int32 *)v15;
        v15 = 0LL;
LABEL_40:
        RtlReleaseSRWLockExclusive(v5);
        if ( v15 )
          TpReleasePool(v15);
        if ( v14 >= 0 )
          *a3 = *a1;
        return (unsigned int)v14;
      }
      TpSetPoolMaxThreads(v15, 1LL);
      v13 = TpSetPoolMinThreads(v15, 1LL);
    }
    v14 = v13;
    if ( v13 < 0 )
      goto LABEL_40;
    goto LABEL_27;
  }
  return result;
}
