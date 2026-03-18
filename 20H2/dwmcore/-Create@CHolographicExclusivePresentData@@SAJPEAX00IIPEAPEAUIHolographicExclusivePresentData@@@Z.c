/*
 * XREFs of ?Create@CHolographicExclusivePresentData@@SAJPEAX00IIPEAPEAUIHolographicExclusivePresentData@@@Z @ 0x18025A504
 * Callers:
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x180254884 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicExclusivePresentData::Create(
        void *a1,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct IHolographicExclusivePresentData **a6)
{
  unsigned int v7; // edi
  struct IHolographicExclusivePresentData *v11; // rax
  __int64 v12; // rcx
  struct IHolographicExclusivePresentData *v13; // rbx

  v7 = 0;
  v11 = (struct IHolographicExclusivePresentData *)operator new(0x38uLL);
  v13 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = 0;
    *(_QWORD *)v11 = &CHolographicExclusivePresentData::`vftable'{for `IHolographicExclusivePresentData'};
    *((_QWORD *)v11 + 1) = &CHolographicExclusivePresentData::`vftable'{for `CMILCOMBase'};
    *((_DWORD *)v11 + 6) = a5;
    *((_DWORD *)v11 + 7) = a4;
    *((_QWORD *)v11 + 4) = a3;
    *((_QWORD *)v11 + 5) = a1;
    *((_QWORD *)v11 + 6) = a2;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    (*(void (__fastcall **)(struct IHolographicExclusivePresentData *))(*(_QWORD *)v13 + 8LL))(v13);
    *a6 = v13;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x12u, 0LL);
  }
  return v7;
}
