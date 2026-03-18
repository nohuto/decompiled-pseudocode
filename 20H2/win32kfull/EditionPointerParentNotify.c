/*
 * XREFs of EditionPointerParentNotify @ 0x1C01F1C30
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F0718 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  v10[2] = 0LL;
  result = GetDesktopWindow(v3);
  if ( v3 != result )
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(result + 24) & 4) == 0 )
    {
      v9 = gptiCurrent;
      v10[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v10;
      v10[1] = 0LL;
      do
      {
        LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0xC0;
        if ( (_BYTE)v9 != 64 )
          break;
        v3 = *(_QWORD *)(v3 + 104);
        ThreadLockExchange(v3, (__int64)v10);
        xxxSendPointerMessageWorker(v3, 528LL, a3, 0LL, 0LL, 177);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(gpTouchProcessor, a2) );
      return ThreadUnlock1(v9, v7, v8);
    }
  }
  return result;
}
