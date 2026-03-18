/*
 * XREFs of ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C1AF0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C22A4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801C2C78 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x180238820 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 */

__int64 __fastcall CGenericInk::CreateResource(CGenericInk *this, struct CD3DDevice *a2, struct CD2DGenericInk **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  CRenderTargetBitmap *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  CRenderTargetBitmap *v19; // [rsp+68h] [rbp+10h] BYREF

  *a3 = 0LL;
  v19 = 0LL;
  v6 = CD2DContext::CreateGenericInk((struct CD3DDevice *)((char *)a2 + 16), &v19);
  v8 = v19;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1ACu, 0LL);
  }
  else
  {
    v10 = *((_QWORD *)v19 + 10);
    if ( *((_DWORD *)this + 48)
      && (v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 40LL))(
                  *((_QWORD *)v19 + 10),
                  *((_QWORD *)this + 21)),
          v9 = v11,
          v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1B2u, 0LL);
    }
    else
    {
      v13 = *((_DWORD *)this + 56);
      if ( v13
        && (v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v10 + 48LL))(
                    v10,
                    0LL,
                    *((_QWORD *)this + 25),
                    v13 / *((_DWORD *)this + 58),
                    *((_DWORD *)this + 59),
                    *((_DWORD *)this + 58),
                    0LL),
            v9 = v14,
            v14 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1BEu, 0LL);
      }
      else
      {
        v16 = CGenericInk::SetContextMsgRoutingInfo(this, a2);
        v9 = v16;
        if ( v16 >= 0 )
        {
          *a3 = v8;
          (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
          return v9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1C1u, 0LL);
      }
    }
  }
  if ( v8 )
    CRenderTargetBitmap::Release(v8);
  return v9;
}
