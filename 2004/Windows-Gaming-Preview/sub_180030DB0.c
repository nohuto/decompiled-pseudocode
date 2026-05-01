/*
 * XREFs of sub_180030DB0 @ 0x180030DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030DB0(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // ebx
  _DWORD *v6; // r14
  int v7; // eax

  *a3 = 0LL;
  v4 = *(_DWORD *)(a1 + 80);
  v6 = *(_DWORD **)(a1 + 72);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 48LL))(*(_QWORD *)(a1 + 72));
    v4 = v7;
    if ( *(_DWORD *)(a1 + 84) != v6[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a3 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  return (unsigned int)v4;
}
