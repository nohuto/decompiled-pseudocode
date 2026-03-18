/*
 * XREFs of _xxxSendMenuSelect@20 @ 0x1AD617
 * Callers:
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z @ 0x2A41E (--0-$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _xxxCallMsgFilter@8 @ 0x94CF8 (_xxxCallMsgFilter@8.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

_DWORD *__fastcall xxxSendMenuSelect(int *a1, struct tagEVENTHOOK *a2, int a3, int a4, int a5)
{
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // ebx
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // ebx
  struct tagEVENTHOOK *v11; // esi
  size_t *v12; // eax
  unsigned int v13; // ebx
  int v15[2]; // [esp+Ch] [ebp-3Ch] BYREF
  struct tagWND *v16; // [esp+14h] [ebp-34h]
  size_t v17; // [esp+18h] [ebp-30h]
  int v18; // [esp+1Ch] [ebp-2Ch]
  int v19; // [esp+20h] [ebp-28h]
  int v20; // [esp+24h] [ebp-24h]
  _DWORD v21[3]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v22[2]; // [esp+34h] [ebp-14h] BYREF
  size_t *v23; // [esp+3Ch] [ebp-Ch]
  struct tagEVENTHOOK *v24; // [esp+40h] [ebp-8h]
  int *v25; // [esp+44h] [ebp-4h]

  v25 = a1;
  v24 = a2;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22, a3);
  v5 = a4;
  if ( a4 < 0 || *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a3 + 20) + 24) <= (unsigned int)a4 )
  {
    v10 = *(_DWORD *)(a3 + 8);
    if ( !v10 )
      v10 = **(_DWORD **)a3;
    SmartObjStackRefBase<tagMENU>::Init(v21, 0);
    v5 = -1;
    v21[2] = -1;
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v21);
    v23 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v22, 0);
    LOWORD(v9) = 0;
    v8 = v10 != -1 ? 0 : 0xFFFF;
  }
  else
  {
    v6 = (_DWORD *)(*(_DWORD *)(**(_DWORD **)a3 + 56) + 80 * a4);
    v7 = *(_DWORD *)*v6 & 0x6B64 | *(_DWORD *)(*v6 + 4) & 0x8B;
    if ( v6[2] )
      v7 |= 0x10u;
    v8 = v7 & 0xFFFF5FFF;
    if ( (v8 & 0x10) != 0 )
      LOWORD(v9) = a4;
    else
      v9 = *(_DWORD *)(*v6 + 8);
    if ( a5 )
    {
      if ( *(_DWORD *)(a5 + 16) == -1 )
        v8 |= 0x8000u;
      if ( (*(_BYTE *)(a5 + 4) & 2) != 0 )
        v8 |= 0x2000u;
    }
  }
  v11 = (struct tagEVENTHOOK *)v25;
  if ( v25 )
    v15[0] = *v25;
  else
    v15[0] = 0;
  v15[1] = 287;
  v16 = (struct tagWND *)((unsigned __int16)v9 | (v8 << 16));
  if ( SmartObjStackRef<tagMENU>::operator==(v22, (int)v16) )
  {
    v17 = 0;
  }
  else
  {
    v12 = v23;
    if ( !v23 )
      v12 = *(size_t **)v22[0];
    v17 = *v12;
  }
  if ( !xxxCallMsgFilter((unsigned int *)v15, 2) )
    xxxSendNotifyMessage((int)v11, 0x11Fu, v16, v17, 1u);
  if ( v24 )
  {
    if ( v24 == v11 )
      v13 = (v8 >> 12) | 0xFFFFFFFD;
    else
      v13 = -4;
    xxxWindowEvent(0x8005u, v24, v13, (struct tagWND *)(v5 + 1), 0);
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v22);
}
