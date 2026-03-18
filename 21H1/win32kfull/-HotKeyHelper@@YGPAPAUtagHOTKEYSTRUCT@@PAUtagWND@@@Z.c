/*
 * XREFs of ?HotKeyHelper@@YGPAPAUtagHOTKEYSTRUCT@@PAUtagWND@@@Z @ 0x73144
 * Callers:
 *     _DWP_SetHotKey@8 @ 0x730DE (_DWP_SetHotKey@8.c)
 *     _DWP_GetHotKey@4 @ 0x1A2502 (_DWP_GetHotKey@4.c)
 * Callees:
 *     <none>
 */

struct tagHOTKEYSTRUCT **__thiscall HotKeyHelper(void *this)
{
  _DWORD *v1; // eax
  int *v2; // edx

  v1 = (_DWORD *)gpHotKeyList;
  v2 = &gpHotKeyList;
  while ( v1 && (void *)*v1 != this )
  {
    v2 = v1 + 2;
    v1 = (_DWORD *)v1[2];
  }
  return (struct tagHOTKEYSTRUCT **)v2;
}
