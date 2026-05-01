/*
 * XREFs of sub_18003F5F8 @ 0x18003F5F8
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_18003F6E8 @ 0x18003F6E8 (sub_18003F6E8.c)
 */

__int64 __fastcall sub_18003F5F8(__int64 a1, _QWORD *a2)
{
  PVOID Heap; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v4 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  sub_18003F6E8(Heap);
  result = HamConnectToServer(sub_1800838A0, v4 + 72);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    RtlSubscribeWnfStateChangeNotification(v4 + 80, *a2, 0LL, sub_180083790, v4, 0LL, 0, 0);
    RtlAcquireSRWLockExclusive(&unk_1800B4EA0);
    GetCurrentThreadId();
    qword_1800B4E98 = v4;
    dword_1800B4EA8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800B4EA0);
    return 0LL;
  }
  return result;
}
