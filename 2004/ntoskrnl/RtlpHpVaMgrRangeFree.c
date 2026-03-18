/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x1402D85A0
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402D843C (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x140253038 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x1402D8608 (RtlpHpVaMgrRangeCleanup.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 24);
  v5 = v3 << 20;
  RtlpHpVaMgrRangeCleanup(a1);
  return RtlpHpEnvFreeVA(&v6, (unsigned __int64 *)&v5, 0x8000);
}
