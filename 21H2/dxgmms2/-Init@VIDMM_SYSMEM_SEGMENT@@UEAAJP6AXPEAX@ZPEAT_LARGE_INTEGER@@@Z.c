/*
 * XREFs of ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B09E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B0BE0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::Init(
        VIDMM_SYSMEM_SEGMENT *this,
        void (*a2)(void *),
        union _LARGE_INTEGER *a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = *((unsigned int *)this + 4);
    *(_QWORD *)(v9 + 32) = this;
  }
  result = VIDMM_SEGMENT::Init(this, a2, a3);
  v8 = result;
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 16) = 0LL;
    WdLogSingleEntry0(4LL);
    WdLogSingleEntry4(
      4LL,
      *((_QWORD *)this + 6),
      *((int *)this + 7),
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 4));
    return v8;
  }
  return result;
}
