/*
 * XREFs of EtwpApplyEventNameFilter @ 0x1405ABD64
 * Callers:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpEventNameFilterSearch @ 0x1405AC41C (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x1405AC678 (EtwpGetEventNameFromEventMetadata.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // r12
  void **v11; // rsi
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  char *v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  void *v20; // rsp
  void *v21; // rsp
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  _BYTE *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int8 v28; // al
  __int64 EventNameFromEventMetadata; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  char v40; // [rsp+20h] [rbp+0h] BYREF
  char v41; // [rsp+21h] [rbp+1h]
  unsigned __int16 v42; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v44; // [rsp+30h] [rbp+10h]
  void **v45; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v9 = a2;
  v42 = 0;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  v11 = 0LL;
  v45 = 0LL;
  CurrentIrql = 0;
  v41 = 0;
  v40 = 1;
  if ( a5 )
  {
    v13 = 16LL * a3;
    if ( v13 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + a4 > 0x7FFFFFFF0000LL || v13 + a4 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v14 = 0;
  v44 = 0;
  while ( v14 < a3 )
  {
    v15 = a4 + 16LL * v14;
    if ( *(_BYTE *)(v15 + 12) == 1 )
    {
      if ( a6 >= 2u )
      {
        v11 = (void **)(a4 + 16LL * v14);
        v45 = v11;
        P = *(PVOID *)v15;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v15;
        v11 = Src;
        v45 = Src;
        v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v16 >= 0xFFFF )
        {
          v40 = 0;
          goto LABEL_78;
        }
        if ( a5 )
        {
          if ( v16 )
          {
            v17 = (char *)Src[0] + v16;
            if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v16 = (unsigned int)Src[1];
            }
          }
        }
        if ( v16 <= 0x100 )
        {
          v18 = v16 + 15LL;
          if ( v18 <= v16 )
            v18 = 0xFFFFFFFFFFFFFF0LL;
          v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
          v20 = alloca(v19);
          v21 = alloca(v19);
          P = &v40;
        }
        else
        {
          P = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x74777445u);
          if ( !P )
          {
            v40 = 1;
            goto LABEL_78;
          }
          v41 = 1;
          v16 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v16);
      }
      break;
    }
    v44 = ++v14;
  }
  if ( !v11 || !P )
    goto LABEL_64;
  if ( a6 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  v23 = *(_QWORD *)(a1 + 384);
  if ( v23 )
  {
    v24 = 104 * v9;
    v25 = a9 ? *(_BYTE **)(v23 + v24 + 56) : *(_BYTE **)(v23 + v24 + 96);
    if ( v25 )
    {
      v26 = 0LL;
      v27 = *(_QWORD *)(a1 + 384);
      if ( v27 )
      {
        if ( a9 )
        {
          if ( (*(_DWORD *)(v27 + 104 * v9) & 0x80002000) == 0x80002000 )
            v26 = *(_QWORD *)(v27 + v24 + 56);
        }
        else if ( (*(_DWORD *)(v27 + 104 * v9) & 0x80000400) == 0x80000400 )
        {
          v26 = *(_QWORD *)(v27 + v24 + 96);
        }
        if ( v26 )
        {
          v28 = *(_BYTE *)(v26 + 1);
          if ( (a7 <= v28 || !v28)
            && (!a8 || (a8 & *(_QWORD *)(v26 + 8)) != 0 && (a8 & *(_QWORD *)(v26 + 16)) == *(_QWORD *)(v26 + 16)) )
          {
            EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v45 + 2), &v42);
            if ( !EventNameFromEventMetadata )
            {
              if ( a6 < 2u )
              {
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v30 = KeGetCurrentIrql();
                    if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
                    {
                      v31 = KeGetCurrentPrcb();
                      SchedulerAssist = v31->SchedulerAssist;
                      v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v34 = (v33 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v33;
                      if ( v34 )
                        KiRemoveSystemWorkPriorityKick((__int64)v31);
                    }
                  }
                }
                __writecr8(CurrentIrql);
              }
LABEL_64:
              v40 = 1;
              goto LABEL_78;
            }
            if ( v42 )
              v34 = *v25 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v42, v25);
            else
              v34 = *v25 == 0;
            v40 = v34;
          }
        }
      }
    }
  }
  if ( a6 < 2u )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v34 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick((__int64)v36);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_78:
  if ( v41 )
    ExFreePoolWithTag(P, 0);
  return v40;
}
