/*
 * XREFs of ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C01084D8
 * Callers:
 *     DWP_SetHotKey @ 0x1C00085A0 (DWP_SetHotKey.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
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
