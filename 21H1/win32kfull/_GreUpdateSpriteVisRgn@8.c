/*
 * XREFs of _GreUpdateSpriteVisRgn@8 @ 0x363E0
 * Callers:
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _DwmAsyncShowSprite@12 @ 0xA73CA (_DwmAsyncShowSprite@12.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?GdiUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0xF6D59 (-GdiUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 */

void __fastcall GreUpdateSpriteVisRgn(int a1, int a2)
{
  int v2; // esi
  void (__stdcall *v3)(const wchar_t *, int); // edi
  int v4; // edi
  int *ThreadWin32Thread; // eax
  int v6; // eax
  struct DwmState *v7; // ecx
  struct DwmState *v8; // esi
  _DWORD *v9; // esi
  unsigned int v10; // ebx
  struct _KTHREAD **v11; // eax
  unsigned int v12; // ebx
  struct _KTHREAD *v13; // ebx
  int Prop; // eax
  int v15; // edx
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // ebx
  BOOL v19; // edx
  void (__fastcall *v20)(int); // ebx
  bool v21; // zf
  struct _KTHREAD *v22; // ecx
  int v23; // edx
  char v24; // al
  struct _KTHREAD *v25; // edx
  int v26; // eax
  _DWORD *v27; // eax
  struct tagWND *v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  HRGN *v33; // [esp+0h] [ebp-38h]
  unsigned int v34; // [esp+4h] [ebp-34h]
  _DWORD v35[5]; // [esp+10h] [ebp-28h] BYREF
  int v36; // [esp+24h] [ebp-14h]
  int v37; // [esp+28h] [ebp-10h]
  _DWORD *v38; // [esp+2Ch] [ebp-Ch]
  struct tagWND *v39; // [esp+30h] [ebp-8h]
  PKTHREAD CurrentThread; // [esp+34h] [ebp-4h]

  v35[3] = a1;
  v35[4] = a2;
  v2 = _ghsemGreLock;
  v36 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  v3 = (void (__stdcall *)(const wchar_t *, int))EtwTraceGreLockReleaseSemaphore;
  if ( g_pDwmState )
  {
    v4 = 0;
    v37 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0
      || (v6 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v6 + 52) && !*(_DWORD *)(v6 + 56) )
    {
      GreAcquireSemaphore(_ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", _ghsemSprite, 5);
      v4 = 1;
      v37 = 1;
    }
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v7 = g_pDwmState;
    if ( g_pDwmState && *((struct DwmState **)g_pDwmState + 11) != (struct DwmState *)((char *)g_pDwmState + 44) )
    {
      v8 = (struct DwmState *)*((_DWORD *)g_pDwmState + 11);
      while ( 1 )
      {
        v9 = v8 != 0 ? (_DWORD *)((unsigned int)v8 - 16) : 0;
        if ( !v9 )
        {
LABEL_39:
          v2 = v36;
          v4 = v37;
          goto LABEL_40;
        }
        v10 = v9[6];
        if ( v10 )
          break;
LABEL_38:
        v7 = g_pDwmState;
        v8 = (struct DwmState *)v9[4];
        if ( v8 == (struct DwmState *)((char *)g_pDwmState + 44) )
          goto LABEL_39;
      }
      v38 = (_DWORD *)(*(_DWORD *)v7 + 108);
      CurrentThread = KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
        PsGetThreadWin32Thread(CurrentThread);
      if ( (unsigned int)(unsigned __int16)v10 >= *(_DWORD *)(_gpsi + 4) )
        goto LABEL_35;
      CurrentThread = (PKTHREAD)(_gSharedInfo[1] + (unsigned __int16)v10 * _gSharedInfo[2]);
      v11 = (struct _KTHREAD **)HMPkheFromPhe(CurrentThread);
      v12 = HIWORD(v10);
      if ( (_WORD)v12 != *((_WORD *)CurrentThread + 7) && (_WORD)v12 && (_WORD)v12 != 0xFFFF )
        goto LABEL_35;
      if ( (*((_BYTE *)CurrentThread + 13) & 1) != 0 )
        goto LABEL_35;
      if ( *((_BYTE *)CurrentThread + 12) != 1 )
        goto LABEL_35;
      v13 = *v11;
      CurrentThread = v13;
      if ( !v13 )
        goto LABEL_35;
      if ( (*(_BYTE *)(*((_DWORD *)v13 + 5) + 144) & 0x20) != 0 )
      {
        if ( **(_WORD **)(*((_DWORD *)v13 + 19) + 4) == *(_WORD *)(_gpsi + 500) )
          goto LABEL_30;
        Prop = _GetProp(1);
        if ( Prop )
        {
          if ( Prop == -1 )
            goto LABEL_30;
        }
        else
        {
          Prop = _GetProp(1);
        }
        if ( !Prop
          || (LOBYTE(v15) = 1, (v16 = (_DWORD *)HMValidateHandleNoSecure(Prop, v15)) == 0)
          || IsWindowBeingDestroyed(v16) )
        {
LABEL_30:
          if ( (RealGetProp(*((_DWORD *)v13 + 20), (unsigned __int16)atomDispAffinity, 1) & 1) == 0 )
          {
            v17 = *((_DWORD *)v13 + 5);
            goto LABEL_32;
          }
        }
      }
      v17 = *((_DWORD *)v13 + 5);
      if ( (*(_BYTE *)(v17 + 18) & 0x20) == 0 )
      {
        v22 = v13;
        v39 = (struct tagWND *)((4 * (*(_BYTE *)(v17 + 23) & 4)) | 0x4401);
        do
        {
          v23 = *((_DWORD *)v22 + 5);
          v24 = *(_BYTE *)(v23 + 23);
          if ( (v24 & 0x10) == 0 || (v24 & 0x20) != 0 && v22 != v13 )
            goto LABEL_69;
          if ( (*(_WORD *)(v23 + 30) & 0x3FFF) == 0x29D )
            break;
          v22 = (struct _KTHREAD *)*((_DWORD *)v22 + 14);
        }
        while ( v22 );
        v25 = v13;
        while ( 1 )
        {
          v26 = *((_DWORD *)v25 + 5);
          if ( (*(_BYTE *)(v26 + 19) & 0x20) != 0 )
            break;
          v25 = (struct _KTHREAD *)*((_DWORD *)v25 + 14);
          if ( !v25 )
            goto LABEL_56;
        }
        if ( (*(_WORD *)(v26 + 30) & 0x3FFF) == 0x29D && v25 != v13
          || (v27 = (_DWORD *)RealGetProp(*((_DWORD *)v25 + 20), (unsigned __int16)atomLayer, 1)) != 0 && *v27 )
        {
LABEL_56:
          UpdatesLockedForDwm();
          while ( (*(_DWORD *)(*((_DWORD *)v13 + 5) + 16) & 0x20080000) == 0 )
          {
            v13 = (struct _KTHREAD *)*((_DWORD *)v13 + 14);
            if ( !v13 )
              goto LABEL_59;
          }
          if ( v13 != CurrentThread && IsDesktopWindow(v13)
            || (v29 = (_DWORD *)RealGetProp(*((_DWORD *)v13 + 20), (unsigned __int16)atomLayer, 1)) == 0
            || !*v29
            || (v30 = *((_DWORD *)v13 + 5), (*(_DWORD *)(v30 + 16) & 0x20000000) == 0)
            || (v31 = *(_DWORD *)(v30 + 144), (v31 & 0x20) == 0) )
          {
LABEL_59:
            v28 = v39;
LABEL_60:
            v18 = CalcVisRgnWorker(v28, v33, v34);
            goto LABEL_70;
          }
          v21 = (v31 & 4) == 0;
          v28 = v39;
          if ( !v21 )
            goto LABEL_60;
          v18 = CalcVisRgnWorker((struct tagWND *const)((unsigned int)v39 & 0xFFFFBFFF), v33, v34);
        }
        else
        {
LABEL_69:
          SetOrCreateRectRgnIndirectPublic(v38, _gZero);
          v18 = 0;
        }
LABEL_70:
        if ( !v18 )
          goto LABEL_36;
        goto LABEL_71;
      }
      if ( (*(_BYTE *)(v17 + 23) & 0x10) != 0 )
      {
LABEL_32:
        SetRectRgnIndirect(*v38, v17 + 52);
        v18 = 1;
LABEL_71:
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v35, *((HRGN *)g_pDwmState + 27), 0);
        v32 = v35[0];
        if ( v35[0] )
          v18 = *(_DWORD *)(v35[0] + 56) != 1;
        if ( !v35[2] )
        {
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v35);
          v32 = v35[0];
        }
        if ( v32 )
          _InterlockedDecrement((volatile signed __int32 *)(v32 + 8));
        goto LABEL_36;
      }
LABEL_35:
      v18 = 0;
LABEL_36:
      v19 = v18 != 0;
      if ( v19 != (v9[33] & 1) )
      {
        v9[33] = v19 | v9[33] & 0xFFFFFFFE;
        UserReferenceDwmApiPort();
        DwmAsyncShowSprite(v18 != 0);
      }
      goto LABEL_38;
    }
LABEL_40:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    v20 = (void (__fastcall *)(int))GreReleaseSemaphoreInternal;
    GreReleaseSemaphoreInternal(_ghsemDwmState);
    v21 = v4 == 0;
    v3 = (void (__stdcall *)(const wchar_t *, int))EtwTraceGreLockReleaseSemaphore;
    if ( !v21 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
      GreReleaseSemaphoreInternal(_ghsemSprite);
    }
  }
  else
  {
    v20 = (void (__fastcall *)(int))GreReleaseSemaphoreInternal;
  }
  GdiUpdateSpriteVisRgn((HDEV)v33, v34);
  if ( v2 )
  {
    v3(L"hsem", v2);
    v20(v2);
  }
}
