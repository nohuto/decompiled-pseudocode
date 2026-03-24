/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1402E08E0
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402E05A0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     SmKmStoreReferenceEx @ 0x1402D959C (SmKmStoreReferenceEx.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x1402E099C (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
        __int64 a1,
        int a2,
        int *a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  unsigned int v7; // ebx
  unsigned int Initiate; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  _DWORD *v12; // rdx
  bool v13; // zf
  int v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v15 = *a3;
  v7 = 0;
  v16 = 0LL;
  v17 = 0;
  Initiate = SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(a1, a2, (unsigned int)&v15, (unsigned int)&v16, (__int64)&v17);
  if ( Initiate == 1024 )
    return (unsigned int)-1073741275;
  ++*(_DWORD *)(a1 + 1868);
  if ( v16 && v16 > *(_QWORD *)&KeQueryPerformanceCounter(0LL) + (unsigned __int64)*(unsigned int *)(a1 + 1864) )
    return (unsigned int)-1073741763;
  v11 = SmKmStoreReferenceEx(a1, Initiate, v10);
  if ( !v11 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v12 = a5;
    v13 = v17 == 0;
    *a4 = v11;
    *v12 = !v13;
    *a3 = v15;
  }
  return v7;
}
