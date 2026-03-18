/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x1406056FC
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406045E8 (MiAllocateFromSubAllocatedRegion.c)
 *     MmDeleteTeb @ 0x140605648 (MmDeleteTeb.c)
 * Callees:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140249E28 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14024A02C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     RtlClearBitsEx @ 0x140250FD0 (RtlClearBitsEx.c)
 *     MiLocateVadEvent @ 0x140251084 (MiLocateVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitRegion @ 0x1405FA170 (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(_QWORD *P, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 VadEvent; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 *i; // rcx
  bool v22; // bl
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 Process; // [rsp+28h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  VadEvent = MiLocateVadEvent((__int64)P, 64LL);
  if ( !VadEvent )
    goto LABEL_21;
  v12 = *(unsigned __int8 *)(v9 + 32);
  v13 = *(unsigned int *)(v9 + 24);
  v14 = VadEvent + 8;
  v15 = (unsigned __int64)(v11 + 4095) >> 12;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v10);
  RtlClearBitsEx(v14, (a3 - ((v13 | ((unsigned __int64)v12 << 32)) << 12)) >> 12, v15);
  v16 = *(unsigned int *)(v14 + 44);
  v17 = *(_DWORD *)(v14 + 40) - v15;
  *(_DWORD *)(v14 + 40) = v17;
  if ( v15 + v17 >= v16 && v17 < (unsigned int)v16 )
  {
    v24 = (_QWORD *)(v14 + 16);
    v25 = *(_QWORD *)(Process + 1680) + 16 * ((*(_DWORD *)(v14 + 48) & 3) + 20LL);
    v26 = *(_QWORD *)v25;
    if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
      goto LABEL_28;
    *v24 = v26;
    *(_QWORD *)(v14 + 24) = v25;
    *(_QWORD *)(v26 + 8) = v24;
    *(_QWORD *)v25 = v24;
    v17 = *(_DWORD *)(v14 + 40);
  }
  v18 = 0;
  v19 = 0;
  v20 = v17 == 0;
  for ( i = (__int64 *)P[7]; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 )
    {
      if ( v19 <= 1 )
        ++v19;
      if ( a3 <= i[2] && a3 + a4 - 1 >= (i[1] & 0xFFFFFFFFFFFFF000uLL) && v18 <= 1 )
        ++v18;
    }
  }
  v22 = v20;
  v23 = 1;
  if ( v19 != 1 )
    v22 = 0;
  if ( v18 != 1 )
    v23 = 0;
  if ( v22 )
  {
    v27 = (_QWORD *)(v14 + 16);
    v28 = *(_QWORD *)(v14 + 16);
    if ( *(_QWORD *)(v28 + 8) == v14 + 16 )
    {
      v29 = *(_QWORD **)(v14 + 24);
      if ( (_QWORD *)*v29 == v27 )
      {
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        *v27 = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
        goto LABEL_20;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
  if ( v23 )
    MiDecommitRegion((__int64)P, a3, a3 + a4 - 1);
LABEL_20:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  if ( !v22 )
  {
LABEL_21:
    MiUnlockAndDereferenceVad(P);
    return;
  }
  MiDeleteVad(P, 0LL, 0);
}
