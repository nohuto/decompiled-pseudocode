/*
 * XREFs of sub_18002C550 @ 0x18002C550
 * Callers:
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18002C4F0 @ 0x18002C4F0 (sub_18002C4F0.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002C550(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  char v11; // si
  int v12; // eax
  char v13; // al
  char *v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  _WORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rbx
  _BYTE v23[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  char *v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  _DWORD v33[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  _QWORD v39[9]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  int v42; // [rsp+11Ch] [rbp+1Ch]
  void *v43; // [rsp+120h] [rbp+20h]
  int v44; // [rsp+128h] [rbp+28h]
  int v45; // [rsp+12Ch] [rbp+2Ch]
  _WORD *v46; // [rsp+130h] [rbp+30h]
  int v47; // [rsp+138h] [rbp+38h]
  int v48; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  _BYTE *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  __int64 retaddr; // [rsp+1B8h] [rbp+B8h]

  v32 = a2;
  v30 = a2;
  v4 = 0LL;
  v26 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
  v26 = 1;
  v28 = 0LL;
  v29 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 96LL))(a3, &v28);
  v6 = retaddr;
  if ( v5 < 0 )
    sub_18006D26C(
      retaddr,
      2942LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v5);
  v7 = (_QWORD *)*((_QWORD *)&v28 + 1);
  v8 = (_QWORD *)v28;
  v9 = (__int64)(*((_QWORD *)&v28 + 1) - v28) >> 3;
  v10 = 0LL;
  v11 = 0;
  v23[0] = 0;
  if ( (_QWORD)v28 != *((_QWORD *)&v28 + 1) )
  {
    while ( 1 )
    {
      v24 = 0LL;
      v25 = v4;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, *v8, &v24);
      if ( v12 < 0 )
        sub_18006D26C(
          retaddr,
          2951LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (unsigned int)v12);
      v10 += (__int64)(*((_QWORD *)&v24 + 1) - v24) >> 3;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 88LL))(*v8);
      v14 = (char *)*((_QWORD *)&v24 + 1);
      v4 = (char *)v24;
      if ( !v13 )
        break;
      v23[0] = 1;
      v37 = *((_QWORD *)&v24 + 1);
      v38 = v24;
      if ( (_QWORD)v24 != *((_QWORD *)&v24 + 1) )
      {
        v23[8] = 0;
        do
        {
          v16 = *(_QWORD *)v4;
          v39[0] = off_180155668;
          v39[7] = v39;
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 352LL))(v16, v39);
          v4 += 8;
        }
        while ( v4 != v14 );
LABEL_16:
        v4 = (char *)v24;
      }
      if ( v4 )
      {
        sub_1800CD58C(v4);
        sub_1800472E0(v4, (v25 - v4) & 0xFFFFFFFFFFFFFFF8uLL);
        v24 = 0LL;
        v4 = 0LL;
        v25 = 0LL;
      }
      if ( ++v8 == v7 )
      {
        v11 = v23[0];
        goto LABEL_21;
      }
    }
    v35 = *((_QWORD *)&v24 + 1);
    v36 = v24;
    while ( v4 != v14 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)qword_18019EE48 + 40LL))(
              qword_18019EE48,
              *(_QWORD *)v4,
              *v8);
      if ( v15 < 0 )
        sub_18006D26C(
          retaddr,
          2960LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (unsigned int)v15);
      v4 += 8;
    }
    sub_1800461B8(v8);
    goto LABEL_16;
  }
LABEL_21:
  v17 = sub_180008448(v6, sub_1800B6240)[1];
  if ( *(_DWORD *)v17 > 4u )
  {
    v23[0] = v11;
    v31 = v10;
    v27 = v9;
    v18 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    v53 = v23;
    v54 = 1LL;
    v51 = &v31;
    v52 = 8LL;
    v49 = &v27;
    v50 = 8LL;
    if ( v18 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v18[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v18 = &unk_18015C744;
      v20 = 2;
    }
    v46 = v18;
    v47 = v20;
    v48 = 0;
    v33[0] = 184549376;
    v33[1] = 4;
    v34 = 0LL;
    v40 = *(unsigned __int16 **)(v17 + 8);
    v41 = *v40;
    v42 = 2;
    v43 = &unk_180167BC8;
    v44 = 91;
    v45 = 1;
    LODWORD(v30) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EtwEventWriteTransfer(*(_QWORD *)(v17 + 32), v33, 0LL);
  }
  v21 = v28;
  if ( (_QWORD)v28 )
  {
    sub_1800CD58C(v28);
    sub_1800472E0(v21, (v29 - v21) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v32;
}
