/*
 * XREFs of HdlspGetLine @ 0x1409F05F8
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1409EFD54 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1409EFE80 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x1409F1020 (HdlspPutMore.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x1403D7D60 (sprintf_s.c)
 *     strcpy_s @ 0x1403D7EE0 (strcpy_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     InbvPortGetByte @ 0x1405C9F04 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1405CA0B0 (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x1409F1350 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, size_t Size)
{
  KIRQL v4; // bl
  KSPIN_LOCK *v5; // rcx
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned __int8 v17; // dl
  PKSPIN_LOCK v18; // rax
  PKSPIN_LOCK v19; // r10
  char *v20; // rcx
  KSPIN_LOCK v21; // rcx
  KSPIN_LOCK v22; // rax
  PKSPIN_LOCK v23; // rax
  __int64 v24; // rcx
  KSPIN_LOCK v25; // rdx
  char v26; // al
  KSPIN_LOCK v27; // rdx
  __int64 v28; // r8
  char *v29; // rcx
  char v30; // al
  PKSPIN_LOCK v31; // rbx
  size_t v32; // r8
  const void *v33; // rdx
  PKSPIN_LOCK v34; // rax
  PKSPIN_LOCK v35; // rcx
  unsigned __int8 v36; // [rsp+50h] [rbp+18h] BYREF

  v36 = 0;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v4 = -1;
  else
    v4 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v5 = HeadlessGlobals;
  v6 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v6 & 0x10) != 0 )
  {
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
    }
    return 0;
  }
  else
  {
    *((_DWORD *)HeadlessGlobals + 12) = v6 | 0x10;
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(v5);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && v4 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = v14->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v11 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
      }
      __writecr8(v4);
    }
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14))
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v36) )
          {
            v17 = v36;
          }
          else
          {
            v17 = 0;
            v36 = 0;
          }
          v18 = HeadlessGlobals;
          if ( !v17 )
            goto LABEL_46;
          *(_BYTE *)(HeadlessGlobals[11] + HeadlessGlobals[4]) = v17;
          v19 = HeadlessGlobals;
          if ( !*((_BYTE *)HeadlessGlobals + 117) || v36 != 10 )
            break;
          *((_BYTE *)HeadlessGlobals + 117) = 0;
        }
        *((_BYTE *)HeadlessGlobals + 117) = v36 == 13;
        if ( v36 == 10 || v36 == 13 )
          break;
        switch ( v36 )
        {
          case 8u:
          case 0x7Fu:
            if ( v19[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v21 = ++v19[11];
            v22 = v19[4];
            goto LABEL_49;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
            v18 = HeadlessGlobals;
LABEL_46:
            *((_DWORD *)v18 + 12) &= ~0x10u;
            return 0;
          default:
            v20 = (char *)v19[3];
            if ( v19[11] == 78 )
            {
              sprintf_s(v20, 0x50uLL, "\b%c", v36);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v20, 0x50uLL, "%c", v36);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v21 = HeadlessGlobals[11];
      v22 = HeadlessGlobals[4];
LABEL_49:
      *(_BYTE *)(v21 + v22) = 0;
      v23 = HeadlessGlobals;
      ++HeadlessGlobals[11];
      v24 = v23[11] - 1;
      if ( v23[11] != 1 )
      {
        v25 = v23[4];
        do
        {
          v26 = *(_BYTE *)(v25 + v24);
          if ( v26 && v26 != 32 && v26 != 9 )
            break;
          --v24;
        }
        while ( v24 );
      }
      v27 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v27 + v24) )
        *(_BYTE *)(v27 + v24 + 1) = 0;
      v28 = 0LL;
      v29 = (char *)HeadlessGlobals[4];
      if ( *v29 )
      {
        do
        {
          v30 = v29[v28];
          if ( v30 != 9 && v30 != 32 )
            break;
          ++v28;
        }
        while ( v29[v28] );
        if ( v28 )
          strcpy_s(v29, 0x50uLL, &v29[v28]);
      }
    }
    v31 = HeadlessGlobals;
    v32 = HeadlessGlobals[11];
    v33 = (const void *)HeadlessGlobals[4];
    if ( Size < v32 )
    {
      memmove(a1, v33, Size);
      memmove((void *)v31[4], (const void *)(v31[4] + Size), v31[11] - Size);
      v35 = HeadlessGlobals;
      v34 = HeadlessGlobals + 6;
      *((_DWORD *)HeadlessGlobals + 12) |= 0x20u;
      v35[11] -= Size;
    }
    else
    {
      memmove(a1, v33, v32);
      v31[11] = 0LL;
      v34 = v31 + 6;
      *((_DWORD *)v31 + 12) &= ~0x20u;
    }
    *(_DWORD *)v34 &= ~0x10u;
    return 1;
  }
}
