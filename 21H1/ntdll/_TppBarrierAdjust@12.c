/*
 * XREFs of _TppBarrierAdjust@12 @ 0x4B2DDB10
 * Callers:
 *     _TpReleaseCleanupGroupMembers@12 @ 0x4B2ABC00 (_TpReleaseCleanupGroupMembers@12.c)
 *     _TpWaitForIoCompletion@8 @ 0x4B2ABF80 (_TpWaitForIoCompletion@8.c)
 *     _TppWorkWait@8 @ 0x4B2B1F6A (_TppWorkWait@8.c)
 *     _TppWaitCompletion@16 @ 0x4B2B5530 (_TppWaitCompletion@16.c)
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppWorkPost@4 @ 0x4B2C1B97 (_TppWorkPost@4.c)
 *     _TpCancelAsyncIoOperation@4 @ 0x4B2E7040 (_TpCancelAsyncIoOperation@4.c)
 *     _TpStartAsyncIoOperation@4 @ 0x4B2E70A0 (_TpStartAsyncIoOperation@4.c)
 *     _TpWaitForAlpcCompletion@4 @ 0x4B383490 (_TpWaitForAlpcCompletion@4.c)
 *     _TppIopCancelPendingCallbacks@4 @ 0x4B3834E0 (_TppIopCancelPendingCallbacks@4.c)
 *     _TpWaitForJobNotification@4 @ 0x4B383780 (_TpWaitForJobNotification@4.c)
 *     _TppJobpExecuteCallback@16 @ 0x4B3837E0 (_TppJobpExecuteCallback@16.c)
 *     _TppWorkCancelPendingCallbacks@4 @ 0x4B384450 (_TppWorkCancelPendingCallbacks@4.c)
 *     _TppWorkUnposted@8 @ 0x4B3844D0 (_TppWorkUnposted@8.c)
 *     _TpDisassociateCallback@4 @ 0x4B384690 (_TpDisassociateCallback@4.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 *     _TppItePush@8 @ 0x4B3847FD (_TppItePush@8.c)
 *     _TppIteWakeWaiters@4 @ 0x4B384822 (_TppIteWakeWaiters@4.c)
 */

int __fastcall TppBarrierAdjust(signed __int64 *a1, int a2, int a3)
{
  char v4; // cl
  signed __int64 v5; // rdi
  char v6; // ch
  __int64 v7; // rax
  unsigned __int64 v8; // kr00_8
  int v9; // ecx
  int v11; // edx
  int v12; // esi
  char v14; // [esp+12h] [ebp-26h]
  char v15; // [esp+13h] [ebp-25h]
  signed __int64 *v16; // [esp+14h] [ebp-24h]
  int v17; // [esp+18h] [ebp-20h]
  unsigned __int64 v18; // [esp+1Ch] [ebp-1Ch]
  unsigned int v19; // [esp+2Ch] [ebp-Ch]
  _BYTE v20[8]; // [esp+30h] [ebp-8h] BYREF

  v4 = 0;
  v5 = *a1;
  v6 = 0;
  v16 = a1;
  v7 = a2;
  v15 = 0;
  v14 = 0;
  v19 = HIDWORD(v7);
  v17 = v7;
  while ( 1 )
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v16 + 2);
      v14 = 0;
LABEL_15:
      LODWORD(v7) = v17;
      goto LABEL_4;
    }
    if ( v4 )
    {
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)v16 + 2);
      v15 = 0;
      goto LABEL_15;
    }
LABEL_4:
    v18 = __PAIR64__(v5, HIDWORD(v5));
    v8 = v5 + __PAIR64__(v19, v7);
    LODWORD(v5) = v5 + v7;
    v9 = HIDWORD(v5);
    HIDWORD(v5) ^= (HIDWORD(v5) ^ HIDWORD(v8)) & 0xFFFFFFF;
    v11 = HIDWORD(v5) & 0xFFFFFFF;
    if ( (v9 & 0x80000000) == 0 || v11 | (unsigned int)v5 )
    {
      if ( a3 && v11 | (unsigned int)v5 )
      {
        HIDWORD(v5) |= 0x80000000;
        v15 = 1;
        RtlAcquireSRWLockShared((PRTL_SRWLOCK)v16 + 2);
      }
    }
    else
    {
      HIDWORD(v5) &= ~0x80000000;
      v14 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v16 + 2);
    }
    v5 = _InterlockedCompareExchange64(v16, v5, __SPAIR64__(v18, HIDWORD(v18)));
    LODWORD(v7) = v17;
    if ( __PAIR64__(v5, HIDWORD(v5)) == v18 )
      break;
    v6 = v14;
    v4 = v15;
  }
  if ( v14 )
  {
    v12 = *((_DWORD *)v16 + 3);
    *((_DWORD *)v16 + 3) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v16 + 2);
    LODWORD(v7) = TppIteWakeWaiters(v12);
  }
  else if ( v15 )
  {
    TppItePush((char *)v16 + 12, v20);
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)v16 + 2);
    LODWORD(v7) = ZwWaitForAlertByThreadId((char *)v16 + 12, 0);
  }
  return v7;
}
