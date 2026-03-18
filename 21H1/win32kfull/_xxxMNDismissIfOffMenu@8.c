/*
 * XREFs of _xxxMNDismissIfOffMenu@8 @ 0x1984BA
 * Callers:
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _IsModalMenuStarted@4 @ 0x15BA82 (_IsModalMenuStarted@4.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 */

int __thiscall xxxMNDismissIfOffMenu(int this, int a2)
{
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // eax
  int v11; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // ecx
  int v15; // esi
  _DWORD v17[2]; // [esp+14h] [ebp-14h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch] BYREF
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, 0);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v3 = *(_DWORD *)(this + 20);
  if ( *(char *)(v3 + 12) < 0 || *(char *)(v3 + 11) < 0 || !IsModalMenuStarted(*(_DWORD **)(this + 8)) )
    goto LABEL_18;
  v5 = *(_DWORD **)(v4 + 328);
  v6 = v5 ? *v5 : 0;
  if ( (SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, v6), *(_DWORD *)v17[0])
    && *(_DWORD *)(*(_DWORD *)v17[0] + 4)
    && (v7 = xxxMNFindWindowFromPoint(a2), v8 = *(_DWORD *)(this + 20), *(char *)(v8 + 12) >= 0)
    && *(char *)(v8 + 11) >= 0
    && !v7
    && ((v9 = *(int **)(*(_DWORD *)(this + 8) + 328)) == 0 ? (v10 = 0) : (v10 = *v9),
        (SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, v10), *(_DWORD *)v17[0])
     && *(_DWORD *)(*(_DWORD *)v17[0] + 4)) )
  {
    v11 = *(_DWORD *)(*(_DWORD *)v17[0] + 4);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v18 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v18;
    v19 = v11;
    HMLockObject(v11);
    v14 = *(_DWORD *)(*(_DWORD *)v17[0] + 4);
    _InterlockedIncrement(&glSendMessage);
    v15 = 1;
    xxxSendTransformableMessageTimeout(v14, 0x1Fu, 0, 0, 0, 0, 0, 1u, 1);
    ThreadUnlock1();
  }
  else
  {
LABEL_18:
    v15 = 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17);
  return v15;
}
