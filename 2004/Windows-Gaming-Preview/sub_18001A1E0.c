/*
 * XREFs of sub_18001A1E0 @ 0x18001A1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001A1E0(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 32);
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
    if ( *(_DWORD *)(a1 + 36) != *(_DWORD *)(v4 + 88) )
    {
      *(_DWORD *)(a1 + 32) = -2147483636;
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
