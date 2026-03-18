/*
 * XREFs of ?Create@?$CSortedVector@KK@NSInstrumentation@@SGPAV12@XZ @ 0xE61C6
 * Callers:
 *     _UmfdSessionInitialize@0 @ 0xE5DB0 (_UmfdSessionInitialize@0.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SGHPAX@Z @ 0xEA2EA (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SGHPAX@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *NSInstrumentation::CSortedVector<unsigned long,unsigned long>::Create()
{
  _DWORD *PoolWithTag; // esi
  PVOID v1; // eax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20u, 0x63497355u);
  if ( PoolWithTag )
  {
    v1 = ExAllocatePoolWithTag(PagedPoolSession, 0x1000u, 0x63497355u);
    if ( v1 )
    {
      PoolWithTag[7] = v1;
      PoolWithTag[6] = 0;
      PoolWithTag[5] = 512;
      PoolWithTag[3] = 0;
      PoolWithTag[4] = 0;
      *PoolWithTag = 0;
      PoolWithTag[2] = 0;
      return PoolWithTag;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0;
}
