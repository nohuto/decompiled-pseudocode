/*
 * XREFs of ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427
 * Callers:
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _ClassLock@8 @ 0x705D6 (_ClassLock@8.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 *     ?ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z @ 0xA1C78 (-ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z.c)
 *     _xxxSetClassIcon@16 @ 0x19C737 (_xxxSetClassIcon@16.c)
 */

_DWORD *__userpurge xxxSetClassCursor@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagCLS *a4,
        unsigned int a5,
        unsigned int a6)
{
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // edx
  int *v12; // ecx
  _DWORD *v13; // esi
  int v14; // edx
  int v15; // ecx
  struct tagCLS *v16; // esi
  PKTHREAD v17; // eax
  int v18; // eax
  struct tagCLS *v19; // eax
  struct tagCLS *v20; // esi
  PKTHREAD v21; // eax
  int v22; // eax
  struct tagCLS *v23; // esi
  PKTHREAD v24; // eax
  int v25; // eax
  int v27; // [esp-Ch] [ebp-5Ch]
  _DWORD v28[3]; // [esp+10h] [ebp-40h] BYREF
  _DWORD v29[3]; // [esp+1Ch] [ebp-34h] BYREF
  int v30; // [esp+28h] [ebp-28h] BYREF
  int v31; // [esp+2Ch] [ebp-24h]
  int v32; // [esp+30h] [ebp-20h]
  _DWORD v33[2]; // [esp+34h] [ebp-1Ch] BYREF
  _DWORD v34[2]; // [esp+3Ch] [ebp-14h] BYREF
  int v35; // [esp+44h] [ebp-Ch]
  int v36; // [esp+48h] [ebp-8h]
  _DWORD *v37; // [esp+4Ch] [ebp-4h]

  v6 = 0;
  v36 = a2;
  v35 = a1;
  v37 = 0;
  v7 = 0;
  SmartObjStackRefBase<tagCLS>::Init(v33, 0);
  SmartObjStackRefBase<tagCLS>::Init(v34, 0);
  memset(v29, 0, sizeof(v29));
  memset(v28, 0, sizeof(v28));
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( a4 )
  {
    v7 = HMValidateHandle((int)a4, 3);
    if ( !v7 )
    {
      if ( a3 == (struct tagWND *)-14 || (v8 = 1402, a3 == (struct tagWND *)-34) )
        v8 = 1414;
      UserSetLastError((struct _NT_TIB *)v8);
    }
  }
  SmartObjStackRefBase<tagCLS>::operator=(v33, *(_DWORD *)(v35 + 32));
  if ( !ClassLock(*(_DWORD *)v33[0], v29) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_31;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v30 = *(_DWORD *)(ThreadWin32Thread + 228);
  v12 = &v30;
  *(_DWORD *)(ThreadWin32Thread + 228) = &v30;
  v31 = v7;
  if ( v7 )
    HMLockObject(v7);
  if ( a3 == (struct tagWND *)-34 || a3 == (struct tagWND *)-14 )
  {
    v13 = (_DWORD *)xxxSetClassIcon(v7, a3);
    v37 = v13;
LABEL_16:
    if ( v13 )
      v37 = (_DWORD *)*v13;
    goto LABEL_18;
  }
  if ( a3 == (struct tagWND *)-12 )
  {
    v13 = (_DWORD *)HMAssignmentLock(v12, v11);
    v37 = v13;
    goto LABEL_16;
  }
LABEL_18:
  v27 = *(_DWORD *)(*(_DWORD *)v33[0] + 36);
LABEL_19:
  SmartObjStackRefBase<tagCLS>::operator=(v34, v27);
  while ( *(_DWORD *)v34[0] )
  {
    if ( a3 == (struct tagWND *)-34 || a3 == (struct tagWND *)-14 )
    {
      if ( !ClassLock(*(_DWORD *)v34[0], v28) )
      {
        UserSetLastError((struct _NT_TIB *)5);
        ThreadUnlock1();
        v20 = *(struct tagCLS **)v33[0];
        v21 = KeGetCurrentThread();
        v22 = W32GetThreadWin32Thread(v21);
        *(_DWORD *)(v22 + 8) = v29[0];
        ClassUnlockWorker(v20);
        v6 = 0;
        goto LABEL_31;
      }
      xxxSetClassIcon(v7, a3);
      v16 = *(struct tagCLS **)v34[0];
      v17 = KeGetCurrentThread();
      v18 = W32GetThreadWin32Thread(v17);
      *(_DWORD *)(v18 + 8) = v28[0];
      v19 = ClassUnlockWorker(v16);
      SmartObjStackRefBase<tagCLS>::operator=(v34, (int)v19);
    }
    else if ( a3 == (struct tagWND *)-12 )
    {
      v27 = v7;
      HMAssignmentLock(v15, v14);
    }
    if ( *(_DWORD *)v34[0] )
      goto LABEL_19;
  }
  ThreadUnlock1();
  v23 = *(struct tagCLS **)v33[0];
  v24 = KeGetCurrentThread();
  v25 = W32GetThreadWin32Thread(v24);
  *(_DWORD *)(v25 + 8) = v29[0];
  ClassUnlockWorker(v23);
  v6 = v37;
LABEL_31:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v34);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v33);
  return v6;
}
