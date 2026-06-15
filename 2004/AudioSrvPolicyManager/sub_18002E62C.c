/*
 * XREFs of sub_18002E62C @ 0x18002E62C
 * Callers:
 *     sub_18002E9C0 @ 0x18002E9C0 (sub_18002E9C0.c)
 * Callees:
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     _o_pow @ 0x18003A7A8 (_o_pow.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E62C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  float v11; // xmm1_4
  int v12; // eax
  int v13; // eax
  int v14; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 1065353216;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v6 = (_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = &off_18003F518;
  *(_QWORD *)(a1 + 48) = a1;
  v7 = *(_QWORD *)(a1 + 24);
  *v6 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, a3, v6);
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 72LL))(*v6, a1);
    v10 = retaddr;
    if ( v9 < 0 )
    {
      sub_18000F8F4(
        retaddr,
        54,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        v9);
      *(_DWORD *)a1 = 0;
    }
    if ( *(_DWORD *)a1 == -8388608 )
      v11 = 0.0;
    else
      v11 = o_pow(v10);
    *(float *)(a1 + 4) = v11;
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 152LL))(*v6, &v17);
    if ( v12 >= 0 )
      *(_BYTE *)(a1 + 8) = v17 != 0;
    else
      sub_18000F8F4(
        retaddr,
        61,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 232LL))(*v6, a1 + 40);
    v14 = v13;
    if ( v13 < 0 )
      sub_18000F8F4(
        retaddr,
        68,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        v13);
    *(_BYTE *)(a1 + 32) = v14 >= 0;
  }
  else
  {
    sub_18000F8F4(
      retaddr,
      49,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      v8);
  }
  return a1;
}
