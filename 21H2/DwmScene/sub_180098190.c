/*
 * XREFs of sub_180098190 @ 0x180098190
 * Callers:
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 * Callees:
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_180067F94 @ 0x180067F94 (sub_180067F94.c)
 *     sub_18006DA14 @ 0x18006DA14 (sub_18006DA14.c)
 *     sub_18006DA68 @ 0x18006DA68 (sub_18006DA68.c)
 *     sub_18006E09C @ 0x18006E09C (sub_18006E09C.c)
 *     sub_18006E0AC @ 0x18006E0AC (sub_18006E0AC.c)
 *     sub_18006E1A4 @ 0x18006E1A4 (sub_18006E1A4.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_1800971B0 @ 0x1800971B0 (sub_1800971B0.c)
 *     sub_1800D14B0 @ 0x1800D14B0 (sub_1800D14B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180098190(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  unsigned int v9; // eax
  __int64 *v10; // rbx
  __int128 *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  __int128 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h]
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  __int64 v49; // [rsp+120h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1 + 120) )
    return;
  v6 = *a2;
  v23 = 0LL;
  v7 = *(_QWORD *)(v6 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v23 = *(_OWORD *)(v6 + 72);
        break;
      }
    }
  }
  v9 = sub_18007040C(v23);
  if ( sub_180067F94(a1, v9) )
    goto LABEL_11;
  if ( sub_180067F88(a1, 4) )
  {
    sub_1800971B0(a1, (__int64 *)&v23);
LABEL_11:
    v25 = 0LL;
    v26[0] = a1 + 144;
    v26[1] = 1LL;
    v27 = 0;
    v28 = a1 + 160;
    v29 = 2LL;
    v30 = 1;
    v31 = a1 + 176;
    v32 = 16LL;
    v33 = 4;
    v34 = a1 + 192;
    v35 = 4LL;
    v36 = 2;
    v37 = a1 + 240;
    v38 = 32LL;
    v39 = 5;
    v40 = a1 + 256;
    v41 = 64LL;
    v42 = 6;
    v43 = a1 + 208;
    v44 = 512LL;
    v45 = 9;
    v46 = a1 + 224;
    v47 = 1024LL;
    v48 = 10;
    v10 = v26;
    do
    {
      v11 = (__int128 *)*v10;
      if ( !*(_QWORD *)*v10 || (a3 & v10[1]) == 0 )
        v11 = &v25;
      sub_18006E1A4(*a2, (__int64)v11, *((_DWORD *)v10 + 4), 0, 0);
      v10 += 3;
    }
    while ( v10 != &v49 );
    sub_18006E0AC(*a2, *(_DWORD *)(a1 + 300));
    if ( *(_QWORD *)(a1 + 272) )
    {
      sub_18006E09C(*a2);
      sub_18006DA68((_QWORD **)*a2, *(_DWORD *)(a1 + 112), 0, 0);
      v12 = *(_DWORD *)(a1 + 112);
      v14 = sub_1800D14C8(v13);
      sub_1800D14B0(v14, 1LL, 1LL, v12);
    }
    else
    {
      v24 = 0LL;
      sub_18006E09C(*a2);
      sub_18006DA14((_QWORD **)*a2, *(_DWORD *)(a1 + 120), 0);
      v16 = (volatile signed __int32 *)*((_QWORD *)&v24 + 1);
      if ( *((_QWORD *)&v24 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
    v17 = *(_DWORD *)(a1 + 120);
    v18 = sub_1800D14C8(v15);
    sub_1800D14B0(v18, 0LL, 1LL, v17);
    v20 = sub_1800D14C8(v19);
    sub_1800D14B0(v20, 12LL, 1LL, 1LL);
    v21 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
    if ( *((_QWORD *)&v25 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( !_InterlockedDecrement(v21 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  v22 = (volatile signed __int32 *)*((_QWORD *)&v23 + 1);
  if ( *((_QWORD *)&v23 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
    if ( !_InterlockedDecrement(v22 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
  }
}
