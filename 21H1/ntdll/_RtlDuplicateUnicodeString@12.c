/*
 * XREFs of _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0
 * Callers:
 *     _RtlpTpIoDllProcessUnloads@8 @ 0x4B38592E (_RtlpTpIoDllProcessUnloads@8.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0 (_RtlDuplicateUnicodeString@12.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x4B2ECFE7 (RtlUnicodeStringValidateWorker_0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlDuplicateUnicodeString(ULONG Flags, PUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  unsigned __int16 v3; // bx
  PVOID StringRoutine; // edi
  ULONG v5; // ecx
  ULONG v6; // eax
  unsigned __int16 *v7; // ecx
  NTSTATUS v8; // esi
  unsigned __int16 v9; // si
  size_t v11; // [esp-4h] [ebp-44h]
  ULONG v12; // [esp+14h] [ebp-2Ch]
  ULONG Flagsa; // [esp+48h] [ebp+8h]

  v3 = 0;
  StringRoutine = 0;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v5 = Flags & 2;
  v12 = v5;
  v6 = Flags & 1;
  Flagsa = v6;
  if ( v5 )
  {
    if ( !v6 )
      return -1073741811;
  }
  v8 = RtlUnicodeStringValidateWorker_0(v5);
  if ( v8 >= 0 )
  {
    if ( v7 )
      v3 = *v7;
    if ( Flagsa && v3 == 0xFFFE )
    {
      return -1073741562;
    }
    else
    {
      if ( Flagsa )
        v9 = v3 + 2;
      else
        v9 = v3;
      if ( !v12 && !v3 )
        v9 = 0;
      if ( v9 )
      {
        StringRoutine = NtdllpAllocateStringRoutine(v9);
        if ( !StringRoutine )
          return -1073741801;
        if ( v3 )
        {
          LODWORD(v11) = v3;
          memcpy(StringRoutine, StringIn->Buffer, v11);
        }
        if ( Flagsa )
          *((_WORD *)StringRoutine + (v3 >> 1)) = 0;
      }
      StringOut->MaximumLength = v9;
      StringOut->Length = v3;
      StringOut->Buffer = (wchar_t *)StringRoutine;
      return 0;
    }
  }
  return v8;
}
