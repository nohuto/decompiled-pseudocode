/*
 * XREFs of sub_1800DE9D0 @ 0x1800DE9D0
 * Callers:
 *     sub_1800DBD40 @ 0x1800DBD40 (sub_1800DBD40.c)
 *     sub_1800DEB2C @ 0x1800DEB2C (sub_1800DEB2C.c)
 * Callees:
 *     sub_1800DDB08 @ 0x1800DDB08 (sub_1800DDB08.c)
 *     sub_18010A040 @ 0x18010A040 (sub_18010A040.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DE9D0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  volatile signed __int32 *v9; // rbx
  signed __int32 v10; // eax
  bool v11; // zf
  __int128 v12; // [rsp+30h] [rbp-49h] BYREF
  __int128 v13; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v15; // [rsp+60h] [rbp-19h]
  __int128 *v16; // [rsp+68h] [rbp-11h]
  _QWORD *v17; // [rsp+70h] [rbp-9h]
  __int64 *v18; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v19[9]; // [rsp+88h] [rbp+Fh] BYREF

  v15 = a2;
  v16 = &v12;
  v17 = v19;
  v12 = 0LL;
  v4 = a1[45];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a1[45];
  }
  *(_QWORD *)&v12 = a1[44];
  *((_QWORD *)&v12 + 1) = v4;
  v19[0] = &std::_Func_impl_no_alloc<_lambda_a24def3d013fab33b9a04e0c10f21b07_,std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>,>::`vftable';
  v19[1] = a1;
  v19[7] = v19;
  v5 = (unsigned int)sub_1800DDB08((__int64)a1, &v18, 0);
  v13 = 0LL;
  v6 = a1[39];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a1[39];
  }
  *(_QWORD *)&v13 = a1[38];
  *((_QWORD *)&v13 + 1) = v6;
  v14 = 0LL;
  v7 = a1[35];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[35];
  }
  *(_QWORD *)&v14 = a1[34];
  *((_QWORD *)&v14 + 1) = v7;
  result = sub_18010A040(*a2, (unsigned int)&v14, (unsigned int)&v13, v5, (__int64)v19, (__int64)&v12);
  v9 = (volatile signed __int32 *)a2[1];
  if ( v9 )
  {
    v10 = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
    v11 = v10 == 1;
    result = (unsigned int)(v10 - 1);
    if ( v11 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return result;
}
