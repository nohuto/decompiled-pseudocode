/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C0043840
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C001C008 (zzzDecomposeDesktop.c)
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00441B0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004533C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     DwmAsyncShowSprite @ 0x1C0112BD8 (DwmAsyncShowSprite.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // esi
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  struct DwmState *v18; // rdx
  struct DwmState *v19; // rcx
  char *v20; // r13
  unsigned __int64 v21; // rbp
  __int64 v22; // r12
  struct _KTHREAD *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned __int64 v35; // rbp
  __int64 v36; // rcx
  _QWORD *v37; // r14
  _QWORD *v38; // rbp
  __int64 v39; // rdx
  __int64 Prop; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // esi
  _QWORD *v44; // rcx
  unsigned int v45; // r14d
  __int64 v46; // rdx
  char v47; // al
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rsi
  int v52; // ecx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  BOOL v57; // ebp
  __int64 v58; // rcx
  void *v59; // rax
  __int64 v60; // [rsp+20h] [rbp-68h] BYREF
  char v61[8]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v62[2]; // [rsp+30h] [rbp-58h] BYREF
  int v63; // [rsp+40h] [rbp-48h]

  v2 = a2;
  v3 = a1;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v6 = 0;
  if ( g_pDwmState )
  {
    v7 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess(v5)
      && (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
          ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess))
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v17 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v17 + 104) && !*(_DWORD *)(v17 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v7 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v18 = g_pDwmState;
    if ( g_pDwmState )
    {
      v19 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v19 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          v20 = (char *)v19 - 24;
          if ( !v19 )
            v20 = 0LL;
          if ( !v20 )
          {
LABEL_81:
            v4 = ghsemGreLock;
            v3 = a1;
            goto LABEL_82;
          }
          v21 = *((_QWORD *)v20 + 5);
          if ( v21 )
            break;
LABEL_80:
          v18 = g_pDwmState;
          v19 = (struct DwmState *)*((_QWORD *)v20 + 3);
          if ( v19 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_81;
        }
        v22 = *(_QWORD *)v18;
        v23 = KeGetCurrentThread();
        if ( !(unsigned __int8)KeIsAttachedProcess(v19)
          || (v27 = PsGetCurrentProcess(v25, v24, v26),
              v28 = PsGetProcessSessionIdEx(v27),
              v30 = PsGetCurrentThreadProcess(v29),
              v28 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
        {
          PsGetThreadWin32Thread(v23);
        }
        v33 = (unsigned __int16)v21;
        if ( (unsigned __int64)(unsigned __int16)v21 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_70;
        v34 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v21 * LODWORD(gSharedInfo[2]);
        v35 = v21 >> 16;
        v37 = (_QWORD *)HMPkheFromPhe(v34);
        if ( (_WORD)v35 != *(_WORD *)(v34 + 26)
          && (_WORD)v35 != 0xFFFF
          && ((_WORD)v35 || !PsGetCurrentProcessWow64Process(v36)) )
        {
          goto LABEL_70;
        }
        if ( (*(_BYTE *)(v34 + 25) & 1) != 0 )
          goto LABEL_70;
        if ( *(_BYTE *)(v34 + 24) != 1 )
          goto LABEL_70;
        v38 = (_QWORD *)*v37;
        if ( !*v37 )
          goto LABEL_70;
        if ( (*(_DWORD *)(v38[5] + 232LL) & 0x20) != 0 )
        {
          v39 = *(unsigned __int16 *)(gpsi + 900LL);
          if ( **(_WORD **)(v38[17] + 8LL) == (_WORD)v39 )
            goto LABEL_34;
          Prop = RealGetProp(v38[18], v39, 1LL);
          if ( Prop )
          {
            if ( Prop == -1 )
              goto LABEL_34;
          }
          else
          {
            Prop = RealGetProp(v38[18], *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
          }
          if ( !Prop
            || (LOBYTE(v41) = 1, (v42 = HMValidateHandleNoSecure(Prop, v41)) == 0)
            || (unsigned int)IsWindowBeingDestroyed(v42) )
          {
LABEL_34:
            if ( (RealGetProp(v38[18], (unsigned __int16)atomDispAffinity, 1LL) & 1) == 0 )
            {
              v33 = v38[5];
LABEL_36:
              SetRectRgnIndirect(*(_QWORD *)(v22 + 184), v33 + 88);
              v43 = 1;
LABEL_71:
              if ( v43 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v62, *((HRGN *)g_pDwmState + 23), 0);
                v56 = v62[0];
                if ( v62[0] )
                  v43 = *(_DWORD *)(v62[0] + 84LL) != 1;
                if ( !v63 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v62);
                  v56 = v62[0];
                }
                if ( v56 )
                  _InterlockedDecrement((volatile signed __int32 *)(v56 + 12));
              }
              v57 = v43 != 0;
              if ( v57 != (*((_DWORD *)v20 + 41) & 1) )
              {
                v58 = v57 | *((_DWORD *)v20 + 41) & 0xFFFFFFFE;
                *((_DWORD *)v20 + 41) = v58;
                v59 = (void *)UserReferenceDwmApiPort(v58, v33, v31, v32);
                DwmAsyncShowSprite(v59);
              }
              goto LABEL_80;
            }
          }
        }
        v33 = v38[5];
        if ( (*(_BYTE *)(v33 + 26) & 0x20) == 0 )
        {
          v44 = v38;
          v45 = (4 * (*(_BYTE *)(v33 + 31) & 4)) | 0x4401;
          do
          {
            v46 = v44[5];
            v47 = *(_BYTE *)(v46 + 31);
            if ( (v47 & 0x10) == 0 || (v47 & 0x20) != 0 && v44 != v38 )
            {
LABEL_69:
              SetOrCreateRectRgnIndirectPublic(v22 + 184, gZero);
              goto LABEL_70;
            }
            if ( (*(_WORD *)(v46 + 42) & 0x2FFF) == 0x29D )
              break;
            v44 = (_QWORD *)v44[13];
          }
          while ( v44 );
          v48 = v38;
          while ( 1 )
          {
            v49 = v48[5];
            if ( (*(_BYTE *)(v49 + 27) & 0x20) != 0 )
              break;
            v48 = (_QWORD *)v48[13];
            if ( !v48 )
              goto LABEL_54;
          }
          if ( (*(_WORD *)(v49 + 42) & 0x2FFF) != 0x29D || v48 == v38 )
          {
            v50 = (_QWORD *)RealGetProp(v48[18], (unsigned __int16)atomLayer, 1LL);
            if ( !v50 || !*v50 )
              goto LABEL_69;
          }
LABEL_54:
          UpdatesLockedForDwm();
          v51 = v38;
          while ( 1 )
          {
            v52 = *(_DWORD *)(v51[5] + 24LL);
            if ( (v52 & 0x80000) != 0 || (v52 & 0x20000000) != 0 )
              break;
            v51 = (_QWORD *)v51[13];
            if ( !v51 )
              goto LABEL_68;
          }
          if ( v51 == v38 || !(unsigned int)IsDesktopWindow(v51) )
          {
            if ( v51 )
            {
              v53 = (_QWORD *)RealGetProp(v51[18], (unsigned __int16)atomLayer, 1LL);
              if ( v53 )
              {
                if ( *v53 )
                {
                  v54 = v51[5];
                  if ( (*(_DWORD *)(v54 + 24) & 0x20000000) != 0 )
                  {
                    v55 = *(_DWORD *)(v54 + 232);
                    if ( (v55 & 0x20) != 0 && (v55 & 4) == 0 )
                      v45 &= ~0x4000u;
                  }
                }
              }
            }
          }
LABEL_68:
          v43 = CalcVisRgnWorker((struct tagWND *const)v38, (HRGN *)(v22 + 184), v45);
          goto LABEL_71;
        }
        if ( (*(_BYTE *)(v33 + 31) & 0x10) != 0 )
          goto LABEL_36;
LABEL_70:
        v43 = 0;
        goto LABEL_71;
      }
    }
LABEL_82:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v2 = a2;
  }
  v60 = v3;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v61, (struct PDEVOBJ *)&v60);
  if ( *(_DWORD *)(v3 + 148) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v3 + 152) + 8LL * v6++), v2);
    while ( v6 < *(_DWORD *)(v3 + 148) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v3 + 88), v2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v61);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
