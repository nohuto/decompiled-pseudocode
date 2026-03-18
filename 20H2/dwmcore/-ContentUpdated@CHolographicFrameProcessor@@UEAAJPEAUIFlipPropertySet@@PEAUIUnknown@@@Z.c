/*
 * XREFs of ?ContentUpdated@CHolographicFrameProcessor@@UEAAJPEAUIFlipPropertySet@@PEAUIUnknown@@@Z @ 0x180259C10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicFrameProcessor::ContentUpdated(
        CHolographicFrameProcessor *this,
        struct IFlipPropertySet *a2,
        struct IUnknown *a3)
{
  unsigned int v3; // ebx
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    lpVtbl = a3->lpVtbl;
    v15 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a3,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v15);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xCBu, 0LL);
    }
    else
    {
      v9 = *((_QWORD *)this + 3);
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v15);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 1176LL))(
              *((_QWORD *)this + 9),
              *((_QWORD *)this + 13),
              ++*((_QWORD *)this + 14));
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD4u, 0LL);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct IUnknown *))(**((_QWORD **)this + 12) + 48LL))(
                *((_QWORD *)this + 12),
                *((_QWORD *)this + 13),
                *((_QWORD *)this + 14),
                a3);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xD5u, 0LL);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  return v3;
}
