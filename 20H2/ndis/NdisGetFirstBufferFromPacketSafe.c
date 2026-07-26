/*
 * XREFs of NdisGetFirstBufferFromPacketSafe @ 0x1C00C17F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall NdisGetFirstBufferFromPacketSafe(
        __int64 a1,
        struct _MDL **a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6)
{
  struct _MDL *v6; // rbx
  PVOID MappedSystemVa; // rax
  _DWORD *result; // rax
  struct _MDL *i; // rcx

  v6 = *(struct _MDL **)(a1 + 8);
  *a2 = v6;
  if ( v6 )
  {
    if ( (v6->MdlFlags & 5) != 0 )
      MappedSystemVa = v6->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, a6 | 0x40000000u);
    *a3 = MappedSystemVa;
    result = (_DWORD *)v6->ByteCount;
    *a5 = (_DWORD)result;
    *a4 = (_DWORD)result;
    for ( i = v6->Next; i; i = i->Next )
    {
      result = (_DWORD *)i->ByteCount;
      *a5 += (_DWORD)result;
    }
  }
  else
  {
    *a3 = 0LL;
    result = a5;
    *a4 = 0;
    *a5 = 0;
  }
  return result;
}
