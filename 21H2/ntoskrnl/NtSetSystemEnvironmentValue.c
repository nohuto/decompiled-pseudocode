/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x140955510
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     HalSetEnvironmentVariable @ 0x1404BBEF0 (HalSetEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     RtlUnicodeStringToAnsiString @ 0x1406DD260 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14075DD50 (RtlxUnicodeStringToAnsiSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  unsigned __int16 v2; // ax
  wchar_t *v4; // r8
  unsigned __int16 v5; // ax
  wchar_t *v6; // rdx
  ULONG v7; // eax
  unsigned __int16 v8; // bx
  int v9; // ebx
  ULONG v10; // eax
  unsigned __int16 v11; // bx
  int v12; // ebx
  struct _KTHREAD *v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _STRING DestinationString; // [rsp+28h] [rbp-70h] BYREF
  _STRING v19; // [rsp+38h] [rbp-60h] BYREF
  ULONG v20; // [rsp+48h] [rbp-50h]
  ULONG v21; // [rsp+4Ch] [rbp-4Ch]
  int v22; // [rsp+50h] [rbp-48h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+68h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-18h]
  KPROCESSOR_MODE PreviousMode; // [rsp+B0h] [rbp+18h]

  v20 = 0;
  v21 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&v19.Length = 0LL;
  UnicodeString = 0LL;
  SourceString = 0LL;
  DestinationString.Buffer = 0LL;
  v19.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      goto LABEL_20;
    UnicodeString = *VariableName;
    v2 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v2 )
      return -1073741670;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (wchar_t *)((char *)UnicodeString.Buffer + v2);
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)VariableValue & 3) != 0 )
LABEL_20:
      ExRaiseDatatypeMisalignment();
    SourceString = *VariableValue;
    v5 = _mm_cvtsi128_si32((__m128i)SourceString);
    if ( !v5 )
      return -1073741670;
    if ( ((__int64)SourceString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (wchar_t *)((char *)SourceString.Buffer + v5);
    if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < SourceString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *VariableName;
    SourceString = *VariableValue;
  }
  v7 = RtlxUnicodeStringToAnsiSize(&UnicodeString);
  v8 = v7;
  v20 = v7;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v8;
  v9 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v22 = v9;
  if ( v9 >= 0 )
  {
    v10 = RtlxUnicodeStringToAnsiSize(&SourceString);
    v11 = v10;
    v21 = v10;
    v19.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
    if ( v19.Buffer )
    {
      v19.MaximumLength = v11;
      v12 = RtlUnicodeStringToAnsiString(&v19, &SourceString, 0);
      v22 = v12;
      if ( v12 >= 0 )
      {
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        v14 = HalSetEnvironmentVariable(DestinationString.Buffer, v19.Buffer);
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v19.Buffer, 0);
        return v14 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v19.Buffer, 0);
        return v12;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v9;
  }
}
