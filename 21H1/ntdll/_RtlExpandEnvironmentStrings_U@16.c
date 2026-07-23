/*
 * XREFs of _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330
 * Callers:
 *     _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD (_RtlpCallQueryRegistryRoutine@28.c)
 *     _RtlpLookupSafeCurDirList@0 @ 0x4B33D088 (_RtlpLookupSafeCurDirList@0.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 * Callees:
 *     _RtlExpandEnvironmentStrings@24 @ 0x4B2DC3A0 (_RtlExpandEnvironmentStrings@24.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings_U(
        PVOID Environment,
        PUNICODE_STRING Source,
        PUNICODE_STRING Destination,
        PULONG ReturnedLength)
{
  NTSTATUS v4; // eax
  int v5; // esi
  NTSTATUS v6; // ecx
  SIZE_T v8; // [esp-10h] [ebp-20h]
  SIZE_T v9; // [esp-4h] [ebp-14h]
  ULONG_PTR *v10; // [esp+4h] [ebp-Ch]
  SIZE_T DestinationLength; // [esp+Ch] [ebp-4h] BYREF

  LODWORD(DestinationLength) = 0;
  LODWORD(v9) = &DestinationLength;
  HIDWORD(v8) = Destination->Buffer;
  LODWORD(v8) = Source->Length >> 1;
  v4 = RtlExpandEnvironmentStrings(
         Environment,
         (PCWSTR)Source->Buffer,
         v8,
         (PWSTR)(Destination->MaximumLength >> 1),
         v9,
         v10);
  v5 = DestinationLength;
  v6 = v4;
  if ( (unsigned int)DestinationLength > 0x7FFF )
  {
    v6 = -1073741823;
    if ( ReturnedLength )
      *ReturnedLength = 0;
  }
  else
  {
    if ( v4 >= 0 )
      Destination->Length = 2 * DestinationLength - 2;
    if ( ReturnedLength )
      *ReturnedLength = 2 * v5;
  }
  return v6;
}
