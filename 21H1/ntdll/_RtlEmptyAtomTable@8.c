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

int __stdcall RtlEmptyAtomTable(int a1, char a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int *v5; // ebx
  int v6; // edi
  char v7; // al
  int *v8; // [esp+4h] [ebp-8h]
  unsigned int i; // [esp+8h] [ebp-4h]

  if ( !RtlpLockAtomTable((volatile signed __int32 *)a1) )
    return -1073741811;
  v3 = 0;
  v4 = (int *)(a1 + 48);
  for ( i = 0; v3 < *(_DWORD *)(a1 + 44); i = v3 )
  {
    v5 = v4++;
    v8 = v4;
    v6 = *v5;
    if ( *v5 )
    {
      v7 = a2;
      do
      {
        if ( v7 || (*(_BYTE *)(v6 + 10) & 1) == 0 )
        {
          *v5 = *(_DWORD *)v6;
          *(_DWORD *)v6 = 0;
          RtlpFreeHandleForAtom(a1, v6);
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
          v7 = a2;
        }
        else
        {
          v5 = (int *)v6;
        }
        v6 = *v5;
      }
      while ( *v5 );
      v3 = i;
      v4 = v8;
    }
    ++v3;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 8));
  return 0;
}
