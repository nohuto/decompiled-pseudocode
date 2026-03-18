/*
 * XREFs of ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x1801A49F8
 * Callers:
 *     ?Schedule@CComputeScribbleFramebuffer@@QEAAJPEAVCComputeScribbleScheduler@@I@Z @ 0x1801A6040 (-Schedule@CComputeScribbleFramebuffer@@QEAAJPEAVCComputeScribbleScheduler@@I@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x1801A3F24 (-GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXV-$span@QEAVCComputeScribble@@$0-0@gs.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A48B4 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ScheduleScribbleFrame(
        CComputeScribbleScheduler *this,
        volatile signed __int32 *a2,
        __int128 *a3,
        CDrawListEntry *a4,
        int a5)
{
  unsigned int v9; // ebx
  float v10; // xmm6_4
  int v11; // ebx
  int v12; // eax
  float v14[4]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  CDrawListEntry *v16[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  float v19; // [rsp+90h] [rbp+20h] BYREF

  if ( WaitForSingleObject(*((HANDLE *)this + 6), 0) )
  {
    v15 = *a3;
    CComputeScribbleScheduler::GetWakeupTimeBeforeVBlank((__int64)this, (unsigned __int64 *)&v15, &v19, v14);
    v10 = v19;
    v11 = a5;
    if ( v19 > *((float *)this + 10) )
    {
      do
      {
        v10 = v10 - *((float *)this + 10);
        --v11;
      }
      while ( v10 > *((float *)this + 10) );
      v19 = v10;
    }
    v16[1] = 0LL;
    v16[0] = (CDrawListEntry *)a2;
    v17 = 0LL;
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v10 = v19;
    }
    *(_QWORD *)((char *)&v17 + 4) = __PAIR64__(LODWORD(v14[0]), LODWORD(v10));
    v16[1] = a4;
    LODWORD(v17) = v11;
    v12 = CComputeScribbleScheduler::Schedule(this, (const struct CComputeScribbleScheduler::ScribbleFrame *)v16);
    v9 = v12;
    if ( v12 >= 0 )
      v9 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE3,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v12);
    if ( v16[0] )
      CDrawListEntry::Release(v16[0]);
  }
  else
  {
    v9 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)0x80004005LL);
  }
  return v9;
}
