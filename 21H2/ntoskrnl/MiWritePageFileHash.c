/*
 * XREFs of MiWritePageFileHash @ 0x14038A114
 * Callers:
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputePageHash @ 0x14038A2E0 (MiComputePageHash.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiWritePageFileHash(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // esi
  char *v10; // rdx
  unsigned int v11; // ebp
  _QWORD *v12; // r13
  char *v13; // r15
  BOOL v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // ecx
  BOOL v18; // eax
  unsigned __int64 v19; // rbx
  _DWORD *v20; // r9
  int *v21; // r8
  __int64 v22; // r10
  int v23; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  _DWORD v29[16]; // [rsp+40h] [rbp-88h] BYREF

  v9 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
      v10 = *(char **)(a2 + 24);
    else
      v10 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( v10 )
      v10 += 4096 * (((__int64)a3 - a2 - 48) >> 3);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = a3;
    v13 = v10;
    if ( v11 >= a5 )
      break;
    v29[v9] = 0;
    if ( a3 && *a3 != qword_140C4EDA8 )
    {
      v14 = 1;
      v15 = 48LL * *a3 - 0x58000000000LL;
      v16 = (*(_QWORD *)(v15 + 16) >> 5) & 0x1FLL;
      if ( (dword_140CFB180 & 1) != 0 || (_DWORD)v16 == 31 )
        goto LABEL_17;
      v17 = (unsigned int)v16 >> 3;
      if ( (unsigned int)v16 >> 3 == 3 )
        v14 = ((*(_QWORD *)(v15 + 16) >> 5) & 7) == 0;
      v18 = 0;
      if ( v17 != 1 )
        v18 = v14;
      if ( v18 )
LABEL_17:
        v29[v9] = MiComputePageHash(v15);
      else
        v29[v9] = 2;
    }
    if ( ++v9 == 16 )
      goto LABEL_25;
LABEL_19:
    ++v11;
    v10 = v13 + 4096;
    ++a3;
    if ( !v13 )
      v10 = 0LL;
    if ( !v12 )
      a3 = 0LL;
  }
  if ( v9 )
  {
LABEL_25:
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
    v20 = (_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * a4);
    v21 = v29;
    v22 = v9;
    do
    {
      v23 = *v21++;
      *v20++ = v23;
      --v22;
    }
    while ( v22 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v19);
    a4 += v9;
    v9 = 0;
    goto LABEL_19;
  }
}
