/*
 * XREFs of ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x18000BE7C
 * Callers:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18000BE34 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041AC8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B7380 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D6404 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v6; // r10
  void *v7; // r8
  unsigned int v8; // ebx
  char v9; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r15
  int WorldTransform; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int128 v17; // xmm1
  __int64 v18; // rcx
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v23; // rcx
  unsigned int v24; // [rsp+28h] [rbp-E0h]
  void *v25[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+58h] [rbp-B0h]
  __int128 v28; // [rsp+68h] [rbp-A0h]
  int v29; // [rsp+78h] [rbp-90h]
  _OWORD v30[4]; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+C8h] [rbp-40h]
  _BYTE v32[64]; // [rsp+D8h] [rbp-30h] BYREF
  int v33; // [rsp+118h] [rbp+10h]
  __int64 v34; // [rsp+168h] [rbp+60h]

  v34 = a1;
  v6 = a4;
  v7 = 0LL;
  v8 = 0;
  v33 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = *a3;
  if ( *a3 <= 0 )
    return v8;
  v12 = 1065353216LL;
  while ( 1 )
  {
    if ( v10 >= v11 )
    {
LABEL_22:
      ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(a1, v12);
      __debugbreak();
    }
    v13 = *(_QWORD *)(a3[1] + 8 * v10);
    if ( v13 != v6 )
      break;
    if ( v10 >= *a5 )
      goto LABEL_22;
    v23 = *(_QWORD *)(a5[1] + 8 * v10);
    *(_QWORD *)v23 = 1065353216LL;
    *(_QWORD *)(v23 + 8) = 0LL;
    *(_DWORD *)(v23 + 16) = 0;
    *(_QWORD *)(v23 + 20) = 1065353216LL;
    *(_QWORD *)(v23 + 28) = 0LL;
    *(_DWORD *)(v23 + 36) = 0;
    *(_QWORD *)(v23 + 40) = 1065353216LL;
    *(_QWORD *)(v23 + 48) = 0LL;
    *(_DWORD *)(v23 + 56) = 0;
    *(_DWORD *)(v23 + 60) = 1065353216;
    *(_WORD *)(v23 + 64) = 32085;
LABEL_12:
    if ( (__int64)++v10 >= v11 )
      return v8;
    a1 = v34;
  }
  if ( !v9 )
  {
    WorldTransform = CVisual::GetWorldTransform(v6, a1, 3LL, v32, 0LL, 0LL);
    v8 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v24 = 1102;
      goto LABEL_20;
    }
    if ( !CMILMatrix::Invert((CMILMatrix *)v32) )
    {
      v8 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, (unsigned int)v7, -2003304441, 0x451u, v7);
      return v8;
    }
    a1 = v34;
    v9 = 1;
  }
  v31 = (int)v7;
  WorldTransform = CVisual::GetWorldTransform(v13, a1, 3LL, v30, v7, v7);
  v8 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    *(_OWORD *)v25 = v30[0];
    v29 = v31;
    v26 = v30[1];
    v27 = v30[2];
    v28 = v30[3];
    CMILMatrix::Multiply((CMILMatrix *)v25, (const struct CMILMatrix *)v32);
    if ( v10 >= *a5 )
      goto LABEL_22;
    v7 = 0LL;
    v6 = a4;
    v12 = 1065353216LL;
    v17 = v26;
    v18 = *(_QWORD *)(a5[1] + 8 * v10);
    v19 = v29;
    *(_OWORD *)v18 = *(_OWORD *)v25;
    v20 = v27;
    *(_OWORD *)(v18 + 16) = v17;
    v21 = v28;
    *(_OWORD *)(v18 + 32) = v20;
    *(_OWORD *)(v18 + 48) = v21;
    *(_DWORD *)(v18 + 64) = v19;
    goto LABEL_12;
  }
  v24 = 1115;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, WorldTransform, v24, 0LL);
  return v8;
}
