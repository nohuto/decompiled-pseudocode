/*
 * XREFs of ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438
 * Callers:
 *     ?TemplateWindow@CWindow@@QAE_NPAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x19F569 (-TemplateWindow@CWindow@@QAE_NPAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetMonitorMaxArea@8 @ 0x7307A (_GetMonitorMaxArea@8.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _LogicalToPhysicalInPlaceRect@8 @ 0x15135F (_LogicalToPhysicalInPlaceRect@8.c)
 *     _LogicalToPhysicalPointForWindow@16 @ 0x15148D (_LogicalToPhysicalPointForWindow@16.c)
 *     ?GetWindowFrameBounds@@YG?AUtagRECT@@PBUtagWND@@@Z @ 0x19E3CD (-GetWindowFrameBounds@@YG-AUtagRECT@@PBUtagWND@@@Z.c)
 *     ?ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E459 (-ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 */

bool __fastcall CloneWindowPosAndArrangementAsync(struct tagQ *a1, int a2, int *a3, char a4)
{
  int v4; // esi
  unsigned int v6; // ebx
  int v8; // eax
  int v9; // ecx
  char v10; // cl
  char v11; // dl
  _DWORD *Prop; // edx
  _DWORD *v13; // esi
  int v14; // eax
  _DWORD *v15; // esi
  _DWORD *v16; // esi
  int v17; // eax
  const struct tagWND *v18; // [esp+0h] [ebp-40h]
  const struct tagRECT *v19; // [esp+0h] [ebp-40h]
  struct tagRECT *v20; // [esp+4h] [ebp-3Ch]
  struct tagRECT *v21; // [esp+4h] [ebp-3Ch]
  struct tagRECT v22; // [esp+10h] [ebp-30h] BYREF
  struct tagRECT v23; // [esp+24h] [ebp-1Ch]
  struct tagQ *v24; // [esp+34h] [ebp-Ch]
  int v25; // [esp+38h] [ebp-8h]
  _DWORD *v26; // [esp+3Ch] [ebp-4h]
  _DWORD *v27; // [esp+48h] [ebp+8h]

  v4 = a2;
  v26 = (_DWORD *)a2;
  v24 = a1;
  v6 = Win32AllocPoolZInit(88, 1886872405);
  if ( !v6 )
    return 0;
  v8 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(v4 + 20) + 164));
  *(_DWORD *)v6 = *(_DWORD *)a1;
  v25 = v8;
  if ( a3 )
    v9 = *a3;
  else
    v9 = 0;
  *(_DWORD *)(v6 + 4) = v9;
  v10 = *(_BYTE *)(*(_DWORD *)(v4 + 20) + 23) & 0x20;
  *(_BYTE *)(v6 + 81) = v10 != 0;
  v11 = *(_BYTE *)(*(_DWORD *)(v4 + 20) + 23) & 1;
  *(_BYTE *)(v6 + 82) = v11;
  *(_BYTE *)(v6 + 83) = *(_BYTE *)(*(_DWORD *)(v4 + 20) + 145) & 1;
  *(_BYTE *)(v6 + 84) = (*(_BYTE *)(*(_DWORD *)(v4 + 20) + 145) & 2) != 0;
  *(_BYTE *)(v6 + 85) = *(_BYTE *)(*(_DWORD *)(v4 + 20) + 146) >> 7;
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 164);
  if ( !v10 && !v11 )
  {
    v23 = *GetWindowFrameBounds(&v22, v18);
    *(struct tagRECT *)(v6 + 12) = v23;
    v4 = (int)v26;
    LogicalToPhysicalInPlaceRect(v26, v6 + 12);
  }
  Prop = (_DWORD *)_GetProp(v4, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
  v27 = Prop;
  if ( Prop )
  {
    qmemcpy((void *)(v6 + 28), Prop, 0x34u);
    v13 = v26;
    *(_BYTE *)(v6 + 80) = 1;
    ReduceRectByWindowMargin((const struct tagWND *)(v6 + 28), (const struct tagRECT *)v18, v20);
    ReduceRectByWindowMargin((const struct tagWND *)(v6 + 44), v19, v21);
    LogicalToPhysicalInPlaceRect(v13, v6 + 28);
    LogicalToPhysicalInPlaceRect(v13, v6 + 44);
    if ( *(_BYTE *)(v6 + 81) && (a4 & 1) == 0 )
    {
      *(_BYTE *)(v6 + 81) = 0;
      v14 = v27[12];
      if ( (v14 & 2) != 0 )
      {
        *(_BYTE *)(v6 + 82) = 1;
      }
      else
      {
        v15 = (_DWORD *)(v6 + 28);
        if ( (v14 & 0x18) != 0 )
          v15 = (_DWORD *)(v6 + 44);
        *(_DWORD *)(v6 + 12) = *v15;
        v16 = v15 + 1;
        *(_DWORD *)(v6 + 16) = *v16++;
        *(_DWORD *)(v6 + 20) = *v16;
        *(_DWORD *)(v6 + 24) = v16[1];
        v13 = v26;
      }
    }
    v17 = *(_DWORD *)(v6 + 76);
    if ( (v17 & 0x20) != 0 )
    {
      LogicalToPhysicalPointForWindow(*(_DWORD *)(v6 + 60), *(_DWORD *)(v6 + 64));
      v17 = *(_DWORD *)(v6 + 76);
    }
    if ( (v17 & 0x40) != 0 )
    {
      v23 = *(struct tagRECT *)GetMonitorMaxArea(v13, v25, &v22);
      *(_DWORD *)(v6 + 68) += v23.left;
      *(_DWORD *)(v6 + 72) += v23.top;
      LogicalToPhysicalPointForWindow(*(_DWORD *)(v6 + 68), *(_DWORD *)(v6 + 72));
    }
  }
  return PostEventMessageEx(
           *(tagDomLock **)(*((_DWORD *)v24 + 2) + 236),
           *((_DWORD *)v24 + 2),
           (struct tagTHREADINFO *)0x1B,
           (HWND *)v24,
           0,
           0,
           v6,
           0,
           (int)v18,
           (struct tagINPUT_MESSAGE_SOURCE *)v20) != 0;
}
