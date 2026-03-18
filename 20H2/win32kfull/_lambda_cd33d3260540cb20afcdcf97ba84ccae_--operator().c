/*
 * XREFs of _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C015CC14
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     DwmAsyncChildDestroy @ 0x1C0081B48 (DwmAsyncChildDestroy.c)
 *     DereferenceClass @ 0x1C00D2C70 (DereferenceClass.c)
 *     ClassUnlock @ 0x1C01E8A34 (ClassUnlock.c)
 */

__int64 __fastcall lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax

  result = ThreadUnlock1(a1, a2, a3);
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)(result + 280);
    if ( v6 )
      Win32FreePool(v6);
    if ( (unsigned int)IsWindowDesktopComposed(v5) )
    {
      v8 = (void *)ReferenceDwmApiPort(v7);
      DwmAsyncChildDestroy(v8, *(_QWORD *)v5);
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 48LL) = 0LL;
    HMAssignmentUnlock(v5 + 104);
    v9 = *(_DWORD **)(v5 + 296);
    if ( v9 )
    {
      --*v9;
      v10 = *(_DWORD **)(v5 + 296);
      if ( !*v10 )
        Win32FreePool(v10);
      *(_QWORD *)(v5 + 296) = 0LL;
    }
    v11 = *(_DWORD **)(v5 + 288);
    if ( v11 )
    {
      --*v11;
      v12 = *(_DWORD **)(v5 + 288);
      if ( !*v12 )
        Win32FreePool(v12);
      *(_QWORD *)(v5 + 288) = 0LL;
    }
    --*(_DWORD *)(**(_QWORD **)(a1 + 24) + 896LL);
    v13 = *(_DWORD *)(v5 + 324);
    if ( (v13 & 0x20000000) != 0 )
    {
      *(_DWORD *)(v5 + 324) = v13 & 0xDFFFFFFF;
      --*(_DWORD *)(**(_QWORD **)(a1 + 24) + 904LL);
    }
    ClassUnlock(***(struct tagCLS ****)(a1 + 8));
    DereferenceClass(*(struct tagPROCESSINFO **)(**(_QWORD **)(a1 + 24) + 424LL), v5);
    return HMFreeObject(v5);
  }
  return result;
}
