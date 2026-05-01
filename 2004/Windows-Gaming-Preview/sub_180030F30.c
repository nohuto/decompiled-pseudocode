/*
 * XREFs of sub_180030F30 @ 0x180030F30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030F30(__int64 a1, unsigned int a2, unsigned int a3, char *a4, unsigned int *a5)
{
  int v9; // ebx
  _DWORD *v10; // r15
  int v11; // eax
  unsigned int i; // ecx
  __int64 v13; // rax

  if ( a3 )
    memset(a4, 0, 16LL * a3);
  *a5 = 0;
  v9 = *(_DWORD *)(a1 + 80);
  v10 = *(_DWORD **)(a1 + 72);
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, char *, unsigned int *))(*(_QWORD *)v10 + 128LL))(
            v10,
            a2,
            a3,
            a4,
            a5);
    v9 = v11;
    if ( *(_DWORD *)(a1 + 84) != v10[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( i = 0; i < *a5; *(_OWORD *)&a4[8 * v13] = 0LL )
          v13 = 2LL * i++;
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v9, 0LL);
  }
  return (unsigned int)v9;
}
