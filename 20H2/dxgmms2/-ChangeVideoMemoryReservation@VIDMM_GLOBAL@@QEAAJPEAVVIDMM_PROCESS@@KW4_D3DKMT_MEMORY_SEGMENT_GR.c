/*
 * XREFs of ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00AF1D8
 * Callers:
 *     VidMmChangeVideoMemoryReservation @ 0x1C0022400 (VidMmChangeVideoMemoryReservation.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00115BC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00BADC8 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ChangeVideoMemoryReservation(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  __int64 v6; // rbx
  __int64 v9; // rax
  struct _KTHREAD *v11; // rax
  unsigned int v12; // ebx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+40h] [rbp-18h]

  v6 = a3;
  if ( a3 < *((_DWORD *)this + 1750) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 5130, 0LL);
    DXGPUSHLOCK::AcquireShared(v14);
    v11 = this[3];
    v15 = 1;
    v12 = VIDMM_PROCESS::ChangeVideoMemoryReservation(a2, *((_DWORD *)v11 + 58), v6, a4, a5);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return v12;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v9 + 24) = v6;
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
}
