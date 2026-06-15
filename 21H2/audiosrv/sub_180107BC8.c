/*
 * XREFs of sub_180107BC8 @ 0x180107BC8
 * Callers:
 *     sub_1801060DC @ 0x1801060DC (sub_1801060DC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1801053E0 @ 0x1801053E0 (sub_1801053E0.c)
 *     sub_18010983C @ 0x18010983C (sub_18010983C.c)
 *     sub_18010B1AC @ 0x18010B1AC (sub_18010B1AC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180107BC8(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v5; // rbx
  unsigned int v6; // r15d
  _DWORD *v7; // rcx
  __int64 *v8; // rsi
  _DWORD *i; // rdi
  int v10; // eax
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  int v13; // ebx
  __int64 result; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  __int64 *v19; // rdx
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v21; // [rsp+90h] [rbp+8h] BYREF
  __int64 v22; // [rsp+98h] [rbp+10h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a1;
  v6 = *(_DWORD *)(a2 + 52);
  v7 = (_DWORD *)a1[40];
  v8 = v5 + 39;
  for ( i = (_DWORD *)v5[39]; i != v7 && *i != v6; i += 2 )
    ;
  if ( i == v7 )
    v10 = 0;
  else
    v10 = i[1];
  if ( (unsigned int)CallbackContext > 5 )
  {
    LODWORD(v21) = v10;
    LODWORD(v22) = i != v7;
    LODWORD(v23) = v6;
    sub_18010983C(
      (unsigned int)&CallbackContext,
      (unsigned int)&unk_180169109,
      a3,
      a4,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  try
  {
    if ( (_DWORD *)v5[40] != i )
    {
      ++i[1];
      return 0LL;
    }
    v21 = 0LL;
    if ( !sub_180027D40(dword_180172938, &stru_18015B900) && !sub_180027D40(v11, dword_18015BA40) )
    {
      if ( !sub_180027D40(v12, v12) )
      {
        v13 = -2147467262;
        goto LABEL_16;
      }
      ++v5;
    }
    v21 = v5;
    (*(void (__fastcall **)(__int64 *))(*v5 + 8))(v5);
    v13 = 0;
LABEL_16:
    if ( v13 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        722,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v13);
      sub_18000F708((__int64 *)&v21);
      return (unsigned int)v13;
    }
    v22 = 0LL;
    sub_1800CB144(&v22);
    v15 = sub_18010B1AC(a2, &v22);
    v16 = v15;
    if ( v15 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        725,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v15);
      sub_18000F708(&v22);
      sub_18000F708((__int64 *)&v21);
      return v16;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 536LL))(v22, v21);
    v18 = v17;
    if ( v17 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        727,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v17);
      sub_18000F708(&v22);
      sub_18000F708((__int64 *)&v21);
      return v18;
    }
    v23 = v6 | 0x100000000LL;
    v19 = (__int64 *)v8[1];
    if ( (__int64 *)v8[2] == v19 )
    {
      sub_1801053E0(v8, (unsigned __int64)v19, &v23);
    }
    else
    {
      *v19 = v23;
      v8[1] += 8LL;
    }
    sub_18000F708(&v22);
    sub_18000F708((__int64 *)&v21);
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           740,
                           (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                           a4);
  }
  return result;
}
