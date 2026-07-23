/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x14072AAE0
 * Callers:
 *     NtSetCachedSigningLevel @ 0x14072AAB0 (NtSetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlUnicodeStringValidateEx @ 0x1405854D8 (RtlUnicodeStringValidateEx.c)
 *     SepCaptureUnicodeStringArray @ 0x1406F0C70 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetCachedSigningLevel2(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile,
        SE_SET_FILE_CACHE_INFORMATION *CacheInformation)
{
  __int64 v6; // r15
  PHANDLE v7; // rbx
  __int16 v8; // si
  UNICODE_STRING *PoolWithTag; // r14
  char v10; // r12
  char PreviousMode; // r13
  NTSTATUS v12; // ebx
  SIZE_T v14; // r15
  SE_SET_FILE_CACHE_INFORMATION *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG v18; // edx
  __int64 v19; // rdx
  _KPROCESS *Process; // rdx
  _KPROCESS *v21; // rcx
  char v22; // bl
  PCUNICODE_STRING SourceString[10]; // [rsp+58h] [rbp-50h] BYREF

  v6 = SourceFileCount;
  v7 = SourceFiles;
  v8 = Flags;
  PoolWithTag = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140C1DAE8 )
  {
    v12 = -1073741823;
    goto LABEL_10;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_43;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_57;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_43:
    v12 = -1073741584;
    goto LABEL_10;
  }
  if ( (Flags & 3) == 3 )
  {
LABEL_6:
    v12 = -1073741585;
    goto LABEL_10;
  }
  if ( PreviousMode == 1 )
  {
    if ( (Flags & 2) != 0 )
      goto LABEL_6;
    v8 = Flags | 1;
    if ( (Flags & 4) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v21 = Process;
      if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 1 )
      {
        v12 = -1073741790;
        goto LABEL_10;
      }
      v10 = (__int64)Process[2].Header.WaitListHead.Flink & 0xF;
      v22 = BYTE1(Process[2].Header.WaitListHead.Flink) & 0xF;
      if ( !qword_140C1DB20
        || (LOBYTE(Process) = (__int64)Process[2].Header.WaitListHead.Flink & 0xF,
            LOBYTE(v21) = v22,
            !(unsigned int)qword_140C1DB20(v21, Process, SourceFiles)) )
      {
        v10 = v22;
      }
      v7 = SourceFiles;
    }
  }
  else if ( (Flags & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (Flags & 2) == 0 )
      goto LABEL_6;
    v10 = 8;
  }
  v14 = 8 * v6;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v14, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_10;
  }
  if ( PreviousMode == 1 )
  {
    if ( v14 )
    {
      if ( ((unsigned __int8)v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v7[v14 / 8] > 0x7FFFFFFF0000LL || &v7[v14 / 8] < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v15 = CacheInformation;
    if ( CacheInformation )
    {
      if ( ((unsigned __int8)CacheInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&CacheInformation->OriginClaimInfo > 0x7FFFFFFF0000LL
        || &CacheInformation->OriginClaimInfo < (SE_FILE_CACHE_CLAIM_INFORMATION *)CacheInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v15 = CacheInformation;
  }
  memmove(PoolWithTag, SourceFiles, v14);
  if ( !v15 )
    goto LABEL_40;
  if ( v15->Size < 0x18 )
  {
    v12 = -1073741580;
    goto LABEL_10;
  }
  if ( !v15->CatalogDirectoryPath.Length
    || (LOBYTE(v16) = PreviousMode,
        v12 = SepCaptureUnicodeStringArray((__int64)&v15->CatalogDirectoryPath, 1u, v16, SourceString),
        v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v18), v12 >= 0) )
  {
LABEL_40:
    v19 = SourceFileCount;
    if ( (v8 & 6) == 0 )
    {
LABEL_9:
      LOBYTE(v17) = v10;
      LOBYTE(v16) = InputSigningLevel;
      LOBYTE(v19) = PreviousMode;
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, ULONG, HANDLE, PCUNICODE_STRING))qword_140C1DAE8)(
              v8 & 0x807,
              v19,
              v16,
              v17,
              PoolWithTag,
              SourceFileCount,
              TargetFile,
              SourceString[0]);
      goto LABEL_10;
    }
    if ( SourceFileCount == 1 )
    {
      if ( TargetFile != *(HANDLE *)&PoolWithTag->Length )
      {
        v12 = -1073741581;
        goto LABEL_10;
      }
      goto LABEL_9;
    }
LABEL_57:
    v12 = -1073741582;
  }
LABEL_10:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v12;
}
