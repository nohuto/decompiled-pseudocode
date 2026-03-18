/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x140634830
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpCompressPendingBuffers @ 0x140634D24 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406355B0 (EtwpRelinquishCompressionTarget.c)
 */

__int64 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v7; // edx
  int v8; // r9d

  result = *(unsigned int *)(a1 + 1168);
  if ( (_DWORD)result )
  {
    EtwpCompressPendingBuffers();
    v3 = a1 + 1144;
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1144);
    CurrentThread = KeGetCurrentThread();
    if ( v3 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v7 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v7;
      p_Process += 96LL;
      if ( v7 >= 6 )
        goto LABEL_13;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_13:
      result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
      _enable();
      return result;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v8 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    result = *(unsigned __int8 *)(p_Process + 16);
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    if ( v8 )
      return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v8);
  }
  return result;
}
