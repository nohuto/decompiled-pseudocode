/*
 * XREFs of sub_180005A68 @ 0x180005A68
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_180005A68(__int64 a1)
{
  __int64 i; // rdi
  BOOLEAN result; // al
  void *v4; // r8

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    result = NtClose(*(HANDLE *)(*(_QWORD *)a1 + 8 * i));
  if ( *(_QWORD *)a1 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)a1);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return result;
}
