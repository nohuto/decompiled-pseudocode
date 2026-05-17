/*
 * XREFs of _RtlpSetHeapDebuggingInformation@8 @ 0x4B359790
 * Callers:
 *     _RtlSetHeapDebuggingInformation@8 @ 0x4B357004 (_RtlSetHeapDebuggingInformation@8.c)
 * Callees:
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     _RtlpGetHeapInterceptorIndex@4 @ 0x4B36D74D (_RtlpGetHeapInterceptorIndex@4.c)
 *     _RtlSetLFHDebuggingInformation@8 @ 0x4B370F2D (_RtlSetLFHDebuggingInformation@8.c)
 */

int __stdcall RtlpSetHeapDebuggingInformation(int a1, int a2)
{
  int v2; // ebx
  int v3; // ecx
  int (__stdcall *v4)(int, int, int, int); // ecx
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 8) == -571548178 ? 0 : 0x48;
  if ( *(_DWORD *)(a2 + 12) )
  {
    v3 = *(_DWORD *)(v2 + a1 + 16);
    if ( v3 )
      RtlpCallInterceptRoutine(v3, a1, 0, 7, 0);
    v4 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v4 = *(int (__stdcall **)(int, int, int, int))a2;
    if ( !*(_DWORD *)a2 )
      goto LABEL_7;
  }
  *(_DWORD *)(v2 + a1 + 16) = (unsigned __int16)RtlpGetHeapInterceptorIndex(v4);
LABEL_7:
  if ( *(_DWORD *)(a1 + 8) != -571548178 && *(_DWORD *)(a2 + 8) )
  {
    v5 = *(_BYTE *)(a1 + 234) == 2 ? *(_DWORD *)(a1 + 228) : 0;
    if ( v5
      || ((RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 234) != 2) ? (v5 = 0) : (v5 = *(_DWORD *)(a1 + 228)), v5) )
    {
      RtlSetLFHDebuggingInformation(v5, a2);
    }
  }
  return 0;
}
