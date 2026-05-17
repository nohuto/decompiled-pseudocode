/*
 * XREFs of RtlQueryResourcePolicy @ 0x1800446F0
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x1800086EC (RtlpHpLfhContextInitialize.c)
 *     RtlpCreateLowFragHeap @ 0x1800447D8 (RtlpCreateLowFragHeap.c)
 *     RtlInitializeHeapManager @ 0x1800F22F4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180016BB0 (RtlGetNtSystemRoot.c)
 *     RtlGetSuiteMask @ 0x18003CC00 (RtlGetSuiteMask.c)
 *     RtlRunOnceExecuteOnce @ 0x180043820 (RtlRunOnceExecuteOnce.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18004477C (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x1800884B4 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180117E38 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180118040 (RtlpQueryDiskWriteConstraintPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // ebx
  __int64 NtSystemRoot; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const wchar_t *v15; // rax

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(
    &RtlpTestHookInit,
    (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpTestHookInitialize,
    0LL,
    0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return RtlpQueryPhysicalMemoryPolicy(a3);
    return 3221225485LL;
  }
  v10 = a1 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( a4 == 4 )
        return RtlpQueryDiskSpeedPolicy(a3);
      return 3221225485LL;
    }
    if ( v11 != 1 )
      return 3221225475LL;
    if ( a4 == 4 )
    {
      NtSystemRoot = RtlGetNtSystemRoot(v8, v7);
      return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot, a3);
    }
    return 3221225485LL;
  }
  if ( a4 != 4 )
    return 3221225485LL;
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    v15 = L"C:\\data\\programs\\windowsapps";
  else
    v15 = (const wchar_t *)RtlGetNtSystemRoot(v14, v13);
  return RtlpQueryDiskSpacePolicy(v15, a3);
}
