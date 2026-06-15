/*
 * XREFs of sub_1800C5700 @ 0x1800C5700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C5700(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0;
  if ( a3 )
  {
    v6 = *a2;
    if ( !*a2 )
      v6 = a2[1] - 0x46000000000000C0LL;
    if ( !v6 )
      goto LABEL_9;
    v7 = *a2 - 0x4D857E897991EEC9LL;
    if ( *a2 == 0x4D857E897991EEC9LL )
      v7 = a2[1] + 0x3F9F13C38F936F7DLL;
    if ( v7 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_9:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      *a3 = a1;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
