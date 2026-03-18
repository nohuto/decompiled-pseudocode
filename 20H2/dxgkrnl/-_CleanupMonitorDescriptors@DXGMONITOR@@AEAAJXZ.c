/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02F8584
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02F758C (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F86D8 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C002261C (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(DXGMONITOR *this, __int64 a2)
{
  _QWORD **v2; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  int v7; // eax
  void *v8; // rcx
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  void *v13; // rcx
  void *v14; // rcx

  v2 = (_QWORD **)((char *)this + 192);
  if ( *v2 != v2 )
  {
    v4 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v4 + 24) = this;
    WdLogEvent5_WdError(v4);
    while ( 1 )
    {
      v5 = *v2;
      if ( *v2 == v2 )
        break;
      if ( (_QWORD **)v5[1] != v2 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v2 = v6;
      v6[1] = v2;
      operator delete(v5 - 4);
    }
  }
  v7 = *((_DWORD *)this + 32);
  if ( v7 )
  {
    v8 = (void *)*((_QWORD *)this + 17);
    v9 = v8;
    if ( !v8 )
    {
      v10 = WdLogNewEntry5_WdAssertion(0LL, 0LL);
      WdLogEvent5_WdAssertion(v10);
      v8 = (void *)*((_QWORD *)this + 17);
      v7 = *((_DWORD *)this + 32);
      v9 = v8;
    }
    v11 = 0LL;
    if ( v7 )
    {
      do
      {
        v12 = (_QWORD *)*((_QWORD *)v8 + v11);
        v9 = v8;
        if ( v12 )
        {
          do
          {
            v13 = v12;
            v12 = (_QWORD *)*v12;
            operator delete[](v13);
          }
          while ( v12 );
          v8 = (void *)*((_QWORD *)this + 17);
          v9 = v8;
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *((_DWORD *)this + 32) );
    }
    operator delete[](v9);
    *((_QWORD *)this + 17) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_QWORD *)this + 18) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 20);
  if ( v14 )
  {
    operator delete[](v14);
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 38) = 0;
    DisplayID_Initialize((DXGMONITOR *)((char *)this + 168), 0LL, 0);
  }
  return 0LL;
}
