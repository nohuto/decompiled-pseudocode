/*
 * XREFs of ?GetMonitorMenuRectForDpiContext@@YG?AUtagRECT@@PBUtagMONITOR@@K@Z @ 0x1B70D7
 * Callers:
 *     _GetMonitorMenuRect@4 @ 0x1B71FD (_GetMonitorMenuRect@4.c)
 *     _GetMonitorMenuRectForWindow@8 @ 0x1B722C (_GetMonitorMenuRectForWindow@8.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?GetMonitorMenuRectForDpi@@YG?AUtagRECT@@PBUtagMONITOR@@G@Z @ 0x1B7032 (-GetMonitorMenuRectForDpi@@YG-AUtagRECT@@PBUtagMONITOR@@G@Z.c)
 */

struct tagRECT *__userpurge GetMonitorMenuRectForDpiContext@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagRECT *__return_ptr retstr,
        const struct tagMONITOR *a4,
        unsigned int a5)
{
  unsigned int v6; // edx
  struct tagRECT *MonitorMenuRectForDpi; // eax
  int v8; // ecx
  struct tagRECT *v9; // esi
  struct tagRECT *result; // eax
  LONG *p_top; // esi
  const struct tagMONITOR *v12; // [esp+0h] [ebp-20h]
  unsigned __int16 v13; // [esp+4h] [ebp-1Ch]
  struct tagRECT v14; // [esp+10h] [ebp-10h] BYREF

  if ( (a1 & 0xF) != 2 || (a1 & 0x20000000) == 0 )
  {
    MonitorMenuRectForDpi = GetMonitorMenuRectForDpi((a1 >> 8) & 0x1FF, (_DWORD *)a2, &v14, v12, v13);
    goto LABEL_7;
  }
  v14 = *(struct tagRECT *)(a2 + 164);
  if ( ERECTL::bWrapped((ERECTL *)&v14) )
  {
    MonitorMenuRectForDpi = (struct tagRECT *)GetMonitorRectForDpiContext(a2, v6, &v14.left);
LABEL_7:
    v9 = MonitorMenuRectForDpi;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a2 + 20);
  ScaleDPIRect(
    &v14,
    &v14.left,
    *(_WORD *)(v8 + 56),
    *(_WORD *)(v8 + 52),
    *(_DWORD *)(v8 + 60),
    *(_DWORD *)(v8 + 64),
    *(_DWORD *)(v8 + 16),
    *(_DWORD *)(v8 + 20));
  v9 = &v14;
LABEL_8:
  result = retstr;
  retstr->left = v9->left;
  p_top = &v9->top;
  retstr->top = *p_top++;
  retstr->right = *p_top;
  retstr->bottom = p_top[1];
  return result;
}
