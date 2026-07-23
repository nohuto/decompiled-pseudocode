/*
 * XREFs of PssNtFreeWalkMarker @ 0x180114230
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall PssNtFreeWalkMarker(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)a1 )
  {
    result = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
