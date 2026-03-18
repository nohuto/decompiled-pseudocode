/*
 * XREFs of RtlInternTableInitialize @ 0x1407B5C64
 * Callers:
 *     PopEtInit @ 0x140A69EB8 (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInternTableInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
