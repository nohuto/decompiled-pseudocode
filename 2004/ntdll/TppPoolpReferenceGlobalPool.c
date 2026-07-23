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

NTSTATUS __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3)
{
  _RTL_SRWLOCK *v4; // rsi
  char v6; // bl
  NTSTATUS result; // eax
  ULONG v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  int v13; // [rsp+20h] [rbp-28h]
  PTP_POOL PoolReturn; // [rsp+68h] [rbp+20h] BYREF

  v4 = (_RTL_SRWLOCK *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3);
    return -1073741811;
  }
  if ( *a1 )
  {
    v6 = 0;
    RtlAcquireSRWLockShared(v4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v6 = 1;
    }
    RtlReleaseSRWLockShared(v4);
    if ( v6 )
      return 0;
  }
  PoolReturn = 0LL;
  result = TpAllocPool(&PoolReturn, 0LL);
  v13 = result;
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      goto LABEL_40;
    }
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(PoolReturn, TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v8 = TppPoolpGlobalPoolMaxThreadsOverride;
        if ( !TppPoolpGlobalPoolMaxThreadsOverride )
        {
          if ( !PoolReturn || (v9 = *((_DWORD *)PoolReturn + 110)) == 0 )
            v9 = MEMORY[0x7FFE03C0];
          v8 = 8 * v9;
          if ( v8 < 0x300 )
            v8 = 768;
        }
        TpSetPoolMaxThreads(PoolReturn, v8);
        if ( TppPoolpGlobalPoolMaxThreadsOverride )
        {
          v11 = 0LL;
        }
        else
        {
          if ( !PoolReturn || (v10 = *((_DWORD *)PoolReturn + 110)) == 0 )
            v10 = MEMORY[0x7FFE03C0];
          v11 = (unsigned int)(4 * v10);
          if ( (unsigned int)v11 < 0x180 )
            v11 = 384LL;
        }
        TpSetPoolMaxThreadsSoftLimit(PoolReturn, v11);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_27;
      v12 = TpSetPoolStackInformation(PoolReturn, TppPoolpGlobalPoolStackSize);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_27:
        *a1 = (volatile signed __int32 *)PoolReturn;
        PoolReturn = 0LL;
LABEL_40:
        RtlReleaseSRWLockExclusive(v4);
        if ( PoolReturn )
          TpReleasePool(PoolReturn);
        if ( v13 >= 0 )
          *a3 = *a1;
        return v13;
      }
      TpSetPoolMaxThreads(PoolReturn, 1u);
      v12 = TpSetPoolMinThreads(PoolReturn, 1u);
    }
    v13 = v12;
    if ( v12 < 0 )
      goto LABEL_40;
    goto LABEL_27;
  }
  return result;
}
