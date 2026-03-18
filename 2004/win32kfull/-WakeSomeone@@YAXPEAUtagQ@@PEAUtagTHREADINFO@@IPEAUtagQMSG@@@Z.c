/*
 * XREFs of ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C008FE54
 * Callers:
 *     EditionWakeSomeone @ 0x1C0008F00 (EditionWakeSomeone.c)
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     PostInputMessage @ 0x1C00B19CC (PostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 *     EditionWakeThreadForInput @ 0x1C010B290 (EditionWakeThreadForInput.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0158B00 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E1280 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EB570 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     CancelForegroundActivate @ 0x1C0025F90 (CancelForegroundActivate.c)
 *     IsProcessedByInputService @ 0x1C003956C (IsProcessedByInputService.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     PtiMouseFromQ @ 0x1C00901FC (PtiMouseFromQ.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C009024C (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall WakeSomeone(struct tagQ *a1, struct tagTHREADINFO *a2, unsigned int a3, struct tagQMSG *a4)
{
  unsigned int v4; // r14d
  int v5; // esi
  struct tagTHREADINFO *v8; // rdi
  struct tagQ *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct tagTHREADINFO *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax

  v4 = 0;
  v5 = 0;
  v8 = a2;
  v9 = a1;
  if ( a3 > 0x207 )
  {
    if ( a3 <= 0x20E )
    {
      if ( a3 != 526 )
      {
        if ( a3 == 520 )
          goto LABEL_49;
        if ( a3 == 521 )
          goto LABEL_46;
        if ( a3 != 522 )
        {
          if ( a3 == 524 )
            goto LABEL_49;
          goto LABEL_46;
        }
      }
      goto LABEL_21;
    }
    if ( a3 != 568 )
    {
      if ( a3 != 576 )
      {
        if ( a3 <= 0x244 || a3 > 0x247 && (a3 <= 0x248 || a3 > 0x24A && a3 - 593 > 2) )
          goto LABEL_48;
        v5 = 4096;
      }
LABEL_86:
      if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
        return;
      if ( !v5 )
        v5 = 2048;
      goto LABEL_38;
    }
    v5 = 4096;
LABEL_38:
    if ( !v8 )
    {
      v16 = *((_QWORD *)a4 + 2);
      if ( !v16 || (v17 = ValidateHwnd(v16)) == 0 || (v8 = *(struct tagTHREADINFO **)(v17 + 16)) == 0LL )
        v8 = (struct tagTHREADINFO *)PtiKbdFromQ(v9);
    }
    if ( !v5 )
      LOWORD(v5) = 1024;
    goto LABEL_10;
  }
  if ( a3 >= 0x206 )
  {
LABEL_46:
    if ( a4 )
      v4 = (~*((_DWORD *)a4 + 25) & 0x100000u) >> 20;
    else
      v4 = 1;
    goto LABEL_48;
  }
  if ( a3 > 0x106 )
  {
    if ( a3 == 512 )
    {
      if ( !a2 )
      {
        v10 = *((_QWORD *)a1 + 13);
        if ( v10 )
          v8 = *(struct tagTHREADINFO **)(v10 + 16);
        else
          v8 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 11);
      }
      LOWORD(v5) = 2;
      if ( (unsigned int)ShouldAddPointerWakeFlag(v8, a4) )
        LOWORD(v5) = 4098;
      goto LABEL_10;
    }
    if ( a3 == 513 )
      goto LABEL_46;
    if ( a3 != 283 )
    {
      if ( a3 == 514 )
        goto LABEL_49;
      if ( a3 > 0x202 )
      {
        if ( a3 > 0x204 )
          goto LABEL_49;
        goto LABEL_46;
      }
LABEL_48:
      CancelForegroundActivate((int)a1);
LABEL_49:
      v18 = *((_QWORD *)v9 + 13);
      if ( v18 && a3 - 512 <= 0xE )
        v8 = *(struct tagTHREADINFO **)(v18 + 16);
      else
        v8 = (struct tagTHREADINFO *)*((_QWORD *)v9 + 11);
      goto LABEL_51;
    }
    goto LABEL_86;
  }
  if ( a3 == 262 )
    goto LABEL_33;
  if ( a3 < 0xFE )
    goto LABEL_48;
  if ( a3 <= 0xFF )
    goto LABEL_38;
  switch ( a3 )
  {
    case 0x101u:
      goto LABEL_21;
    case 0x100u:
      goto LABEL_30;
    case 0x102u:
LABEL_33:
      CancelForegroundActivate((int)a1);
      goto LABEL_21;
    case 0x104u:
LABEL_30:
      if ( a4 )
      {
        if ( (unsigned __int64)(*((_QWORD *)a4 + 4) - 16LL) > 2
          || (v19 = *((_BYTE *)a4 + 32) & 3,
              LODWORD(a1) = 2 * v19,
              ((unsigned __int8)(1 << (2 * v19)) & *((_BYTE *)v9
                                                   + ((unsigned __int64)*((unsigned __int8 *)a4 + 32) >> 2)
                                                   + 228)) == 0) )
        {
          v4 = (*((_DWORD *)a4 + 25) & 0x100000) == 0;
        }
      }
      else
      {
        v4 = 1;
      }
      goto LABEL_33;
  }
  if ( a3 != 261 )
    goto LABEL_48;
LABEL_21:
  if ( ((a3 - 522) & 0xFFFFFFFB) != 0 || (*((_DWORD *)v9 + 97) & 0x2000000) == 0 )
    v13 = PtiKbdFromQ(v9);
  else
    v13 = PtiMouseFromQ(v9, 4294967291LL);
  v8 = (struct tagTHREADINFO *)v13;
  if ( ((a3 - 522) & v14) == 0 )
  {
LABEL_51:
    LOWORD(v5) = 4;
    if ( (unsigned int)ShouldAddPointerWakeFlag(v8, a4) )
      LOWORD(v5) = 4100;
    goto LABEL_10;
  }
  LOWORD(v5) = 1;
LABEL_10:
  if ( v8 )
  {
    if ( a4 && *((_QWORD *)a4 + 13) && (IsProcessedByInputService((__int64)a4) || (*((_DWORD *)a4 + 25) & 0x80000) != 0) )
      v8 = v15;
    SetWakeBit((__int64)v8, v5);
    *((_QWORD *)v8 + 153) |= 0x100000000uLL;
    EtwTraceProcessWindowInfo(v8);
    if ( a4 )
      *((_QWORD *)a4 + 13) = v8;
    if ( v4 )
    {
      if ( a4 )
      {
        if ( (*((_DWORD *)a4 + 25) & 0x100000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v8, 0);
      *((_QWORD *)v8 + 153) |= 0x400000000uLL;
      EtwTraceProcessWindowInfo(v8);
    }
  }
}
