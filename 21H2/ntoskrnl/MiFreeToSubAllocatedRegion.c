/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x14079EF3C
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140709A08 (MiAllocateFromSubAllocatedRegion.c)
 *     MmDeleteTeb @ 0x14079EE84 (MmDeleteTeb.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14030B538 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14030B6D0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiDecommitRegion @ 0x1407BC9B0 (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(char *P, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 VadEvent; // rax
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // r15
  unsigned __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  bool v21; // r10
  unsigned __int64 i; // rcx
  bool v23; // bl
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 Process; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  VadEvent = MiLocateVadEvent((__int64)P, 64LL);
  if ( !VadEvent )
    goto LABEL_20;
  v12 = *(unsigned __int8 *)(v9 + 32);
  v13 = v8 - 63;
  v14 = *(unsigned int *)(v9 + 24);
  v15 = (unsigned __int64)(a4 + 4095) >> 12;
  v16 = VadEvent + 8;
  LOCK_PAGE_TABLE_COMMITMENT(v10, v11);
  RtlClearBitsEx(v16, (a3 - ((v14 | ((unsigned __int64)v12 << 32)) << 12)) >> 12, v15);
  v17 = *(unsigned int *)(v16 + 44);
  v18 = *(_DWORD *)(v16 + 40) - v15;
  *(_DWORD *)(v16 + 40) = v18;
  if ( v15 + v18 >= v17 && v18 < (unsigned int)v17 )
  {
    v24 = (_QWORD *)(v16 + 16);
    v25 = 16LL * (*(_DWORD *)(v16 + 48) & 3) + *(_QWORD *)(Process + 1680) + 312LL;
    v26 = *(_QWORD *)v25;
    if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
      goto LABEL_27;
    *v24 = v26;
    *(_QWORD *)(v16 + 24) = v25;
    *(_QWORD *)(v26 + 8) = v24;
    *(_QWORD *)v25 = v24;
    v18 = *(_DWORD *)(v16 + 40);
  }
  v19 = 0;
  v20 = 0;
  v21 = v18 == 0;
  for ( i = *((_QWORD *)P + 7) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 64) == 2 )
    {
      if ( v20 <= v13 )
        v20 += v13;
      if ( a3 <= *(_QWORD *)(i + 16) && a3 + a4 - 1 >= (*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFF000uLL) && v19 <= v13 )
        v19 += v13;
    }
  }
  v23 = v21;
  if ( v20 != v13 )
    v23 = 0;
  if ( v19 != v13 )
    v13 = 0;
  if ( v23 )
  {
    v27 = (_QWORD *)(v16 + 16);
    v28 = *(_QWORD *)(v16 + 16);
    if ( *(_QWORD *)(v28 + 8) == v16 + 16 )
    {
      v29 = *(_QWORD **)(v16 + 24);
      if ( (_QWORD *)*v29 == v27 )
      {
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        *v27 = 0LL;
        *(_QWORD *)(v16 + 24) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_27:
    __fastfail(3u);
  }
  if ( v13 )
    MiDecommitRegion(P, a3, a3 + a4 - 1);
LABEL_19:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  if ( !v23 )
  {
LABEL_20:
    MiUnlockAndDereferenceVad(P);
    return;
  }
  MiDeleteVad(P);
}
