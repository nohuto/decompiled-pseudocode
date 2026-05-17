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

char __fastcall RtlpCheckForSameCurdir(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // edi
  char v2; // bl
  int v3; // eax
  int v4; // esi
  wchar_t *Buffer; // eax
  int v6; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ecx
  _DWORD v9[2]; // [esp+10h] [ebp-8h] BYREF

  v1 = a1;
  v2 = 0;
  LOBYTE(a1) = 0;
  v3 = RtlpReferenceCurrentDirectory(a1);
  v4 = v3;
  if ( v3 )
  {
    v9[0] = *(_DWORD *)(v3 + 12);
    Buffer = *(wchar_t **)(v3 + 16);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    v9[0] = *(_DWORD *)&ProcessParameters->CurrentDirectory.DosPath.Length;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
  }
  v9[1] = Buffer;
  v6 = *v1;
  if ( LOWORD(v9[0]) <= 6u )
  {
    if ( LOWORD(v9[0]) != (_WORD)v6 )
      goto LABEL_5;
  }
  else
  {
    if ( LOWORD(v9[0]) - 2 != v6 )
      goto LABEL_5;
    LOWORD(v9[0]) -= 2;
  }
  if ( (unsigned __int8)RtlEqualUnicodeString(v9, v1, 1) )
    v2 = 1;
LABEL_5:
  if ( v4 )
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) )
    {
      NtClose(*(HANDLE *)(v4 + 4));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  else
  {
    RtlLeaveCriticalSection(&FastPebLock);
  }
  return v2;
}
