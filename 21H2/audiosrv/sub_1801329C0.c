/*
 * XREFs of sub_1801329C0 @ 0x1801329C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801329C0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  *a3 = 0LL;
  v5 = *a2 - 0x4798B71F4E997F73LL;
  if ( *a2 == 0x4798B71F4E997F73LL )
    v5 = a2[1] - 0x4D5BF1FC7DED3B87LL;
  if ( !v5 )
    goto LABEL_10;
  v6 = *a2;
  if ( !*a2 )
    v6 = a2[1] - 0x46000000000000C0LL;
  if ( v6 )
  {
    return (unsigned int)-2147467262;
  }
  else
  {
LABEL_10:
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  return v3;
}
