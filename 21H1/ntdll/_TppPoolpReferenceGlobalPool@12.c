/*
 * XREFs of _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD
 * Callers:
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _TpReserveTaskPost@12 @ 0x4B2E8D1F (_TpReserveTaskPost@12.c)
 *     _RtlpTpIoAlloc@12 @ 0x4B3855A8 (_RtlpTpIoAlloc@12.c)
 * Callees:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TpSetPoolMaxThreads@8 @ 0x4B2B1D10 (_TpSetPoolMaxThreads@8.c)
 *     _TpAllocPool@8 @ 0x4B2B1E30 (_TpAllocPool@8.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TpSetPoolMaxThreadsSoftLimit@8 @ 0x4B2EBEA0 (_TpSetPoolMaxThreadsSoftLimit@8.c)
 *     _TpSetPoolMinThreads@8 @ 0x4B2ED0C0 (_TpSetPoolMinThreads@8.c)
 *     _TpSetPoolStackInformation@8 @ 0x4B2ED670 (_TpSetPoolStackInformation@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

NTSTATUS __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _RTL_SRWLOCK *a2,
        volatile signed __int32 **a3)
{
  NTSTATUS result; // eax
  ULONG v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  _TP_POOL *v10; // esi
  NTSTATUS v11; // eax
  int v12; // [esp+18h] [ebp-24h]
  PTP_POOL PoolReturn; // [esp+1Ch] [ebp-20h] BYREF
  char v14; // [esp+23h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  if ( !a3 || !a1 || !a2 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  if ( *a1 )
  {
    v14 = 0;
    RtlAcquireSRWLockShared(a2);
    ms_exc.registration.TryLevel = 0;
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v14 = 1;
    }
    ms_exc.registration.TryLevel = -2;
    RtlReleaseSRWLockShared(a2);
    if ( v14 )
      return 0;
  }
  PoolReturn = 0;
  result = TpAllocPool(&PoolReturn, 0);
  v12 = result;
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(a2);
    ms_exc.registration.TryLevel = 1;
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      goto LABEL_28;
    }
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(PoolReturn, TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v6 = TppPoolpGlobalPoolMaxThreadsOverride;
        if ( !TppPoolpGlobalPoolMaxThreadsOverride )
        {
          if ( !PoolReturn || (v7 = *((_DWORD *)PoolReturn + 68)) == 0 )
            v7 = MEMORY[0x7FFE03C0];
          v6 = 8 * v7;
          if ( v6 < 0x300 )
            v6 = 768;
        }
        TpSetPoolMaxThreads(PoolReturn, v6);
        if ( TppPoolpGlobalPoolMaxThreadsOverride )
        {
          v9 = 0;
        }
        else
        {
          if ( !PoolReturn || (v8 = *((_DWORD *)PoolReturn + 68)) == 0 )
            v8 = MEMORY[0x7FFE03C0];
          v9 = 4 * v8;
          if ( v9 < 0x180 )
            v9 = 384;
        }
        TpSetPoolMaxThreadsSoftLimit((int)PoolReturn, v9);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_27;
      v11 = TpSetPoolStackInformation(PoolReturn, TppPoolpGlobalPoolStackSize);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_27:
        *a1 = (volatile signed __int32 *)PoolReturn;
        PoolReturn = 0;
LABEL_28:
        ms_exc.registration.TryLevel = -2;
        RtlReleaseSRWLockExclusive(a2);
        if ( PoolReturn )
          TpReleasePool(PoolReturn);
        if ( v12 >= 0 )
          *a3 = *a1;
        return v12;
      }
      v10 = PoolReturn;
      TpSetPoolMaxThreads(PoolReturn, 1u);
      v11 = TpSetPoolMinThreads(v10, 1u);
    }
    v12 = v11;
    if ( v11 < 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  return result;
}
