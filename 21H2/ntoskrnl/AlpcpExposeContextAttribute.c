/*
 * XREFs of AlpcpExposeContextAttribute @ 0x140606080
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140605F88 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpExposeContextAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 56) == a1 || *(_QWORD *)(a2 + 64) == a1 )
    v4 = *(_QWORD *)(a2 + 128);
  else
    v4 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)a3 = v4;
  if ( *(_QWORD *)(a2 + 56) == a1 || *(_QWORD *)(a2 + 64) == a1 )
    v5 = *(_DWORD *)(a2 + 72);
  else
    v5 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a3 + 16) = v5;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a3 + 8) = v6;
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a2 + 264);
  result = *(unsigned int *)(a2 + 272);
  *(_DWORD *)(a3 + 24) = result;
  if ( a4 )
  {
    if ( *(_QWORD *)a3 )
      *a4 |= 0x20000000u;
  }
  return result;
}
