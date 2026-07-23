/*
 * XREFs of _RtlEmptyAtomTable@8 @ 0x4B34D050
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFreeHandleForAtom@8 @ 0x4B2A7933 (_RtlpFreeHandleForAtom@8.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpLockAtomTable@4 @ 0x4B2E04D4 (_RtlpLockAtomTable@4.c)
 */

NTSTATUS __cdecl RtlEmptyAtomTable(PVOID AtomTableHandle, BOOLEAN IncludePinnedAtoms)
{
  unsigned int v3; // eax
  char *v4; // ecx
  _BYTE **v5; // ebx
  _BYTE *v6; // edi
  BOOLEAN v7; // al
  char *v8; // [esp+4h] [ebp-8h]
  unsigned int i; // [esp+8h] [ebp-4h]

  if ( !RtlpLockAtomTable((_RTL_SRWLOCK *)AtomTableHandle) )
    return -1073741811;
  v3 = 0;
  v4 = (char *)AtomTableHandle + 48;
  for ( i = 0; v3 < *((_DWORD *)AtomTableHandle + 11); i = v3 )
  {
    v5 = (_BYTE **)v4;
    v4 += 4;
    v8 = v4;
    v6 = *v5;
    if ( *v5 )
    {
      v7 = IncludePinnedAtoms;
      do
      {
        if ( v7 || (v6[10] & 1) == 0 )
        {
          *v5 = *(_BYTE **)v6;
          *(_DWORD *)v6 = 0;
          RtlpFreeHandleForAtom((int)AtomTableHandle, (int)v6);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
          v7 = IncludePinnedAtoms;
        }
        else
        {
          v5 = (_BYTE **)v6;
        }
        v6 = *v5;
      }
      while ( *v5 );
      v3 = i;
      v4 = v8;
    }
    ++v3;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 2);
  return 0;
}
