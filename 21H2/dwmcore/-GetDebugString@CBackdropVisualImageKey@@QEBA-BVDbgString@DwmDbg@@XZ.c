/*
 * XREFs of ?GetDebugString@CBackdropVisualImageKey@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180202A78
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

char **__fastcall CBackdropVisualImageKey::GetDebugString(__int64 a1, char **a2)
{
  __int64 v2; // rbx
  int v4; // r9d
  void *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  DwmDbg::DbgString::DbgString((char **)&v7, "0x%p", *(const void **)a1);
  v4 = v2;
  v5 = v7;
  DwmDbg::DbgString::DbgString(a2, "%s, 0x%x", (const char *)v7, v4);
  if ( v5 )
    DefaultHeap::Free(v5);
  return a2;
}
