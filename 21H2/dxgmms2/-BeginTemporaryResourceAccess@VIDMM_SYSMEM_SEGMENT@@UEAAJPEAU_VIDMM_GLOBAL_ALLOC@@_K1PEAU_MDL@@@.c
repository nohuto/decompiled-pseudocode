/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00A8BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C00027A0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        void *const *a2,
        __int64 a3,
        __int64 a4,
        struct _MDL *a5)
{
  unsigned int v9; // ebx
  _QWORD *v11; // rax
  unsigned __int64 LogicalAddress; // rax
  int v13; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v11[3] = a2;
    v11[4] = a3;
    v11[5] = a4;
  }
  v9 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40179LL) && a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
  {
    LogicalAddress = SysMmGetLogicalAddress(a2[65]);
    if ( LogicalAddress )
      LogicalAddress += a3;
    v13 = SysMmMapIommuRange(
            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
            LogicalAddress,
            a5,
            0);
    v9 = v13;
    if ( v13 < 0 )
      WdLogSingleEntry1(3LL, v13);
  }
  return v9;
}
