/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C02105E8
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v4; // rdx
  void **v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 i; // rbx
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (ADAPTER_DISPLAY *)((char *)this + 256), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v5 = (void **)*((_QWORD *)this + 37);
  if ( a2 )
  {
    if ( v5 )
    {
      v6 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v6 + 24) = 8439LL;
      WdLogEvent5_WdError(v6);
      v7 = -1073740008;
      goto LABEL_16;
    }
    v8 = 24LL * *((unsigned int *)this + 20);
    if ( !is_mul_ok(*((unsigned int *)this + 20), 0x18uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 37) = v9;
    if ( !v9 )
    {
      v13 = WdLogNewEntry5_WdLowResource(0LL, v10, v11, v12);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdLowResource(v13);
      v7 = -1073741801;
      goto LABEL_16;
    }
    memset(v9, 0, 24LL * *((unsigned int *)this + 20));
  }
  else if ( v5 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      v5 = (void **)*((_QWORD *)this + 37);
      if ( v5[3 * i + 1] )
      {
        operator delete[](v5[3 * i + 1]);
        *(_QWORD *)(*((_QWORD *)this + 37) + 24 * i + 8) = 0LL;
        v5 = (void **)*((_QWORD *)this + 37);
      }
    }
    operator delete[](v5);
    *((_QWORD *)this + 37) = 0LL;
  }
  v7 = 0;
LABEL_16:
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v4);
  return v7;
}
