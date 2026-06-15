/*
 * XREFs of sub_18000DB50 @ 0x18000DB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000DB50(__int64 a1, int (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  int (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  char v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a2;
  v6 = 0LL;
  if ( (**v3)(v3, &unk_180042A80, &v6) >= 0 )
  {
    v5 = 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, char, _QWORD))(*(_QWORD *)v6 + 24LL))(
      v6,
      2LL,
      0LL,
      0xFFFFFFFFLL,
      v5,
      **(_QWORD **)(a1 + 8));
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
