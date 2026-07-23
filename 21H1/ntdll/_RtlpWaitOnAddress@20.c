/*
 * XREFs of _RtlpWaitOnAddress@20 @ 0x4B2DF747
 * Callers:
 *     _RtlUnsubscribeWnfNotificationWaitForCompletion@4 @ 0x4B2DE9B0 (_RtlUnsubscribeWnfNotificationWaitForCompletion@4.c)
 *     _RtlPosixBarrier@8 @ 0x4B35031D (_RtlPosixBarrier@8.c)
 *     _RtlWaitOnAddress@16 @ 0x4B36A8E0 (_RtlWaitOnAddress@16.c)
 *     _RtlpCSparseBitmapPageCommit@16 @ 0x4B37E46E (_RtlpCSparseBitmapPageCommit@16.c)
 *     _RtlpCSparseBitmapPageDecommit@12 @ 0x4B37E559 (_RtlpCSparseBitmapPageDecommit@12.c)
 * Callees:
 *     _RtlpAddWaitBlockToWaitList@8 @ 0x4B2DF80C (_RtlpAddWaitBlockToWaitList@8.c)
 *     @RtlpWaitOnAddressWithTimeout@16 @ 0x4B2DF875 (@RtlpWaitOnAddressWithTimeout@16.c)
 *     _RtlpWaitOnAddressRemoveWaitBlock@8 @ 0x4B2DF916 (_RtlpWaitOnAddressRemoveWaitBlock@8.c)
 */

int __fastcall RtlpWaitOnAddress(volatile signed __int64 *a1, int a2, unsigned int a3, PLARGE_INTEGER Timeout, int a5)
{
  struct _TEB *v7; // ecx
  bool v8; // zf
  signed __int64 v10; // rax
  int WaitOnAddressHashTable; // [esp+10h] [ebp-20h]
  _DWORD v13[6]; // [esp+18h] [ebp-18h] BYREF

  if ( a3 <= 8 && a3 && ((a3 - 1) & a3) == 0 )
  {
    v7 = NtCurrentTeb();
    v13[0] = a1;
    memset(&v13[2], 0, 12);
    v13[5] = 1;
    v13[1] = v7->ClientId.UniqueThread;
    WaitOnAddressHashTable = (int)v7->ProcessEnvironmentBlock->WaitOnAddressHashTable;
    RtlpAddWaitBlockToWaitList(WaitOnAddressHashTable, v13);
    switch ( a3 )
    {
      case 1u:
        v8 = *(_BYTE *)a1 == *(_BYTE *)a2;
        break;
      case 2u:
        v8 = *(_WORD *)a1 == *(_WORD *)a2;
        break;
      case 4u:
        v8 = *(_DWORD *)a1 == *(_DWORD *)a2;
        break;
      default:
        if ( a3 != 8
          || (v10 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, *(_QWORD *)a2), (_DWORD)v10 != *(_DWORD *)a2) )
        {
LABEL_10:
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v13);
          return 0;
        }
        v8 = HIDWORD(v10) == *(_DWORD *)(a2 + 4);
        break;
    }
    if ( v8 )
      return RtlpWaitOnAddressWithTimeout(Timeout, a5);
    goto LABEL_10;
  }
  return -1073741811;
}
