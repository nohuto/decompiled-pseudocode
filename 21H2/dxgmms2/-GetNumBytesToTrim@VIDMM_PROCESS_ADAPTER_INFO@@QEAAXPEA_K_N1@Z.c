/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0063E00
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00623E0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0063C5C (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00BA210 (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 * Callees:
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C0063E98 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(
        struct VIDMM_GLOBAL **this,
        unsigned __int64 *a2,
        bool a3,
        bool a4)
{
  unsigned int v4; // esi
  struct VIDMM_GLOBAL *i; // r10
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = 0;
  for ( i = *this; v4 < *((_DWORD *)*this + 1750); i = *this )
  {
    v11 = 0LL;
    VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
      (struct VIDMM_GLOBAL *)((char *)this[6] + 296 * v4),
      &v11,
      a3,
      a4,
      i,
      v4);
    v10 = v11;
    if ( *a2 > v11 )
      v10 = *a2;
    ++v4;
    *a2 = v10;
  }
}
