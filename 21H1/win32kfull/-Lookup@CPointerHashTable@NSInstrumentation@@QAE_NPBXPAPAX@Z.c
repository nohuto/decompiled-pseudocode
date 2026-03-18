/*
 * XREFs of ?Lookup@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0x8CF60
 * Callers:
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CGPAV1@PAX@Z @ 0x8CF36 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CGPAV1@PAX@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     __aullshr @ 0xF91FD (__aullshr.c)
 */

char __thiscall NSInstrumentation::CPointerHashTable::Lookup(
        NSInstrumentation::CPointerHashTable *this,
        _QWORD *a2,
        void **a3)
{
  NSInstrumentation::CPointerHashTable *v3; // esi
  volatile signed __int32 *v4; // edi
  char v5; // bl
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // ecx
  NSInstrumentation::CPointerHashTable *v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v3 = UmfdAllocation::s_allocationLookup;
  v10 = UmfdAllocation::s_allocationLookup;
  v4 = (volatile signed __int32 *)((char *)UmfdAllocation::s_allocationLookup + 12);
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
      HIDWORD(v7) = *((_DWORD *)v3 + 6);
      v12 = 0;
      while ( 1 )
      {
        v8 = v7;
        if ( (unsigned int)v7 < HIDWORD(v7) )
          break;
LABEL_10:
        HIDWORD(v7) = v7;
        LODWORD(v7) = 0;
        if ( (unsigned int)++v12 >= 2 )
          goto LABEL_11;
      }
      v11 = *((_DWORD *)v3 + 5);
      while ( 1 )
      {
        v3 = v10;
        if ( *(_QWORD **)(v11 + 8 * v8) == a2 )
          break;
        if ( (unsigned int)++v8 >= HIDWORD(v7) )
          goto LABEL_10;
      }
      v5 = 1;
      *a3 = *(void **)(v11 + 8 * v8 + 4);
    }
  }
LABEL_11:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v3);
  return v5;
}
