/*
 * XREFs of sub_1801149D0 @ 0x1801149D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18011125C @ 0x18011125C (sub_18011125C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801149D0(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  int v6; // ebx
  int v7; // r9d
  int v8; // edx
  __int64 v9; // rsi
  HRESULT v10; // eax
  LPVOID v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  _OWORD *v14; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+20h] BYREF

  v3 = (_OWORD *)a3;
  ppv = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    v6 = -2147024809;
    v7 = -2147024809;
    v8 = 20;
LABEL_9:
    sub_18004BD84(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
      v7);
    goto LABEL_16;
  }
  if ( *(_DWORD *)(a3 + 4) > 1u )
  {
    v6 = -2147024809;
    v7 = -2147024809;
    v8 = 23;
    goto LABEL_9;
  }
  v9 = 2LL;
  if ( (*(_BYTE *)(a3 + 16) & 2) != 0 )
  {
    v6 = -2147024809;
    v7 = -2147024809;
    v8 = 24;
    goto LABEL_9;
  }
  sub_1800CB144((__int64 *)&ppv);
  v10 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = v10;
    v8 = 25;
    goto LABEL_9;
  }
  v11 = ppv;
  v12 = v17;
  v17 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, (__int64)v3 + 20, &v17);
  if ( v6 >= 0 )
  {
    sub_18011125C((__int64 *)(a1 + 16), a2, v13);
    v14 = (_OWORD *)(a1 + 64);
    do
    {
      *v14 = *v3;
      v14[1] = v3[1];
      v14[2] = v3[2];
      v14[3] = v3[3];
      v14[4] = v3[4];
      v14[5] = v3[5];
      v14[6] = v3[6];
      v14 += 8;
      *(v14 - 1) = v3[7];
      v3 += 8;
      --v9;
    }
    while ( v9 );
    *v14 = *v3;
    *((_DWORD *)v14 + 4) = *((_DWORD *)v3 + 4);
    v6 = 0;
  }
LABEL_16:
  sub_18000F708(&v17);
  sub_18000F708((__int64 *)&ppv);
  return (unsigned int)v6;
}
