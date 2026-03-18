/*
 * XREFs of ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x180254EEC
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x180254FB8 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802553C4 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicExclusiveView::ActivateSwapChain(CHolographicExclusiveView *this, __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 74) && !*((_BYTE *)this + 73) )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v4 )
      v4 = (_QWORD *)v4[12];
    if ( v4 )
    {
      LOBYTE(a2) = 1;
      v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 296LL))(v4, a2);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x147u, 0LL);
      }
      else
      {
        *((_QWORD *)this + 15) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v4 + 80LL))(v4, &v10);
        v7 = CHolographicExclusiveView::OpenSurfaceHandles(this);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x14Bu, 0LL);
        else
          *((_BYTE *)this + 72) = 1;
      }
    }
  }
  return v2;
}
