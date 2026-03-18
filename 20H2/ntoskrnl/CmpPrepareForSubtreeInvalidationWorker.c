/*
 * XREFs of CmpPrepareForSubtreeInvalidationWorker @ 0x14076A090
 * Callers:
 *     <none>
 * Callees:
 *     CmpTryAcquireKcbIXLocks @ 0x14076A0E0 (CmpTryAcquireKcbIXLocks.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidationWorker(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rbx
  __int64 v4; // r9
  int v5; // ecx
  __int64 result; // rax

  v3 = (int *)a2;
  if ( (*(_DWORD *)(a1 + 8) & 0x80u) != 0 )
  {
    ++*(_DWORD *)(a2 + 4);
    return 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 16);
    LOBYTE(a2) = 1;
    v5 = CmpTryAcquireKcbIXLocks(a1, a2, a3, v4);
    result = 0LL;
    if ( v5 == -1073741267 )
    {
      ++v3[2];
      v5 = 0;
    }
    if ( v5 < 0 )
    {
      *v3 = v5;
      return 1LL;
    }
  }
  return result;
}
