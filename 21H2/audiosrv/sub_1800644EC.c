/*
 * XREFs of sub_1800644EC @ 0x1800644EC
 * Callers:
 *     sub_180064438 @ 0x180064438 (sub_180064438.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180064944 @ 0x180064944 (sub_180064944.c)
 *     sub_1800667A8 @ 0x1800667A8 (sub_1800667A8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800644EC(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+68h] [rbp+28h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  v19 = a1;
  v17 = 0LL;
  v1 = (**(__int64 (__fastcall ***)(__int64, __int128 *, __int64 *))qword_18019EE58)(
         qword_18019EE58,
         &xmmword_18015BA60,
         &v17);
  v2 = v1;
  if ( v1 < 0 )
  {
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", v1);
    sub_18004BD84(
      (int)retaddr,
      107,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      v2);
    goto LABEL_17;
  }
  v21 = 0LL;
  v3 = sub_1800667A8(&v21);
  v2 = v3;
  if ( v3 >= 0 )
  {
    v20 = 0LL;
    v4 = v21;
    v5 = ActivatePolicyManager(pv, qword_18019EE40, v17, v21, &v20);
    v2 = v5;
    if ( v5 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        114,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        v5);
LABEL_13:
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      goto LABEL_15;
    }
    v22 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v20)(v20, &unk_18015CEB0, &v22);
    v2 = v6;
    if ( v6 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        117,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        v6);
LABEL_11:
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      goto LABEL_13;
    }
    v19 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v19);
    v2 = v7;
    if ( v7 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        120,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        v7);
    }
    else
    {
      v16 = 0LL;
      v8 = sub_180064944(&v16);
      v2 = v8;
      if ( v8 < 0 )
      {
        sub_18004BD84(
          (int)retaddr,
          123,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          v8);
        v10 = v19;
        v14 = v16;
      }
      else
      {
        v9 = v19;
        v10 = 0LL;
        v19 = 0LL;
        qword_18019E610 = v9;
        v11 = v20;
        v20 = 0LL;
        qword_18019E618 = v11;
        v12 = v22;
        v22 = 0LL;
        qword_18019E5F8 = v12;
        v13 = v4;
        v4 = 0LL;
        v21 = 0LL;
        qword_18019E600 = v13;
        v14 = 0LL;
        qword_18019E608 = v16;
        v2 = 0;
      }
      if ( !v14 )
      {
LABEL_9:
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_11;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v10 = v19;
    goto LABEL_9;
  }
  sub_18004BD84((int)retaddr, 111, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp", v3);
  v4 = v21;
LABEL_15:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_17:
  sub_18000F708(&v17);
  return v2;
}
