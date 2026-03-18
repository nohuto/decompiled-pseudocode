/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1406B1BE0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1407B90A8 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x140A5A548 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x140A73158 (IopReassignSystemRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySymbolicLinkObject(HANDLE Handle, unsigned __int64 a2, _DWORD *a3)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  int v12; // edi
  unsigned int v13; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v18[2]; // [rsp+50h] [rbp-28h]
  NTSTATUS v19; // [rsp+98h] [rbp+20h]

  *(_OWORD *)v18 = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_WORD *)v7 = *(_WORD *)v7;
    v8 = a2 + 2;
    if ( a2 + 2 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_WORD *)v8 = *(_WORD *)v8;
    *(_OWORD *)v18 = *(_OWORD *)a2;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v18, 8).m128i_i64[0], WORD1(v18[0]), 1u);
    if ( a3 )
    {
      v9 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    *(_OWORD *)v18 = *(_OWORD *)a2;
  }
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(Handle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v19 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v11 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_1407D36E0);
    else
      *(_OWORD *)Src = *(_OWORD *)(v11 + 8);
    v12 = (int)Src[0];
    if ( a3 )
    {
      if ( WORD1(Src[0]) <= WORD1(v18[0]) )
      {
        v13 = WORD1(Src[0]);
LABEL_18:
        memmove(v18[1], Src[1], v13);
        *(_WORD *)a2 = v12;
        if ( a3 )
          *a3 = HIWORD(v12);
LABEL_20:
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        return (unsigned int)v19;
      }
    }
    else if ( LOWORD(Src[0]) <= WORD1(v18[0]) )
    {
      v13 = LOWORD(Src[0]);
      goto LABEL_18;
    }
    v19 = -1073741789;
    if ( a3 )
      *a3 = WORD1(Src[0]);
    goto LABEL_20;
  }
  return (unsigned int)v19;
}
