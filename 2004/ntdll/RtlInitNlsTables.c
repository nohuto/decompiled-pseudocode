/*
 * XREFs of RtlInitNlsTables @ 0x1800E5200
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800D1CE0 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1800E5100 (RtlInitCodePageTable.c)
 */

__int64 __fastcall RtlInitNlsTables(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdi

  RtlInitCodePageTable(a1, a4 + 64);
  RtlInitCodePageTable(a2, a4);
  result = 0LL;
  if ( a3 )
  {
    result = a3 + 2 * ((unsigned __int16)(*(_WORD *)(a3 + 2) + 1) + 1LL);
    v8 = a3 + 4;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a4 + 128) = v8;
  *(_QWORD *)(a4 + 136) = result;
  return result;
}
