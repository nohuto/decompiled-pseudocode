/*
 * XREFs of ClearHungFlag @ 0x1C008CC64
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxHungAppDemon @ 0x1C00E7C60 (xxxHungAppDemon.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00266E4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall ClearHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  int v4; // ebp
  int v5; // r15d
  int v6; // esi
  int v7; // r14d
  _BOOL8 v8; // rdx
  __int64 v9; // r9
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rcx
  void *v15; // rax

  v2 = *((_QWORD *)a1 + 5);
  v4 = *(_DWORD *)(v2 + 28);
  v5 = *(_BYTE *)(v2 + 19) & 0x18;
  v6 = *(_DWORD *)(v2 + 24);
  v7 = *(_DWORD *)(v2 + 232);
  *(_BYTE *)(((unsigned __int64)a2 >> 8) + v2 + 16) &= ~(_BYTE)a2;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = (_DWORD *)*((_QWORD *)a1 + 5);
    v9 = (unsigned int)v10[7];
    v11 = v10[6];
    v12 = v10[58];
    if ( v4 != (_DWORD)v9 )
      goto LABEL_12;
    if ( v6 == v11 && v7 == v12 )
      goto LABEL_5;
    if ( v4 == (_DWORD)v9 )
    {
      if ( v6 == v11 )
      {
        if ( ((v7 ^ v12) & 0x2E00300) == 0 )
          goto LABEL_5;
        v8 = 1LL;
      }
      else
      {
        v8 = ((v6 ^ v11) & 0x4E27A9) != 0;
      }
    }
    else
    {
LABEL_12:
      v8 = ((v4 ^ (unsigned int)v9) & 0xB1CF0000) != 0;
    }
    if ( v8 )
    {
      DirtyVisRgnTrackers(a1);
      v15 = (void *)ReferenceDwmApiPort(v14);
      DwmAsyncChildStyleChange(v15);
    }
  }
LABEL_5:
  result = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(result + 19) & 0x18) == 0 )
  {
    if ( v5 )
      return VWPLRemoveBase(gpvwplHungRedraw, v8, a1, v9, 0LL);
  }
  return result;
}
