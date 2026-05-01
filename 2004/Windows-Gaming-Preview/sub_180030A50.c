/*
 * XREFs of sub_180030A50 @ 0x180030A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030A50(__int64 a1, _OWORD *a2)
{
  int v3; // ebx
  _DWORD *v5; // r14
  int v6; // eax

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 + 80);
  v5 = *(_DWORD **)(a1 + 64);
  if ( v3 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(*(_QWORD *)v5 + 48LL))(
           *(_QWORD *)(a1 + 64),
           *(unsigned int *)(a1 + 72),
           a2);
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
        *a2 = 0LL;
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
