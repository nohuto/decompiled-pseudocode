/*
 * XREFs of PnpCopyDevProperty @ 0x14074E234
 * Callers:
 *     PnpCopyDevPropertyArray @ 0x14074E15C (PnpCopyDevPropertyArray.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpFreeDevProperty @ 0x1406288A8 (PnpFreeDevProperty.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpCopyDevProperty(__int64 a1, __int64 a2, __int64 a3)
{
  int PWSTR; // edi
  const wchar_t *v6; // rcx
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax

  PWSTR = 0;
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  v6 = *(const wchar_t **)(a1 + 24);
  if ( v6 )
  {
    PWSTR = PnpAllocatePWSTR(v6, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(a3 + 24));
    if ( PWSTR < 0 )
      goto LABEL_9;
  }
  v7 = *(_DWORD *)(a3 + 36);
  if ( v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x57706E50u);
    *(_QWORD *)(a3 + 40) = PoolWithTag;
    if ( !PoolWithTag )
    {
      PWSTR = -1073741670;
LABEL_9:
      PnpFreeDevProperty(a3, 0x57706E50u);
      *(_OWORD *)a3 = 0LL;
      *(_OWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)(a3 + 32) = 0LL;
      return (unsigned int)PWSTR;
    }
  }
  memmove(*(void **)(a3 + 40), *(const void **)(a1 + 40), *(unsigned int *)(a3 + 36));
  return (unsigned int)PWSTR;
}
