/*
 * XREFs of sub_180032FF0 @ 0x180032FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025BFC @ 0x180025BFC (sub_180025BFC.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180032FF0(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  signed __int32 v7; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h]

  v2 = 0;
  v7 = -2;
  _InterlockedCompareExchange(&v7, *(_DWORD *)(a1 + 48), -2);
  if ( !v7 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(_QWORD *)(a1 + 24) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v10 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v9 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, __int128 *, __int64 *))a1)(a1, &xmmword_180050AE8, &v9) >= 0 )
    {
      v8 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v8, *(_DWORD *)(a1 + 48), -2);
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             v9,
             v8);
      v2 = sub_180025BFC(v3, *(_QWORD *)(a1 + 24));
      v4 = *(_QWORD *)(a1 + 24);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
