/*
 * XREFs of EmonAddProfileSource @ 0x1404D3000
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeOrAffinityEx @ 0x1402D0100 (KeOrAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     wcsnlen @ 0x1403D4240 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403D8590 (wcsncpy_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpInsertProfileSource @ 0x1404BF050 (HalpInsertProfileSource.c)
 */

__int64 __fastcall EmonAddProfileSource(unsigned __int8 *a1, _DWORD *a2)
{
  const wchar_t *v2; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  wchar_t *v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  _DWORD *v25; // rsi
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r11
  _DWORD *v29; // r9
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF

  v32 = 0LL;
  v2 = (const wchar_t *)(a1 + 184);
  v5 = -1073741823;
  v6 = wcsnlen((const wchar_t *)a1 + 92, 0xFEuLL) + 1;
  v8 = (wchar_t *)HalpMmAllocCtxAlloc(v7, 2 * v6);
  v9 = (__int64)v8;
  if ( !v8 )
    return 3221225495LL;
  wcsncpy_s(v8, v6, v2, v6);
  v12 = (void *)HalpMmAllocCtxAlloc(v11, 224LL);
  v14 = (__int64)v12;
  if ( !v12 )
  {
    HalpMmAllocCtxFree(v13, v9);
    return 3221225495LL;
  }
  memset(v12, 0, 0xE0uLL);
  *(_BYTE *)(v14 + 28) = 1;
  v15 = *((_DWORD *)a1 + 2);
  *(_DWORD *)(v14 + 24) = v15;
  if ( v15 > 0x7FFFFFFF )
  {
    *(_DWORD *)(v14 + 24) = 0x7FFFFFFF;
    v15 = 0x7FFFFFFF;
  }
  v16 = *(_DWORD *)(v14 + 24);
  *(_BYTE *)(v14 + 29) = 0;
  if ( v15 < 0x1000 )
    v16 = 4096;
  *(_DWORD *)(v14 + 24) = v16;
  v17 = *a1;
  v18 = a1[1] | ((a1[5] & 1 | (8 * (a1[4] & 1 | (4 * (a1[3] & 1 | (2 * (a1[2] & 0xF))))))) << 10) | 0x300;
  *(_DWORD *)(v14 + 216) = 37;
  *(_DWORD *)(v14 + 208) = v17 | (v18 << 8);
  KeCopyAffinityEx(v14 + 32, (unsigned __int16 *)a1 + 8);
  *(_QWORD *)(v14 + 200) = v9;
  v19 = HalpAcquireHighLevelLock(&EmonProfileSourceDescriptorListLock);
  if ( HalpInsertProfileSource(v14, (_QWORD **)&EmonProfileSourceDescriptorListHead, 37, &v32) )
  {
    ++EmonProfileSourceDescriptorCount;
    if ( a2 )
      *a2 = *(_DWORD *)v14;
    KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v19);
    return 0LL;
  }
  else
  {
    v25 = (_DWORD *)v32;
    if ( v32 && *(_DWORD *)(v32 + 208) == *(_DWORD *)(v14 + 208) )
    {
      KeOrAffinityEx((unsigned __int16 *)(v32 + 32), (unsigned __int16 *)(v14 + 32), (_BYTE *)(v32 + 32));
      if ( a2 )
        *a2 = *v25;
      v5 = 0;
    }
    KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v26 = (unsigned int)(v19 + 1);
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
          v24 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
    }
    __writecr8(v19);
    HalpMmAllocCtxFree(v26, *(_QWORD *)(v14 + 200));
    HalpMmAllocCtxFree(v31, v14);
    return v5;
  }
}
