/*
 * XREFs of sub_18008B8BC @ 0x18008B8BC
 * Callers:
 *     sub_180015510 @ 0x180015510 (sub_180015510.c)
 *     sub_18001A700 @ 0x18001A700 (sub_18001A700.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 *     sub_18008BAC0 @ 0x18008BAC0 (sub_18008BAC0.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18008B704 @ 0x18008B704 (sub_18008B704.c)
 *     sub_18008CF70 @ 0x18008CF70 (sub_18008CF70.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008B8BC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // r15d
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-A0h]
  _QWORD v19[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v20[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v21[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v22[5]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v23[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+130h] [rbp+30h] BYREF

  v5 = a3;
  v18 = a4;
  if ( !a3 )
  {
    sub_18000FE28(v20);
    v14 = sub_18000FE28(v19);
    sub_18002D8C4(v23, v14, 246, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v23;
  }
  if ( !*a4 )
  {
    sub_18000FE28(v22);
    v13 = sub_18000FE28(v21);
    sub_18002D8C4(pExceptionObject, v13, 251, (__int64)v22, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v16 = 0LL;
  v17 = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a4[1];
  }
  *(_QWORD *)&v17 = *a4;
  *((_QWORD *)&v17 + 1) = v8;
  sub_18008CF70(a1, &v16, &v17);
  v15 = 0LL;
  v9 = *((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    v9 = *((_QWORD *)&v16 + 1);
  }
  v15 = v16;
  sub_18008B704(a1, a2, v5, *(_QWORD *)(*a4 + 368LL), &v15);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v16 + 1);
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
  v11 = (volatile signed __int32 *)a4[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a2;
}
