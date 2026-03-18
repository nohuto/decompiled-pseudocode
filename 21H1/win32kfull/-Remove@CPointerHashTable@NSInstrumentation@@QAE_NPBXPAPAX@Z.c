/*
 * XREFs of ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32
 * Callers:
 *     _Win32FreePoolImpl@4 @ 0x832A0 (_Win32FreePoolImpl@4.c)
 *     _Win32FreeToPagedLookasideListImpl@8 @ 0x92054 (_Win32FreeToPagedLookasideListImpl@8.c)
 *     ?_RemoveAllocationFromLookup@UmfdAllocation@@CGXPAX00@Z @ 0xCFE0A (-_RemoveAllocationFromLookup@UmfdAllocation@@CGXPAX00@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30EE (-Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z @ 0xD3290 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX0@Z @ 0x249D9A (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX0@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SG_NPAX0@Z @ 0x24A90E (-UpdateKernelmodeAllocation@UmfdAllocation@@SG_NPAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     __aullshr @ 0xF91FD (__aullshr.c)
 */

char __thiscall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        _QWORD *a2,
        void **a3)
{
  NSInstrumentation::CPointerHashTable *v3; // esi
  volatile signed __int32 *v4; // edi
  char v5; // bl
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  int v9; // edx
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v3 = this;
  v4 = (volatile signed __int32 *)((char *)this + 12);
  while ( 1 )
  {
    _InterlockedIncrement(v4);
    if ( !*((_DWORD *)v3 + 4) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0);
    ExReleasePushLockSharedEx(v3, 0);
    KeLeaveCriticalRegion();
  }
  v5 = 0;
  if ( *((_DWORD *)v3 + 8) )
  {
    v6 = 0x9E3779B97F34A803uLL * ((unsigned __int64)(int)a2 >> 4);
    if ( (*((_BYTE *)v3 + 36) & 1) == 0 || *a2 == v6 )
    {
      LODWORD(v6) = 2134157315 * ((unsigned __int64)(int)a2 >> 4);
      v7 = v6 >> (64 - *((_BYTE *)v3 + 28));
      v8 = *((_DWORD *)v3 + 6);
      v13 = 0;
      while ( 1 )
      {
        v9 = v7;
        if ( (unsigned int)v7 < v8 )
          break;
LABEL_16:
        v8 = v7;
        LODWORD(v7) = 0;
        if ( (unsigned int)++v13 >= 2 )
          goto LABEL_10;
      }
      v12 = *((_DWORD *)v3 + 5);
      while ( 1 )
      {
        v3 = this;
        if ( *(_QWORD **)(v12 + 8 * v9) == a2 )
          break;
        if ( ++v9 >= v8 )
          goto LABEL_16;
      }
      *a3 = *(void **)(v12 + 8 * v9 + 4);
      *(_DWORD *)(*((_DWORD *)this + 5) + 8 * v9) = 0;
      *(_DWORD *)(*((_DWORD *)this + 5) + 8 * v9 + 4) = 0;
      _InterlockedDecrement((volatile signed __int32 *)this + 8);
      v5 = 1;
    }
  }
LABEL_10:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v3);
  return v5;
}
