/*
 * XREFs of sub_1800E5AC0 @ 0x1800E5AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800274A0 @ 0x1800274A0 (sub_1800274A0.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800524EC @ 0x1800524EC (sub_1800524EC.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB3A8 @ 0x1800BB3A8 (sub_1800BB3A8.c)
 *     sub_1800E24A0 @ 0x1800E24A0 (sub_1800E24A0.c)
 *     sub_1800E29AC @ 0x1800E29AC (sub_1800E29AC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800E5AC0(__int64 a1, _WORD *a2)
{
  _WORD *v2; // rsi
  LPVOID v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // r14
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // r9
  void *v17; // [rsp+30h] [rbp-A8h] BYREF
  const CHAR *v18; // [rsp+38h] [rbp-A0h] BYREF
  volatile signed __int32 *v19; // [rsp+40h] [rbp-98h]
  volatile signed __int32 *v20; // [rsp+48h] [rbp-90h]
  _QWORD *v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-80h]
  _QWORD v23[13]; // [rsp+70h] [rbp-68h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  __int64 v25; // [rsp+E0h] [rbp+8h] BYREF
  _WORD *v26; // [rsp+E8h] [rbp+10h]
  __int64 (__fastcall ***v27)(_QWORD, void *, __int64 *); // [rsp+F0h] [rbp+18h] BYREF
  __int64 *v28; // [rsp+F8h] [rbp+20h] BYREF

  v26 = a2;
  v2 = a2;
  sub_1800E24A0((__int64 *)&v27, a1 - 8);
  v25 = 0LL;
  v3 = sub_180055F40(0x30uLL);
  try
  {
    v4 = (volatile signed __int32 *)v3;
    v28 = (__int64 *)v3;
    if ( v3 )
    {
      *((_DWORD *)v3 + 2) = 1;
      *((_DWORD *)v3 + 3) = 1;
      *(_QWORD *)v3 = off_1801552E0;
      sub_180060060((__int64 *)v3 + 2, v2);
    }
    else
    {
      v4 = 0LL;
    }
    v5 = v4 + 4;
    v19 = v4 + 4;
    v20 = v4;
    v28 = &v25;
    v6 = sub_1800524EC(&v28);
    if ( (int)sub_1800274A0(v27, v6) >= 0 )
    {
      v21 = v23;
      v7 = v25;
      v22 = v25;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v2 = v26;
        v5 = v19;
        v7 = v22;
      }
      v23[0] = off_18014A4A8;
      v23[1] = v7;
      v23[2] = v5;
      v23[3] = v4;
      v23[7] = v23;
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 120LL))(qword_18019E678);
      v9 = sub_1800670EC(v8, (__int64)v23);
      v10 = retaddr;
      if ( v9 < 0 )
        sub_1800BB3A8(retaddr, 1298, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v9);
      v11 = (_DWORD *)sub_180008448(v10, sub_1800B6240)[1];
      if ( *v11 > 4u )
      {
        v18 = "OnEndpointUnavailableForUse";
        v17 = v2;
        sub_1800E29AC((__int64)v11, byte_180167A5B, v12, v13, &v17, &v18);
      }
    }
    if ( v4 )
      sub_180052600((std::_Ref_count_base *)v4);
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    result = sub_1800461B8((__int64 *)&v27);
  }
  catch ( ... )
  {
    return sub_1800C8F54(retaddr, 1307, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v16);
  }
  return result;
}
