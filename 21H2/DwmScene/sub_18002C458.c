/*
 * XREFs of sub_18002C458 @ 0x18002C458
 * Callers:
 *     sub_1800248CC @ 0x1800248CC (sub_1800248CC.c)
 *     sub_1800249BC @ 0x1800249BC (sub_1800249BC.c)
 *     sub_180024AAC @ 0x180024AAC (sub_180024AAC.c)
 *     sub_180024B9C @ 0x180024B9C (sub_180024B9C.c)
 *     sub_180024C8C @ 0x180024C8C (sub_180024C8C.c)
 *     sub_180024D7C @ 0x180024D7C (sub_180024D7C.c)
 *     sub_180024E6C @ 0x180024E6C (sub_180024E6C.c)
 *     sub_180024F5C @ 0x180024F5C (sub_180024F5C.c)
 *     sub_18002504C @ 0x18002504C (sub_18002504C.c)
 *     sub_18002513C @ 0x18002513C (sub_18002513C.c)
 *     sub_18002522C @ 0x18002522C (sub_18002522C.c)
 *     sub_18002531C @ 0x18002531C (sub_18002531C.c)
 *     sub_18002540C @ 0x18002540C (sub_18002540C.c)
 *     sub_1800254FC @ 0x1800254FC (sub_1800254FC.c)
 *     sub_1800255EC @ 0x1800255EC (sub_1800255EC.c)
 *     sub_1800256DC @ 0x1800256DC (sub_1800256DC.c)
 *     sub_1800257CC @ 0x1800257CC (sub_1800257CC.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     sub_1800AEC10 @ 0x1800AEC10 (sub_1800AEC10.c)
 *     sub_1800B5EAC @ 0x1800B5EAC (sub_1800B5EAC.c)
 *     sub_1800B5F9C @ 0x1800B5F9C (sub_1800B5F9C.c)
 *     sub_1800B608C @ 0x1800B608C (sub_1800B608C.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B626C @ 0x1800B626C (sub_1800B626C.c)
 *     sub_1800B635C @ 0x1800B635C (sub_1800B635C.c)
 *     sub_1800B644C @ 0x1800B644C (sub_1800B644C.c)
 *     sub_1800B653C @ 0x1800B653C (sub_1800B653C.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800FE2C0 @ 0x1800FE2C0 (sub_1800FE2C0.c)
 *     sub_18011238C @ 0x18011238C (sub_18011238C.c)
 *     sub_180120300 @ 0x180120300 (sub_180120300.c)
 * Callees:
 *     sub_18002C3EC @ 0x18002C3EC (sub_18002C3EC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18002C458(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (v5 = *(_QWORD *)(a2 + 56), v5 == a2) )
  {
    v8 = 0LL;
    sub_18002C3EC((__int64)v7, a1);
    sub_18002C3EC(a1, a2);
    sub_18002C3EC(a2, (__int64)v7);
    if ( v8 )
    {
      v6 = v7;
      LOBYTE(v6) = v8 != v7;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v6);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v5;
    *(_QWORD *)(a2 + 56) = v4;
  }
}
