/*
 * XREFs of sub_1C0001D70 @ 0x1C0001D70
 * Callers:
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 * Callees:
 *     sub_1C0002310 @ 0x1C0002310 (sub_1C0002310.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001507C @ 0x1C001507C (sub_1C001507C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0001D70(__int64 a1)
{
  int v2; // r14d
  unsigned __int16 i; // bx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  KIRQL v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rbp
  int v15; // [rsp+48h] [rbp-40h]

  v2 = 0;
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      sub_1C002DC78(0LL, 0LL);
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
LABEL_31:
      sub_1C002DC78(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      sub_1C002DC78(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v5 = 0LL;
    if ( (dword_1C006B268 & 0x100) != 0 )
    {
      v6 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v6 = 1329877100;
      *(_QWORD *)(v6 + 16) = i;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 24) = 1885630295LL;
    }
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
    stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1413771367;
        *(_QWORD *)(v9 + 16) = i;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( !v10 )
        goto LABEL_31;
      if ( *(_DWORD *)v10 != 541218120 )
        sub_1C002DC78(a1, v10);
      if ( i <= *(unsigned __int8 *)(v10 + 2938) )
      {
        v11 = *(_QWORD *)(v10 + 3056);
        if ( v11 )
        {
          v12 = 2928LL * i + v11 - 2928;
          if ( (dword_1C006B268 & 8) != 0 )
          {
            v11 = *(_QWORD *)(v10 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
            *(_DWORD *)v11 = 1044672615;
            *(_QWORD *)(v11 + 8) = 0LL;
            *(_QWORD *)(v11 + 16) = i;
            *(_QWORD *)(v11 + 24) = v12;
          }
          if ( v12 )
          {
            v5 = *(_QWORD *)(v12 + 392);
            if ( v5 )
              v5 = sub_1C0002310(v11, v5, 0LL, 1885630295LL);
          }
        }
      }
    }
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v7);
    if ( v5 )
    {
      v14 = sub_1C0011220(v5);
      if ( (*(_DWORD *)(v14 + 1420) & 0x2000) != 0
        && (unsigned __int8)sub_1C001507C(a1, v5, 0LL)
        && (unsigned int)++v2 > 1 )
      {
        LOBYTE(v15) = 0;
        sub_1C004A608(a1, 0, 97, 0, 0, 0, 0, (__int64)aFdopwrC, 3765, v15);
      }
      *(_DWORD *)(v14 + 1420) &= ~0x2000u;
      sub_1C00171A0(a1, v5, 0LL, 1885630295LL);
    }
  }
  result = sub_1C000F050(a1);
  *(_DWORD *)(result + 2560) &= ~0x4000000u;
  return result;
}
