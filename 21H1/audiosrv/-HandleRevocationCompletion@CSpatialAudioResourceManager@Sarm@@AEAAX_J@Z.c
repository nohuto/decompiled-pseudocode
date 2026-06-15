/*
 * XREFs of ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180107B44
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_18871662051ef14e923fcf0c1dee16c7__void_::_Do_call @ 0x180109CE0 (std--_Func_impl_no_alloc__lambda_18871662051ef14e923fcf0c1dee16c7__void_--_Do_call.c)
 * Callees:
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180107134 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x18010A9D8 (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010ABF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x18010BA6C (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::HandleRevocationCompletion(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRevocationCompletion", 0x22Du);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( Stream )
    Sarm::CStreamResource::CompleteRevocation(Stream);
  else
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v6, 0x232u, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
}
