/*
 * XREFs of _TppJobpRundownJob@4 @ 0x4B3839D3
 * Callers:
 *     _TpReleaseJobNotification@4 @ 0x4B383720 (_TpReleaseJobNotification@4.c)
 *     _TpWaitForJobNotification@4 @ 0x4B383780 (_TpWaitForJobNotification@4.c)
 *     _TppJobpStopCallbackGeneration@8 @ 0x4B383B20 (_TppJobpStopCallbackGeneration@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationJobObject@20 @ 0x4B2F3E20 (_ZwQueryInformationJobObject@20.c)
 *     _ZwSetInformationJobObject@16 @ 0x4B2F42F0 (_ZwSetInformationJobObject@16.c)
 *     _TppRaiseHandleStatus@16 @ 0x4B384839 (_TppRaiseHandleStatus@16.c)
 */

void __thiscall TppJobpRundownJob(int this)
{
  void *v2; // eax
  int v3; // ecx
  signed __int64 *v4; // ecx
  __int64 v5; // rdi
  signed __int64 v6; // rax
  volatile signed __int64 *v7; // [esp+Ch] [ebp-24h]
  unsigned int v8; // [esp+10h] [ebp-20h]
  signed __int64 v9; // [esp+14h] [ebp-1Ch]
  unsigned __int64 v11; // [esp+20h] [ebp-10h] BYREF
  _DWORD JobObjectInformation[2]; // [esp+28h] [ebp-8h] BYREF

  if ( *(_DWORD *)(this + 168) )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(this + 184));
    v2 = *(void **)(this + 168);
    if ( v2 )
    {
      JobObjectInformation[0] = 0;
      JobObjectInformation[1] = 0;
      if ( ZwSetInformationJobObject(v2, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 8u) < 0
        || ZwQueryInformationJobObject(*(HANDLE *)(this + 168), JobObjectCompletionCounter, &v11, 8u, 0) < 0 )
      {
        TppRaiseHandleStatus(0, v3);
      }
      v4 = (signed __int64 *)(this + 176);
      v7 = (volatile signed __int64 *)(this + 176);
      v8 = (-2LL * v11) >> 32;
      LODWORD(v5) = (-2 * v11) | 1;
      v11 = __PAIR64__(v8, v5);
      HIDWORD(v5) = v8;
      do
      {
        v9 = *v4;
        v6 = _InterlockedCompareExchange64(v7, v9 + v5, v9);
        HIDWORD(v5) = v8;
        v4 = (signed __int64 *)v7;
      }
      while ( v6 != v9 );
      *(_DWORD *)(this + 168) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(this + 184));
      if ( v9 + __PAIR64__(v8, v5) == 1 && !_InterlockedExchangeAdd((volatile signed __int32 *)(this + 48), 0xFFFFFFFF) )
        (**(void (__thiscall ***)(_DWORD, int))(this + 52))(**(_DWORD **)(this + 52), this + 48);
    }
    else
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(this + 184));
    }
  }
}
