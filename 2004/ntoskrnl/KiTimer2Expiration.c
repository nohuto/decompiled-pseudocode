/*
 * XREFs of KiTimer2Expiration @ 0x14027F560
 * Callers:
 *     KiRetireDpcList @ 0x140299420 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x1403868D0 (KiTimerExpirationDpc.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KiUpdateTimer2Flags @ 0x1402757B4 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x14027F880 (KiRemoveTimer2.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x14027FFEC (KiShouldActivateHRTimerClock.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x140280AB0 (KiProcessThreadWaitList.c)
 *     KiInsertTimer2 @ 0x1403421AC (KiInsertTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x14034B9F4 (KiSendClockInterruptToClockOwner.c)
 *     KiCheckAndRearmForceIdle @ 0x14035CFEC (KiCheckAndRearmForceIdle.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
  _QWORD *v20; // rdi
  char v21; // al
  signed __int32 v22; // edx
  signed __int32 v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  volatile signed __int32 *v27; // rcx
  char v28; // r8
  signed __int32 v29; // edx
  _BYTE v30[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v31; // [rsp+38h] [rbp-80h] BYREF
  _QWORD **v32; // [rsp+40h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-70h]
  __int128 v34; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-58h] BYREF

  v33 = a5;
  result = KiNextTimer2DueTime;
  v30[0] = 0;
  v34 = 0LL;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v32 = &v31;
  v31 = &v31;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v10 = 0LL;
  v11 = 5LL;
  if ( !a4 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v34 = a2;
      v35[0] = &v34;
      BYTE8(v34) = 1;
      v35[1] = 16LL;
      EtwTraceKernelEvent((int)v35, 1, 0x40020000u, 3920, 1538);
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
            v29 = v23;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)v16 - 6, v23 & 0xFFFFF0FF | 0x200, v23);
          }
          while ( v29 != v23 );
        }
        v24 = v32;
        if ( *v32 != &v31 )
          __fastfail(3u);
        v16[1] = v32;
        *v16 = &v31;
        *v24 = v16;
        v25 = *(_QWORD *)(v12 + 8);
        v32 = (_QWORD **)v16;
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
  v17 = v31;
  if ( v31 == &v31 )
    goto LABEL_20;
  v18 = v33;
  v19 = 0;
  while ( 2 )
  {
    v20 = v17 - 3;
    v17 = (_QWORD *)*v17;
    KiAcquireKobjectLockSafe(v20);
    v21 = *((_BYTE *)v20 + 1);
    if ( (v21 & 2) != 0 )
    {
      if ( (*((_BYTE *)v20 + 129) & 2) != 0 )
        v19 = 1;
      goto LABEL_16;
    }
    v26 = 0;
    v27 = (volatile signed __int32 *)v20;
    if ( (v21 & 8) != 0 )
    {
      if ( (unsigned __int8)KiInsertTimer2(v20, 0LL, v30) )
      {
        v28 = 0;
        v27 = (volatile signed __int32 *)v20;
        v26 = 1;
        goto LABEL_42;
      }
      if ( (*((_BYTE *)v20 + 129) & 2) != 0 )
        v19 = 1;
LABEL_16:
      KiExpireTimer2(v20, a1, a2, v18);
    }
    else
    {
      v28 = 4;
LABEL_42:
      KiUpdateTimer2Flags(v27, v26, v28);
    }
    if ( v17 != &v31 )
      continue;
    break;
  }
  if ( v19 )
    KiCheckAndRearmForceIdle();
LABEL_20:
  if ( *(_QWORD *)(a1 + 11528) )
    KiProcessThreadWaitList(a1, 1LL, 0LL);
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140C31AA8);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
