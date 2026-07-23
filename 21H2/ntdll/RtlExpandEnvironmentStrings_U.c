/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x180077E30
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x180045FC4 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DEFFC (RtlpLookupSafeCurDirList.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF54C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x180015630 (RtlExpandEnvironmentStrings.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings_U(
        PVOID Environment,
        PUNICODE_STRING Source,
        PUNICODE_STRING Destination,
        PULONG ReturnedLength)
{
  unsigned __int64 MaximumLength; // rax
  unsigned __int64 Length; // r8
  wchar_t *Buffer; // rdx
  NTSTATUS v9; // eax
  int v10; // edx
  NTSTATUS v11; // ecx
  ULONG_PTR v13; // [rsp+48h] [rbp+10h] BYREF

  MaximumLength = Destination->MaximumLength;
  Length = Source->Length;
  Buffer = Source->Buffer;
  v13 = 0LL;
  v9 = RtlExpandEnvironmentStrings(Environment, Buffer, Length >> 1, Destination->Buffer, MaximumLength >> 1, &v13);
  v10 = v13;
  v11 = v9;
  if ( v13 > 0x7FFF )
  {
    v11 = -1073741823;
    if ( ReturnedLength )
      *ReturnedLength = 0;
  }
  else
  {
    if ( v9 >= 0 )
      Destination->Length = 2 * (v13 - 1);
    if ( ReturnedLength )
      *ReturnedLength = 2 * v10;
  }
  return v11;
}
