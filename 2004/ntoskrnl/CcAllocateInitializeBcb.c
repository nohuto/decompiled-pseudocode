/*
 * XREFs of CcAllocateInitializeBcb @ 0x1402C4F3C
 * Callers:
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402C5368 (CcAdjustVacbLevelLockCount.c)
 *     ExDisableResourceBoostLite @ 0x1403530C0 (ExDisableResourceBoostLite.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall CcAllocateInitializeBcb(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  char *result; // rax
  char *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x63426343u);
  v9 = result;
  if ( result )
  {
    memset(result + 2, 0, 0xBEuLL);
    *(_WORD *)v9 = 765;
    *((_QWORD *)v9 + 1) = *a3;
    *((_DWORD *)v9 + 1) = *a4;
    v10 = *(_QWORD *)a4 + *a3;
    ++*((_DWORD *)v9 + 16);
    *((_QWORD *)v9 + 4) = v10;
    *((_QWORD *)v9 + 22) = a1;
    ExInitializeResourceLite((PERESOURCE)(v9 + 72));
    ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
    v11 = *(_QWORD **)(a2 + 24);
    v12 = v9 + 16;
    if ( *v11 != a2 + 16 )
      __fastfail(3u);
    *v12 = a2 + 16;
    *((_QWORD *)v9 + 3) = v11;
    *v11 = v12;
    *(_QWORD *)(a2 + 24) = v12;
    if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(a1, *a3, 1LL);
    ExReleasePushLockEx(a1 + 104, 0LL);
    if ( (*(_DWORD *)(a1 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v9 + 72));
    return v9;
  }
  return result;
}
