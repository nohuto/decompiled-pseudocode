/*
 * XREFs of ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x1801F70E8
 * Callers:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18023610C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(
        gsl::details *a1,
        __int64 a2,
        unsigned __int64 *a3,
        CVisual *a4,
        unsigned __int64 *a5)
{
  CVisual *v6; // r10
  bool *v7; // r8
  unsigned int v8; // ebx
  char v9; // r12
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  CVisual *v12; // r15
  __int64 v13; // rcx
  char v14; // al
  int WorldTransform; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  gsl::details *v23; // rcx
  int v24; // edx
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int64 v28; // rcx
  void *v30[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-C0h]
  __int128 v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+68h] [rbp-A0h]
  int v34; // [rsp+78h] [rbp-90h]
  _OWORD v35[4]; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+C8h] [rbp-40h]
  _BYTE v37[64]; // [rsp+D8h] [rbp-30h] BYREF
  int v38; // [rsp+118h] [rbp+10h]
  gsl::details *v39; // [rsp+168h] [rbp+60h]

  v39 = a1;
  v6 = a4;
  v7 = 0LL;
  v8 = 0;
  v38 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = *a3;
  if ( *a3 )
  {
    while ( 1 )
    {
      if ( v10 >= v11 )
      {
LABEL_20:
        gsl::details::terminate(a1);
        JUMPOUT(0x1801F731CLL);
      }
      v12 = *(CVisual **)(a3[1] + 8 * v10);
      if ( v12 == v6 )
      {
        if ( v10 >= *a5 )
          goto LABEL_20;
        v13 = *(_QWORD *)(a5[1] + 8 * v10);
        *(_QWORD *)v13 = 1065353216LL;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_DWORD *)(v13 + 16) = 0;
        *(_QWORD *)(v13 + 20) = 1065353216LL;
        *(_QWORD *)(v13 + 28) = 0LL;
        *(_DWORD *)(v13 + 36) = 0;
        *(_QWORD *)(v13 + 40) = 1065353216LL;
        *(_QWORD *)(v13 + 48) = 0LL;
        *(_DWORD *)(v13 + 56) = 0;
        *(_DWORD *)(v13 + 60) = 1065353216;
        v14 = *(_BYTE *)(v13 + 65) & 0xD7;
        *(_BYTE *)(v13 + 64) = 85;
        *(_BYTE *)(v13 + 65) = v14 | 0x17;
      }
      else
      {
        if ( !v9 )
        {
          WorldTransform = CVisual::GetWorldTransform(v6, a1, 3, (__int64)v37, 0LL, 0LL);
          v8 = WorldTransform;
          if ( WorldTransform < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, WorldTransform, 0x408u);
            return v8;
          }
          if ( !CMILMatrix::Invert((CMILMatrix *)v37, v16, 0LL) )
          {
            v8 = -2003304441;
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, (__int64)v7, -2003304441, 0x40Bu);
            return v8;
          }
          a1 = v39;
          v9 = 1;
        }
        v36 = (int)v7;
        v19 = CVisual::GetWorldTransform(v12, a1, 3, (__int64)v35, v7, (struct CMILMatrix *)v7);
        v8 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x415u);
          return v8;
        }
        *(_OWORD *)v30 = v35[0];
        v34 = v36;
        v31 = v35[1];
        v32 = v35[2];
        v33 = v35[3];
        CMILMatrix::Multiply((CMILMatrix *)v30, (const struct CMILMatrix *)v37, v21, v22);
        v24 = v34;
        v25 = v31;
        v26 = v32;
        v27 = v33;
        if ( v10 >= *a5 )
        {
          gsl::details::terminate(v23);
          __debugbreak();
        }
        v7 = 0LL;
        v6 = a4;
        v28 = *(_QWORD *)(a5[1] + 8 * v10);
        *(_OWORD *)v28 = *(_OWORD *)v30;
        *(_OWORD *)(v28 + 16) = v25;
        *(_OWORD *)(v28 + 32) = v26;
        *(_OWORD *)(v28 + 48) = v27;
        *(_DWORD *)(v28 + 64) = v24;
      }
      if ( ++v10 >= v11 )
        return v8;
      a1 = v39;
    }
  }
  return v8;
}
