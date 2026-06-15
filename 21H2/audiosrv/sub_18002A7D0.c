/*
 * XREFs of sub_18002A7D0 @ 0x18002A7D0
 * Callers:
 *     sub_18002A7C0 @ 0x18002A7C0 (sub_18002A7C0.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002ADD8 @ 0x18002ADD8 (sub_18002ADD8.c)
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002A7D0(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp-9h] BYREF
  int v6; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v8; // [rsp+48h] [rbp+Fh]
  unsigned __int16 *v9; // [rsp+50h] [rbp+17h]
  int v10; // [rsp+58h] [rbp+1Fh]
  int v11; // [rsp+5Ch] [rbp+23h]
  void *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  int *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  v1 = (unsigned __int8)a1;
  v2 = sub_180008448(a1, sub_1800B6240)[1];
  if ( *(_DWORD *)v2 > 5u )
  {
    v6 = v1;
    v15 = &v6;
    v16 = 4;
    v17 = 0;
    v7[0] = 184549376;
    v7[1] = 5;
    v8 = 0LL;
    v9 = *(unsigned __int16 **)(v2 + 8);
    v10 = *v9;
    v11 = 2;
    v12 = &unk_1801660D1;
    v13 = 29;
    v14 = 1;
    LODWORD(v5) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EtwEventWriteTransfer(*(_QWORD *)(v2 + 32), v7, 0LL);
  }
  v5 = 0LL;
  result = sub_18002AEF8(&v5);
  if ( (int)result >= 0 )
  {
    LOBYTE(v4) = v1;
    result = sub_18002ADD8(v5, v4);
  }
  if ( qword_18019EE40 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE40 + 40LL))(qword_18019EE40);
  if ( v5 )
    return sub_18002AD80(v5);
  return result;
}
