/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB1A8
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C001C1F0 (VidMmRestoreFromPurge.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB264 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this)
{
  bool v1; // zf
  unsigned int i; // edi
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  int inited; // eax
  _DWORD v8[24]; // [rsp+50h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 10042) == 0;
  *((_BYTE *)this + 7088) = 0;
  if ( v1 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0; i < *((_DWORD *)this + 1754); ++i )
    {
      v4 = *((_QWORD *)this + 5028) + 1584LL * i;
      if ( (*(_BYTE *)(v4 + 436) & 0x20) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
        if ( inited < 0 )
          WdLogSingleEntry5(0LL, 270LL, 23LL, this, i, inited);
        *(_BYTE *)(v4 + 436) &= ~0x20u;
      }
    }
    memset(&v8[2], 0, 0x50uLL);
    v8[1] = -1;
    v8[0] = 101;
    v5 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v8, 1);
    if ( v5 < 0 )
      WdLogSingleEntry5(0LL, 270LL, 23LL, v5, 0LL, 0LL);
  }
  else
  {
    WdLogSingleEntry1(1LL, 9653LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
}
