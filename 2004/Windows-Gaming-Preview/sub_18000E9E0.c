/*
 * XREFs of sub_18000E9E0 @ 0x18000E9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000E9E0(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *v5; // r14
  int v6; // eax

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 80);
  v5 = *(_DWORD **)(a1 + 72);
  if ( v3 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 56LL))(*(_QWORD *)(a1 + 72));
    v3 = v6;
    if ( *(_DWORD *)(a1 + 84) != v5[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a2 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
