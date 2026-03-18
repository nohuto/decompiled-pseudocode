/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x1402F6C20
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407B9344 (MmInitializeHandBuiltProcess.c)
 *     MiAllocateAweInfo @ 0x1408D0230 (MiAllocateAweInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  return result;
}
