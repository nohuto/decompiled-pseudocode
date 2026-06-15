/*
 * XREFs of sub_1800716A0 @ 0x1800716A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054268 @ 0x180054268 (sub_180054268.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_1800716A0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _TP_TIMER *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v5 = (struct _TP_TIMER *)sub_180054268(a1);
  sub_1800085F0(pv, v5, v6, (struct _TP_TIMER *)L"asm_GetApplicationSubmixContextForExcludedProcessTree");
  v16 = 0LL;
  sub_1800CB144(&v16);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         0LL,
         &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64 *))(*(_QWORD *)qword_18019EE60 + 24LL))(
           qword_18019EE60,
           a2,
           3LL,
           v16,
           &v13);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      *a3 = v13;
      goto LABEL_7;
    }
    v9 = 189;
  }
  else
  {
    v9 = 186;
  }
  sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v7);
LABEL_7:
  sub_18000F708(&v16);
  sub_18000F690((__int64)pv, v10, v11);
  return v8;
}
