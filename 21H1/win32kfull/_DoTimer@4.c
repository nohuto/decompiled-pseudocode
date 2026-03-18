/*
 * XREFs of _DoTimer@4 @ 0x742FA
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ?TimerStatistics@@YGXPBUtagTIMER@@@Z @ 0x744DA (-TimerStatistics@@YGXPBUtagTIMER@@@Z.c)
 *     __IsChild@8 @ 0xAEE18 (__IsChild@8.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     _AllocQEntry@4 @ 0xEFE7A (_AllocQEntry@4.c)
 *     _WakeWowTask@4 @ 0x155BA7 (_WakeWowTask@4.c)
 */

int __thiscall DoTimer(void *this)
{
  int v1; // eax
  _DWORD *i; // edi
  _DWORD *v3; // esi
  void *v4; // edx
  int IsChild; // edx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  _DWORD *v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v13; // esi
  int v14; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // edx
  int result; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  const struct tagTIMER *v21; // [esp+0h] [ebp-18h]
  void *v22; // [esp+0h] [ebp-18h]
  struct tagUIPI_INFO *v23; // [esp+4h] [ebp-14h]
  unsigned int v24; // [esp+10h] [ebp-8h]

  v1 = _gptiCurrent + 680;
  for ( i = *(_DWORD **)(_gptiCurrent + 680); ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)v1 )
      return 0;
    v3 = i - 9;
    v4 = (void *)i[4];
    if ( !this || this == v4 || this == (void *)1 && !v4 )
    {
      IsChild = 1;
    }
    else
    {
      IsChild = _IsChild(this, v4);
      v1 = _gptiCurrent + 680;
    }
    if ( IsChild )
      break;
  }
  TimerStatistics(v21);
  v6 = v3[19];
  if ( v3[18] == v6 )
    v3[18] = v6;
  if ( AllocQEntry(_gptiCurrent + 448) )
  {
    v7 = v3[13];
    if ( v7 )
    {
      v24 = *(_DWORD *)(*(_DWORD *)(v7 + 20) + 184);
    }
    else
    {
      v18 = *(_DWORD *)(_gptiCurrent + 236);
      v19 = *(_DWORD *)(v18 + 64);
      if ( v19 )
        v20 = *(_DWORD *)(v19 + 8);
      else
        v20 = *(_DWORD *)(v18 + 52);
      v24 = *(_DWORD *)(*(_DWORD *)(v20 + 232) + 156);
    }
    if ( (v3[7] & 2) == 0 || (v8 = 280, !v3[4]) )
      v8 = v3[4];
    StoreQMessage(
      (struct tagQMSG *)((v3[7] & 2) != 0 ? 280 : 275),
      (struct tagWND *)v3[14],
      v8,
      0,
      0,
      0,
      0LL,
      0,
      0,
      v24,
      0,
      0,
      v22,
      v23);
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 1) == 0 )
    {
      *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6) |= 0x108u;
      *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 4) |= 0x108u;
      if ( (*(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) & 0x108) != 0 )
      {
        if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 )
        {
          ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 4);
          ++*(_DWORD *)(_gpsi + 4440);
          WakeWowTask(_gptiCurrent);
        }
        else
        {
          KeSetEvent(*(PRKEVENT *)(_gptiCurrent + 400), 2, 0);
        }
      }
    }
  }
  v3[7] &= ~1u;
  v9 = (_DWORD *)*i;
  v10 = v3[3];
  if ( *(_DWORD **)(*i + 4) != i )
    goto LABEL_34;
  v11 = (_DWORD *)i[1];
  if ( (_DWORD *)*v11 != i )
    goto LABEL_34;
  *v11 = v9;
  v9[1] = v11;
  if ( (*(_DWORD *)(v10 + 324))-- == 1 )
    *(_WORD *)(*(_DWORD *)(v10 + 244) + 6) &= ~0x10u;
  v13 = v3 + 11;
  v14 = *v13;
  if ( *(_DWORD **)(*v13 + 4) != v13
    || (v15 = (_DWORD *)v13[1], (_DWORD *)*v15 != v13)
    || (*v15 = v14, *(_DWORD *)(v14 + 4) = v15, v16 = (_DWORD *)_gtmrListHead[1], *v16 != _gtmrListHead[0]) )
  {
LABEL_34:
    __fastfail(3u);
  }
  *v13 = _gtmrListHead[0];
  v13[1] = v16;
  result = 1;
  *v16 = v13;
  _gtmrListHead[1] = v13;
  return result;
}
