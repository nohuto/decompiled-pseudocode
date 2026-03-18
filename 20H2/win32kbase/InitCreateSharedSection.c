/*
 * XREFs of InitCreateSharedSection @ 0x1C029169C
 * Callers:
 *     Win32UserInitialize @ 0x1C0291A10 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C006EAD8 (WPP_RECORDER_SF_DD.c)
 *     UserCreateHeap @ 0x1C0071A50 (UserCreateHeap.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0071B80 (WPP_RECORDER_SF_qqD.c)
 *     Win32CreateSection @ 0x1C0071C38 (Win32CreateSection.c)
 */

__int64 InitCreateSharedSection()
{
  int v0; // edx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rbx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-38h]
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      11,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 4;
      WPP_RECORDER_SF_DD(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v0,
        14,
        12,
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids,
        0,
        0);
    }
  }
  result = Win32CreateSection(&ghSectionShared, 983071LL);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v4 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
    }
    else
    {
      v7 = (char *)gpvSharedBase + 0x200000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(v3, v2, v5, v6, v9, 0x4000000);
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000LL,
                         v7,
                         0x8000u,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0LL;
      UserSetLastError(8LL, v8);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      ObfDereferenceObject(ghSectionShared);
      gpvSharedAlloc = 0LL;
      v4 = -1073741801;
      gpvSharedBase = 0LL;
    }
    ghSectionShared = 0LL;
    return (unsigned int)v4;
  }
  return result;
}
