/*
 * XREFs of MiRelocateAmount @ 0x1407C2814
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRelocateAmount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( result )
    return *(_QWORD *)(result + 40);
  return result;
}
