/*
 * XREFs of sub_180030B10 @ 0x180030B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030B10(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // r14
  unsigned __int32 v9; // esi
  bool v10; // zf
  signed __int32 v11; // eax
  unsigned int *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // rax
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int v19; // [rsp+68h] [rbp+38h]

  v19 = a2;
  *a4 = 0;
  if ( a2 )
  {
    v5 = 0LL;
    v6 = a2;
    do
    {
      *(_OWORD *)(v5 + a3) = 0LL;
      v5 += 16LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = *(_DWORD *)(a1 + 80);
  v8 = *(_QWORD *)(a1 + 64);
  if ( v7 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 64) + 128LL))(
             *(_QWORD *)(a1 + 64),
             v9,
             a2,
             a3,
             a4);
      if ( v7 < 0 )
        break;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v9 + *a4, v9);
      v10 = v9 == v11;
      v9 = v11;
      if ( v10 )
        break;
      v12 = a4;
      for ( i = 0; i < *a4; v12 = a4 )
      {
        v14 = 16LL * i++;
        *(_OWORD *)(a3 + v14) = 0LL;
      }
      *v12 = 0;
      a2 = v19;
    }
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v8 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v15 = a4;
        for ( j = 0; j < *a4; v15 = a4 )
        {
          v17 = 16LL * j++;
          *(_OWORD *)(a3 + v17) = 0LL;
        }
        *v15 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}
