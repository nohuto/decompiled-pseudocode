/*
 * XREFs of _RtlCompareMemory@12 @ 0x4B307F30
 * Callers:
 *     _RtlIsPackageSid@4 @ 0x4B2AAF50 (_RtlIsPackageSid@4.c)
 *     _RtlFindActivationContextSectionGuid@20 @ 0x4B2CD660 (_RtlFindActivationContextSectionGuid@20.c)
 *     _RtlIsCapabilitySid@4 @ 0x4B2D93E0 (_RtlIsCapabilitySid@4.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _EtwpTrackDebugIdForSession@12 @ 0x4B2F1EA8 (_EtwpTrackDebugIdForSession@12.c)
 *     _CompareNamesCaseSensitive@8 @ 0x4B344F9C (_CompareNamesCaseSensitive@8.c)
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 *     _RtlNormalizeSecurityDescriptor@20 @ 0x4B3468A0 (_RtlNormalizeSecurityDescriptor@20.c)
 *     _RtlpCheckBusyBlockTail@8 @ 0x4B35D48C (_RtlpCheckBusyBlockTail@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     RtlpHeapTrkTrackStack @ 0x4B365034 (RtlpHeapTrkTrackStack.c)
 *     _RtlpStdLogCapturedStackTrace@12 @ 0x4B3694C1 (_RtlpStdLogCapturedStackTrace@12.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 *     _RtlpHpSizeHeap@12 @ 0x4B37999D (_RtlpHpSizeHeap@12.c)
 *     _EtwpTrackBinaryForSession@12 @ 0x4B382FA7 (_EtwpTrackBinaryForSession@12.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // esi
  bool v5; // zf
  unsigned int v6; // ecx
  bool v7; // zf
  int v8; // ecx
  SIZE_T result; // rax
  unsigned __int8 *v10; // edi
  int v11; // ecx

  v3 = Source1;
  v6 = (unsigned int)Length >> 2;
  v5 = (unsigned int)Length >> 2 == 0;
  if ( !((unsigned int)Length >> 2) )
    goto LABEL_5;
  do
  {
    if ( !v6 )
      break;
    v5 = *(_DWORD *)v3 == *(_DWORD *)Source2;
    v3 += 4;
    Source2 = (char *)Source2 + 4;
    --v6;
  }
  while ( v5 );
  if ( !v5 )
  {
    v3 -= 4;
    v10 = (unsigned __int8 *)Source2 - 4;
    v11 = 4;
    do
    {
      if ( !v11 )
        break;
      v5 = *v3++ == *v10++;
      --v11;
    }
    while ( v5 );
  }
  else
  {
LABEL_5:
    v8 = Length & 3;
    v7 = v8 == 0;
    if ( (Length & 3) == 0 )
      goto LABEL_9;
    do
    {
      if ( !v8 )
        break;
      v7 = *v3++ == *(_BYTE *)Source2;
      Source2 = (char *)Source2 + 1;
      --v8;
    }
    while ( v7 );
    if ( v7 )
    {
LABEL_9:
      LODWORD(result) = Length;
      return result;
    }
  }
  LODWORD(result) = v3 - 1 - (_BYTE *)Source1;
  return result;
}
