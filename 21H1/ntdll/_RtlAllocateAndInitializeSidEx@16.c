/*
 * XREFs of _RtlAllocateAndInitializeSidEx@16 @ 0x4B345F80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  int v4; // edi
  int v6; // edi
  char *Heap; // eax
  void *v8; // edx
  _DWORD *v10; // esi
  int v11; // eax
  SIZE_T v12; // [esp-8h] [ebp-Ch]

  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  HIDWORD(v12) = v4;
  v6 = SubAuthorityCount;
  LODWORD(v12) = 4 * SubAuthorityCount + 8;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v12);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  *Heap = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)(Heap + 2) = *IdentifierAuthority;
  Heap[1] = SubAuthorityCount;
  if ( SubAuthorityCount )
  {
    v10 = Heap + 8;
    do
    {
      v11 = *SubAuthorities++;
      *v10++ = v11;
      --v6;
    }
    while ( v6 );
  }
  *Sid = v8;
  return 0;
}
