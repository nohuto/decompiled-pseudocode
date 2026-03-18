/*
 * XREFs of _xxxMNSetGapState@16 @ 0x1A77B8
 * Callers:
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     _xxxMNDragLeave@0 @ 0x1A7618 (_xxxMNDragLeave@0.c)
 *     _xxxMNUpdateDraggingInfo@12 @ 0x1A798E (_xxxMNUpdateDraggingInfo@12.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxInvalidateRect@12 @ 0x1965AB (_xxxInvalidateRect@12.c)
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _MNGetpItem@8 @ 0x1975F9 (_MNGetpItem@8.c)
 */

_DWORD *__fastcall xxxMNSetGapState(void *a1, unsigned int a2, char a3, int a4)
{
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v21; // [esp+Ch] [ebp-2Ch] BYREF
  void *v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  unsigned int v24; // [esp+18h] [ebp-20h]
  _DWORD v25[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v26; // [esp+24h] [ebp-14h] BYREF
  int v27; // [esp+28h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-Ch]
  int v29; // [esp+30h] [ebp-8h]

  v24 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, 0);
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( (a3 & 3) != 0 )
  {
    if ( IsMFMWFPWindow(a1) )
    {
      v7 = safe_cast_fnid_to_PMENUWND(v6);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 4);
        if ( v8 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v25, v8);
          if ( *(_DWORD *)v25[0] )
          {
            v9 = MNGetpItem((int)v25, a2);
            v10 = v9;
            if ( v9 )
            {
              v26 = *(_DWORD *)(*(_DWORD *)v9 + 36);
              v28 = *(_DWORD *)(*(_DWORD *)v9 + 36) + *(_DWORD *)(*(_DWORD *)v9 + 44);
              v27 = *(_DWORD *)(*(_DWORD *)v9 + 40);
              v29 = *(_DWORD *)(*(_DWORD *)v9 + 40) + *(_DWORD *)(*(_DWORD *)v9 + 48);
              if ( (a3 & 1) == 0 )
              {
                v14 = MNGetpItem((int)v25, v24 + 1);
                v15 = *(_DWORD *)v10;
                v16 = *(_DWORD *)(*(_DWORD *)v10 + 4);
                if ( a4 )
                {
                  *(_DWORD *)(v15 + 4) = v16 | 0x40000000;
                  if ( !v14 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_DWORD *)v14 + 4) |= 0x80000000;
                }
                else
                {
                  *(_DWORD *)(v15 + 4) = v16 & 0xBFFFFFFF;
                  if ( !v14 )
                    goto LABEL_20;
                  *(_DWORD *)(*(_DWORD *)v14 + 4) &= ~0x80000000;
                }
                v29 += *(_DWORD *)(_gpsi + 1772);
                goto LABEL_20;
              }
              v11 = MNGetpItem((int)v25, v24 - 1);
              v12 = *(_DWORD *)v10;
              v13 = *(_DWORD *)(*(_DWORD *)v10 + 4);
              if ( a4 )
              {
                *(_DWORD *)(v12 + 4) = v13 | 0x80000000;
                if ( v11 )
                {
                  *(_DWORD *)(*(_DWORD *)v11 + 4) |= 0x40000000u;
LABEL_13:
                  v27 -= *(_DWORD *)(_gpsi + 1772);
                }
              }
              else
              {
                *(_DWORD *)(v12 + 4) = v13 & 0x7FFFFFFF;
                if ( v11 )
                {
                  *(_DWORD *)(*(_DWORD *)v11 + 4) &= ~0x40000000u;
                  goto LABEL_13;
                }
              }
LABEL_20:
              v17 = *(_DWORD *)(*(_DWORD *)MNGetpItemFromIndex(
                                             *(_DWORD *)(*(_DWORD *)v25[0] + 20),
                                             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v25[0] + 20) + 72))
                              + 40);
              v27 -= v17;
              v29 -= v17;
              CurrentThread = KeGetCurrentThread();
              ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
              v21 = *(_DWORD *)(ThreadWin32Thread + 228);
              *(_DWORD *)(ThreadWin32Thread + 228) = &v21;
              v22 = a1;
              HMLockObject(a1);
              xxxInvalidateRect((int)a1, &v26, 1);
              ThreadUnlock1();
            }
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25);
}
