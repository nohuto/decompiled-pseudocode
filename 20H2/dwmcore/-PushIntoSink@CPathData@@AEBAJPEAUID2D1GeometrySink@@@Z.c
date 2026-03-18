/*
 * XREFs of ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x18021E3F0
 * Callers:
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18021E168 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18021DC44 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

__int64 __fastcall CPathData::PushIntoSink(CPathData *this, struct ID2D1GeometrySink *a2)
{
  char *v2; // rbx
  char *v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // xmm1_4
  void (__fastcall *v9)(struct ID2D1GeometrySink *, __int128 *); // rax
  void (__fastcall *v10)(struct ID2D1GeometrySink *, __int128 *); // rax
  bool v11; // zf
  int v12; // xmm0_4
  __int64 v13; // rdx
  char *v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+38h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  BOOL v18; // [rsp+4Ch] [rbp-24h]
  BOOL v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v2 = (char *)*((_QWORD *)this + 3);
  v4 = (char *)*((_QWORD *)this + 4);
  v5 = 0;
  v15 = v2;
  while ( v2 != v4 )
  {
    if ( v2[1] < 0 )
    {
      v6 = (unsigned __int8)v2[1];
      LODWORD(v6) = v6 & 0xFFFFFF7F;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v6);
    }
    if ( *v2 )
    {
      switch ( *v2 )
      {
        case 1:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, bool))(*(_QWORD *)a2 + 64LL))(a2, v2[2] != 0);
          break;
        case 2:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, *((_QWORD *)v2 + 1));
          break;
        case 3:
          v11 = v2[2] == 0;
          v16 = *(_OWORD *)(v2 + 8);
          v12 = *((_DWORD *)v2 + 6);
          v18 = !v11;
          v11 = v2[3] == 0;
          v17 = v12;
          v19 = !v11;
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 112LL))(a2, &v16);
          break;
        case 4:
          v10 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 96LL);
          v20 = *(_OWORD *)(v2 + 8);
          v10(a2, &v20);
          break;
        case 5:
          v7 = *(_QWORD *)a2;
          v8 = *((_DWORD *)v2 + 7);
          v16 = *(_OWORD *)(v2 + 8);
          v9 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v7 + 88);
          v17 = *((_DWORD *)v2 + 6);
          v18 = v8;
          v9(a2, &v16);
          break;
        default:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(
            (unsigned int)(unsigned __int8)*v2 - 4,
            0LL,
            0,
            -2147024809,
            0x1CCu,
            0LL);
          return v5;
      }
    }
    else
    {
      if ( v2[2] < 0 )
      {
        v13 = (unsigned __int8)v2[2];
        LODWORD(v13) = v13 & 0xFFFFFF7F;
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v13);
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, bool))(*(_QWORD *)a2 + 40LL))(
        a2,
        *((_QWORD *)v2 + 1),
        v2[3] != 0);
    }
    Path::SegmentCollection::const_iterator::operator++(&v15);
    v2 = v15;
  }
  return v5;
}
