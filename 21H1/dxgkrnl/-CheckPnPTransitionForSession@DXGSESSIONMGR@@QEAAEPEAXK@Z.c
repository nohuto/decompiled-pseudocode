/*
 * XREFs of ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x1C01855C4
 * Callers:
 *     DpiFinishPnPTransitionCallback @ 0x1C0185540 (DpiFinishPnPTransitionCallback.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
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
