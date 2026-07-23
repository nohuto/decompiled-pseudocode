/*
 * XREFs of KiTimer2Expiration @ 0x1402ED030
 * Callers:
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x140389320 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140210A74 (KiSendClockInterruptToClockOwner.c)
 *     KiInsertTimer2 @ 0x140210C10 (KiInsertTimer2.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiCheckAndRearmForceIdle @ 0x14024DA3C (KiCheckAndRearmForceIdle.c)
 *     KiUpdateTimer2Flags @ 0x14026E084 (KiUpdateTimer2Flags.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiProcessThreadWaitList @ 0x1402EFB20 (KiProcessThreadWaitList.c)
 *     KiRemoveTimer2 @ 0x1402EFC30 (KiRemoveTimer2.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1402F039C (KiShouldActivateHRTimerClock.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r15
  volatile signed __int32 *v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  char v20; // bp
  __int64 v21; // rdi
  char v22; // al
  unsigned __int32 i; // eax
  volatile signed __int32 **v24; // rax
  __int64 v25; // rax
  int v26; // edx
  volatile signed __int32 *v27; // rcx
  char v28; // r8
  char v29[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-80h] BYREF
  volatile signed __int32 *v31; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-70h]
  __int128 v33; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-58h] BYREF

  v32 = a5;
  result = KiNextTimer2DueTime;
  v29[0] = 0;
  v33 = 0LL;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v31 = (volatile signed __int32 *)&v30;
  v30 = &v30;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v11 = 0LL;
  v12 = 5LL;
  if ( !a4 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v33 = a2;
      v34[0] = &v33;
      BYTE8(v33) = 1;
      v34[1] = 16LL;
      EtwTraceKernelEvent((int)v34, 1, 0x40020000u, 3920, 1538);
    }
    v11 = 1LL;
    v12 = 2LL;
    if ( a3 )
      v12 = 3LL;
  }
  v13 = (unsigned __int64)&KiTimer2Collections[3 * v11];
  do
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( (v14 & 1) != 0 )
    {
      if ( v14 == 1 )
        goto LABEL_10;
      v15 = v14 ^ (v13 | 1);
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 8);
    }
    if ( v15 )
    {
      v16 = 0LL;
      if ( v11 >= 2 )
        v16 = 24LL;
      do
      {
        v17 = (volatile signed __int32 *)(v15 - v16);
        if ( a2 < *((_QWORD *)v17 + 6) )
          break;
        KiRemoveTimer2(v17 - 6, v10);
        v10 = *((unsigned int *)v17 - 6);
        for ( i = _InterlockedCompareExchange(v17 - 6, *(v17 - 6) & 0xFFFFF0FF | 0x200, *((_DWORD *)v17 - 6));
              (_DWORD)v10 != i;
              i = _InterlockedCompareExchange(v17 - 6, i & 0xFFFFF0FF | 0x200, i) )
        {
          v10 = i;
        }
        v24 = (volatile signed __int32 **)v31;
        if ( *(_QWORD ***)v31 != &v30 )
          __fastfail(3u);
        *((_QWORD *)v17 + 1) = v31;
        *(_QWORD *)v17 = &v30;
        *v24 = v17;
        v25 = *(_QWORD *)(v13 + 8);
        v31 = v17;
        if ( (v25 & 1) != 0 )
        {
          if ( v25 == 1 )
            break;
          v15 = v25 ^ (v13 | 1);
        }
        else
        {
          v15 = v25;
        }
      }
      while ( v15 );
    }
LABEL_10:
    ++v11;
    v13 += 24LL;
  }
  while ( v11 < v12 );
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  v18 = v30;
  if ( v30 == &v30 )
    goto LABEL_20;
  v19 = v32;
  v20 = 0;
  while ( 2 )
  {
    v21 = (__int64)(v18 - 3);
    v18 = (_QWORD *)*v18;
    KiAcquireKobjectLockSafe(v21);
    v22 = *(_BYTE *)(v21 + 1);
    if ( (v22 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v21 + 129) & 2) != 0 )
        v20 = 1;
      goto LABEL_16;
    }
    v26 = 0;
    v27 = (volatile signed __int32 *)v21;
    if ( (v22 & 8) != 0 )
    {
      if ( KiInsertTimer2(v21, 0, (__int64)v29) )
      {
        v28 = 0;
        v27 = (volatile signed __int32 *)v21;
        v26 = 1;
        goto LABEL_42;
      }
      if ( (*(_BYTE *)(v21 + 129) & 2) != 0 )
        v20 = 1;
LABEL_16:
      KiExpireTimer2(v21, a1, a2, v19);
    }
    else
    {
      v28 = 4;
LABEL_42:
      KiUpdateTimer2Flags(v27, v26, v28);
    }
    if ( v18 != &v30 )
      continue;
    break;
  }
  if ( v20 )
    KiCheckAndRearmForceIdle();
LABEL_20:
  if ( *(_QWORD *)(a1 + 11528) )
    KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140C31CE8);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
