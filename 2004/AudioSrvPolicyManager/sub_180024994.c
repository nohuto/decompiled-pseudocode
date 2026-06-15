/*
 * XREFs of sub_180024994 @ 0x180024994
 * Callers:
 *     sub_180006D30 @ 0x180006D30 (sub_180006D30.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800250BC @ 0x1800250BC (sub_1800250BC.c)
 *     sub_180026030 @ 0x180026030 (sub_180026030.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_18002B71C @ 0x18002B71C (sub_18002B71C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180024994(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // eax
  signed int v8; // ebx
  int v9; // r9d
  int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF

  v21 = a1;
  v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = v7;
    v10 = 40;
LABEL_18:
    sub_180003AB0(
      retaddr,
      v10,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      v9);
    goto LABEL_20;
  }
  v11 = v22;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  LODWORD(v21) = 0;
  if ( v12 >= 0x15 )
  {
    v8 = -2147024809;
LABEL_6:
    v10 = 44;
LABEL_17:
    v9 = v8;
    goto LABEL_18;
  }
  v8 = sub_1800250BC(v11, v12, &v21);
  if ( v8 < 0 )
    goto LABEL_6;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  v14 = v22;
  (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 104LL))(v22);
  LODWORD(v14) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
  v15 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  lpCriticalSection[1] = v15;
  v16 = sub_18002880C(v14);
  if ( v16 )
  {
    v8 = (unsigned __int16)v16 | 0x80070000;
    if ( v16 <= 0 )
      v8 = v16;
  }
  else
  {
    v8 = sub_180026030(v18, v13, lpCriticalSection);
    if ( v8 >= 0 )
      v8 = sub_18002B71C(lpCriticalSection[0], a4, a5);
  }
  if ( v15 )
    LeaveCriticalSection(v15);
  if ( v8 < 0 )
  {
    v10 = 48;
    goto LABEL_17;
  }
  v8 = 0;
LABEL_20:
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v8;
}
