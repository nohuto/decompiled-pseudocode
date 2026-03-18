/*
 * XREFs of ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18025DE80
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180018C6C (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180019130 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateFullRectD2DGeometry(
        const struct MilPoint2F *a1,
        struct ID2D1PathGeometry **a2)
{
  unsigned int v2; // xmm0_4
  unsigned int v4; // xmm1_4
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+38h] [rbp-8h]
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+30h]
  __int64 v16; // [rsp+78h] [rbp+38h]

  v2 = *(_DWORD *)a1;
  v4 = *((_DWORD *)a1 + 1);
  v14 = 0LL;
  v15 = __PAIR64__(v4, v2);
  v16 = *((_QWORD *)a1 + 3);
  v12 = *((_QWORD *)a1 + 11);
  v13 = *((_QWORD *)a1 + 8);
  v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_DeviceManager + 80LL))(g_DeviceManager);
  v7 = v5;
  if ( v5 < 0 )
  {
    v11 = 271;
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 136LL))(*a2, &v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x111u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, v15, 0LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, v16);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, v12);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, v13);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, 1LL);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
    v7 = v5;
    if ( v5 < 0 )
    {
      v11 = 281;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v11, 0LL);
    }
  }
  ReleaseInterface<ID2D1Geometry>(&v14);
  return v7;
}
