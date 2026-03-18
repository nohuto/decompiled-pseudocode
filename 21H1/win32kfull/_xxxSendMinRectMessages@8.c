/*
 * XREFs of _xxxSendMinRectMessages@8 @ 0xA7C5A
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserGetWindowMinimizeRect@8 @ 0xA7B36 (_NtUserGetWindowMinimizeRect@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z @ 0x6FC58 (-VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z.c)
 */

int __fastcall xxxSendMinRectMessages(struct tagHOOK *a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned int **v3; // edi
  void *v4; // ecx
  unsigned int *v5; // ecx
  struct tagWND *i; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagVWPL *v9; // esi
  int v11; // [esp+0h] [ebp-34h]
  int v12; // [esp+0h] [ebp-34h]
  unsigned int *v13; // [esp+4h] [ebp-30h]
  unsigned int *v14; // [esp+4h] [ebp-30h]
  _DWORD v15[3]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD v16[3]; // [esp+18h] [ebp-1Ch] BYREF
  int v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+28h] [ebp-Ch] BYREF
  unsigned int v19; // [esp+2Ch] [ebp-8h] BYREF
  unsigned int HighLimit; // [esp+30h] [ebp-4h]

  v2 = 0;
  v17 = (int)a2;
  if ( a1 )
    a1 = *(struct tagHOOK **)a1;
  HighLimit = (unsigned int)a1;
  memset(v15, 0, sizeof(v15));
  v3 = *(unsigned int ***)(_gptiCurrent + 252);
  if ( ((*(_DWORD *)(_gptiCurrent + 372) | (*v3)[2]) & 0x800) != 0 )
  {
    xxxCallHook(a1, 5, a2, 0xAu, v11, (int)v13);
    v3 = *(unsigned int ***)(_gptiCurrent + 252);
    v2 = 1;
  }
  if ( v3[30] )
  {
    PushW32ThreadLock(*(_DWORD *)(_gptiCurrent + 248), v15, (int)UserDereferenceObject);
    v4 = *(void **)(_gptiCurrent + 248);
    if ( v4 )
      ObfReferenceObject(v4);
    v5 = v3[30];
    v19 = 0;
    for ( i = VWPLNextBase(v5, 0, &v19, (struct tagWND *)v5, v5, v11, v13);
          ;
          i = VWPLNextBase(v3[30], v9, &v19, (struct tagWND *)v3[30], v3[30], v12, v14) )
    {
      v9 = i;
      if ( !i )
        break;
      v16[2] = 0;
      v18 = 0;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v16[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v16;
      v16[1] = v9;
      HMLockObject(v9);
      if ( xxxSendTransformableMessageTimeout((int)v9, 0x8Bu, HighLimit, v17, 0, (struct tagDDECONV *)0x64, &v18, 1u, 0) )
        v2 = 1;
      ThreadUnlock1();
    }
    PopAndFreeW32ThreadLock((int)v15);
  }
  return v2;
}
