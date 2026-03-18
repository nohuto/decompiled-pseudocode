/*
 * XREFs of ClearHungFlag @ 0x1C00D1F84
 * Callers:
 *     InternalInvalidate3 @ 0x1C0044D64 (InternalInvalidate3.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxHungAppDemon @ 0x1C00CADB0 (xxxHungAppDemon.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C003EA14 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
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
  int v14; // ecx
  int v15; // esi
  __int64 v16; // rcx
  void *v17; // rax

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
        v15 = -268435456;
      }
      else
      {
        v14 = (v6 ^ v11) & 0x4E27A9;
        v8 = v14 != 0;
        v15 = v14 != 0 ? 0xFFFFFFEC : 0;
        v12 = v14 != 0 ? v11 : 0;
      }
    }
    else
    {
LABEL_12:
      v8 = ((v4 ^ (unsigned int)v9) & 0xB1CF0000) != 0;
      v15 = ((v4 ^ (unsigned int)v9) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
      v12 = ((v4 ^ (unsigned int)v9) & 0xB1CF0000) != 0 ? v9 : 0;
    }
    if ( v8 )
    {
      DirtyVisRgnTrackers(a1);
      v17 = (void *)ReferenceDwmApiPort(v16);
      DwmAsyncChildStyleChange(v17, *(_QWORD *)a1, v15, v12);
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
