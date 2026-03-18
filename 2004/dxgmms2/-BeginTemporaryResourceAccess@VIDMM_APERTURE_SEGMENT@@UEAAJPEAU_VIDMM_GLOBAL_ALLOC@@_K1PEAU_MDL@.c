/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00C3EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00C4AE8 (-MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
  }
  v10 = *((_QWORD *)this + 1);
  LODWORD(v11) = 0;
  if ( *(_BYTE *)(v10 + 40171) )
  {
    if ( a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
    {
      v12 = DpiMapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 216LL), a5, 0LL, 6LL, (char *)this + 264);
      v11 = v12;
      if ( v12 < 0 )
      {
        v15 = WdLogNewEntry5_WdWarning(v14, v13);
        *(_QWORD *)(v15 + 24) = v11;
        WdLogEvent5_WdWarning(v15);
      }
    }
  }
  VIDMM_APERTURE_SEGMENT::MapTemporaryResource(this, a2, a3, a4, a5);
  return (unsigned int)v11;
}
