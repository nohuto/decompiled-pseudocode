/*
 * XREFs of HdlspDispatch @ 0x1409EFE80
 * Callers:
 *     HeadlessDispatch @ 0x1403AF8D0 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x1409F09AC (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strcmp @ 0x1403D38A0 (strcmp.c)
 *     sprintf_s @ 0x1403D7D60 (sprintf_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     InbvPortGetByte @ 0x1405C9F04 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1405CA0B0 (InbvPortPollOnly.c)
 *     HdlspAddLogEntry @ 0x1409EFAE0 (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x1409EFD54 (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x1409F052C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1409F05F8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1409F0C18 (HdlspProcessDumpCommand.c)
 *     HdlspPutData @ 0x1409F0FD0 (HdlspPutData.c)
 *     HdlspPutString @ 0x1409F10C0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1409F11E8 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1409F12AC (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x1409F1350 (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x1409F1384 (HdlspSetBlueScreenInformation.c)
 */

__int64 __fastcall HdlspDispatch(KSPIN_LOCK *a1, int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  signed int v9; // ebp
  int v10; // r12d
  char v11; // si
  KIRQL v12; // r12
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  const char *v24; // r8
  int v25; // eax
  __int64 v26; // r9
  char *v27; // rcx
  unsigned int v28; // eax
  char Line; // al
  PKSPIN_LOCK v30; // rcx
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  PKSPIN_LOCK v34; // rax
  char DstBuf[80]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  v9 = (int)a1;
  v10 = 1228800;
  v11 = 1;
  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, (unsigned int)a1) )
    goto LABEL_27;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v12 = -1;
  else
    v12 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  a1 = HeadlessGlobals;
  v13 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v13 & 0x40) == 0 )
  {
    *((_DWORD *)HeadlessGlobals + 12) = v13 | 0x40;
    if ( v12 != 0xFF )
    {
      KxReleaseSpinLock(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a1 = (KSPIN_LOCK *)((unsigned int)v12 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v18 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
    v10 = 1228800;
LABEL_27:
    if ( v9 <= 16 )
    {
      if ( v9 == 16 )
      {
        if ( a4 && a5 && *a5 >= 0x20uLL )
        {
          v30 = HeadlessGlobals;
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (v30[6] & 8) != 0;
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v30 + 13);
          v31 = *((_DWORD *)v30 + 12);
          v32 = (v31 >> 9) & 7;
          if ( v32 || (v31 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = v32;
            *(_QWORD *)(a4 + 16) = v30[8];
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *((_BYTE *)v30 + 84);
          goto LABEL_145;
        }
        goto LABEL_47;
      }
      if ( v9 > 11 )
      {
        if ( v9 == 12 )
        {
          if ( a4 && a5 && *a5 == 1LL )
          {
            if ( (HeadlessGlobals[6] & 1) != 0 && InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14)) )
            {
              InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (_BYTE *)a4);
              goto LABEL_145;
            }
            goto LABEL_70;
          }
LABEL_47:
          v5 = -1073741811;
LABEL_145:
          *((_DWORD *)HeadlessGlobals + 12) &= ~0x40u;
          return v5;
        }
        if ( v9 != 13 )
        {
          if ( v9 == 14 )
          {
            *((_DWORD *)HeadlessGlobals + 12) = HeadlessGlobals[6] & 0xFFFFFFBD | 2;
          }
          else if ( (HeadlessGlobals[6] & 1) != 0 )
          {
            HdlspBugCheckProcessing();
          }
          return v5;
        }
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_47;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
          goto LABEL_81;
        }
      }
      else
      {
        if ( v9 != 11 )
        {
          if ( v9 != 1 )
          {
            if ( v9 != 2 )
            {
              if ( v9 == 3 )
              {
                if ( a2 )
                {
                  if ( (HeadlessGlobals[6] & 1) != 0 )
                    HdlspPutString(a2);
                  goto LABEL_145;
                }
              }
              else
              {
                if ( (unsigned int)(v9 - 4) > 6 )
                {
LABEL_43:
                  v5 = -1073741811;
                  goto LABEL_143;
                }
                if ( (HeadlessGlobals[6] & 1) == 0 )
                {
LABEL_143:
                  if ( (unsigned int)v9 <= 0x14 && _bittest(&v10, v9) )
                    return v5;
                  goto LABEL_145;
                }
                switch ( v9 )
                {
                  case 4:
                    v27 = "\x1B[2J";
                    goto LABEL_57;
                  case 5:
                    v27 = "\x1B[0J";
                    goto LABEL_57;
                  case 6:
                    v27 = "\x1B[0K";
                    goto LABEL_57;
                  case 7:
                    v27 = "\x1B[0m";
                    goto LABEL_57;
                  case 8:
                    v27 = "\x1B[7m";
                    goto LABEL_57;
                  case 9:
                    if ( a2 && a3 == 8 )
                    {
                      v25 = *a2;
                      v24 = "\x1B[%d;%dm";
                      v26 = (unsigned int)a2[1];
                      goto LABEL_51;
                    }
                    break;
                  case 10:
                    if ( a2 && a3 == 8 )
                    {
                      v24 = "\x1B[%d;%dH";
                      v25 = *a2 + 1;
                      v26 = (unsigned int)(a2[1] + 1);
LABEL_51:
                      sprintf_s(DstBuf, 0x50uLL, v24, v26, v25);
                      v27 = DstBuf;
LABEL_57:
                      HdlspSendStringAtBaud(v27);
                      goto LABEL_143;
                    }
                    break;
                  default:
                    goto LABEL_43;
                }
              }
              goto LABEL_47;
            }
            if ( a4 && a5 && *a5 == 1LL )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
              {
                if ( (unsigned __int8)HdlspGetLine(DstBuf, 0x50uLL) )
                {
                  if ( strcmp(DstBuf, "reboot") && strcmp(DstBuf, "shutdown") )
                    v11 = 0;
                  *(_BYTE *)a4 = v11;
                }
                goto LABEL_145;
              }
LABEL_70:
              *(_BYTE *)a4 = 0;
              goto LABEL_145;
            }
            goto LABEL_47;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_47;
          LOBYTE(a1) = *(_BYTE *)a2;
          v28 = HdlspEnableTerminal(a1);
LABEL_74:
          v5 = v28;
          goto LABEL_145;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_47;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14));
LABEL_81:
          *(_BYTE *)a4 = Line;
          goto LABEL_145;
        }
      }
      Line = 0;
      goto LABEL_81;
    }
    if ( v9 == 17 )
    {
      if ( a2 )
      {
        HdlspAddLogEntry(a2);
        goto LABEL_143;
      }
      return (unsigned int)-1073741811;
    }
    else
    {
      v33 = (unsigned int)(v9 - 18);
      if ( v9 == 18 )
      {
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v33) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v33);
          goto LABEL_145;
        }
        goto LABEL_47;
      }
      if ( v9 == 19 )
      {
        if ( a2 )
        {
          v28 = HdlspSetBlueScreenInformation(a2, a3);
          goto LABEL_74;
        }
        return 3221225485LL;
      }
      if ( v9 != 20 )
      {
        switch ( v9 )
        {
          case 21:
            if ( a4 && a5 && *a5 >= 0x10uLL )
            {
              *(_OWORD *)a4 = *(_OWORD *)((char *)HeadlessGlobals + 100);
              goto LABEL_145;
            }
            break;
          case 22:
            if ( a2 && a3 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutData(a2, a3);
              goto LABEL_145;
            }
            break;
          case 23:
            if ( a2 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutWideString(a2);
              goto LABEL_145;
            }
            break;
          case 24:
            if ( a4 && a5 && *a5 >= 0xCuLL )
            {
              v34 = HeadlessGlobals;
              *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)HeadlessGlobals + 118);
              *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v34 + 126);
              goto LABEL_145;
            }
            break;
          default:
            goto LABEL_43;
        }
        goto LABEL_47;
      }
      if ( (HeadlessGlobals[6] & 3) == 3 )
      {
        if ( a2 && a3 == 4 )
        {
          HdlspSendBlueScreenInfo((unsigned int)*a2);
          HdlspSendStringAtBaud("\n\r!SAC>");
          return v5;
        }
        return 3221225485LL;
      }
    }
    return v5;
  }
  if ( v12 != 0xFF )
  {
    KxReleaseSpinLock(HeadlessGlobals);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && v12 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)v15);
        }
      }
    }
    __writecr8(v12);
  }
  return 3221225473LL;
}
