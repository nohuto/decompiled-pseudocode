/*
 * XREFs of _RtlpCheckForSameCurdir@4 @ 0x4B2A7B3D
 * Callers:
 *     _RtlSetCurrentDirectory_U@4 @ 0x4B2A79F0 (_RtlSetCurrentDirectory_U@4.c)
 * Callees:
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

char __thiscall RtlpCheckForSameCurdir(PUNICODE_STRING String2)
{
  _UNICODE_STRING *v1; // edi
  char v2; // bl
  int v3; // eax
  HANDLE *v4; // esi
  wchar_t *Buffer; // eax
  int Length; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ecx
  _UNICODE_STRING String1; // [esp+10h] [ebp-8h] BYREF

  v1 = String2;
  v2 = 0;
  LOBYTE(String2) = 0;
  v3 = RtlpReferenceCurrentDirectory(String2);
  v4 = (HANDLE *)v3;
  if ( v3 )
  {
    *(_DWORD *)&String1.Length = *(_DWORD *)(v3 + 12);
    Buffer = *(wchar_t **)(v3 + 16);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)&String1.Length = *(_DWORD *)&ProcessParameters->CurrentDirectory.DosPath.Length;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
  }
  String1.Buffer = Buffer;
  Length = v1->Length;
  if ( String1.Length <= 6u )
  {
    if ( String1.Length != (_WORD)Length )
      goto LABEL_5;
  }
  else
  {
    if ( String1.Length - 2 != Length )
      goto LABEL_5;
    String1.Length -= 2;
  }
  if ( RtlEqualUnicodeString(&String1, v1, 1u) )
    v2 = 1;
LABEL_5:
  if ( v4 )
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) )
    {
      NtClose(v4[1]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  else
  {
    RtlLeaveCriticalSection(&FastPebLock);
  }
  return v2;
}
