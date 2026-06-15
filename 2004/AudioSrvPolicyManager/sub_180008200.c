/*
 * XREFs of sub_180008200 @ 0x180008200
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800017C0 @ 0x1800017C0 (sub_1800017C0.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_1800071E0 @ 0x1800071E0 (sub_1800071E0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008200(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  _DWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp+8h] BYREF

  v9 = sub_1800055CC();
  v10 = a5;
  v11 = (_DWORD *)v9[1];
  if ( *v11 > 4u )
  {
    v12 = *a5;
    LODWORD(lpCriticalSection) = a4;
    LODWORD(v18) = a3;
    v19 = (__int64)off_18003F8D0[(*(unsigned int (__fastcall **)(_QWORD *))(v12 + 48))(a5)];
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    sub_1800017C0(
      (__int64)v11,
      (unsigned __int8 *)dword_180045E11,
      v13,
      v14,
      (void **)&v20,
      (void **)&v19,
      (__int64)&v18,
      (__int64)&lpCriticalSection);
  }
  sub_1800071E0(a1 - 16, (__int64 *)&lpCriticalSection);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL)
                                                                              + 80LL))(
          *(_QWORD *)(a1 + 16) + 16LL,
          a2,
          a3,
          a4,
          v10);
  v16 = v15;
  if ( v15 >= 0 )
    v16 = 0;
  else
    sub_180003AB0(
      retaddr,
      744,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v15);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v16;
}
