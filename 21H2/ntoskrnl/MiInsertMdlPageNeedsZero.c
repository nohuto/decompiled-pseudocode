/*
 * XREFs of MiInsertMdlPageNeedsZero @ 0x140295398
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140295074 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     MiUpdateLargePagePfns @ 0x14055EE3C (MiUpdateLargePagePfns.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiInsertMdlPageNeedsZero(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // r8

  v4 = *(_DWORD *)(a1 + 20) % *(_DWORD *)(a1 + 16);
  ++*(_DWORD *)(a1 + 20);
  v6 = *(_QWORD *)a1 + 48LL * v4;
  result = (_QWORD *)(48 * a2 - 0x58000000000LL);
  v8 = *(_QWORD **)(v6 + 40);
  if ( *v8 != v6 + 32 )
    __fastfail(3u);
  *result = v6 + 32;
  result[1] = v8;
  *v8 = result;
  *(_QWORD *)(v6 + 40) = result;
  *(_QWORD *)(v6 + 24) += a3;
  return result;
}
