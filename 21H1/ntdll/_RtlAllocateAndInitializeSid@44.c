/*
 * XREFs of _RtlAllocateAndInitializeSid@44 @ 0x4B2E3710
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        ULONG SubAuthority0,
        ULONG SubAuthority1,
        ULONG SubAuthority2,
        ULONG SubAuthority3,
        ULONG SubAuthority4,
        ULONG SubAuthority5,
        ULONG SubAuthority6,
        ULONG SubAuthority7,
        PSID *Sid)
{
  int v11; // esi
  char *Heap; // eax
  SIZE_T v14; // [esp-8h] [ebp-Ch]

  if ( SubAuthorityCount > 8u )
    return -1073741704;
  HIDWORD(v14) = v11;
  LODWORD(v14) = 4 * SubAuthorityCount + 8;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v14);
  if ( !Heap )
    return -1073741801;
  Heap[1] = SubAuthorityCount;
  *Heap = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)(Heap + 2) = *IdentifierAuthority;
  switch ( SubAuthorityCount )
  {
    case 1u:
      goto LABEL_4;
    case 2u:
      goto LABEL_10;
    case 3u:
      goto LABEL_9;
    case 4u:
      goto LABEL_8;
    case 5u:
      goto LABEL_7;
    case 6u:
      goto LABEL_6;
    case 7u:
      goto LABEL_14;
    case 8u:
      *((_DWORD *)Heap + 9) = SubAuthority7;
LABEL_14:
      *((_DWORD *)Heap + 8) = SubAuthority6;
LABEL_6:
      *((_DWORD *)Heap + 7) = SubAuthority5;
LABEL_7:
      *((_DWORD *)Heap + 6) = SubAuthority4;
LABEL_8:
      *((_DWORD *)Heap + 5) = SubAuthority3;
LABEL_9:
      *((_DWORD *)Heap + 4) = SubAuthority2;
LABEL_10:
      *((_DWORD *)Heap + 3) = SubAuthority1;
LABEL_4:
      *((_DWORD *)Heap + 2) = SubAuthority0;
      break;
    default:
      break;
  }
  *Sid = Heap;
  return 0;
}
