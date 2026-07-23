/*
 * XREFs of Amd64AddProfileSource @ 0x1404DD700
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

__int64 __fastcall Amd64AddProfileSource(unsigned __int8 *a1, _DWORD *a2)
{
  const wchar_t *v2; // r15
  unsigned int v5; // ebp
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
  unsigned __int64 v17; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  _DWORD *v23; // rsi
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r11
  _DWORD *v27; // r9
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // [rsp+40h] [rbp+8h] BYREF

  v30 = 0LL;
  v2 = (const wchar_t *)(a1 + 184);
  v5 = -1073741823;
  v6 = wcsnlen((const wchar_t *)a1 + 92, 0xFEuLL) + 1;
  v8 = (wchar_t *)HalpMmAllocCtxAlloc(v7, 2 * v6);
  v9 = (__int64)v8;
  if ( !v8 )
    return 3221225495LL;
  wcsncpy_s(v8, v6, v2, v6);
  v12 = (void *)HalpMmAllocCtxAlloc(v11, 216LL);
  v14 = (__int64)v12;
  if ( !v12 )
  {
    HalpMmAllocCtxFree(v13, v9);
    return 3221225495LL;
  }
  memset(v12, 0, 0xD8uLL);
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
  *(_DWORD *)(v14 + 208) = *a1 | ((a1[1] | 0x300) << 8);
  KeCopyAffinityEx(v14 + 32, (unsigned __int16 *)a1 + 8);
  *(_QWORD *)(v14 + 200) = v9;
  v17 = HalpAcquireHighLevelLock(&Amd64ProfileSourceDescriptorListLock);
  if ( HalpInsertProfileSource(v14, (_QWORD **)&Amd64ProfileSourceDescriptorListHead, 192, &v30) )
  {
    ++Amd64ProfileSourceDescriptorCount;
    if ( a2 )
      *a2 = *(_DWORD *)v14;
    KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    return 0LL;
  }
  else
  {
    v23 = (_DWORD *)v30;
    if ( v30 && *(_DWORD *)(v30 + 208) == *(_DWORD *)(v14 + 208) )
    {
      KeOrAffinityEx((unsigned __int16 *)(v30 + 32), (unsigned __int16 *)(v14 + 32), (_BYTE *)(v30 + 32));
      if ( a2 )
        *a2 = *v23;
      v5 = 0;
    }
    KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v24 = (unsigned int)(v17 + 1);
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v22 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v26);
        }
      }
    }
    __writecr8(v17);
    HalpMmAllocCtxFree(v24, *(_QWORD *)(v14 + 200));
    HalpMmAllocCtxFree(v29, v14);
    return v5;
  }
}
