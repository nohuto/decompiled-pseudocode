/*
 * XREFs of ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C02FC944
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C015E550 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02FEDB0 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x1C0300510 (-WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall BLTENTRY::Blt(BLTENTRY *this)
{
  struct DXGDEVICE *v2; // r8
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  *((LARGE_INTEGER *)this + 68) = KeQueryPerformanceCounter(0LL);
  if ( (*((_DWORD *)this + 16) & 8) != 0 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v2 = (struct DXGDEVICE *)*((_QWORD *)this + 71);
    if ( !v2
      || (v3 = BLTQUEUE::WaitFence(*((BLTQUEUE **)this + 3), *((_QWORD *)this + 70), v2),
          *((_QWORD *)this + 71) = 0LL,
          LODWORD(v4) = v3,
          v3 >= 0) )
    {
      v5 = BLTQUEUE::PresentDisplayOnly(
             *((BLTQUEUE **)this + 3),
             (struct _DXGKARG_PRESENT_DISPLAYONLY *)((char *)this + 72));
      v4 = v5;
      if ( v5 < 0 )
      {
        v8 = WdLogNewEntry5_WdError(v7, v6);
        *(_QWORD *)(v8 + 24) = v4;
        *(_QWORD *)(v8 + 32) = this;
        WdLogEvent5_WdError(v8);
      }
    }
  }
  *((LARGE_INTEGER *)this + 69) = KeQueryPerformanceCounter(0LL);
  return (unsigned int)v4;
}
