/*
 * XREFs of _RtlEnumerateGenericTableLikeADirectory@28 @ 0x4B35E1B0
 * Callers:
 *     <none>
 * Callees:
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 *     _RealSuccessor@4 @ 0x4B2AB895 (_RealSuccessor@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

_DWORD *__stdcall RtlEnumerateGenericTableLikeADirectory(
        int a1,
        int (__stdcall *a2)(int a1, int a2, int a3),
        int a3,
        int a4,
        _DWORD **a5,
        _DWORD *a6,
        int a7)
{
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v10; // ecx
  int NodeOrParent; // eax
  int v12; // ecx
  _DWORD *v13; // [esp+Ch] [ebp-4h] BYREF

  v7 = *a5;
  v8 = 0;
  v13 = *a5;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    *a5 = 0;
    return 0;
  }
  if ( !a2 )
    a2 = LdrSetAppCompatDllRedirectionCallback;
  v10 = v7;
  if ( *a6 != *(_DWORD *)(a1 + 36) )
  {
    v7 = 0;
    v10 = 0;
    v13 = 0;
  }
  if ( v10 )
    goto LABEL_14;
  NodeOrParent = FindNodeOrParent(a1, a7, &v13);
  if ( NodeOrParent == 1 )
  {
    v7 = v13;
LABEL_14:
    v8 = a4;
LABEL_15:
    if ( v8 )
      v7 = RealSuccessor(v7);
    goto LABEL_17;
  }
  if ( NodeOrParent == 3 )
  {
    v7 = RealSuccessor(v13);
    goto LABEL_15;
  }
  v7 = v13;
LABEL_17:
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    v12 = ((int (__thiscall *)(int (__stdcall *)(int, int, int), int, _DWORD *, int))a2)(a2, a1, v7 + 4, a3);
    if ( v12 != -1073741198 )
      break;
    v7 = RealSuccessor(v7);
    if ( !v7 )
      return 0;
  }
  *a5 = v7;
  *a6 = *(_DWORD *)(a1 + 36);
  if ( v12 )
    return 0;
  return v7 + 4;
}
