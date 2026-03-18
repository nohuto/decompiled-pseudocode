/*
 * XREFs of _DWP_GetHotKey@4 @ 0x1A2502
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     ?HotKeyHelper@@YGPAPAUtagHOTKEYSTRUCT@@PAUtagWND@@@Z @ 0x73144 (-HotKeyHelper@@YGPAPAUtagHOTKEYSTRUCT@@PAUtagWND@@@Z.c)
 */

struct tagHOTKEYSTRUCT *__thiscall DWP_GetHotKey(void *this)
{
  struct tagHOTKEYSTRUCT *result; // eax

  result = *HotKeyHelper(this);
  if ( result )
    return (struct tagHOTKEYSTRUCT *)*((_DWORD *)result + 1);
  return result;
}
