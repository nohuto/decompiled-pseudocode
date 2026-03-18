/*
 * XREFs of HvpFinishPrimaryWrite @ 0x1406D68B0
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1406D670C (HvWriteHivePrimaryFile.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpLogEvent @ 0x14086DAD8 (CmpLogEvent.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // bp
  int v5; // esi
  int v6; // edi
  __int64 result; // rax

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 160) & 0x100;
  v6 = a3;
  if ( (a2 == (v5 != 0) || ((*(_DWORD *)(a1 + 4264) >> 1) & 1) != a3) && !a4 )
  {
    CmpLockRegistry();
    ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
    v4 = 1;
  }
  if ( a2 )
  {
    if ( v5 )
      *(_DWORD *)(a1 + 160) &= ~0x100u;
  }
  else if ( !v5 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(a1 + 160) |= 0x100u;
  }
  result = (*(_DWORD *)(a1 + 4264) >> 1) & 1;
  if ( (_DWORD)result != v6 )
  {
    result = *(_DWORD *)(a1 + 4264) ^ ((unsigned __int8)*(_DWORD *)(a1 + 4264) ^ (unsigned __int8)(2 * v6)) & 2u;
    *(_DWORD *)(a1 + 4264) = result;
  }
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
    KeAbPostRelease(a1 + 72);
    return CmpUnlockRegistry();
  }
  return result;
}
