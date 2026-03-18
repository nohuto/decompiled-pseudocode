/*
 * XREFs of VrpProcessBufferParameter @ 0x1405D2D0C
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D2734 (VrpPostQueryKey.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpProcessBufferParameter(char a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax

  v4 = 0;
  PoolWithTag = 0LL;
  if ( a1 == 1 )
  {
    if ( a3 && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, a3, 0x67655256u)) == 0LL )
      return (unsigned int)-1073741670;
    else
      *a4 = PoolWithTag;
  }
  else
  {
    *a4 = a2;
  }
  return v4;
}
