/*
 * XREFs of _RtlUpdateTimer@16 @ 0x4B385200
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlUpdateTimer@16 @ 0x4B385200 (_RtlUpdateTimer@16.c)
 */

int __stdcall RtlUpdateTimer(int a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  int v5; // edi
  __int64 v6; // [esp+10h] [ebp-2Ch] BYREF
  int v7; // [esp+18h] [ebp-24h]
  HANDLE v8; // [esp+1Ch] [ebp-20h] BYREF
  int v9; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  result = -1073741823;
  v9 = -1073741823;
  v8 = 0;
  v7 = a2;
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( a1 )
    {
      if ( a2 )
      {
        if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
        {
          return -1073741816;
        }
        else
        {
          ms_exc.registration.TryLevel = 0;
          v5 = RtlpTpRevertCapture(&v8, 0);
          v9 = v5;
          if ( v5 >= 0 )
          {
            RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 40));
            ms_exc.registration.TryLevel = 1;
            if ( *(_BYTE *)(a2 + 44) || !*(_DWORD *)(a2 + 48) )
            {
              *(_BYTE *)(a2 + 44) = a4 != 0;
              v6 = -10000LL * a3;
              TpSetTimerEx(*(_DWORD *)(a2 + 32), &v6, a4, 0);
            }
            v5 = 0;
            v9 = 0;
            ms_exc.registration.TryLevel = 0;
            RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a2 + 40));
          }
          ms_exc.registration.TryLevel = -2;
          RtlpTpResumeImpersonation(v8);
          return v5;
        }
      }
      else
      {
        return -1073741584;
      }
    }
    else
    {
      return -1073741585;
    }
  }
  return result;
}
