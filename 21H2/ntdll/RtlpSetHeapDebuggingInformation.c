/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1800F4AF0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800F2CA8 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180044A7C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800F3654 (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1801081D8 (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x18010B8C0 (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // ecx
  __int64 (__fastcall *v7)(); // rcx
  __int64 v8; // rcx

  v3 = 24LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 144LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v6 = *(_DWORD *)(v3 + a1);
    if ( v6 )
      RtlpCallInterceptRoutine(v6, a1, 0LL, 7u, 0LL);
    v7 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v7 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  *(_DWORD *)(v3 + a1) = (unsigned __int16)RtlpGetHeapInterceptorIndex(v7);
LABEL_9:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v8 = *(_BYTE *)(a1 + 418) == 2 ? *(_QWORD *)(a1 + 408) : 0LL;
    if ( v8
      || ((RtlpActivateLowFragmentationHeap(a1, a2, a3), *(_BYTE *)(a1 + 418) != 2)
        ? (v8 = 0LL)
        : (v8 = *(_QWORD *)(a1 + 408)),
          v8) )
    {
      RtlSetLFHDebuggingInformation(v8, a2);
    }
  }
  return 0LL;
}
