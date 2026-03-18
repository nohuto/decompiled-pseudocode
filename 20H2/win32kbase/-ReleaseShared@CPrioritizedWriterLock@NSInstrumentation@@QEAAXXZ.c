/*
 * XREFs of ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C014FC34
 * Callers:
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C014F1CC (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C014F3C8 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C014F6FC (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C014F9FC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(
        NSInstrumentation::CPrioritizedWriterLock *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) <= 1
    && *((_DWORD *)this + 7)
    && _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 1, 0) == -1 )
  {
    _InterlockedExchange((volatile __int32 *)this + 4, 1);
    KeSetEvent(*((PRKEVENT *)this + 1), 0, 0);
  }
}
