/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1406B8F10
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1407A8008 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x140A54148 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x140A6C5A8 (IopReassignSystemRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v21[2]; // [rsp+50h] [rbp-28h]
  int v22; // [rsp+98h] [rbp+20h]

  *(_OWORD *)v21 = 0LL;
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
    *(UNICODE_STRING *)v21 = *LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v21, 8).m128i_i64[0], WORD1(v21[0]), 1u);
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
    *(UNICODE_STRING *)v21 = *LinkTarget;
  }
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(LinkHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v22 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v11 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_1407C1980);
    else
      *(_OWORD *)Src = *(_OWORD *)(v11 + 8);
    v12 = (int)Src[0];
    if ( ReturnedLength )
    {
      if ( WORD1(Src[0]) <= WORD1(v21[0]) )
      {
        v13 = WORD1(Src[0]);
LABEL_18:
        memmove(v21[1], Src[1], v13);
        LinkTarget->Length = v12;
        if ( ReturnedLength )
          *ReturnedLength = HIWORD(v12);
LABEL_20:
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        return v22;
      }
    }
    else if ( LOWORD(Src[0]) <= WORD1(v21[0]) )
    {
      v13 = LOWORD(Src[0]);
      goto LABEL_18;
    }
    v22 = -1073741789;
    if ( ReturnedLength )
      *ReturnedLength = WORD1(Src[0]);
    goto LABEL_20;
  }
  return v22;
}
