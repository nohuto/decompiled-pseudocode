/*
 * XREFs of ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00E3ED0
 * Callers:
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00E3E94 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C01031E4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

__int64 __fastcall NSInstrumentation::CPointerHashTable::Lookup(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  PVOID v3; // rdi
  unsigned __int64 v6; // r10
  unsigned int v7; // r8d
  unsigned __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned __int8 v12; // bl

  v3 = UmfdAllocation::s_allocationLookup;
  _InterlockedIncrement((volatile signed __int32 *)UmfdAllocation::s_allocationLookup + 6);
  while ( *((_DWORD *)v3 + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)v3 + 6);
  }
  if ( *((_DWORD *)v3 + 12)
    && ((v6 = 0x9E3779B97F34A803uLL * (a2 >> 4), (*((_BYTE *)v3 + 52) & 1) == 0) || *(_QWORD *)a2 == v6) )
  {
    v7 = *((_DWORD *)v3 + 10);
    v8 = v6 >> (64 - *((_BYTE *)v3 + 44));
    v9 = 0;
    while ( 1 )
    {
      v10 = v8;
      if ( (unsigned int)v8 < v7 )
        break;
LABEL_9:
      v7 = v8;
      ++v9;
      LODWORD(v8) = 0;
      if ( v9 >= 2 )
        goto LABEL_10;
    }
    v11 = *((_QWORD *)v3 + 4);
    while ( *(_QWORD *)(v11 + 16LL * v10) != a2 )
    {
      if ( ++v10 >= v7 )
        goto LABEL_9;
    }
    v12 = 1;
    *a3 = *(void **)(v11 + 16LL * v10 + 8);
  }
  else
  {
LABEL_10:
    v12 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
  return v12;
}
