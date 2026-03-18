/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C0072450
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0072DC0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0073F4C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     DwmAsyncShowSprite @ 0x1C01118A8 (DwmAsyncShowSprite.c)
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
  unsigned __int64 Prop; // rax
  __int64 v41; // rax
  int v42; // esi
  _QWORD *v43; // rcx
  unsigned int v44; // r14d
  __int64 v45; // rdx
  char v46; // al
  _QWORD *v47; // rcx
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rsi
  int v51; // ecx
  int v52; // eax
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
            if ( Prop == -1LL )
              goto LABEL_34;
          }
          else
          {
            Prop = RealGetProp(v38[18], *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
          }
          if ( !Prop || (v41 = HMValidateHandleNoSecure(Prop, 1)) == 0 || (unsigned int)IsWindowBeingDestroyed(v41) )
          {
LABEL_34:
            if ( (RealGetProp(v38[18], (unsigned __int16)atomDispAffinity, 1LL) & 1) == 0 )
            {
              v33 = v38[5];
LABEL_36:
              SetRectRgnIndirect(*(_QWORD *)(v22 + 184), v33 + 88);
              v42 = 1;
LABEL_71:
              if ( v42 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v62, *((HRGN *)g_pDwmState + 23), 0);
                v56 = v62[0];
                if ( v62[0] )
                  v42 = *(_DWORD *)(v62[0] + 84LL) != 1;
                if ( !v63 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v62);
                  v56 = v62[0];
                }
                if ( v56 )
                  _InterlockedDecrement((volatile signed __int32 *)(v56 + 12));
              }
              v57 = v42 != 0;
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
          v43 = v38;
          v44 = (4 * (*(_BYTE *)(v33 + 31) & 4)) | 0x4401;
          do
          {
            v45 = v43[5];
            v46 = *(_BYTE *)(v45 + 31);
            if ( (v46 & 0x10) == 0 || (v46 & 0x20) != 0 && v43 != v38 )
            {
LABEL_69:
              SetOrCreateRectRgnIndirectPublic(v22 + 184, gZero);
              goto LABEL_70;
            }
            if ( (*(_WORD *)(v45 + 42) & 0x3FFF) == 0x29D )
              break;
            v43 = (_QWORD *)v43[13];
          }
          while ( v43 );
          v47 = v38;
          while ( 1 )
          {
            v48 = v47[5];
            if ( (*(_BYTE *)(v48 + 27) & 0x20) != 0 )
              break;
            v47 = (_QWORD *)v47[13];
            if ( !v47 )
              goto LABEL_54;
          }
          if ( (*(_WORD *)(v48 + 42) & 0x3FFF) != 0x29D || v47 == v38 )
          {
            v49 = (_QWORD *)RealGetProp(v47[18], (unsigned __int16)atomLayer, 1LL);
            if ( !v49 || !*v49 )
              goto LABEL_69;
          }
LABEL_54:
          UpdatesLockedForDwm();
          v50 = v38;
          while ( 1 )
          {
            v51 = *(_DWORD *)(v50[5] + 24LL);
            if ( (v51 & 0x80000) != 0 || (v51 & 0x20000000) != 0 )
              break;
            v50 = (_QWORD *)v50[13];
            if ( !v50 )
              goto LABEL_68;
          }
          if ( v50 == v38 || (LOBYTE(v52) = IsDesktopWindow((__int64)v50), !v52) )
          {
            if ( v50 )
            {
              v53 = (_QWORD *)RealGetProp(v50[18], (unsigned __int16)atomLayer, 1LL);
              if ( v53 )
              {
                if ( *v53 )
                {
                  v54 = v50[5];
                  if ( (*(_DWORD *)(v54 + 24) & 0x20000000) != 0 )
                  {
                    v55 = *(_DWORD *)(v54 + 232);
                    if ( (v55 & 0x20) != 0 && (v55 & 4) == 0 )
                      v44 &= ~0x4000u;
                  }
                }
              }
            }
          }
LABEL_68:
          v42 = CalcVisRgnWorker((struct tagWND *const)v38, (HRGN *)(v22 + 184), v44);
          goto LABEL_71;
        }
        if ( (*(_BYTE *)(v33 + 31) & 0x10) != 0 )
          goto LABEL_36;
LABEL_70:
        v42 = 0;
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
