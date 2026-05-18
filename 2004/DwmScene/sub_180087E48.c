/*
 * XREFs of sub_180087E48 @ 0x180087E48
 * Callers:
 *     sub_180088C04 @ 0x180088C04 (sub_180088C04.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800876A0 @ 0x1800876A0 (sub_1800876A0.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
unsigned __int64 __fastcall sub_180087E48(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rax
  signed __int32 v12; // eax
  __int64 v13; // r14
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // r14
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rax
  volatile signed __int32 *v31; // [rsp+30h] [rbp-D0h]
  __int128 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  __int128 v36; // [rsp+80h] [rbp-80h] BYREF
  __int128 v37; // [rsp+90h] [rbp-70h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v39; // [rsp+B0h] [rbp-50h]
  _QWORD *v40; // [rsp+B8h] [rbp-48h]
  _QWORD v41[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v43[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v44[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v45[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v46[4]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v47[4]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v48[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v49[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v50[8]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v51[8]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+280h] [rbp+180h] BYREF

  v39 = a2;
  v40 = a3;
  v6 = *a2;
  if ( !*a2 )
  {
    sub_18000FD48(v42);
    v29 = sub_18000FD48(v41);
    sub_180027FF4(v49, v29, 345, (__int64)v42, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v49;
  }
  if ( !*a3 )
  {
    sub_18000FD48(v44);
    v30 = sub_18000FD48(v43);
    sub_180027FF4(v50, v30, 350, (__int64)v44, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v50;
  }
  v7 = *(_QWORD *)(v6 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v7 + 8);
      if ( !v12 )
        break;
      if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v12 + 1, v12) )
      {
        v13 = *(_QWORD *)(v6 + 72);
        v14 = *(volatile signed __int32 **)(v6 + 80);
        if ( v14 )
        {
          if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        if ( v13 )
        {
          sub_18000FD48(v46);
          v28 = sub_18000FD48(v45);
          sub_180027FF4(v51, v28, 355, (__int64)v46, 0);
          throw (Spectre::Engine::EngineInvalidArgException *)v51;
        }
        break;
      }
    }
  }
  v33 = 0LL;
  v34 = 0LL;
  v8 = a2[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a2[1];
  }
  *(_QWORD *)&v34 = *a2;
  *((_QWORD *)&v34 + 1) = v8;
  sub_1800876A0(a1, &v33, (__int64 *)&v34);
  v32 = 0LL;
  v35 = 0LL;
  v9 = a3[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a3[1];
  }
  *(_QWORD *)&v35 = *a3;
  *((_QWORD *)&v35 + 1) = v9;
  sub_1800876A0(a1, &v32, (__int64 *)&v35);
  if ( (_QWORD)v33 )
  {
    sub_18000FD48(v48);
    v27 = sub_18000FD48(v47);
    sub_180027FF4(pExceptionObject, v27, 363, (__int64)v48, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18006187C(a1 + 16, v10);
  if ( (_QWORD)v32 )
  {
    v11 = (volatile signed __int32 *)(v32 + 76);
    v31 = (volatile signed __int32 *)(v32 + 76);
    while ( _interlockedbittestandset(v11, 0) )
      v11 = v31;
    v15 = *a2;
    sub_1800839A4(*a2);
    v16 = *(_QWORD *)(v15 + 64);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( !v17 )
          break;
        if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
        {
          v18 = *(_QWORD *)(v15 + 56);
          v19 = *(volatile signed __int32 **)(v15 + 64);
          if ( v19 )
          {
            if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
              if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            }
          }
          if ( v18 )
          {
            v38 = 0LL;
            sub_1800821F4(*a2, (__int64 *)&v38);
          }
          break;
        }
      }
    }
    v36 = 0LL;
    v20 = a3[1];
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v20 = a3[1];
    }
    *(_QWORD *)&v36 = *a3;
    *((_QWORD *)&v36 + 1) = v20;
    sub_1800821F4(*a2, (__int64 *)&v36);
    result = (unsigned __int64)v31;
    *v31 = 0;
  }
  else
  {
    v37 = 0LL;
    v22 = a3[1];
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v22 = a3[1];
    }
    *(_QWORD *)&v37 = *a3;
    *((_QWORD *)&v37 + 1) = v22;
    result = sub_1800821F4(*a2, (__int64 *)&v37);
  }
  if ( *((_QWORD *)&v32 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v23 = *((_QWORD *)&v32 + 1);
      (***((void (__fastcall ****)(_QWORD))&v32 + 1))(*((_QWORD *)&v32 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 8LL))(*((_QWORD *)&v32 + 1));
    }
  }
  if ( *((_QWORD *)&v33 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v24 = *((_QWORD *)&v33 + 1);
      (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
    }
  }
  v25 = (volatile signed __int32 *)a2[1];
  if ( v25 )
  {
    result = (unsigned int)_InterlockedDecrement(v25 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      result = (unsigned int)_InterlockedDecrement(v25 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  v26 = (volatile signed __int32 *)a3[1];
  if ( v26 )
  {
    result = (unsigned int)_InterlockedDecrement(v26 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      result = (unsigned int)_InterlockedDecrement(v26 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  return result;
}
