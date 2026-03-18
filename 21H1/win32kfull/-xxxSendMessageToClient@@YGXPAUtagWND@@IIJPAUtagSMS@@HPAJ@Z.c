/*
 * XREFs of ?xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z @ 0x40764
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 * Callees:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _SfnDWORD@32 @ 0x40E50 (_SfnDWORD@32.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _PrepareSentPointerMessageForClient@16 @ 0x15A03D (_PrepareSentPointerMessageForClient@16.c)
 */

void __userpurge xxxSendMessageToClient(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        struct tagSMS *a7,
        int a8,
        int *a9)
{
  unsigned int v9; // esi
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  unsigned __int16 v13; // ax
  int v14; // ecx
  int v15; // ebx
  PKTHREAD CurrentThread; // eax
  volatile void *v17; // eax
  int v18; // edi
  int v19; // eax
  PKTHREAD v20; // eax
  int ThreadWin32Thread; // eax
  int v22; // [esp-20h] [ebp-70h]
  unsigned int v23; // [esp-1Ch] [ebp-6Ch]
  struct tagWND *v24; // [esp-18h] [ebp-68h]
  unsigned int v25; // [esp-14h] [ebp-64h]
  int v26; // [esp-10h] [ebp-60h]
  int v27; // [esp-Ch] [ebp-5Ch]
  int v28; // [esp-8h] [ebp-58h]
  unsigned int v29; // [esp-4h] [ebp-54h]
  int v30; // [esp+10h] [ebp-40h] BYREF
  int v31; // [esp+14h] [ebp-3Ch]
  int v32; // [esp+18h] [ebp-38h]
  int v33; // [esp+20h] [ebp-30h]
  int v34; // [esp+24h] [ebp-2Ch]
  signed __int32 v35; // [esp+28h] [ebp-28h] BYREF
  int v36; // [esp+2Ch] [ebp-24h]
  unsigned int v37; // [esp+30h] [ebp-20h] BYREF
  int v38; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v9 = a1;
  v37 = a1;
  v10 = a2;
  v38 = a2;
  if ( ((a1 >= 0x241 && a1 <= 0x244 || a1 >= 0x245 && a1 <= 0x257 && a1 != 589) && a1 != 595
     || a1 == 528 && (_WORD)a3 == 582)
    && (_WORD)a3 != 1 )
  {
    if ( !PrepareSentPointerMessageForClient(&v37, &a3, &a4, 0) )
    {
      *(_DWORD *)a7 = 0;
      return;
    }
    v9 = v37;
  }
  v11 = (*(unsigned __int8 *)(*(_DWORD *)(v10 + 20) + 10) >> 3) & 1;
  v33 = v11;
  if ( PsGetWin32KFilterSet() == 5 )
  {
    CurrentThread = KeGetCurrentThread();
    v34 = *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260);
    ms_exc.registration.TryLevel = 0;
    v36 = *(_DWORD *)(v34 + 168);
    v17 = (volatile void *)v36;
    v35 = 0;
    _InterlockedOr(&v35, 0);
    if ( v17 )
    {
      ProbeForRead(v17, 0x10u, 1u);
      if ( *(_DWORD *)v36 )
      {
        *(_DWORD *)(v34 + 148) |= 0x100u;
        ms_exc.registration.TryLevel = -2;
LABEL_6:
        v29 = a5;
        v28 = v11;
        if ( (v9 & 0x1FFFF) < 0x400 )
        {
          v12 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]](
                  v10,
                  v9,
                  (int)a3,
                  a4,
                  *(_DWORD *)(*(_DWORD *)(v10 + 20) + 84),
                  *(_DWORD *)(_gpsi + 408),
                  v11,
                  a5);
LABEL_8:
          *(_DWORD *)a7 = v12;
          return;
        }
        v27 = *(_DWORD *)(_gpsi + 408);
        v26 = *(_DWORD *)(*(_DWORD *)(v10 + 20) + 84);
        v25 = a4;
        v24 = a3;
        v23 = v9;
        v22 = v10;
LABEL_15:
        v12 = SfnDWORD(v22, v23, v24, v25, v26, v27, v28, v29);
        goto LABEL_8;
      }
    }
    ms_exc.registration.TryLevel = -2;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_6;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_6;
  if ( v9 == 90 )
    goto LABEL_6;
  v35 = *(_DWORD *)(v10 + 20);
  v13 = *(_WORD *)(v35 + 30) & 0x3FFF;
  if ( v13 < 0x2A1u )
    goto LABEL_6;
  if ( v13 > 0x2AAu )
    goto LABEL_6;
  v36 = *(_WORD *)(v35 + 30) & 0x3FFF;
  v37 = _gpsi;
  v33 = *(_DWORD *)(v35 + 84);
  v14 = v36;
  if ( v33 != *(_DWORD *)(_gpsi + 4 * v36 - 2340) )
  {
    v10 = v38;
    if ( v33 != *(_DWORD *)(_gpsi + 4 * v36 - 2436) )
      goto LABEL_6;
  }
  v33 = _gSharedInfo[2 * v36 - 1326];
  v15 = v38;
  if ( !v33
    || v9 <= _gSharedInfo[2 * v36 - 1327]
    && (v14 = v36, ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)((v9 >> 3) + v33)) != 0)
    || (*(_BYTE *)(v35 + 10) & 1) != 0 )
  {
    v29 = a5;
    v28 = v11;
    v27 = *(_DWORD *)(v37 + 4 * v14 - 2272);
    v26 = v11;
    v25 = a4;
    v24 = a3;
    v23 = v9;
    v22 = v38;
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v12 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]](
              v38,
              v9,
              (int)a3,
              a4,
              v11,
              v27,
              v11,
              a5);
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v18 = a6;
  if ( a6 )
  {
    v20 = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(v20);
    v30 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v30;
    v31 = v15;
    HMLockObject(v15);
  }
  v19 = xxxDefWindowProc(v15, v9, (int)a3, a4);
  *(_DWORD *)a7 = v19;
  if ( v18 )
    ThreadUnlock1();
}
