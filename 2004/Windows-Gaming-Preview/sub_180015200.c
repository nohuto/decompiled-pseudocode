/*
 * XREFs of sub_180015200 @ 0x180015200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180015200(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 64);
  if ( v5 >= 0 )
  {
    v9 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(__int64, __int128 *, __int64 *))v4)(v4, &xmmword_180051730, &v9);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, a2);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( *(_DWORD *)(a1 + 68) != *(_DWORD *)(v4 + 120) )
    {
      *(_DWORD *)(a1 + 64) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v7 = *a2;
        *a2 = 0LL;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v5, 0LL);
  }
  return (unsigned int)v5;
}
