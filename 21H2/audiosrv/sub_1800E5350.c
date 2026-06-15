/*
 * XREFs of sub_1800E5350 @ 0x1800E5350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_1800E5350(__int64 a1, _QWORD *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  LPVOID v10; // rax
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]
  LPVOID ppv; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  ppv = 0LL;
  v4 = CoCreateInstance(&stru_18015E470, 0LL, 0x17u, &stru_18015E460, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    v6 = *(_QWORD *)(a1 + 192);
    sub_1800CB144(&v15);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 192LL))(v6, &v15);
    v5 = v7;
    if ( v7 < 0 )
    {
      sub_18004BD84((int)retaddr, 2775, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v7);
LABEL_12:
      sub_18000F708(&v15);
      goto LABEL_13;
    }
    v12[0] = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 56LL))(v15, v12);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(
             ppv,
             *(_QWORD *)(a1 + 40),
             v12[0]);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v10 = ppv;
        ppv = 0LL;
        v5 = 0;
        *a2 = v10;
        goto LABEL_11;
      }
      v9 = 2781;
    }
    else
    {
      v9 = 2778;
    }
    sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v8);
LABEL_11:
    sub_18000F708(v12);
    goto LABEL_12;
  }
  sub_18004BD84((int)retaddr, 2772, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v4);
LABEL_13:
  sub_18000F708((__int64 *)&ppv);
  return v5;
}
