/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x1402A7260
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1407114D4 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CF004 (MmInitializeHandBuiltProcess.c)
 *     MiAllocateAweInfo @ 0x1408D4B80 (MiAllocateAweInfo.c)
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
