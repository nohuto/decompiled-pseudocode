/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x1408DF118
 * Callers:
 *     ObSetRefTraceInformation @ 0x1408DE42C (ObSetRefTraceInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ObpInitStackAndObjectTables @ 0x1408DEAD0 (ObpInitStackAndObjectTables.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  unsigned int inited; // r14d
  int v3; // edi
  char PreviousMode; // r9
  int v5; // r10d
  unsigned __int64 v6; // r11
  unsigned int i; // r9d
  unsigned int j; // r10d
  unsigned __int16 v9; // bx
  PVOID PoolWithTag; // r15
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  wchar_t *v14; // rcx
  char v15; // [rsp+20h] [rbp-C8h]
  int v16; // [rsp+24h] [rbp-C4h]
  PVOID P[2]; // [rsp+38h] [rbp-B0h]
  __int128 v18; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v20[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v20, 0, sizeof(v20));
  inited = 0;
  *(_OWORD *)P = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = PreviousMode;
  v18 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  v16 = v5;
  if ( (_WORD)v18 )
  {
    if ( (*(_OWORD *)(a1 + 24) & 1) != 0
      || ((((unsigned __int64)(unsigned __int16)v18 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      return 3221225485LL;
    }
    v6 = ((unsigned __int64)(unsigned __int16)v18 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v18) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v18 + *((_QWORD *)&v18 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v18 + *((_QWORD *)&v18 + 1) < *((_QWORD *)&v18 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v20 + i) = (*((_DWORD *)v20 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v18 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = v16;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v9 = 126;
    else
      v9 = (unsigned __int16)Src[0];
    LOWORD(P[0]) = v9;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2LL, 0x7452624Fu);
    P[1] = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    WORD1(P[0]) = v9 + 2;
    if ( v15 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src[1], v9);
    *((_WORD *)PoolWithTag + ((unsigned __int64)v9 >> 1)) = 0;
    v3 |= 0x20u;
    inited = 0;
    v5 = v16;
  }
  if ( !v3 )
    return 3221225485LL;
  if ( v5 )
    v3 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) == 0 )
    inited = ObpInitStackAndObjectTables();
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v14 = (wchar_t *)P[1];
    if ( !P[1] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)P;
    ObpRuntimeTracePoolTags = v20[0];
    xmmword_140C25C50 = v20[1];
    xmmword_140C25C60 = v20[2];
    xmmword_140C25C70 = v20[3];
    ObpTraceFlags = v3 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpRuntimeTraceFlags = ObpTraceFlags;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((ObpTraceFlags & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((ObpTraceFlags & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !Buffer )
      return inited;
    v14 = Buffer;
  }
  ExFreePoolWithTag(v14, 0x7452624Fu);
  return inited;
}
