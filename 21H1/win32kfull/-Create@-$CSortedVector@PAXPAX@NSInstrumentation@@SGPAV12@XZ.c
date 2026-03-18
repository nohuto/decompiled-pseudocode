/*
 * XREFs of ?Create@?$CSortedVector@PAXPAX@NSInstrumentation@@SGPAV12@XZ @ 0x249C29
 * Callers:
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAV?$CSortedVector@PAXPAX@2@@Z @ 0x249EA7 (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAV-$CSortedVector@PAXPA.c)
 * Callees:
 *     <none>
 */

_DWORD *NSInstrumentation::CSortedVector<void *,void *>::Create()
{
  _DWORD *PoolWithTag; // esi
  PVOID v2; // eax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20u, 0x63497355u);
  if ( !PoolWithTag )
    return 0;
  v2 = ExAllocatePoolWithTag(PagedPoolSession, 0x1000u, 0x63497355u);
  if ( !v2 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0;
  }
  PoolWithTag[7] = v2;
  PoolWithTag[6] = 0;
  PoolWithTag[5] = 512;
  PoolWithTag[3] = 0;
  PoolWithTag[4] = 0;
  *PoolWithTag = 0;
  PoolWithTag[2] = 0;
  return PoolWithTag;
}
