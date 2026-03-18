/*
 * XREFs of ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00E997C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(unsigned int **this)
{
  __int64 v1; // rax
  unsigned int *v3; // r9
  __int64 v4; // r10

  v1 = *((unsigned int *)this + 128);
  if ( (_DWORD)v1 )
    WdLogSingleEntry5(0LL, 270LL, 59LL, this, v1, 0LL);
  v3 = this[63];
  if ( v3 )
  {
    v4 = v3[14];
    if ( (_DWORD)v4 != v3[15] + v3[17] )
      WdLogSingleEntry5(0LL, 270LL, 60LL, v3, v4, v3[15]);
  }
}
