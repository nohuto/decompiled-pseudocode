/*
 * XREFs of ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C0268EB0
 * Callers:
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C0268E28 (-DxgkEnableClockCalibration@@YAXE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C011F2D0 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGGLOBAL::EnableClockCalibration(DXGGLOBAL *this, char a2)
{
  _QWORD **v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  char v10[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-20h]
  char v12; // [rsp+40h] [rbp-18h]

  v3 = (_QWORD **)((char *)this + 664);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = *v3;
  while ( v5 != v3 && v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6[338] )
    {
      _m_prefetchw(v6 + 3);
      v7 = v6[3];
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
      if ( (_BYTE)v7 )
      {
        v11 = v6;
        v12 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        if ( *((_DWORD *)v6 + 50) == 1 )
          ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)v6[338], a2);
        if ( v12 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
      }
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v4);
}
