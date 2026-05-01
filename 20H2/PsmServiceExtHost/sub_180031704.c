/*
 * XREFs of sub_180031704 @ 0x180031704
 * Callers:
 *     sub_180031588 @ 0x180031588 (sub_180031588.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall sub_180031704(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
  v5 = (_QWORD *)(a2 + 136);
  v6 = *(_QWORD **)(a1 + 280);
  if ( *v6 != a1 + 272 )
    __fastfail(3u);
  *v5 = a1 + 272;
  v5[1] = v6;
  *v6 = v5;
  *(_QWORD *)(a1 + 280) = v5;
  if ( (*(_BYTE *)(a1 + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    TpPostWork(*(_QWORD *)(a1 + 264));
    *(_DWORD *)(a1 + 296) |= 1u;
  }
  return RtlLeaveCriticalSection(v2);
}
