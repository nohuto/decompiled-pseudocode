/*
 * XREFs of PfTLbInitialize @ 0x14069F368
 * Callers:
 *     PfTFreeBufferList @ 0x14069F294 (PfTFreeBufferList.c)
 *     PfTAllocateBuffers @ 0x1407AA834 (PfTAllocateBuffers.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall PfTLbInitialize(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    memset(a1 + 3, 0, a2 - 24LL);
  }
  else
  {
    memset(a1, 0, a2);
    a1[1] = a1;
    *a1 = a1;
  }
  *((_DWORD *)a1 + 4) = 0;
  result = (a2 - 24) >> 4;
  *((_DWORD *)a1 + 5) = result;
  return result;
}
