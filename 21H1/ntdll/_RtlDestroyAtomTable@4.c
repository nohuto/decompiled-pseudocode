/*
 * XREFs of _RtlDestroyAtomTable@4 @ 0x4B34CFA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDestroyHandleTable@4 @ 0x4B2ABF30 (_RtlDestroyHandleTable@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpLockAtomTable@4 @ 0x4B2E04D4 (_RtlpLockAtomTable@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlDestroyAtomTable(volatile signed __int32 *a1)
{
  unsigned int v2; // eax
  _DWORD **v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  struct _PEB *v6; // eax
  unsigned int i; // [esp+4h] [ebp-4h]

  if ( !_InterlockedExchangeAdd(a1 + 1, 0xFFFFFFFF) )
  {
    if ( !RtlpLockAtomTable(a1) )
      return -1073741811;
    v2 = 0;
    v3 = (_DWORD **)(a1 + 12);
    for ( i = 0; v2 < *((_DWORD *)a1 + 11); i = v2 )
    {
      v4 = *v3;
      v5 = v4;
      *v3++ = 0;
      if ( v4 )
      {
        do
        {
          v6 = NtCurrentPeb();
          v4 = (_DWORD *)*v4;
          *v5 = 0;
          RtlFreeHeap((int)v6->ProcessHeap, 0, (int)v5);
          v5 = v4;
        }
        while ( v4 );
        v2 = i;
      }
      ++v2;
    }
    *a1 = 0;
    RtlReleaseSRWLockExclusive(a1 + 2);
    RtlDestroyHandleTable((_DWORD *)a1 + 3);
    memset((void *)a1, 0, 0x34u);
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)a1);
  }
  return 0;
}
