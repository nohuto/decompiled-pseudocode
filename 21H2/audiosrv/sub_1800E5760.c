/*
 * XREFs of sub_1800E5760 @ 0x1800E5760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800E2920 @ 0x1800E2920 (sub_1800E2920.c)
 */

__int64 __fastcall sub_1800E5760(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  const CHAR *v14; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+38h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h]
  __int64 v17; // [rsp+90h] [rbp+10h] BYREF

  v17 = 0LL;
  if ( a2 != *(_DWORD *)(a1 + 44)
    || *(_DWORD *)(a1 + 40) != a3
    || (v3 = (__int64 *)(a1 + 32), (int)sub_1800CD4DC((_QWORD *)(a1 + 32), &v17) < 0)
    || !v17 )
  {
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  v4 = *v3;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v15[0] = off_18014A508;
  v15[7] = v15;
  v15[1] = v4;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 120LL))(qword_18019E678);
  v6 = sub_1800670EC(v5, (__int64)v15);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = (_DWORD *)sub_180008448(v7, sub_1800B6240)[1];
    if ( *v9 > 4u )
    {
      v14 = "DefaultDeviceChange";
      sub_1800E2920((__int64)v9, byte_180167B7D, v10, v11, &v14);
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_14;
  }
  sub_18004BD84((int)retaddr, 195, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_15:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v8;
}
