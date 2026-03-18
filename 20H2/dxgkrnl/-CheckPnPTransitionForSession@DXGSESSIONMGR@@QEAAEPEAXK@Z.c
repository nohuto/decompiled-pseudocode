/*
 * XREFs of ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x1C0194554
 * Callers:
 *     DpiFinishPnPTransitionCallback @ 0x1C01944D0 (DpiFinishPnPTransitionCallback.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

char __fastcall DXGSESSIONMGR::CheckPnPTransitionForSession(DXGSESSIONMGR *this, void *a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // r9
  char v10; // bl
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( (unsigned int)v4 < *((_DWORD *)this + 18)
    && *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4)
    && (_mm_lfence(), v7 = 0, v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4), (v8 = *(_DWORD *)(v6 + 18736)) != 0) )
  {
    v9 = *(_QWORD *)(v6 + 18744);
    v10 = 1;
    while ( 1 )
    {
      v6 = *(_QWORD *)(32LL * v7 + v9 + 8);
      if ( v6 )
      {
        if ( (void *)v6 == a2 )
          break;
      }
      if ( ++v7 >= v8 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v10 = 0;
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v6);
  return v10;
}
