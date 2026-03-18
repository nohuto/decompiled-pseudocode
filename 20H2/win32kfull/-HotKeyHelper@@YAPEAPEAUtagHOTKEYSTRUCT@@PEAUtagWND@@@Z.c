/*
 * XREFs of ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00CC324
 * Callers:
 *     DWP_SetHotKey @ 0x1C0008590 (DWP_SetHotKey.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

struct tagHOTKEYSTRUCT **__fastcall HotKeyHelper(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx

  v1 = gpHotKeyList;
  v2 = &gpHotKeyList;
  while ( v1 && *(struct tagWND **)v1 != a1 )
  {
    v2 = (__int64 *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 16);
  }
  return (struct tagHOTKEYSTRUCT **)v2;
}
