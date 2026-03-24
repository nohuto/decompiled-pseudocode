/*
 * XREFs of ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1C02688E0
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C002372C (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::CaptureSchedulerLogs(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _QWORD *v7; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  char v9[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  v1 = (_QWORD **)((char *)this + 664);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v3 = *v1;
  while ( v3 != v1 && v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    if ( v4[338] )
    {
      _m_prefetchw(v4 + 3);
      v5 = v4[3];
      while ( v5 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64(v4 + 3, v5 + 1, v5);
        if ( v6 == v5 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
      if ( (_BYTE)v5 )
      {
        v10 = v4;
        v11 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
        if ( *((_DWORD *)v4 + 50) == 1 )
        {
          v7 = (_QWORD *)v4[338];
          if ( !*(_BYTE *)(v7[2] + 209LL) )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v7[77] + 8LL) + 56LL))(v7[78]);
        }
        if ( v11 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
      }
    }
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v2);
}
