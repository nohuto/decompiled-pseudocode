/*
 * XREFs of sub_180032834 @ 0x180032834
 * Callers:
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180032834(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v13; // [rsp+48h] [rbp+28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 v15; // [rsp+58h] [rbp+38h] BYREF

  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v13);
  if ( v4 < 0 )
    goto LABEL_17;
  v15 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, __int128 *, __int64 *))a2)(a2, &xmmword_1800527F0, &v15);
  if ( v4 == -2147467262 )
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    RoTransformError(2147500034LL, 2147549183LL, 0LL);
  }
  if ( v4 >= 0 )
  {
    v5 = v15;
    v6 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v14);
  }
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v4 < 0 )
  {
LABEL_17:
    v10 = v14;
  }
  else
  {
    v8 = v13;
    v9 = *(_QWORD *)(a1 + 96);
    v10 = v14;
    if ( v9 != v14 )
    {
      v11 = v14;
      if ( v14 )
      {
        (*(void (**)(void))(*(_QWORD *)v14 + 8LL))();
        v9 = *(_QWORD *)(a1 + 96);
        v10 = v14;
      }
      *(_QWORD *)(a1 + 96) = v11;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v10 = v14;
      }
    }
    *(_DWORD *)(a1 + 104) = v8;
    *(_BYTE *)(a1 + 109) = 1;
    v4 = 0;
  }
  if ( v10 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v4;
}
