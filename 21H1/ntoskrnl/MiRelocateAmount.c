/*
 * XREFs of MiRelocateAmount @ 0x1407BF314
 * Callers:
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
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
