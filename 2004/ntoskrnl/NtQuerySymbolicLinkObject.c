/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1406D87C0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1407AB168 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x140A66F78 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x140A6C878 (IopReassignSystemRoot.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  __int64 p_MaximumLength; // rcx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  int v12; // edi
  unsigned int v13; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v18[2]; // [rsp+50h] [rbp-28h]
  int v19; // [rsp+98h] [rbp+20h]

  *(_OWORD *)v18 = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)LinkTarget & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (__int64)LinkTarget;
    if ( (unsigned __int64)LinkTarget >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_WORD *)v7 = *(_WORD *)v7;
    p_MaximumLength = (__int64)&LinkTarget->MaximumLength;
    if ( (unsigned __int64)&LinkTarget->MaximumLength >= 0x7FFFFFFF0000LL )
      p_MaximumLength = 0x7FFFFFFF0000LL;
    *(_WORD *)p_MaximumLength = *(_WORD *)p_MaximumLength;
    *(UNICODE_STRING *)v18 = *LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v18, 8).m128i_i64[0], WORD1(v18[0]), 1u);
    if ( ReturnedLength )
    {
      v9 = (__int64)ReturnedLength;
      if ( (unsigned __int64)ReturnedLength >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    *(UNICODE_STRING *)v18 = *LinkTarget;
  }
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(LinkHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v19 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v11 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_1407C4EE0);
    else
      *(_OWORD *)Src = *(_OWORD *)(v11 + 8);
    v12 = (int)Src[0];
    if ( ReturnedLength )
    {
      if ( WORD1(Src[0]) <= WORD1(v18[0]) )
      {
        v13 = WORD1(Src[0]);
LABEL_18:
        memmove(v18[1], Src[1], v13);
        LinkTarget->Length = v12;
        if ( ReturnedLength )
          *ReturnedLength = HIWORD(v12);
LABEL_20:
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        return v19;
      }
    }
    else if ( LOWORD(Src[0]) <= WORD1(v18[0]) )
    {
      v13 = LOWORD(Src[0]);
      goto LABEL_18;
    }
    v19 = -1073741789;
    if ( ReturnedLength )
      *ReturnedLength = WORD1(Src[0]);
    goto LABEL_20;
  }
  return v19;
}
