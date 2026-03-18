/*
 * XREFs of HdlspGetLine @ 0x140AA9660
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140AA8D9C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140AA8ED0 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x140AAA09C (HdlspPutMore.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     InbvPortGetByte @ 0x1406543F8 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1406545B0 (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x140AAA418 (HdlspSendStringAtBaud.c)
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
  PKSPIN_LOCK v22; // rax
  KSPIN_LOCK i; // rcx
  char v24; // al
  KSPIN_LOCK v25; // rdx
  __int64 v26; // r8
  char *v27; // rcx
  char v28; // al
  PKSPIN_LOCK v29; // rbx
  size_t v30; // r8
  const void *v31; // rdx
  PKSPIN_LOCK v32; // rax
  PKSPIN_LOCK v33; // rcx
  unsigned __int8 v34; // [rsp+50h] [rbp+18h] BYREF

  v34 = 0;
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
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v34) )
          {
            v17 = v34;
          }
          else
          {
            v17 = 0;
            v34 = 0;
          }
          v18 = HeadlessGlobals;
          if ( !v17 )
            goto LABEL_46;
          *(_BYTE *)(HeadlessGlobals[11] + HeadlessGlobals[4]) = v17;
          v19 = HeadlessGlobals;
          if ( !*((_BYTE *)HeadlessGlobals + 117) || v34 != 10 )
            break;
          *((_BYTE *)HeadlessGlobals + 117) = 0;
        }
        *((_BYTE *)HeadlessGlobals + 117) = v34 == 13;
        if ( v34 == 10 || v34 == 13 )
          break;
        switch ( v34 )
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
            *(_BYTE *)(++v19[11] + v19[4]) = 0;
            v21 = ++v19[11];
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
              sprintf_s(v20, 0x50uLL, "\b%c", v34);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v20, 0x50uLL, "%c", v34);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      *(_BYTE *)(HeadlessGlobals[11] + HeadlessGlobals[4]) = 0;
      v22 = HeadlessGlobals;
      ++HeadlessGlobals[11];
      v21 = v22[11];
LABEL_49:
      for ( i = v21 - 1; i; --i )
      {
        v24 = *(_BYTE *)(HeadlessGlobals[4] + i);
        if ( v24 && v24 != 32 && v24 != 9 )
          break;
      }
      v25 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v25 + i) )
        *(_BYTE *)(v25 + i + 1) = 0;
      v26 = 0LL;
      v27 = (char *)HeadlessGlobals[4];
      if ( *v27 )
      {
        do
        {
          v28 = v27[v26];
          if ( v28 != 9 && v28 != 32 )
            break;
          ++v26;
        }
        while ( v27[v26] );
        if ( v26 )
          strcpy_s(v27, 0x50uLL, &v27[v26]);
      }
    }
    v29 = HeadlessGlobals;
    v30 = HeadlessGlobals[11];
    v31 = (const void *)HeadlessGlobals[4];
    if ( Size < v30 )
    {
      memmove(a1, v31, Size);
      memmove((void *)v29[4], (const void *)(v29[4] + Size), v29[11] - Size);
      v33 = HeadlessGlobals;
      v32 = HeadlessGlobals + 6;
      *((_DWORD *)HeadlessGlobals + 12) |= 0x20u;
      v33[11] -= Size;
    }
    else
    {
      memmove(a1, v31, v30);
      v29[11] = 0LL;
      v32 = v29 + 6;
      *((_DWORD *)v29 + 12) &= ~0x20u;
    }
    *(_DWORD *)v32 &= ~0x10u;
    return 1;
  }
}
