/*
 * XREFs of KiAbCleanupThreadState @ 0x140275C98
 * Callers:
 *     KeCleanupThreadState @ 0x140275C38 (KeCleanupThreadState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall KiAbCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR result; // rax
  ULONG_PTR v2; // r9
  ULONG_PTR BugCheckParameter4; // rdx
  int v4; // r10d
  __int64 i; // rbx
  ULONG_PTR v6; // r8

  result = *(unsigned int *)(BugCheckParameter1 + 116);
  v2 = 1LL;
  if ( (result & 1) != 0 )
  {
    BugCheckParameter4 = 0LL;
    v4 = 0;
    for ( i = 0LL; ; i += 96LL )
    {
      v6 = i + *(_QWORD *)(BugCheckParameter1 + 800);
      if ( *(_QWORD *)(v6 + 32) )
        break;
      if ( *(_DWORD *)(v6 + 24) >= 0x100u )
      {
        v2 = 2LL;
        goto LABEL_13;
      }
      result = v6 - 16LL * *(unsigned __int8 *)(v6 + 24);
      if ( BugCheckParameter1 != result )
      {
        v2 = 3LL;
        goto LABEL_13;
      }
      if ( (*(_DWORD *)(v6 + 88) & 0x1FFFF) != 0 )
      {
        v2 = 4LL;
        goto LABEL_13;
      }
      if ( (unsigned int)++v4 >= 6 )
        return result;
    }
    BugCheckParameter4 = *(_QWORD *)(v6 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL;
LABEL_13:
    KeBugCheckEx(0x153u, BugCheckParameter1, v6, v2, BugCheckParameter4);
  }
  return result;
}
