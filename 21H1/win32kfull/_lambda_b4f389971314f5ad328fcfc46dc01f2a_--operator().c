/*
 * XREFs of _lambda_b4f389971314f5ad328fcfc46dc01f2a_::operator() @ 0xF42B8
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     _DereferenceClass@8 @ 0x48042 (_DereferenceClass@8.c)
 *     _DwmAsyncChildDestroy@8 @ 0x73C16 (_DwmAsyncChildDestroy@8.c)
 *     _ClassUnlock@8 @ 0xA1C52 (_ClassUnlock@8.c)
 */

int *__thiscall lambda_b4f389971314f5ad328fcfc46dc01f2a_::operator()(int this)
{
  int *result; // eax
  int *v3; // esi
  int v4; // eax
  void *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax

  result = (int *)ThreadUnlock1();
  v3 = result;
  if ( result )
  {
    v4 = result[41];
    if ( v4 )
      Win32FreePool(v4);
    if ( IsWindowDesktopComposed(v3) )
    {
      v5 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildDestroy(v5, *v3);
    }
    *(_DWORD *)(v3[5] + 32) = 0;
    HMAssignmentUnlock(v3 + 14);
    v6 = (_DWORD *)v3[43];
    if ( v6 )
    {
      --*v6;
      if ( !*(_DWORD *)v3[43] )
        Win32FreePool(v3[43]);
      v3[43] = 0;
    }
    v7 = (_DWORD *)v3[42];
    if ( v7 )
    {
      --*v7;
      if ( !*(_DWORD *)v3[42] )
        Win32FreePool(v3[42]);
      v3[42] = 0;
    }
    --*(_DWORD *)(**(_DWORD **)(this + 12) + 504);
    ClassUnlock(***(struct tagCLS ****)(this + 4), *(_DWORD **)(this + 8));
    DereferenceClass(*(_DWORD *)(**(_DWORD **)(this + 12) + 232), (int)v3);
    return (int *)HMFreeObject(v3);
  }
  return result;
}
