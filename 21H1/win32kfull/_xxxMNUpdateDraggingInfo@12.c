/*
 * XREFs of _xxxMNUpdateDraggingInfo@12 @ 0x1A798E
 * Callers:
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _LockMFMWFPWindow@8 @ 0x197508 (_LockMFMWFPWindow@8.c)
 *     _MNGetpItem@8 @ 0x1975F9 (_MNGetpItem@8.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 */

_DWORD *__fastcall xxxMNUpdateDraggingInfo(_DWORD *a1, int *a2, int a3)
{
  void **v4; // edi
  int v5; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v8; // ebx
  void *v9; // ecx
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  void *v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  BOOL v19; // eax
  _DWORD v21[3]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v22[2]; // [esp+18h] [ebp-14h] BYREF
  void *v23; // [esp+20h] [ebp-Ch]
  unsigned int v24; // [esp+24h] [ebp-8h]
  int *v25; // [esp+28h] [ebp-4h]
  int v26; // [esp+34h] [ebp+8h]
  int v27; // [esp+34h] [ebp+8h]

  v21[2] = 0;
  v25 = a2;
  v4 = (void **)(a1 + 14);
  v5 = a1[14];
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v21[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v21;
  v21[1] = v5;
  if ( v5 )
    HMLockObject(v5);
  v8 = a1[16] & 3;
  v23 = *v4;
  v24 = a1[15];
  LockMFMWFPWindow(v4, v25);
  v9 = *v4;
  a1[15] = a3;
  if ( IsMFMWFPWindow(v9) )
  {
    v11 = safe_cast_fnid_to_PMENUWND(v10);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 4);
      if ( v12 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, v12);
        v13 = (int *)MNGetpItem((int)v22, a1[15]);
        a1[16] = 0;
        v25 = v13;
        if ( v13 )
        {
          v26 = a1[3] - *(_DWORD *)(*((_DWORD *)*v4 + 5) + 72);
          v4 = (void **)(a1 + 14);
          v14 = *(_DWORD *)(*(_DWORD *)MNGetpItemFromIndex(
                                         *(_DWORD *)(*(_DWORD *)v22[0] + 20),
                                         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v22[0] + 20) + 72))
                          + 40)
              + v26;
          v15 = *v25;
          v25 = *(int **)(*v25 + 40);
          v27 = *(_DWORD *)(_gpsi + 1772);
          if ( v14 > (int)v25 + v27 )
          {
            if ( v14 >= (int)v25 + *(_DWORD *)(v15 + 48) - v27 )
              a1[16] = 2;
          }
          else
          {
            a1[16] = 1;
          }
        }
        v16 = v23;
        v17 = v24;
        if ( v23 == *v4 )
        {
          v18 = a1[15] - v24;
          if ( v18 == -1 )
          {
            if ( a1[16] == 2 && v8 == 1 )
              goto LABEL_24;
            v19 = 1;
          }
          else
          {
            if ( v18 )
            {
              if ( v18 == 1 && a1[16] == 1 && v8 == 2 )
                goto LABEL_24;
              goto LABEL_23;
            }
            v19 = v8 != a1[16];
          }
          if ( !v19 )
          {
LABEL_24:
            ThreadUnlock1();
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22);
          }
        }
LABEL_23:
        a1[16] |= 4u;
        xxxMNSetGapState(v16, v17, v8, 0);
        xxxMNSetGapState(*v4, a1[15], a1[16], 1);
        goto LABEL_24;
      }
    }
  }
  *v4 = 0;
  a1[15] = -1;
  return (_DWORD *)ThreadUnlock1();
}
