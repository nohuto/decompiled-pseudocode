/*
 * XREFs of ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x1C0299C3C
 * Callers:
 *     DxgkAcquireGdiViewIds @ 0x1C0187C94 (DxgkAcquireGdiViewIds.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall DXGSESSIONDATA::AcquireSessionGdiViewId(DXGSESSIONDATA *this, unsigned int *a2)
{
  __int64 v4; // rcx
  signed __int32 v5; // edi
  unsigned __int32 v6; // eax
  __int64 v7; // rdx
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rcx
  SIZE_T v11; // rax
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  const void *v20; // rdx
  __int64 v21; // rax
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = DXGSESSIONDATA::s_GlobalGdiViewId;
  do
  {
    if ( (_DWORD)v4 == -2 )
    {
      v21 = WdLogNewEntry5_WdError(v4, a2);
      v19 = -1073741756;
      *(_QWORD *)(v21 + 24) = -1073741756LL;
      WdLogEvent5_WdError(v21);
      return v19;
    }
    v5 = v4 + 1;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v4 + 1, v4);
    v4 = v6;
  }
  while ( v6 + 1 != v5 );
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGSESSIONDATA *)((char *)this + 19048), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v7 = *((unsigned int *)this + 4773);
  v8 = *((_DWORD *)this + 4772);
  v9 = *((_DWORD *)this + 4774);
  if ( v8 + (int)v7 >= v9 )
  {
    if ( v9 )
      v10 = 2 * v9;
    else
      v10 = 16LL;
    *((_DWORD *)this + 4774) = v10;
    v11 = 4 * v10;
    if ( !is_mul_ok(v10, 4uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, 0x4B677844u, PagedPool);
    v16 = v12;
    if ( !v12 )
    {
      v17 = (unsigned int)(v5 - 1);
      _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v17, v5);
      v18 = WdLogNewEntry5_WdLowResource(v17, v13, v14, v15);
      *(_QWORD *)(v18 + 24) = *(unsigned int *)this;
      WdLogEvent5_WdLowResource(v18);
      v19 = -1073741801;
      goto LABEL_16;
    }
    v20 = (const void *)*((_QWORD *)this + 2388);
    if ( v20 )
    {
      memmove(v12, v20, 4LL * (unsigned int)(*((_DWORD *)this + 4773) + *((_DWORD *)this + 4772)));
      operator delete[](*((void **)this + 2388));
    }
    v7 = *((unsigned int *)this + 4773);
    v8 = *((_DWORD *)this + 4772);
    *((_QWORD *)this + 2388) = v16;
  }
  *(_DWORD *)(*((_QWORD *)this + 2388) + 4LL * (unsigned int)(v8 + v7)) = v5;
  ++*((_DWORD *)this + 4773);
  v19 = 0;
  *a2 = v5;
LABEL_16:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v7);
  return v19;
}
