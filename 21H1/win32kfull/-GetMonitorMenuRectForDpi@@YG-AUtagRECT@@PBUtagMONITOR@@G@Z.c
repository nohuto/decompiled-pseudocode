/*
 * XREFs of ?GetMonitorMenuRectForDpi@@YG?AUtagRECT@@PBUtagMONITOR@@G@Z @ 0x1B7032
 * Callers:
 *     ?GetMonitorMenuRectForDpiContext@@YG?AUtagRECT@@PBUtagMONITOR@@K@Z @ 0x1B70D7 (-GetMonitorMenuRectForDpiContext@@YG-AUtagRECT@@PBUtagMONITOR@@K@Z.c)
 * Callees:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _ExpandMonitorSpaceVertex@16 @ 0x15678 (_ExpandMonitorSpaceVertex@16.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

struct tagRECT *__userpurge GetMonitorMenuRectForDpi@<eax>(
        __int16 a1@<dx>,
        _DWORD *a2@<ecx>,
        struct tagRECT *__return_ptr retstr,
        const struct tagMONITOR *a4,
        unsigned __int16 a5)
{
  int v6; // edx
  LONG *MonitorRectForDpi; // esi
  int v8; // eax
  unsigned __int16 v9; // dx
  INT v10; // eax
  int v11; // edx
  struct tagRECT *result; // eax
  LONG *v13; // esi
  INT a; // [esp+10h] [ebp-2Ch] BYREF
  INT v15; // [esp+14h] [ebp-28h]
  int v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h]
  int v18[4]; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD *v19; // [esp+30h] [ebp-Ch]

  v19 = a2;
  v18[0] = a2[41];
  v18[1] = a2[42];
  v18[2] = a2[43];
  v18[3] = a2[44];
  if ( ERECTL::bWrapped((ERECTL *)v18) )
  {
    MonitorRectForDpi = GetMonitorRectForDpi((int)v19, a1, &a);
  }
  else
  {
    if ( a1 )
    {
      v8 = *(_DWORD *)(v6 + 20);
      v9 = *(_WORD *)(v8 + 54);
      a = *(_DWORD *)(v8 + 16);
      v15 = *(_DWORD *)(v8 + 20);
      v16 = *(_DWORD *)(v8 + 24);
      v17 = *(_DWORD *)(v8 + 28);
      v10 = ExpandMonitorSpaceVertex(a1, v9, a, v15);
      ScaleDPIRect(v18, v18, a1, *(_WORD *)(v19[5] + 52), v10, v11, a, v15);
    }
    MonitorRectForDpi = v18;
  }
  result = retstr;
  retstr->left = *MonitorRectForDpi;
  v13 = MonitorRectForDpi + 1;
  retstr->top = *v13++;
  retstr->right = *v13;
  retstr->bottom = v13[1];
  return result;
}
