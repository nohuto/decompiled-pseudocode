/*
 * XREFs of ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C01774A4
 * Callers:
 *     DxgkStartPnPTransition @ 0x1C0177468 (DxgkStartPnPTransition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0021174 (ExAllocateFromPagedLookasideList.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C01775FC (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

_QWORD *__fastcall DXGSESSIONMGR::StartPnPTransition(DXGSESSIONMGR *this, _QWORD *a2, __int64 a3)
{
  DXGSESSIONMGR **v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdi
  DXGSESSIONDATA *v10; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  DXGSESSIONMGR *v18; // rax
  __int64 v19; // rax
  DXGSESSIONDATA *v20; // rcx
  _BYTE v21[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  if ( !a2 )
  {
    v12 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
    a2 = v12;
    if ( !v12 )
    {
      v19 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v19 + 24) = 5131LL;
      WdLogEvent5_WdLowResource(v19);
      a2 = 0LL;
      goto LABEL_14;
    }
    v12[1] = 0;
    *v12 = 1349407855;
    *((_QWORD *)v12 + 5) = 0x300000000LL;
    v17 = v12 + 6;
    v17[1] = v17;
    *v17 = v17;
    v18 = (DXGSESSIONMGR *)(a2 + 1);
    v6 = (DXGSESSIONMGR **)*((_QWORD *)this + 41);
    if ( *v6 != (DXGSESSIONMGR *)((char *)this + 320) )
      __fastfail(3u);
    *(_QWORD *)v18 = (char *)this + 320;
    a2[2] = v6;
    *v6 = v18;
    *((_QWORD *)this + 41) = v18;
  }
  if ( a3 != 0x300000000LL )
  {
    if ( a3 == 0x200000000LL )
    {
      a3 = 0x100000000LL;
      if ( *((_DWORD *)this + 32) != -1 )
        a3 = *((unsigned int *)this + 32);
    }
    v7 = a2[5];
    if ( v7 == 0x300000000LL )
    {
      a2[5] = a3;
    }
    else if ( v7 != a3 )
    {
      a2[5] = 0x100000000LL;
    }
    v8 = *((_DWORD *)this + 18);
    if ( a3 == 0x100000000LL )
    {
      v9 = 0LL;
      if ( v8 )
      {
        do
        {
          v10 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * v9);
          if ( v10 )
            DXGSESSIONDATA::StartPnPTransitionOnSession(v10, (struct _PNP_TRANS_TOKEN *)a2);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *((_DWORD *)this + 18) );
      }
    }
    else if ( (unsigned int)a3 < v8 )
    {
      v20 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8LL * (unsigned int)a3);
      if ( v20 )
        DXGSESSIONDATA::StartPnPTransitionOnSession(v20, (struct _PNP_TRANS_TOKEN *)a2);
    }
  }
LABEL_14:
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, (__int64)v6);
  return a2;
}
