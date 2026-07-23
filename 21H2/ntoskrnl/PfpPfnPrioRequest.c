/*
 * XREFs of PfpPfnPrioRequest @ 0x140709F90
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x1402138C0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1402253FC (MiLockDynamicMemoryShared.c)
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     MiIdentifyPfnWrapper @ 0x140353EE0 (MiIdentifyPfnWrapper.c)
 *     MmSetPfnListInfo @ 0x140372734 (MmSetPfnListInfo.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140718100 (PfpCopyUserPfnPrioRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     MmRelocatePfnList @ 0x1408D1C3C (MmRelocatePfnList.c)
 *     ExRaiseAccessViolation @ 0x1409562C0 (ExRaiseAccessViolation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPfnPrioRequest(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  int v7; // r8d
  unsigned int v8; // edx
  int v9; // r15d
  char *v10; // rbx
  char *v11; // rsi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v27; // [rsp+90h] [rbp+18h]
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  v27 = a3;
  v5 = 0;
  LODWORD(v26) = 0;
  v6 = 0LL;
  Src = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 == 6 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 < 0xD8 )
    {
      v9 = -1073741306;
      goto LABEL_22;
    }
    v9 = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v8, 6, (unsigned int)&Src, a2, 1);
    if ( v9 >= 0 )
    {
      v25 = Src;
      v10 = (char *)Src + 192;
      v9 = 0;
      v11 = (char *)Src + 24 * *((_QWORD *)Src + 1) + 192;
      CurrentThread = KeGetCurrentThread();
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( v10 < v11 )
      {
        while ( 1 )
        {
          v13 = *((_QWORD *)v10 + 1);
          if ( !(unsigned int)MiIsPfn(v13) )
            break;
          MiIdentifyPfnWrapper(48 * v13 - 0x58000000000LL, (__int64)v10, v14, v15);
          v10 += 24;
          if ( v10 >= v11 )
            goto LABEL_7;
        }
        *((_QWORD *)v10 + 2) |= 2uLL;
        v9 = -1073741584;
      }
LABEL_7:
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      v6 = Src;
      if ( v9 >= 0 && (*((_DWORD *)Src + 1) & 1) != 0 )
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)Src + 1, 0xB0u, v16, &v26);
      if ( a2 )
      {
        v17 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(a1 + 24) )
        {
          if ( (v17 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = v17 + *(unsigned int *)(a1 + 24) - 1LL;
          if ( v17 > v18 || v18 >= 0x7FFFFFFF0000LL )
            ExRaiseAccessViolation();
          v19 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v17 = *(_BYTE *)v17;
            v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v17 != v19 );
          v6 = Src;
        }
      }
      v5 = 24 * (v25[2] + 8);
      memmove(*(void **)(a1 + 16), v6, v5);
      goto LABEL_21;
    }
    goto LABEL_45;
  }
  if ( v7 != 7 && v7 != 22 && v7 != 29 )
  {
    v9 = -1073741821;
    goto LABEL_22;
  }
  v21 = *(_DWORD *)(a1 + 24);
  if ( v21 < 0xD8 )
  {
    v9 = -1073741306;
    goto LABEL_22;
  }
  v9 = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v21, v7, (unsigned int)&Src, a2, 0);
  if ( v9 >= 0 )
  {
    v22 = *(_DWORD *)(a1 + 8);
    if ( v22 == 7 )
    {
      v23 = 0;
    }
    else
    {
      if ( v22 != 29 )
      {
        v6 = Src;
        v24 = MmRelocatePfnList(
                *((_QWORD *)Src + 1),
                (char *)Src + 192,
                *((unsigned __int16 *)Src + 2),
                *((unsigned __int16 *)Src + 3));
        goto LABEL_31;
      }
      v23 = 1;
    }
    v6 = Src;
    v24 = MmSetPfnListInfo(*((_QWORD *)Src + 1), (_QWORD *)Src + 24, v23);
LABEL_31:
    v9 = v24;
    if ( *(_DWORD *)(a1 + 8) == 22 || v24 < 0 )
    {
      if ( a2 )
        ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
      v5 = 24 * (v6[2] + 8);
      memmove(*(void **)(a1 + 16), v6, v5);
    }
LABEL_21:
    *v27 = v5;
    goto LABEL_22;
  }
LABEL_45:
  v6 = Src;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v9;
}
