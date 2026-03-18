/*
 * XREFs of ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18026FE54
 * Callers:
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802700F8 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800CA8AC (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z @ 0x18026F984 (--4-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z.c)
 */

__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  __int64 *v3; // r14
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, struct ID2D1Geometry **); // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct ID2D1GeometrySink **); // rdi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct ID2D1Geometry *v19; // rax
  struct ID2D1Geometry *v21; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1GeometrySink *v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = a2;
  v3 = (__int64 *)*((_QWORD *)this + 5);
  v4 = 0;
  v21 = 0LL;
  if ( !*((_QWORD *)this + 8) || v3 != *((__int64 **)this + 5) )
  {
    v7 = *v3;
    v22 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64 *, struct ID2D1Geometry **))(v7 + 80);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v21);
    v9 = v8(v3, &v21);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x67u);
    }
    else
    {
      v11 = (__int64)v21;
      v12 = *(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v21 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
      v13 = v12(v11, &v22);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x68u);
      }
      else
      {
        v15 = CPathData::PushIntoSink(this, v22);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x6Au);
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v22 + 72LL))(v22);
          v4 = v17;
          if ( v17 >= 0 )
          {
            if ( v3 == *((__int64 **)this + 5) )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, (signed __int64)v21, 0LL) )
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=((__int64 *)&v21, *((_QWORD *)this + 8));
              else
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x6Cu);
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=((__int64 *)&v21, *((_QWORD *)this + 8));
LABEL_13:
  v19 = v21;
  v21 = 0LL;
  *a3 = v19;
LABEL_19:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v21);
  return v4;
}
