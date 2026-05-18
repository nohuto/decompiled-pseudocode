/*
 * XREFs of sub_180013220 @ 0x180013220
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AA8 @ 0x180012AA8 (sub_180012AA8.c)
 *     sub_18008CE38 @ 0x18008CE38 (sub_18008CE38.c)
 *     sub_18008D210 @ 0x18008D210 (sub_18008D210.c)
 *     sub_18008D50C @ 0x18008D50C (sub_18008D50C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall sub_180013220(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 *v9; // r8
  char v10; // bl
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // r14
  __int64 v13; // rcx
  __int128 *v14; // r8
  char v15; // bl
  __int64 v16; // r13
  volatile signed __int32 *v17; // r14
  volatile signed __int32 *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  char v29; // [rsp+20h] [rbp-B8h]
  __int128 v30; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-90h]
  __int128 v33; // [rsp+50h] [rbp-88h] BYREF
  __int128 v34; // [rsp+60h] [rbp-78h] BYREF
  _QWORD Src[3]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-50h]
  _QWORD *v37; // [rsp+90h] [rbp-48h]

  v32 = a1;
  v37 = a2;
  if ( a3 )
  {
    v30 = 0LL;
    v8 = *(_QWORD *)(a3 + 24);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = *(_QWORD *)(a3 + 24);
    }
    *(_QWORD *)&v30 = *(_QWORD *)(a3 + 16);
    *((_QWORD *)&v30 + 1) = v8;
    v9 = &v30;
    v10 = 1;
  }
  else
  {
    v33 = 0LL;
    v9 = &v33;
    v10 = 2;
  }
  v29 = v10;
  sub_18008D210(*(_QWORD *)(a1 + 16), a2, v9);
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    v29 = v10;
    v11 = (volatile signed __int32 *)*((_QWORD *)&v33 + 1);
    if ( *((_QWORD *)&v33 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  if ( (v10 & 1) != 0 )
  {
    v10 &= ~1u;
    v29 = v10;
    v12 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
    if ( *((_QWORD *)&v30 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( !_InterlockedDecrement(v12 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  if ( a4 )
  {
    v31 = 0LL;
    v13 = *(_QWORD *)(a4 + 24);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = *(_QWORD *)(a4 + 24);
      v10 = v29;
    }
    *(_QWORD *)&v31 = *(_QWORD *)(a4 + 16);
    *((_QWORD *)&v31 + 1) = v13;
    v14 = &v31;
    v15 = v10 | 4;
  }
  else
  {
    v34 = 0LL;
    v14 = &v34;
    v15 = v10 | 8;
  }
  v16 = v32;
  sub_18008D50C(*(_QWORD *)(v32 + 16), a2, v14);
  if ( (v15 & 8) != 0 )
  {
    v15 &= ~8u;
    v17 = (volatile signed __int32 *)*((_QWORD *)&v34 + 1);
    if ( *((_QWORD *)&v34 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
  }
  if ( (v15 & 4) != 0 )
  {
    v18 = (volatile signed __int32 *)*((_QWORD *)&v31 + 1);
    if ( *((_QWORD *)&v31 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  v19 = sub_180012AA8(Src, (__int64)a2, (__int64)aEnabled);
  LOBYTE(v20) = a3 != 0;
  sub_18008CE38(*(_QWORD *)(v16 + 16), v19, v20);
  if ( v36 >= 0x10 )
  {
    v21 = Src[0];
    if ( v36 + 1 >= 0x1000 )
    {
      v21 = *(_QWORD *)(Src[0] - 8LL);
      if ( (unsigned __int64)(Src[0] - v21 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v21, v36 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v21);
  }
  v22 = a2[3];
  if ( v22 >= 0x10 )
  {
    v23 = v22 + 1;
    v24 = *a2;
    if ( v23 >= 0x1000 )
    {
      v25 = v23 + 39;
      v26 = *(_QWORD *)(v24 - 8);
      v27 = v24 - v26;
      if ( (unsigned __int64)(v27 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v27, v25);
        JUMPOUT(0x18001358DLL);
      }
      v24 = v26;
    }
    j_j__o_free(v24);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return 0LL;
}
