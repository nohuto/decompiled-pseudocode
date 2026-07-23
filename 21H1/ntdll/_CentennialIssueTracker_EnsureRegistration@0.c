/*
 * XREFs of _CentennialIssueTracker_EnsureRegistration@0 @ 0x4B2A8230
 * Callers:
 *     _LdrpLogRelativePathWithAlteredSearchError@4 @ 0x4B2A81DB (_LdrpLogRelativePathWithAlteredSearchError@4.c)
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

BOOL __stdcall CentennialIssueTracker_EnsureRegistration()
{
  if ( !_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0) )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_4B3A3340, 1);
    _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  return CentennialIssueTracker_InitializedState == 2;
}
