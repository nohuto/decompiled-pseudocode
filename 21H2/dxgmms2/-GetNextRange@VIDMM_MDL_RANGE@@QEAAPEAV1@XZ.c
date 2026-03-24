/*
 * XREFs of ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C007B36C
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0079F20 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C007B250 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_MDL_RANGE *__fastcall VIDMM_MDL_RANGE::GetNextRange(VIDMM_MDL_RANGE *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 3);
  if ( v1 == *((_QWORD *)this + 5) + 8LL )
    return 0LL;
  else
    return (struct VIDMM_MDL_RANGE *)(v1 - 24);
}
