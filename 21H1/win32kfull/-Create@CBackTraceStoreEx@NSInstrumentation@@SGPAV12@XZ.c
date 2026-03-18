/*
 * XREFs of ?Create@CBackTraceStoreEx@NSInstrumentation@@SGPAV12@XZ @ 0x24A1AF
 * Callers:
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2@@Z @ 0x249E25 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2.c)
 * Callees:
 *     ?InitializeCommon@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@AAE_NI@Z @ 0x24A25F (-InitializeCommon@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageU.c)
 */

struct NSInstrumentation::CBackTraceStoreEx *__stdcall NSInstrumentation::CBackTraceStoreEx::Create()
{
  struct NSInstrumentation::CBackTraceStoreEx *result; // eax
  struct NSInstrumentation::CBackTraceStoreEx *v1; // esi
  _DWORD *PoolWithTag; // eax
  int v3; // ecx

  result = (struct NSInstrumentation::CBackTraceStoreEx *)ExAllocatePoolWithTag(PagedPoolSession, 0x24u, 0x33497355u);
  v1 = result;
  if ( result )
  {
    *((_DWORD *)result + 3) = 0;
    *((_DWORD *)result + 4) = 0;
    *(_DWORD *)result = 0;
    *((_DWORD *)result + 2) = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 4u, 0x32497355u);
    if ( PoolWithTag )
      *PoolWithTag = 0;
    *((_DWORD *)v1 + 7) = PoolWithTag;
    if ( (unsigned __int8)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::InitializeCommon(v3) )
    {
      return v1;
    }
    else
    {
      ExFreePoolWithTag(v1, 0);
      return 0;
    }
  }
  return result;
}
