/*
 * XREFs of sub_18000D9A0 @ 0x18000D9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000D9A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  const wchar_t *v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v4 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 64LL))(*a2);
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Fu, &MessageGuid, v4);
  }
  v6 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))v3)(v3, &unk_180042AB0, &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v6 + 40LL))(
      v6,
      **(_QWORD **)(a1 + 8),
      0LL,
      *(_QWORD *)(a1 + 16));
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
