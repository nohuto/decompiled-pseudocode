/*
 * XREFs of HalpLeaveDmaDomain @ 0x14051541C
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x140513870 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x140514A20 (HalLeaveDmaDomain.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // r15
  ULONG_PTR v3; // rdi
  int v4; // r14d
  struct _KTHREAD *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 AbEntrySummary; // rdx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v13; // r9d

  v1 = *(_QWORD *)(a1 + 504);
  if ( !*(_DWORD *)(v1 + 48) )
  {
LABEL_45:
    HalpDmaDereferenceDomainObject((__int64 *)v1);
    *(_QWORD *)(a1 + 504) = 0LL;
    return 0;
  }
  v3 = a1 + 312;
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  if ( *(_BYTE *)(a1 + 338) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    CurrentThread = KeGetCurrentThread();
    if ( v3 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    AbEntrySummary = 0LL;
    v9 = v3 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v9
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      AbEntrySummary = (unsigned int)(AbEntrySummary + 1);
      p_Process += 96LL;
      if ( (unsigned int)AbEntrySummary >= 6 )
        goto LABEL_35;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_35:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
      _enable();
      goto LABEL_43;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v13 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    v9 = v13;
    if ( v13 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v13);
    goto LABEL_43;
  }
  v4 = ((__int64 (__fastcall *)(_QWORD))qword_140C4BD88)(*(_QWORD *)(a1 + 536));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v5 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    v6 = -1;
  else
    v6 = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  _disable();
  v7 = (__int64)&v5[1].Process;
  AbEntrySummary = 0LL;
  v9 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != v9
       || !*(_BYTE *)(v7 + 18)
       || (*(_DWORD *)v7 & 1) != 0
       || *(_DWORD *)(v7 + 8) != v6 )
  {
    AbEntrySummary = (unsigned int)(AbEntrySummary + 1);
    v7 += 96LL;
    if ( (unsigned int)AbEntrySummary >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(v7 + 18) = 0;
  if ( !v7 )
  {
LABEL_14:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, v6, 0LL);
    _enable();
    goto LABEL_22;
  }
  if ( *(__int64 *)v7 < 0 )
  {
    *(_BYTE *)v7 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v7);
    _disable();
  }
  v9 = *(unsigned int *)(v7 + 88);
  *(_DWORD *)(v7 + 88) = 0;
  *(_BYTE *)(v7 + 17) = 0;
  *(_QWORD *)v7 = 0LL;
  AbEntrySummary = v5->AbEntrySummary;
  LODWORD(AbEntrySummary) = AbEntrySummary | (1 << *(_BYTE *)(v7 + 16));
  v5->AbEntrySummary = AbEntrySummary;
  _enable();
  if ( (_DWORD)v9 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v5, v3, v9);
LABEL_22:
  if ( v4 >= 0 )
  {
LABEL_43:
    if ( *(_DWORD *)(v1 + 48) == 3 )
      ((void (__fastcall *)(_QWORD, __int64, __int64))qword_140C4BDF8)(*(_QWORD *)(a1 + 552), AbEntrySummary, v9);
    goto LABEL_45;
  }
  return (unsigned int)v4;
}
