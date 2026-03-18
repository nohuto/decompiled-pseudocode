/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1C020A5FC
 * Callers:
 *     ?OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z @ 0x1C020A1A0 (-OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03B780C (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 */

void __fastcall DxgMonitor::MonitorModes::_CleanupMonitorSourceModeAndFreqRanges(DxgMonitor::MonitorModes *this)
{
  _QWORD **v1; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // r8

  v1 = (_QWORD **)((char *)this + 152);
  if ( *v1 != v1 )
  {
    WdLogSingleEntry1(3LL, this);
    while ( 1 )
    {
      v3 = *v1;
      if ( *v1 == v1 )
        break;
      if ( (_QWORD **)v3[1] != v1 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
LABEL_43:
        __fastfail(3u);
      *v1 = v4;
      v4[1] = v1;
      operator delete(v3 - 12);
    }
  }
  v5 = (_QWORD **)((char *)this + 192);
  if ( *v5 != v5 )
  {
    WdLogSingleEntry1(3LL, this);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v6[1] != v5 )
        goto LABEL_43;
      v7 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_43;
      *v5 = v7;
      v7[1] = v5;
      operator delete(v6 - 6);
    }
  }
  if ( *((_DWORD *)this + 30) )
  {
    v8 = (_QWORD *)((char *)this + 128);
    if ( (_QWORD *)*v8 == v8 )
      WdLogSingleEntry0(1LL);
    while ( 1 )
    {
      v9 = (_QWORD *)*v8;
      if ( (_QWORD *)*v8 == v8 )
        break;
      if ( (_QWORD *)v9[1] != v8 )
        goto LABEL_43;
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_43;
      *v8 = v10;
      *(_QWORD *)(v10 + 8) = v8;
      operator delete(v9 - 12);
    }
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 1024;
  }
  if ( *((DxgMonitor::MonitorModes **)this + 16) != (DxgMonitor::MonitorModes *)((char *)this + 128) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 42) )
  {
    v11 = (_QWORD *)((char *)this + 176);
    if ( (_QWORD *)*v11 == v11 )
      WdLogSingleEntry0(1LL);
    v12 = (_QWORD *)*v11;
    if ( (_QWORD *)*v11 != v11 )
    {
      v13 = v12 - 6;
      if ( !v12 )
        v13 = 0LL;
      if ( v13 )
      {
        do
        {
          v14 = v13 + 6;
          v15 = (_QWORD *)v13[6];
          if ( v15 == v11 )
          {
            v16 = 0LL;
          }
          else
          {
            v16 = v15 - 6;
            if ( !v15 )
              v16 = 0LL;
          }
          if ( *(_DWORD *)v13 != 4 )
          {
            if ( (_QWORD *)v15[1] != v14 )
              goto LABEL_43;
            v17 = (_QWORD *)v13[7];
            if ( (_QWORD *)*v17 != v14 )
              goto LABEL_43;
            *v17 = v15;
            v15[1] = v17;
            operator delete(v13);
            --*((_DWORD *)this + 42);
          }
          v13 = v16;
        }
        while ( v16 );
      }
    }
  }
}
