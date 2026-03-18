/*
 * XREFs of ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100
 * Callers:
 *     ?xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x3C4EA (-xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     _EditionWakeThreadForInput@8 @ 0xA3CFA (_EditionWakeThreadForInput@8.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _EditionWakeSomeone@16 @ 0xF17C0 (_EditionWakeSomeone@16.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YGXPAUtagWND@@IIJ@Z @ 0x15610C (-JournalTimer@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _PtiMouseFromQ@4 @ 0x4810E (_PtiMouseFromQ@4.c)
 *     ?ShouldAddPointerWakeFlag@@YGHPBUtagTHREADINFO@@PBUtagQMSG@@@Z @ 0xA1E42 (-ShouldAddPointerWakeFlag@@YGHPBUtagTHREADINFO@@PBUtagQMSG@@@Z.c)
 *     _PtiKbdFromQ@4 @ 0xA98F4 (_PtiKbdFromQ@4.c)
 *     _CancelForegroundActivate@0 @ 0xAC494 (_CancelForegroundActivate@0.c)
 *     _IsProcessedByInputService@4 @ 0xC498C (_IsProcessedByInputService@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __userpurge WakeSomeone(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagQ *a3,
        struct tagTHREADINFO *a4,
        unsigned int a5,
        struct tagQMSG *a6)
{
  struct tagTHREADINFO *v6; // ebx
  int v7; // esi
  int v8; // esi
  int v9; // eax
  struct tagQ *v10; // edx
  int v11; // esi
  int v12; // edi
  int v13; // ebx
  PKTHREAD CurrentThread; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // [esp+Ch] [ebp-Ch]
  unsigned int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v22 = 0;
  v6 = a4;
  v7 = a1;
  v21 = a2;
  v23 = 0;
  if ( (unsigned int)a3 > 0x207 )
  {
    switch ( (unsigned int)a3 )
    {
      case 0x208u:
      case 0x20Cu:
        goto LABEL_13;
      case 0x209u:
      case 0x20Bu:
      case 0x20Du:
        goto LABEL_32;
      case 0x20Au:
      case 0x20Eu:
        goto LABEL_22;
      case 0x238u:
        v15 = 4096;
        goto LABEL_52;
      case 0x240u:
        goto LABEL_47;
      case 0x245u:
      case 0x246u:
      case 0x247u:
      case 0x249u:
      case 0x24Au:
      case 0x251u:
      case 0x252u:
      case 0x253u:
        v13 = 4096;
        v23 = 4096;
        goto LABEL_48;
      default:
        goto LABEL_12;
    }
  }
  if ( (unsigned int)a3 >= 0x206 )
    goto LABEL_32;
  if ( (unsigned int)a3 <= 0x106 )
  {
    if ( a3 == (struct tagQ *)262 )
      goto LABEL_21;
    if ( (unsigned int)a3 >= 0xFE )
    {
      if ( (unsigned int)a3 > 0xFF )
      {
        if ( a3 != (struct tagQ *)256 )
        {
          if ( a3 == (struct tagQ *)257 )
            goto LABEL_22;
          if ( a3 == (struct tagQ *)258 )
            goto LABEL_21;
          if ( a3 != (struct tagQ *)260 )
          {
            if ( a3 != (struct tagQ *)261 )
              goto LABEL_12;
LABEL_22:
            if ( (a3 == (struct tagQ *)522 || a3 == (struct tagQ *)526) && (a2[71] & 0x2000000) != 0 )
              v9 = PtiMouseFromQ(a2);
            else
              v9 = PtiKbdFromQ(a2);
            v7 = v9;
            if ( a3 != (struct tagQ *)522 && a3 != v10 )
            {
              v12 = 1;
LABEL_63:
              if ( v7 )
              {
                if ( v6
                  && *((_DWORD *)v6 + 17)
                  && (IsProcessedByInputService(v6) || ((unsigned int)&loc_80000 & *((_DWORD *)v6 + 16)) != 0) )
                {
                  v7 = v18;
                }
                if ( v12 )
                  SetWakeBit(v7, v12);
                v19 = *(_DWORD *)(v7 + 688);
                *(_DWORD *)(v7 + 692) |= 1u;
                *(_DWORD *)(v7 + 688) = v19;
                EtwTraceProcessWindowInfo(v7);
                if ( v6 )
                  *((_DWORD *)v6 + 17) = v7;
                if ( v22 )
                {
                  if ( v6 )
                  {
                    if ( (*((_DWORD *)v6 + 16) & 0x100000) != 0 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  }
                  CInputGlobals::SetPtiLastWoken(_gpInputGlobals, (struct tagTHREADINFO *)v7, 0);
                  v20 = *(_DWORD *)(v7 + 688);
                  *(_DWORD *)(v7 + 692) |= 4u;
                  *(_DWORD *)(v7 + 688) = v20;
                  EtwTraceProcessWindowInfo(v7);
                }
              }
              return;
            }
LABEL_61:
            v12 = 4;
            if ( ShouldAddPointerWakeFlag(v7, (int)a4) )
              v12 = 4100;
            goto LABEL_63;
          }
        }
        if ( a4 )
        {
          if ( (unsigned int)(*((_DWORD *)a4 + 4) - 16) > 2
            || ((unsigned __int8)(1 << (2 * (*((_BYTE *)a4 + 16) & 3))) & *((_BYTE *)a2
                                                                          + (*((unsigned __int8 *)a4 + 16) >> 2)
                                                                          + 152)) == 0 )
          {
            v22 = ((*((_DWORD *)a4 + 16) >> 20) & 1) == 0;
          }
        }
        else
        {
          v22 = 1;
        }
LABEL_21:
        CancelForegroundActivate();
        a2 = v21;
        goto LABEL_22;
      }
LABEL_53:
      v6 = a4;
      if ( !v7 )
      {
        v16 = *((_DWORD *)a4 + 2);
        if ( !v16 || (v17 = ValidateHwnd(v16)) == 0 || (v7 = *(_DWORD *)(v17 + 8)) == 0 )
          v7 = PtiKbdFromQ(v21);
      }
      v12 = v23;
      if ( !v23 )
        v12 = 1024;
      goto LABEL_63;
    }
LABEL_12:
    CancelForegroundActivate();
    a2 = v21;
LABEL_13:
    v8 = a2[14];
    if ( v8 && (unsigned int)a3 - 512 <= 0xE )
      v7 = *(_DWORD *)(v8 + 8);
    else
      v7 = a2[12];
    goto LABEL_61;
  }
  if ( a3 != (struct tagQ *)283 )
  {
    if ( a3 == (struct tagQ *)512 )
    {
      if ( !a1 )
      {
        v11 = a2[14];
        if ( v11 )
          v7 = *(_DWORD *)(v11 + 8);
        else
          v7 = a2[12];
      }
      v12 = 2;
      if ( ShouldAddPointerWakeFlag(v7, (int)a4) )
        v12 = 4098;
      goto LABEL_63;
    }
    if ( a3 != (struct tagQ *)513 )
    {
      if ( a3 == (struct tagQ *)514 )
        goto LABEL_13;
      if ( (unsigned int)a3 <= 0x202 )
        goto LABEL_12;
      if ( (unsigned int)a3 > 0x204 )
        goto LABEL_13;
    }
LABEL_32:
    if ( a4 )
      v22 = (~*((_DWORD *)a4 + 16) & 0x100000u) >> 20;
    else
      v22 = 1;
    goto LABEL_12;
  }
LABEL_47:
  v13 = 0;
LABEL_48:
  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) )
  {
    if ( !v13 )
    {
      v15 = 2048;
LABEL_52:
      v23 = v15;
    }
    goto LABEL_53;
  }
}
