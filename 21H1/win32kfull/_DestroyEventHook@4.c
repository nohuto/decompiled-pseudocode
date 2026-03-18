/*
 * XREFs of _DestroyEventHook@4 @ 0x14A42
 * Callers:
 *     __UnhookWinEvent@4 @ 0x13618 (__UnhookWinEvent@4.c)
 *     _FreeThreadsWinEvents@4 @ 0x1471E (_FreeThreadsWinEvents@4.c)
 * Callees:
 *     _CategoryMaskFromEventRange@8 @ 0x14AC0 (_CategoryMaskFromEventRange@8.c)
 *     _RemoveHmodDependency@4 @ 0x15F1A (_RemoveHmodDependency@4.c)
 */

int __stdcall DestroyEventHook(_DWORD *a1)
{
  int v1; // ebx
  int result; // eax
  _DWORD *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // eax

  v1 = 0;
  a1[6] |= 1u;
  result = HMMarkObjectDestroy(a1);
  if ( result )
  {
    for ( i = (_DWORD *)_gpWinEventHooks; ; i = v4 + 3 )
    {
      v4 = (_DWORD *)*i;
      if ( !*i )
        break;
      if ( v4 == a1 )
      {
        *i = a1[3];
        break;
      }
    }
    v5 = (_DWORD *)_gpWinEventHooks;
    while ( v5 )
    {
      v6 = CategoryMaskFromEventRange(v5[4], v5[5]);
      v5 = (_DWORD *)v5[3];
      v1 |= v6;
    }
    *(_DWORD *)(_gpsi + 1492) = v1;
    if ( (int)a1[10] >= 0 )
      RemoveHmodDependency();
    return HMFreeObject(a1);
  }
  return result;
}
