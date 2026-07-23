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

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  int v1; // ebx
  unsigned int v3; // eax
  _DWORD **v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  struct _PEB *v7; // eax
  size_t v8; // [esp-8h] [ebp-10h]
  unsigned int i; // [esp+4h] [ebp-4h]

  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) )
  {
    if ( !RtlpLockAtomTable((_RTL_SRWLOCK *)AtomTableHandle) )
      return -1073741811;
    v3 = 0;
    HIDWORD(v8) = v1;
    v4 = (_DWORD **)((char *)AtomTableHandle + 48);
    for ( i = 0; v3 < *((_DWORD *)AtomTableHandle + 11); i = v3 )
    {
      v5 = *v4;
      v6 = v5;
      *v4++ = 0;
      if ( v5 )
      {
        do
        {
          v7 = NtCurrentPeb();
          v5 = (_DWORD *)*v5;
          *v6 = 0;
          RtlFreeHeap(v7->ProcessHeap, 0, v6);
          v6 = v5;
        }
        while ( v5 );
        v3 = i;
      }
      ++v3;
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 2);
    RtlDestroyHandleTable((PRTL_HANDLE_TABLE)((char *)AtomTableHandle + 12));
    LODWORD(v8) = 52;
    memset(AtomTableHandle, 0, v8);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AtomTableHandle);
  }
  return 0;
}
