/*
 * XREFs of ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18007D084
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::BeginCompositionFrame(CComposition *this)
{
  LARGE_INTEGER **v1; // rdx
  LARGE_INTEGER v3; // r8
  LONGLONG QuadPart; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  _QWORD *v11; // rcx
  LARGE_INTEGER PerformanceCount[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-20h]

  v1 = (LARGE_INTEGER **)*((_QWORD *)this + 61);
  *(_OWORD *)&PerformanceCount[0].LowPart = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( v1 )
  {
    *((LARGE_INTEGER *)this + 60) = (*v1)[8];
    PerformanceCount[0] = (*v1)[7];
    v3 = (*v1)[29];
    PerformanceCount[1] = v3;
    LODWORD(v14) = (*v1)[6].LowPart;
    QuadPart = (*v1)[32].QuadPart;
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount[1]);
    PerformanceCount[0].QuadPart = 0LL;
    LODWORD(v14) = 0;
    v3 = PerformanceCount[1];
    QuadPart = g_qpcFrequency.QuadPart / 60;
  }
  v5 = *((_QWORD *)this + 78);
  v6 = (_QWORD *)((char *)this + 496);
  *((_QWORD *)&v14 + 1) = QuadPart;
  *((LARGE_INTEGER *)this + 76) = v3;
  *(_QWORD *)(v5 + 4136) = QuadPart;
  v7 = *((_QWORD *)this + 81);
  v15 = *((_OWORD *)this + 81);
  v8 = (*(__int64 (__fastcall **)(__int64, LARGE_INTEGER *, char *))(*(_QWORD *)v7 + 16LL))(
         v7,
         PerformanceCount,
         (char *)this + 496);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xD1Du);
  if ( *((_BYTE *)this + 1278) )
  {
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)this + 136LL))(this);
    *((_BYTE *)this + 1278) = 0;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 61);
  if ( v11 )
  {
    v11 = (_QWORD *)*v11;
    v11[3] = *v6;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0x_EventWriteTransfer(v11, &CurrentFrameId, *v6);
  if ( DWORD2(v15) )
    dword_1803D3160 |= 0x40u;
  return v10;
}
