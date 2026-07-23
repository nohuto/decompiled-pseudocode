/*
 * XREFs of HvlpGetPageList @ 0x1404FB5E8
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1404F851C (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1404F8760 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1404F9018 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1404FB6B0 (HvlpInvokeGetPageListHypercall.c)
 */

__int64 __fastcall HvlpGetPageList(int a1, __int64 *a2, _DWORD *a3)
{
  int *v3; // rbx
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rcx

  v3 = &HvlpIteratorCrashdump;
  *a2 = 0LL;
  *a3 = 0;
  if ( !a1 )
    v3 = &HvlpIteratorHibernate;
  if ( !*((_BYTE *)v3 + 2) )
    return 0LL;
  v7 = *((_QWORD *)v3 + 1);
  v8 = 261;
  v9 = *(_WORD *)v3;
  if ( *(_WORD *)v3 < *(_WORD *)(v7 + 8) )
  {
LABEL_9:
    v10 = *(_QWORD *)(v7 + 8LL * v9 + 16);
    *a2 = v10 & 0xFFFFFFFFFFLL;
    *a3 = (v10 >> 40) + 1;
    *(_WORD *)v3 = v9 + 1;
  }
  else
  {
    while ( *(_QWORD *)v7 != -1LL )
    {
      HvlpInvokeGetPageListHypercall(v3);
      *(_WORD *)v3 = 0;
      if ( *(_WORD *)(v7 + 8) )
      {
        v9 = 0;
        goto LABEL_9;
      }
    }
    return 0;
  }
  return v8;
}
