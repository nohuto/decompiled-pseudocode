/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02F51A8
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02F852C (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F9678 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(DXGMONITOR *this, __int64 a2)
{
  unsigned int v3; // ebp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // r8

  v3 = -1073741275;
  if ( *((_DWORD *)this + 64) )
  {
    v4 = (_QWORD *)((char *)this + 264);
    if ( (_QWORD *)*v4 == v4 )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v5);
    }
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      v7 = v6 - 6;
      if ( !v6 )
        v7 = 0LL;
      if ( v7 )
      {
        do
        {
          v8 = v7 + 6;
          v9 = (_QWORD *)v7[6];
          if ( v9 == v4 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = v9 - 6;
            if ( !v9 )
              v10 = 0LL;
          }
          if ( *(_DWORD *)v7 == 4 )
          {
            if ( (_QWORD *)v9[1] != v8 || (v11 = (_QWORD *)v7[7], (_QWORD *)*v11 != v8) )
              __fastfail(3u);
            *v11 = v9;
            v9[1] = v11;
            operator delete(v7);
            --*((_DWORD *)this + 64);
            v3 = 0;
            --*((_DWORD *)this + 33);
          }
          v7 = v10;
        }
        while ( v10 );
      }
    }
  }
  return v3;
}
