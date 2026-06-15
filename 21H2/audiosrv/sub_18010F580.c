/*
 * XREFs of sub_18010F580 @ 0x18010F580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010F580(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 136LL))(v4);
      if ( v5 < 0 )
        return (unsigned int)v5;
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
  return v3;
}
