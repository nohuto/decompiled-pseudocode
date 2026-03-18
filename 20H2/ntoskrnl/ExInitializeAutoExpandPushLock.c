/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x14030A500
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CAD44 (MmInitializeHandBuiltProcess.c)
 *     MiAllocateAweInfo @ 0x1408D73C0 (MiAllocateAweInfo.c)
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
