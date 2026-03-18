/*
 * XREFs of ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x1C029A7FC
 * Callers:
 *     DxgkReleaseGdiViewId @ 0x1C029B7E4 (DxgkReleaseGdiViewId.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionGdiViewId(DXGSESSIONDATA *this, signed __int32 a2, char a3)
{
  __int64 v6; // rdx
  int v7; // r9d
  __int64 v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONDATA *)((char *)this + 19048), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v7 = *((_DWORD *)this + 4773);
  v8 = 0LL;
  v9 = *((_DWORD *)this + 4772);
  v10 = v9 + v7;
  if ( (_DWORD)v10 )
  {
    v6 = *((_QWORD *)this + 2388);
    do
    {
      if ( *(_DWORD *)(v6 + 4 * v8) == a2 )
        break;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < (unsigned int)v10 );
  }
  if ( (unsigned int)v8 >= (unsigned int)v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v6);
    *(_QWORD *)(v11 + 24) = 4627LL;
    WdLogEvent5_WdAssertion(v11);
    v7 = *((_DWORD *)this + 4773);
    v9 = *((_DWORD *)this + 4772);
  }
  if ( (unsigned int)v8 < v9 + v7 )
  {
    if ( (unsigned int)v8 >= v9 )
      *((_DWORD *)this + 4773) = --v7;
    else
      *((_DWORD *)this + 4772) = --v9;
    if ( (unsigned int)v8 < v9 + v7 )
      memmove(
        (void *)(*((_QWORD *)this + 2388) + 4 * v8),
        (const void *)(*((_QWORD *)this + 2388) + 4LL * (unsigned int)(v8 + 1)),
        4LL * (v9 + v7 - (unsigned int)v8));
  }
  if ( a3 )
    _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, a2 - 1, a2);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v6);
}
