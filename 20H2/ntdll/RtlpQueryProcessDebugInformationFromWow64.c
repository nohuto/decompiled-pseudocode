/*
 * XREFs of RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateQueryDebugBuffer @ 0x1800D7680 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800D7930 (RtlDestroyQueryDebugBuffer.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7B00 (RtlQueryProcessDebugInformation.c)
 */

__int64 __fastcall RtlpQueryProcessDebugInformationFromWow64(unsigned int a1, unsigned int *a2)
{
  __int64 QueryDebugBuffer; // rax
  __int64 v6; // rbx
  int ProcessDebugInformation; // edi
  __int64 v8; // rsi

  if ( ((a1 - 1024) & 0xFFFFFBFF) != 0 )
    return 3221225485LL;
  QueryDebugBuffer = RtlCreateQueryDebugBuffer(0);
  v6 = QueryDebugBuffer;
  if ( QueryDebugBuffer )
  {
    v8 = *((_QWORD *)a2 + 1);
    *(_QWORD *)(QueryDebugBuffer + 160) = *(unsigned int *)(v8 + 80);
    ProcessDebugInformation = RtlQueryProcessDebugInformation((_QWORD *)*a2, a1, QueryDebugBuffer);
    if ( ProcessDebugInformation >= 0 )
    {
      *(_DWORD *)(v8 + 80) = *(_DWORD *)(v6 + 160);
      *(_DWORD *)(v8 + 84) = *(_DWORD *)(v6 + 168);
    }
    RtlDestroyQueryDebugBuffer((HANDLE *)v6);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)ProcessDebugInformation;
}
