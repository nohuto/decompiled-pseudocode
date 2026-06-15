/*
 * XREFs of ?Release@CAudioMediaType@@UEAAKXZ @ 0x180036200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::Release(CAudioMediaType *this)
{
  unsigned __int32 v2; // esi
  void *v3; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    v3 = (void *)*((_QWORD *)this + 2);
    *(_QWORD *)this = &CAudioMediaType::`vftable';
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    *((_QWORD *)this + 2) = 0LL;
    v5 = GetProcessHeap();
    HeapFree(v5, 0, this);
  }
  return v2;
}
