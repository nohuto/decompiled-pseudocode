/*
 * XREFs of ?GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA?AUAPP_SIZE_CONSTRAINTS@@I@Z @ 0x18005FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?MulDiv@CSize@Geometry@@SA?AU12@AEBUtagSIZE@@HH@Z @ 0x180082FA8 (-MulDiv@CSize@Geometry@@SA-AU12@AEBUtagSIZE@@HH@Z.c)
 */

_QWORD *__fastcall AppSizeConstraintsCache::GetSizeConstraintsForDpi(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *i; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2 + 1;
  *a2 = AppSizeConstraintsCache::s_defaultMinSize;
  a2[1] = AppSizeConstraintsCache::s_defaultMaxSize;
  v5 = a3;
  *a2 = *(_QWORD *)Geometry::CSize::MulDiv(&v11, a2, a3, 96LL);
  v7 = *(_QWORD *)Geometry::CSize::MulDiv(&v11, v3, v5, 96LL);
  v8 = 0LL;
  *v3 = v7;
  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = *(_DWORD **)(a1 + 16); v5 != *i; i += 5 )
    {
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 24) )
        return a2;
    }
    *(_OWORD *)a2 = *(_OWORD *)(*(_QWORD *)(a1 + 16) + 20 * v8 + 4);
  }
  return a2;
}
