/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YGXPAUtagINJECTED_CONTACT@@PAUDEVICEINFO@@IK@Z @ 0x1499B8
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?_GetQpcBasedTouchStackTime@@YGKXZ @ 0x149798 (-_GetQpcBasedTouchStackTime@@YGKXZ.c)
 *     ?xxxSendToTouchStack@@YGXPAUDEVICEINFO@@IPAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x149ACB (-xxxSendToTouchStack@@YGXPAUDEVICEINFO@@IPAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __userpurge xxxSendLastFrameTouchUp(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagINJECTED_CONTACT *a3,
        struct DEVICEINFO *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v6; // eax
  _DWORD *v7; // esi
  struct tagINJECTED_CONTACT *v8; // ebx
  void **v9; // ecx
  int v10; // eax
  struct DEVICEINFO *v11; // ebx
  unsigned int v12; // ecx
  unsigned int *v13; // edx
  unsigned int v14; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagPOINTER_TOUCH_INFO *v17; // [esp+0h] [ebp-20h]
  unsigned int v18; // [esp+4h] [ebp-1Ch]
  _DWORD v19[5]; // [esp+Ch] [ebp-14h] BYREF

  v19[3] = a1;
  memset(v19, 0, 12);
  v6 = 0;
  if ( a3 )
  {
    v7 = (_DWORD *)(a2 + 8);
    v8 = a3;
    v9 = (void **)(a2 + 8);
    do
    {
      if ( *v9 != (char *)&loc_3FFFD + 3 && *v9 != &loc_20000 )
        ++v6;
      v9 += 3;
      v8 = (struct tagINJECTED_CONTACT *)((char *)v8 - 1);
    }
    while ( v8 );
    v19[4] = v6;
    if ( v6 )
    {
      v10 = Win32AllocPoolWithQuotaZInit(136 * v6, 1953067861);
      v11 = (struct DEVICEINFO *)v10;
      if ( v10 )
      {
        v12 = 0;
        v13 = (unsigned int *)(v10 + 12);
        do
        {
          if ( *v7 != 0x40000 && (_UNKNOWN *)*v7 != &loc_20000 )
          {
            *(v13 - 2) = v12;
            v13[3] = *(v7 - 2);
            v13[4] = *(v7 - 1);
            *v13 = ((unsigned int)&loc_20000 + ((*v7 & 4) != 0 ? (unsigned int)&loc_20000 : 0)) | 0x8000;
            v13 += 34;
            *v7 = &loc_20000;
          }
          ++v12;
          v7 += 3;
        }
        while ( v12 < (unsigned int)a3 );
        PushW32ThreadLock(v10, v19, (int)Win32FreePool);
        v14 = 0;
        if ( a4 )
          v14 = _GetQpcBasedTouchStackTime() - (_DWORD)a4;
        xxxSendToTouchStack(v11, v14, v17, v18);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        *(_DWORD *)(ThreadWin32Thread + 8) = v19[0];
        Win32FreePool(v11);
      }
    }
  }
}
