/*
 * XREFs of sub_18010F270 @ 0x18010F270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010F270(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 144LL))(v3, a2);
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    else
    {
      return (unsigned int)-2147019873;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
