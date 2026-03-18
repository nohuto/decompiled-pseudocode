/*
 * XREFs of ExpFreeHandleTableEntry @ 0x14069AFEC
 * Callers:
 *     ExCreateHandleEx @ 0x1405E83C0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     ExDestroyHandle @ 0x14069AF88 (ExDestroyHandle.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExpGetHandleExtraInfo @ 0x1409495A0 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  char v5; // si
  unsigned int Number; // eax
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rax
  _DWORD *HandleExtraInfo; // rax

  v4 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1);
    if ( HandleExtraInfo )
    {
      *HandleExtraInfo = 0;
      HandleExtraInfo[1] = 0;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_BYTE *)(v4 + 44) & 1;
  if ( v5 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v7 = v4 + ((Number + 1LL) << 6);
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  if ( v5 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 )
      *(_QWORD *)(v8 + 8) = a3;
    else
      *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a3;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(a3 + 8) = v10;
    if ( !v10 )
      *(_QWORD *)(v7 + 16) = a3;
    *(_QWORD *)(v7 + 8) = a3;
  }
  --*(_DWORD *)(v7 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  return KeAbPostRelease(v7);
}
