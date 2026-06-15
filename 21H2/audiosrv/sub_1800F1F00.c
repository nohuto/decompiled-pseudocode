/*
 * XREFs of sub_1800F1F00 @ 0x1800F1F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1F00(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v6 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"asm_GetApplicationSubmixFromId");
  v20 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)qword_18019EE60 + 56LL))(
         qword_18019EE60,
         a1,
         a2,
         &v20);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v13 = v20;
    v14 = sub_180055F40(8uLL);
    v15 = v14;
    if ( v14 )
      sub_180048790(v14, v13);
    else
      v15 = 0LL;
    *a3 = v15;
    sub_18000F708(&v20);
    sub_18000F690((__int64)pv, v16, v17);
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 319, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v8);
    sub_18000F708(&v20);
    sub_18000F690((__int64)pv, v10, v11);
    return v9;
  }
}
