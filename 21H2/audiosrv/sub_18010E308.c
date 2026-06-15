/*
 * XREFs of sub_18010E308 @ 0x18010E308
 * Callers:
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010BD6C @ 0x18010BD6C (sub_18010BD6C.c)
 *     sub_18010DE28 @ 0x18010DE28 (sub_18010DE28.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010E308(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  int v14; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  v6 = *(_DWORD *)(a1 + 152);
  if ( (unsigned int)CallbackContext > 5 )
  {
    v17 = *(_DWORD *)(a1 + 152);
    LODWORD(v16) = a2;
    sub_18010BD6C((__int64)&CallbackContext, byte_18016979D, a3, a4, (__int64)&v16, (__int64)&v17);
    v6 = *(_DWORD *)(a1 + 152);
  }
  if ( a2 == v6 )
    return 0LL;
  *(_DWORD *)(a1 + 152) = a2;
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 56) + 24LL))(
         *(_QWORD *)(a1 + 56),
         0LL,
         1LL,
         &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v17 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v17);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 395;
      goto LABEL_8;
    }
    v10 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, v10, &v18);
        v8 = v11;
        if ( v11 < 0 )
          break;
        v11 = sub_18010DE28(v12, v18, a2);
        v8 = v11;
        if ( v11 < 0 )
        {
          v14 = 401;
          goto LABEL_17;
        }
        sub_18000F708(&v18);
        if ( ++v10 >= v17 )
          goto LABEL_13;
      }
      v14 = 400;
LABEL_17:
      sub_18004BD84(
        (int)retaddr,
        v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        v11);
      sub_18000F708(&v18);
      goto LABEL_18;
    }
LABEL_13:
    sub_18000F708(&v16);
    return 0LL;
  }
  v9 = 392;
LABEL_8:
  sub_18004BD84(
    (int)retaddr,
    v9,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    v7);
LABEL_18:
  sub_18000F708(&v16);
  return v8;
}
