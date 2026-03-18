/*
 * XREFs of ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x1801E9B40
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801EA384 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqff_EventWriteTransfer @ 0x1801EAF50 (McTemplateU0qqqff_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::DecideBufferToDispatch(
        CComputeScribbleScheduler *this,
        struct CComputeScribbleFramebuffer **a2,
        struct CComputeScribbleFramebuffer **a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  unsigned __int64 v11; // rax
  double v12; // xmm0_8
  int v13; // r8d
  int v14; // r9d
  double v15; // xmm3_8
  double v16; // xmm5_8
  struct CComputeScribbleFramebuffer *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rdx
  int v21; // r8d
  struct CComputeScribbleFramebuffer *v22; // rdx
  int v23; // r9d
  int v24; // ecx
  float v25; // [rsp+28h] [rbp-80h]
  float v26; // [rsp+30h] [rbp-78h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v28[4]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v29; // [rsp+58h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3;
  v7 = *((_QWORD *)this + 25) + 24LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 16LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 32LL))(v7, v28);
  v9 = v8;
  if ( v8 >= 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v11 = (PerformanceCount.QuadPart - v29) / (qword_1803D32C0 / 0xF4240uLL);
    if ( (v11 & 0x8000000000000000uLL) != 0LL )
      v12 = (double)(int)(v11 & 1 | (v11 >> 1)) + (double)(int)(v11 & 1 | (v11 >> 1));
    else
      v12 = (double)(int)v11;
    v13 = 0;
    v14 = v28[0] - *((_DWORD *)this + 44);
    v15 = 0.0;
    v16 = 0.0;
    if ( (_DWORD)v6 )
    {
      while ( 1 )
      {
        v17 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 14) + 8LL * ((v13 + v14) % (unsigned int)v6));
        if ( *((_BYTE *)v17 + 240) )
        {
          v18 = *((_QWORD *)this + 17);
          v19 = 32LL * ((v13 + v14) % (unsigned int)v6);
          if ( !v13 )
          {
            v16 = *(double *)(v19 + v18 + 8);
            *(_QWORD *)&v15 = COERCE_UNSIGNED_INT64(*((double *)this + 6) - v12 / 1000000.0 - (v16
                                                                                             - (double)0
                                                                                             * *((double *)this + 6))) & _xmm;
          }
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                               *((double *)this + 6)
                             - v12 / 1000000.0
                             - (*(double *)(v19 + v18 + 8)
                              - (double)v13 * *((double *)this + 6))) & _xmm) < 0.002499999944120646 )
            break;
        }
        if ( ++v13 >= (unsigned int)v6 )
          goto LABEL_14;
      }
      *a2 = v17;
    }
LABEL_14:
    v20 = (v14 + 1) % (unsigned int)v6;
    v21 = v20;
    if ( *a2 )
      v20 = (*((_DWORD *)*a2 + 61) + 1) % (unsigned int)v6;
    v22 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 14) + 8 * v20);
    if ( *((_BYTE *)v22 + 240) )
      *a3 = v22;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      v23 = -1;
      if ( *a3 )
        v24 = *((_DWORD *)*a3 + 61);
      else
        v24 = -1;
      if ( *a2 )
        v23 = *((_DWORD *)*a2 + 61);
      v26 = v16;
      v25 = v15;
      McTemplateU0qqqff_EventWriteTransfer(v24, (_DWORD)v22, v21, v23, v24, SLOBYTE(v25), SLOBYTE(v26));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x278,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
