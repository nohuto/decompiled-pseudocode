/*
 * XREFs of sub_18003C450 @ 0x18003C450
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall sub_18003C450(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 160LL))(
        *(_QWORD *)(a1 + 112),
        *(unsigned int *)(a1 + 128));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  sub_180034D90((_QWORD *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
