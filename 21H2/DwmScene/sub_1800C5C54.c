/*
 * XREFs of sub_1800C5C54 @ 0x1800C5C54
 * Callers:
 *     sub_1800C32C0 @ 0x1800C32C0 (sub_1800C32C0.c)
 * Callees:
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_180085EE8 @ 0x180085EE8 (sub_180085EE8.c)
 *     sub_1800BCE78 @ 0x1800BCE78 (sub_1800BCE78.c)
 *     sub_1800FDA68 @ 0x1800FDA68 (sub_1800FDA68.c)
 *     sub_1800FDA74 @ 0x1800FDA74 (sub_1800FDA74.c)
 *     sub_1800FDAC0 @ 0x1800FDAC0 (sub_1800FDAC0.c)
 *     sub_1800FDACC @ 0x1800FDACC (sub_1800FDACC.c)
 *     sub_1800FDAD8 @ 0x1800FDAD8 (sub_1800FDAD8.c)
 *     sub_1800FDAE4 @ 0x1800FDAE4 (sub_1800FDAE4.c)
 *     sub_1800FDAF0 @ 0x1800FDAF0 (sub_1800FDAF0.c)
 *     sub_1800FDAFC @ 0x1800FDAFC (sub_1800FDAFC.c)
 *     sub_1800FDB08 @ 0x1800FDB08 (sub_1800FDB08.c)
 *     sub_1800FDB14 @ 0x1800FDB14 (sub_1800FDB14.c)
 *     sub_1800FDB1C @ 0x1800FDB1C (sub_1800FDB1C.c)
 *     sub_1800FDB28 @ 0x1800FDB28 (sub_1800FDB28.c)
 *     sub_1800FDB34 @ 0x1800FDB34 (sub_1800FDB34.c)
 *     sub_1800FDB40 @ 0x1800FDB40 (sub_1800FDB40.c)
 *     sub_1800FDB4C @ 0x1800FDB4C (sub_1800FDB4C.c)
 *     sub_1800FDB6C @ 0x1800FDB6C (sub_1800FDB6C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C5C54(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rbx
  volatile signed __int32 *v48; // rbx
  signed __int32 v49; // eax
  __int128 v50; // [rsp+38h] [rbp-49h] BYREF
  __int128 v51; // [rsp+48h] [rbp-39h] BYREF
  __int128 v52; // [rsp+58h] [rbp-29h]
  int v53; // [rsp+68h] [rbp-19h] BYREF
  __int128 v54; // [rsp+78h] [rbp-9h] BYREF
  __m128 v55; // [rsp+88h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  result = (__int64)&retaddr;
  v5 = *a2;
  if ( *(_BYTE *)(*a2 + 116LL) )
  {
    v54 = 0LL;
    v51 = 0LL;
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v5 = *a2;
      v6 = a2[1];
    }
    *(_QWORD *)&v51 = v5;
    *((_QWORD *)&v51 + 1) = v6;
    sub_18007A810(a1, &v54, 0LL, &v51);
    result = sub_18007AB84(a1, *(_DWORD *)(*a2 + 112LL));
    v8 = result;
    if ( (_QWORD)v54 && (*(_DWORD *)(v54 + 440) & 0x2000000) != 0 )
    {
      (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)result + 168LL))(
        result,
        &unk_180211D28,
        v7,
        1LL);
      v9 = v54;
      v52 = 0LL;
      v10 = *(_QWORD *)(v54 + 64);
      if ( v10 )
      {
        while ( 1 )
        {
          v49 = *(_DWORD *)(v10 + 8);
          if ( !v49 )
            break;
          if ( v49 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v49 + 1, v49) )
          {
            v11 = *(_QWORD *)(v9 + 56);
            v52 = *(_OWORD *)(v9 + 56);
            goto LABEL_8;
          }
        }
      }
      v11 = v52;
LABEL_8:
      if ( v11 )
      {
        sub_180085CD8(v11, (__int64)&v53);
        sub_180085EE8(v11, &v55);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211C48,
          v12,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211C68,
          v13,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211C88,
          v14,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211CA8,
          v15,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211CC8,
          v16,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211CE8,
          v17,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211D08,
          v18,
          1LL);
      }
      v50 = 0LL;
      result = (__int64)sub_1800BCE78((__int64 *)&v50, &v54);
      v19 = v50;
      if ( (_QWORD)v50 )
      {
        v20 = *(_QWORD *)v8;
        sub_1800FDAF0(v50);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v20 + 168))(v8, &unk_180211E68, v21, 1LL);
        v22 = *(_QWORD *)v8;
        sub_1800FDAFC(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v22 + 168))(v8, &unk_180211E48, v23, 1LL);
        sub_1800FDB08(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211EA8,
          v24,
          1LL);
        sub_1800FDAE4(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211EC8,
          v25,
          1LL);
        sub_1800FDAC0(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211E88,
          v26,
          1LL);
        sub_1800FDB1C(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211EE8,
          v27,
          1LL);
        v28 = *(_QWORD *)v8;
        sub_1800FDB34(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v28 + 168))(v8, &unk_180211F08, v29, 1LL);
        v30 = *(_QWORD *)v8;
        sub_1800FDB28(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v30 + 168))(v8, &unk_180211F28, v31, 1LL);
        v32 = *(_QWORD *)v8;
        sub_1800FDB4C(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v32 + 168))(v8, &unk_180211FE8, v33, 1LL);
        v34 = *(_QWORD *)v8;
        sub_1800FDB40(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v34 + 168))(v8, &unk_180212008, v35, 1LL);
        v36 = *(_QWORD *)v8;
        v37 = sub_1800FDA74(v19);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(v36 + 152))(v8, &unk_180211E28, v37, 1LL);
        v38 = *(_QWORD *)v8;
        v39 = sub_1800FDB14(v19);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(v38 + 152))(v8, &unk_180212028, v39, 1LL);
        v40 = *(_QWORD *)v8;
        LOBYTE(v41) = sub_1800FDB6C(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v40 + 144))(v8, &unk_180211FA8, v41, 1LL);
        v42 = *(_QWORD *)v8;
        sub_1800FDACC(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(v42 + 168))(v8, &unk_180211FC8, v43, 1LL);
        sub_1800FDAD8(v19);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_180211F68,
          v44,
          1LL);
        sub_1800FDA68(v19);
        result = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
                   v8,
                   &unk_180211F48,
                   v45,
                   1LL);
      }
      if ( *((_QWORD *)&v50 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          v46 = *((_QWORD *)&v50 + 1);
          (***((void (__fastcall ****)(_QWORD))&v50 + 1))(*((_QWORD *)&v50 + 1));
          result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 12));
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v50 + 1) + 8LL))(*((_QWORD *)&v50 + 1));
        }
      }
      if ( *((_QWORD *)&v52 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          v47 = *((_QWORD *)&v52 + 1);
          (***((void (__fastcall ****)(_QWORD))&v52 + 1))(*((_QWORD *)&v52 + 1));
          result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 12));
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
        }
      }
    }
    v48 = (volatile signed __int32 *)*((_QWORD *)&v54 + 1);
    if ( *((_QWORD *)&v54 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v48)(v48);
        result = (unsigned int)_InterlockedDecrement(v48 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
      }
    }
  }
  return result;
}
