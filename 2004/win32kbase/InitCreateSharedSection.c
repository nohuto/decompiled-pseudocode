/*
 * XREFs of InitCreateSharedSection @ 0x1C0293218
 * Callers:
 *     Win32UserInitialize @ 0x1C0293AF8 (Win32UserInitialize.c)
 * Callees:
 *     UserCreateHeap @ 0x1C000A780 (UserCreateHeap.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000A8B0 (WPP_RECORDER_SF_qqD.c)
 *     Win32CreateSection @ 0x1C000A968 (Win32CreateSection.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00AC474 (WPP_RECORDER_SF_DD.c)
 */

__int64 InitCreateSharedSection()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rbx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-38h]
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      11,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0xEu,
        0xCu,
        (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids,
        0x200000,
        0x8000);
  }
  result = Win32CreateSection(&ghSectionShared, 983071LL);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v3 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v3 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
    }
    else
    {
      v6 = (char *)gpvSharedBase + 0x200000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(v2, v1, v4, v5, v8, 0x4000000);
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000LL,
                         v6,
                         0x8000u,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0LL;
      UserSetLastError(8LL, v7);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      ObfDereferenceObject(ghSectionShared);
      gpvSharedAlloc = 0LL;
      v3 = -1073741801;
      gpvSharedBase = 0LL;
    }
    ghSectionShared = 0LL;
    return (unsigned int)v3;
  }
  return result;
}
