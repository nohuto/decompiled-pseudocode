/*
 * XREFs of sub_180015080 @ 0x180015080
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180015080(__int64 a1, unsigned int a2, void *a3, _DWORD *a4)
{
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // r13
  unsigned __int32 v8; // r15d
  bool v9; // zf
  signed __int32 v10; // eax
  _DWORD *v11; // rax
  __int64 i; // r14
  _DWORD *v13; // rax
  __int64 j; // rsi

  *a4 = 0;
  v5 = a2;
  if ( a2 )
    memset(a3, 0, 8LL * a2);
  v6 = *(_DWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v6 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(**(_QWORD **)(a1 + 64) + 128LL))(
             *(_QWORD *)(a1 + 64),
             v8,
             v5,
             a3,
             a4);
      if ( v6 < 0 )
        break;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v8 + *a4, v8);
      v9 = v8 == v10;
      v8 = v10;
      if ( v9 )
        break;
      v11 = a4;
      for ( i = 0LL; (unsigned int)i < *a4; v11 = a4 )
      {
        WindowsDeleteString(*((HSTRING *)a3 + i));
        *((_QWORD *)a3 + i) = 0LL;
        *((_QWORD *)a3 + i) = 0LL;
        i = (unsigned int)(i + 1);
      }
      *v11 = 0;
      v5 = a2;
    }
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v7 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v13 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v13 = a4 )
        {
          WindowsDeleteString(*((HSTRING *)a3 + j));
          *((_QWORD *)a3 + j) = 0LL;
          *((_QWORD *)a3 + j) = 0LL;
          j = (unsigned int)(j + 1);
        }
        *v13 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
