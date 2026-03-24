/*
 * XREFs of VidSchSetQueuedPresentLimit @ 0x1C00819C0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00816A0 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchSetQueuedPresentLimit(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, 0LL);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v5);
    return v6;
  }
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0) )
  {
    v7 = WdLogNewEntry5_WdWarning(v3, a2);
    *(_QWORD *)(v7 + 24) = a1;
    v6 = -1071775232;
    *(_QWORD *)(v7 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v7);
    return v6;
  }
  if ( !(_DWORD)a2 )
    LODWORD(a2) = *(_DWORD *)(v3 + 2472);
  *(_DWORD *)(a1 + 244) = a2;
  return 0LL;
}
