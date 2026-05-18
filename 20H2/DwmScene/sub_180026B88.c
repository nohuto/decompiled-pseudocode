/*
 * XREFs of sub_180026B88 @ 0x180026B88
 * Callers:
 *     sub_18001EFFC @ 0x18001EFFC (sub_18001EFFC.c)
 *     sub_18001F0EC @ 0x18001F0EC (sub_18001F0EC.c)
 *     sub_18001F1DC @ 0x18001F1DC (sub_18001F1DC.c)
 *     sub_18001F2CC @ 0x18001F2CC (sub_18001F2CC.c)
 *     sub_18001F3BC @ 0x18001F3BC (sub_18001F3BC.c)
 *     sub_18001F4AC @ 0x18001F4AC (sub_18001F4AC.c)
 *     sub_18001F59C @ 0x18001F59C (sub_18001F59C.c)
 *     sub_18001F68C @ 0x18001F68C (sub_18001F68C.c)
 *     sub_18001F77C @ 0x18001F77C (sub_18001F77C.c)
 *     sub_18001F86C @ 0x18001F86C (sub_18001F86C.c)
 *     sub_18001F95C @ 0x18001F95C (sub_18001F95C.c)
 *     sub_18001FA4C @ 0x18001FA4C (sub_18001FA4C.c)
 *     sub_18001FB3C @ 0x18001FB3C (sub_18001FB3C.c)
 *     sub_18001FC2C @ 0x18001FC2C (sub_18001FC2C.c)
 *     sub_18001FD1C @ 0x18001FD1C (sub_18001FD1C.c)
 *     sub_18001FE0C @ 0x18001FE0C (sub_18001FE0C.c)
 *     sub_18001FEFC @ 0x18001FEFC (sub_18001FEFC.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 *     sub_1800B05DC @ 0x1800B05DC (sub_1800B05DC.c)
 *     sub_1800B06CC @ 0x1800B06CC (sub_1800B06CC.c)
 *     sub_1800B07BC @ 0x1800B07BC (sub_1800B07BC.c)
 *     sub_1800B08AC @ 0x1800B08AC (sub_1800B08AC.c)
 *     sub_1800B099C @ 0x1800B099C (sub_1800B099C.c)
 *     sub_1800B0A8C @ 0x1800B0A8C (sub_1800B0A8C.c)
 *     sub_1800B0B7C @ 0x1800B0B7C (sub_1800B0B7C.c)
 *     sub_1800B0C6C @ 0x1800B0C6C (sub_1800B0C6C.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800F89F0 @ 0x1800F89F0 (sub_1800F89F0.c)
 *     sub_18010CABC @ 0x18010CABC (sub_18010CABC.c)
 *     sub_18011AA30 @ 0x18011AA30 (sub_18011AA30.c)
 * Callees:
 *     sub_180026B1C @ 0x180026B1C (sub_180026B1C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180026B88(__int64 a1, __int64 a2)
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
    sub_180026B1C((__int64)v7, a1);
    sub_180026B1C(a1, a2);
    sub_180026B1C(a2, (__int64)v7);
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
