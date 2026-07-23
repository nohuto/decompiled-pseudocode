/*
 * XREFs of HdlspProcessDumpCommand @ 0x1409ECC18
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1409EBD54 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1409EBE80 (HdlspDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlTimeToTimeFields @ 0x14036CDF0 (RtlTimeToTimeFields.c)
 *     sprintf_s @ 0x1403D37B0 (sprintf_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlUnicodeStringToAnsiString @ 0x14061B5F0 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x1409ED020 (HdlspPutMore.c)
 *     HdlspPutString @ 0x1409ED0C0 (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  int v1; // eax
  KIRQL v2; // bl
  PKSPIN_LOCK v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned __int8 v6; // al
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  LARGE_INTEGER *v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  LARGE_INTEGER v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  const char *v20; // rcx
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v27; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v30; // [rsp+A8h] [rbp+38h] BYREF

  *(_DWORD *)(&v27.MaximumLength + 1) = 0;
  v30 = 0;
  TimeFields = 0LL;
  v1 = *((_DWORD *)HeadlessGlobals + 12);
  DestinationString = 0LL;
  if ( (v1 & 2) != 0 )
    v2 = -1;
  else
    v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v3 = HeadlessGlobals;
  result = 0xFFFFLL;
  v5 = *((unsigned __int16 *)HeadlessGlobals + 49);
  if ( (_WORD)v5 != 0xFFFF )
  {
    *((_DWORD *)HeadlessGlobals + 12) &= ~4u;
    v7 = v5;
    v27.Buffer = (char *)v3[3];
    v8 = 0;
    *(_DWORD *)&v27.Length = 5242880;
    while ( 1 )
    {
      v9 = (LARGE_INTEGER *)(v3[2] + 56LL * v7);
      if ( v2 != 0xFF )
      {
        KxReleaseSpinLock(v3);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << (v2 + 1));
              v21 = (v13 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v13;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v2);
      }
      RtlTimeToTimeFields(v9 + 1, &TimeFields);
      sprintf_s(
        (char *)HeadlessGlobals[3],
        0x50uLL,
        "%02d:%02d:%02d.%03d : ",
        TimeFields.Hour,
        TimeFields.Minute,
        TimeFields.Second,
        TimeFields.Milliseconds);
      HdlspPutString(HeadlessGlobals[3]);
      v14 = v9[6];
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v14.QuadPart + 2 * v15) );
      if ( v15 >= 0x4F )
      {
        *(_WORD *)(v14.QuadPart + 158) = 0;
        v14 = v9[6];
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v14.QuadPart);
      RtlUnicodeStringToAnsiString(&v27, &DestinationString, 0);
      v2 = (HeadlessGlobals[6] & 2) != 0 ? -1 : KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      if ( (HeadlessGlobals[6] & 4) != 0 )
        break;
      HdlspPutString(HeadlessGlobals[3]);
      HdlspPutString("\r\n");
      v3 = HeadlessGlobals;
      ++v8;
      result = *((unsigned __int16 *)HeadlessGlobals + 48);
      if ( v7 == (_DWORD)result )
      {
        if ( v2 == 0xFF )
          return result;
        goto LABEL_57;
      }
      if ( a1 && v8 > 0x14 )
      {
        if ( v2 != 0xFF )
        {
          KxReleaseSpinLock(HeadlessGlobals);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && v2 <= 0xFu && v16 >= 2u )
              {
                v17 = KeGetCurrentPrcb();
                v18 = v17->SchedulerAssist;
                v19 = ~(unsigned __int16)(-1LL << (v2 + 1));
                v21 = (v19 & v18[5]) == 0;
                v18[5] &= v19;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick((__int64)v17);
              }
            }
          }
          __writecr8(v2);
        }
        HdlspPutMore(&v30);
        if ( (HeadlessGlobals[6] & 2) != 0 )
          v2 = -1;
        else
          v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
        if ( v30 )
        {
          v20 = "\r\n";
          goto LABEL_50;
        }
        v3 = HeadlessGlobals;
        if ( (HeadlessGlobals[6] & 4) != 0 )
        {
          v20 = "New log entries have been added while waiting, command aborted.\r\n";
LABEL_50:
          result = HdlspPutString(v20);
          v21 = v2 == 0xFFu;
          goto LABEL_55;
        }
        v8 = 0;
      }
      v7 = (unsigned __int8)(v7 + 1);
    }
    result = HdlspPutString("New log entries have been added during dump, command aborted.\r\n");
    v21 = v2 == 0xFF;
LABEL_55:
    if ( v21 )
      return result;
    v3 = HeadlessGlobals;
LABEL_57:
    KxReleaseSpinLock(v3);
    if ( !KiIrqlFlags )
      goto LABEL_64;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_64;
    v22 = KeGetCurrentIrql();
    if ( v22 > 0xFu || v2 > 0xFu || v22 < 2u )
      goto LABEL_64;
    goto LABEL_62;
  }
  if ( v2 == 0xFF )
    return result;
  KxReleaseSpinLock(HeadlessGlobals);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && v2 <= 0xFu && v6 >= 2u )
      {
LABEL_62:
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (v2 + 1));
        v21 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
  }
LABEL_64:
  result = v2;
  __writecr8(v2);
  return result;
}
