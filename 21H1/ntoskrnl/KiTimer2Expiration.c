/*
 * XREFs of KiTimer2Expiration @ 0x140242E60
 * Callers:
 *     KiRetireDpcList @ 0x140206910 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x140385960 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiInsertTimer2 @ 0x140241CF8 (KiInsertTimer2.c)
 *     KiRemoveTimer2 @ 0x140243180 (KiRemoveTimer2.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1402438EC (KiShouldActivateHRTimerClock.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     KiSendClockInterruptToClockOwner @ 0x14030E514 (KiSendClockInterruptToClockOwner.c)
 *     KiCheckAndRearmForceIdle @ 0x14031F4DC (KiCheckAndRearmForceIdle.c)
 *     KiUpdateTimer2Flags @ 0x14035B964 (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  _QWORD *v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  char v19; // bp
  __int64 v20; // rdi
  char v21; // al
  signed __int32 v22; // edx
  signed __int32 v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  signed __int32 v28; // edx
  _BYTE v29[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-80h] BYREF
  _QWORD **v31; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-70h]
  __int128 v33; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-58h] BYREF

  v32 = a5;
  result = KiNextTimer2DueTime;
  v29[0] = 0;
  v33 = 0LL;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v31 = &v30;
  v30 = &v30;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v10 = 0LL;
  v11 = 5LL;
  if ( !a4 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v33 = a2;
      v34[0] = &v33;
      BYTE8(v33) = 1;
      v34[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v34, 1, 1073872896, 3920, 1538);
    }
    v10 = 1LL;
    v11 = 2LL;
    if ( a3 )
      v11 = 3LL;
  }
  v12 = (unsigned __int64)&KiTimer2Collections[3 * v10];
  do
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( (v13 & 1) != 0 )
    {
      if ( v13 == 1 )
        goto LABEL_10;
      v14 = v13 ^ (v12 | 1);
    }
    else
    {
      v14 = *(_QWORD *)(v12 + 8);
    }
    if ( v14 )
    {
      v15 = 0LL;
      if ( v10 >= 2 )
        v15 = 24LL;
      do
      {
        v16 = (_QWORD *)(v14 - v15);
        if ( a2 < v16[6] )
          break;
        KiRemoveTimer2(v16 - 3);
        v22 = *((_DWORD *)v16 - 6);
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)v16 - 6, v22 & 0xFFFFF0FF | 0x200, v22);
        if ( v22 != v23 )
        {
          do
          {
            v28 = v23;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)v16 - 6, v23 & 0xFFFFF0FF | 0x200, v23);
          }
          while ( v28 != v23 );
        }
        v24 = v31;
        if ( *v31 != &v30 )
          __fastfail(3u);
        v16[1] = v31;
        *v16 = &v30;
        *v24 = v16;
        v25 = *(_QWORD *)(v12 + 8);
        v31 = (_QWORD **)v16;
        if ( (v25 & 1) != 0 )
        {
          if ( v25 == 1 )
            break;
          v14 = v25 ^ (v12 | 1);
        }
        else
        {
          v14 = v25;
        }
      }
      while ( v14 );
    }
LABEL_10:
    ++v10;
    v12 += 24LL;
  }
  while ( v10 < v11 );
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  v17 = v30;
  if ( v30 == &v30 )
    goto LABEL_20;
  v18 = v32;
  v19 = 0;
  while ( 2 )
  {
    v20 = (__int64)(v17 - 3);
    v17 = (_QWORD *)*v17;
    KiAcquireKobjectLockSafe(v20);
    v21 = *(_BYTE *)(v20 + 1);
    if ( (v21 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v20 + 129) & 2) != 0 )
        v19 = 1;
      goto LABEL_16;
    }
    v26 = 0LL;
    v27 = v20;
    if ( (v21 & 8) != 0 )
    {
      if ( KiInsertTimer2(v20, 0, (__int64)v29) )
      {
        v27 = v20;
        v26 = 1LL;
        goto LABEL_42;
      }
      if ( (*(_BYTE *)(v20 + 129) & 2) != 0 )
        v19 = 1;
LABEL_16:
      KiExpireTimer2(v20, a1, a2, v18);
    }
    else
    {
LABEL_42:
      KiUpdateTimer2Flags(v27, v26);
    }
    if ( v17 != &v30 )
      continue;
    break;
  }
  if ( v19 )
    KiCheckAndRearmForceIdle();
LABEL_20:
  if ( *(_QWORD *)(a1 + 11528) )
    KiProcessThreadWaitList(a1, 1LL, 0LL);
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140C31CC8);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
