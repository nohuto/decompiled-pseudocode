/*
 * XREFs of ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C00DED04
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0118314 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00DEE04 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C0159758 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C02FFD30 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfoWorker(BLTQUEUE *this)
{
  LARGE_INTEGER v2; // rax
  __int64 v3; // rcx
  int v4; // r9d
  unsigned int v5; // edx
  LARGE_INTEGER v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 45) = *((_QWORD *)this + 72);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  PerformanceFrequency.QuadPart = 0LL;
  v9 = 2;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = *((unsigned int *)this + 90);
  v4 = *((_DWORD *)this + 146);
  *((LARGE_INTEGER *)this + 54) = v2;
  *((_QWORD *)this + 57) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 91) / v3;
  v5 = 40 * v4 / 0x3E8u;
  *((_DWORD *)this + 116) = v5;
  v6 = *(LARGE_INTEGER *)this;
  *((_DWORD *)this + 117) = v5 + v4;
  *((_DWORD *)this + 118) = v5 + v4 + 5 * v4 / 0x3E8u;
  if ( v6.QuadPart )
    *((_DWORD *)this + 63) = *(_DWORD *)(3968LL * *((unsigned int *)this + 62)
                                       + *(_QWORD *)(*(_QWORD *)(v6.QuadPart + 88) + 112LL)
                                       + 1068);
  if ( (*((_DWORD *)this + 234) & 2) != 0 && *((_DWORD *)this + 34) != 1 )
  {
    BLTQUEUE::StopVSync(this, 1);
    BLTQUEUE::StartVSync(this, 1);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  *((_BYTE *)this + 562) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
