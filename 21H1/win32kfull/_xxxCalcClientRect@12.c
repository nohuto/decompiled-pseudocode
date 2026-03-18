/*
 * XREFs of _xxxCalcClientRect@12 @ 0x8E9FC
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _xxxUpdateClientRect@4 @ 0x19E4A4 (_xxxUpdateClientRect@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetWindowBordersWithDpiAwareness@12 @ 0x314A8 (_GetWindowBordersWithDpiAwareness@12.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z @ 0x8EDE4 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z.c)
 *     _GetCaptionHeight@4 @ 0x8EDFE (_GetCaptionHeight@4.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 *     _ThreadLockMenuNoModify@8 @ 0xB75EA (_ThreadLockMenuNoModify@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

_DWORD *__fastcall xxxCalcClientRect(struct tagEVENTHOOK *a1, _DWORD *a2, int a3)
{
  PKTHREAD CurrentThread; // edi
  int v5; // esi
  int *ThreadWin32Thread; // eax
  int v7; // ecx
  int v8; // eax
  char v9; // al
  int v10; // edi
  int v11; // esi
  int WindowBordersWithDpiAwareness; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  INT WindowDpiLastNotify; // eax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  INT v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // ecx
  int v32; // [esp-4h] [ebp-4Ch]
  char v33; // [esp+13h] [ebp-35h]
  int v34; // [esp+14h] [ebp-34h]
  int v35; // [esp+14h] [ebp-34h]
  int v37; // [esp+1Ch] [ebp-2Ch]
  int DpiDependentMetric; // [esp+1Ch] [ebp-2Ch]
  int v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+20h] [ebp-28h] BYREF
  int v41; // [esp+24h] [ebp-24h] BYREF
  int v42; // [esp+28h] [ebp-20h]
  int v43; // [esp+2Ch] [ebp-1Ch]
  int v44; // [esp+30h] [ebp-18h]
  int v45; // [esp+34h] [ebp-14h]
  int v46; // [esp+38h] [ebp-10h]
  int v47; // [esp+3Ch] [ebp-Ch]
  int v48; // [esp+40h] [ebp-8h]
  int v49; // [esp+44h] [ebp-4h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v40 = gSmartObjNullRef;
  v41 = *(_DWORD *)(v5 + 840);
  *(_DWORD *)(v5 + 840) = &v41;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v33 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 8) & 0xF;
  SetOrClrWF(0, (int)a1, 0xFu, 1);
  SetOrClrWF(0, (int)a1, 0x410u, 1);
  v8 = *((_DWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 23) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
    goto LABEL_57;
  }
  v9 = *(_BYTE *)(v8 + 22) & 0xC0;
  v46 = *a2;
  v47 = a2[1];
  v48 = a2[2];
  v49 = a2[3];
  v10 = v47;
  v11 = v47;
  v34 = v47;
  if ( v9 == -64 )
  {
    SetOrClrWF(1, (int)a1, 8u, 1);
    v11 = v10 + GetCaptionHeight(a1);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v7);
  v13 = -WindowBordersWithDpiAwareness;
  v46 += WindowBordersWithDpiAwareness;
  v14 = v48 - WindowBordersWithDpiAwareness;
  v37 = WindowBordersWithDpiAwareness;
  v15 = v11 + WindowBordersWithDpiAwareness;
  v16 = *((_DWORD *)a1 + 5);
  v17 = v13 + v49;
  v48 = v14;
  v18 = v15;
  v47 = v15;
  v49 = v17;
  if ( (*(_BYTE *)(v16 + 23) & 0xC0) != 0x40 )
  {
    v32 = *((_DWORD *)a1 + 23);
    v42 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v32);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(0) )
    {
      SetOrClrWF(1, (int)a1, 1u, 1);
      v18 = v15;
      if ( a3 )
      {
LABEL_15:
        v17 = v49;
        goto LABEL_16;
      }
      if ( !v42 )
      {
        v14 = v48;
        v15 = v47;
      }
      ThreadLockMenuNoModify();
      v15 += xxxMenuBarCompute(v15 - v34, v37, v14 - v46);
      v47 = v15;
      *(_DWORD *)(*(_DWORD *)(v44 + 20) + 20) &= ~0x200u;
      ThreadUnlock1();
    }
    v18 = v15;
    goto LABEL_15;
  }
LABEL_16:
  v35 = 0;
  if ( v18 >= v17 )
  {
    v17 = v15;
    v35 = 1;
    v49 = v15;
  }
  v19 = *((_DWORD *)a1 + 5);
  if ( (*(_BYTE *)(v19 + 13) & 2) != 0 && v46 >= v14 )
  {
    v14 = v46;
    v35 = 1;
    v48 = v46;
  }
  if ( !v35 )
  {
    if ( (*(_BYTE *)(v19 + 17) & 2) != 0 )
    {
      if ( v14 - v46 < 4 )
      {
        v20 = v19;
      }
      else
      {
        v20 = v19;
        if ( v17 - v15 >= 4 )
        {
          SetOrClrWF(1, (int)a1, 0x410u, 1);
          v20 = *((_DWORD *)a1 + 5);
          v46 += 2;
          v14 -= 2;
          v15 += 2;
          v48 = v14;
          v49 -= 2;
          v47 = v15;
        }
      }
    }
    else
    {
      v20 = v19;
    }
    if ( (*(_BYTE *)(v20 + 22) & 0x10) != 0 )
    {
      v21 = *(_DWORD *)(v20 + 184) & 0xF;
      if ( v21 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v20 + 184) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v20 + 144) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( !v21
             && (v23 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 248)) != 0
             && (*(_BYTE *)(**(_DWORD **)(v23 + 4) + 32) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(*((_DWORD *)a1 + 2) + 232) + 160);
      }
      DpiDependentMetric = GetDpiDependentMetric(1, WindowDpiLastNotify);
      if ( v49 - v15 > DpiDependentMetric )
      {
        SetOrClrWF(1, (int)a1, 4u, 1);
        if ( !a3 )
          v49 -= DpiDependentMetric;
      }
    }
    v24 = *((_DWORD *)a1 + 5);
    if ( (*(_BYTE *)(v24 + 22) & 0x20) != 0 )
    {
      v25 = *(_DWORD *)(v24 + 184) & 0xF;
      if ( v25 == 3 )
      {
        v26 = (*(_DWORD *)(v24 + 184) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v24 + 144) & 0x8000000) != 0 )
      {
        v26 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v25
             && (v27 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 248)) != 0
             && (*(_BYTE *)(**(_DWORD **)(v27 + 4) + 32) & 1) != 0 )
      {
        v26 = 96;
      }
      else
      {
        v26 = *(unsigned __int16 *)(*(_DWORD *)(*((_DWORD *)a1 + 2) + 232) + 160);
      }
      v28 = GetDpiDependentMetric(0, v26);
      v29 = v46;
      v39 = v28;
      if ( v14 - v46 >= v28 )
      {
        SetOrClrWF(1, (int)a1, 2u, 1);
        if ( !a3 )
        {
          if ( ((*(_BYTE *)(*((_DWORD *)a1 + 5) + 17) ^ *(_BYTE *)(*((_DWORD *)a1 + 5) + 18)) & 0x40) != 0 )
            v46 = v39 + v29;
          else
            v48 = v14 - v39;
        }
      }
    }
  }
  *a2 = v46;
  a2[1] = v47;
  a2[2] = v48;
  a2[3] = v49;
LABEL_57:
  v30 = *((_DWORD *)a1 + 5);
  if ( v33 != (*(_BYTE *)(v30 + 8) & 0xF) && *(char *)(v30 + 15) < 0 )
    xxxWindowEvent(0x8004u, a1, 0, 0, 1);
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v40);
}
