/*
 * XREFs of sub_1800A7CD4 @ 0x1800A7CD4
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_180104D98 @ 0x180104D98 (sub_180104D98.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800A6138 @ 0x1800A6138 (sub_1800A6138.c)
 *     sub_1800AC6E0 @ 0x1800AC6E0 (sub_1800AC6E0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A7CD4(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  char v13[8]; // [rsp+30h] [rbp-41h] BYREF
  __int64 v14; // [rsp+38h] [rbp-39h]
  __int64 v15; // [rsp+40h] [rbp-31h]
  __int64 v16; // [rsp+48h] [rbp-29h]
  __int128 v17; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v19[10]; // [rsp+70h] [rbp-1h] BYREF

  v19[4] = a4;
  v17 = 0LL;
  v13[0] = 1;
  v14 = a2;
  v15 = a3;
  v16 = a5;
  std::shared_ptr<__ExceptionPtr>::operator=(&v17, a4);
  v7 = a1[14];
  if ( a1[15] == v7 )
  {
    sub_1800A6138(a1 + 13, (_BYTE *)v7, (__int64)v13);
    v8 = *((_QWORD *)&v17 + 1);
  }
  else
  {
    *(_BYTE *)v7 = v13[0];
    *(_QWORD *)(v7 + 8) = v14;
    *(_QWORD *)(v7 + 16) = v15;
    *(_QWORD *)(v7 + 24) = v16;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    v8 = *((_QWORD *)&v17 + 1);
    if ( *((_QWORD *)&v17 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
      v8 = *((_QWORD *)&v17 + 1);
    }
    *(_QWORD *)(v7 + 32) = v17;
    *(_QWORD *)(v7 + 40) = v8;
    a1[14] += 48LL;
  }
  v9 = (*((_DWORD *)a1 + 28) - *((_DWORD *)a1 + 26)) / 48 - 1;
  v18[0] = COERCE_UNSIGNED_INT((float)v9);
  v18[1] = 0LL;
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_18001CDF8(v19, (__int64)&qword_18020B9C0);
  sub_1800AC6E0(a1, v19, v18, (unsigned int)v9, COERCE_UNSIGNED_INT((float)v9), 0LL);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v17 + 1);
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
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
  return (unsigned int)v9;
}
