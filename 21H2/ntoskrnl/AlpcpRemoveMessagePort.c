/*
 * XREFs of AlpcpRemoveMessagePort @ 0x14061ECE8
 * Callers:
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpRemoveMessagePort(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 40) & 7) == 1 )
    --*(_DWORD *)(a1 + 448);
  else
    --*(_DWORD *)(a1 + 452);
  *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a2 + 16) = 0LL;
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = result;
  return result;
}
