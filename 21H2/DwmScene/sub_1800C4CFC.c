/*
 * XREFs of sub_1800C4CFC @ 0x1800C4CFC
 * Callers:
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800A6CA0 @ 0x1800A6CA0 (sub_1800A6CA0.c)
 *     sub_1800AACF0 @ 0x1800AACF0 (sub_1800AACF0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C4CFC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  char v5; // r15
  int v6; // esi
  __int64 v7; // rdi
  bool v8; // al
  char v9; // cl
  char v10; // bl
  __int64 result; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  bool v14; // zf
  size_t v15[5]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF

  v3 = sub_18007AB84(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_18020F9E8, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_18020FA08, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_18020FA28, 0LL);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_18020FDE8, 0LL);
  v7 = sub_18007B2B4(a1);
  v8 = v6 != 0;
  if ( (_DWORD)v3 )
    v8 = 1;
  v9 = v8;
  if ( v4 )
    v9 = 1;
  v10 = v9;
  if ( v5 )
    v10 = 1;
  v16 = 0LL;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_180020B7C(v15, (__int64)&qword_180214038);
  sub_1800A656C(v7, &v16, v15);
  sub_1800AACF0(v16, &qword_180214138, v10);
  sub_1800A6CA0(v7);
  result = sub_1800A6CA0(v7);
  v12 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
