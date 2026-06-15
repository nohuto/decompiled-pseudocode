/*
 * XREFs of sub_1800E4790 @ 0x1800E4790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045D70 @ 0x180045D70 (sub_180045D70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D7588 @ 0x1800D7588 (sub_1800D7588.c)
 *     sub_1800E3F00 @ 0x1800E3F00 (sub_1800E3F00.c)
 *     sub_1800E6854 @ 0x1800E6854 (sub_1800E6854.c)
 *     sub_1800E6938 @ 0x1800E6938 (sub_1800E6938.c)
 *     sub_1800E6A1C @ 0x1800E6A1C (sub_1800E6A1C.c)
 */

__int64 __fastcall sub_1800E4790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v10; // esi
  int v11; // edx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v10 = sub_180045D70(a1, a2);
  if ( v10 < 0 )
  {
    v11 = 972;
LABEL_3:
    sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 80) + 24LL))(
          *(_QWORD *)(a1 + 80),
          a3,
          a4,
          a6);
  if ( v10 < 0 )
  {
    v11 = 974;
    goto LABEL_3;
  }
  *(_QWORD *)(a6 + 48) = a1 & -(__int64)(a1 != 8);
  v13 = *(_QWORD *)(a1 + 264);
  while ( v13 >= 0 )
  {
    if ( (_DWORD)v13 != 0x7FFFFFFF )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), v13 + 1, v13);
      if ( v14 != v13 )
        continue;
    }
    goto LABEL_12;
  }
  sub_1800D7588((volatile signed __int32 *)(2 * v13 + 16));
LABEL_12:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) )
    sub_1800E6A1C(a1, 1LL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2) )
    sub_1800E6854(a1, 1LL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2) )
    sub_1800E6938(a1, 1LL);
  sub_1800E3F00(a1, a2, a6, a5);
  return 0LL;
}
