/*
 * XREFs of sub_18009218B @ 0x18009218B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800CE0BC @ 0x1800CE0BC (sub_1800CE0BC.c)
 *     sub_1800CF544 @ 0x1800CF544 (sub_1800CF544.c)
 *     sub_1800CFDDC @ 0x1800CFDDC (sub_1800CFDDC.c)
 */

void __fastcall sub_18009218B(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        _QWORD *a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        __int64 a26,
        unsigned int a27,
        char a28,
        __int64 a29)
{
  __int64 v29; // r14
  unsigned int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r12
  __int64 v34; // r8

  v29 = a26;
  v30 = a27;
  while ( 1 )
  {
    v31 = sub_18002C4D0(v29 + 56);
    a29 = v31;
    if ( !v31 )
      break;
    v33 = *(_QWORD **)sub_1800CF544(v32, v31);
    a11 = v33;
    sub_1800CFDDC(v29 + 56, a29);
    LOBYTE(v34) = a28;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v33[2] + 32LL))(v33 + 2, v30, v34);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 51LL, &unk_18015DFC8);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*v33 + 232LL))(v33, v29);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v33 + 232LL))(v33, qword_18019E5F8);
    sub_1800CE0BC(&a13, &a11);
  }
  JUMPOUT(0x18002C438LL);
}
