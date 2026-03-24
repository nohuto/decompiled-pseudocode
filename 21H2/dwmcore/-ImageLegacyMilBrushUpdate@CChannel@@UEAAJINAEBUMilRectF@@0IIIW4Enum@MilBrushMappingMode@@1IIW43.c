/*
 * XREFs of ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x1800D60D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E524 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

__int64 __fastcall CChannel::ImageLegacyMilBrushUpdate(
        __int64 a1,
        unsigned int a2,
        double a3,
        __int128 *a4,
        __int128 *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        unsigned int a17)
{
  __int64 v17; // rsi
  unsigned int v19; // r12d
  unsigned int v20; // r15d
  unsigned int v21; // r14d
  unsigned int v22; // edi
  unsigned int v23; // ebx
  float v24; // xmm0_4
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v27; // ebx
  int v29; // [rsp+28h] [rbp-79h] BYREF
  _DWORD v30[7]; // [rsp+2Ch] [rbp-75h] BYREF
  __int128 v31; // [rsp+48h] [rbp-59h]
  unsigned int v32; // [rsp+58h] [rbp-49h]
  __int128 v33; // [rsp+5Ch] [rbp-45h]
  unsigned int v34; // [rsp+6Ch] [rbp-35h]
  int v35; // [rsp+70h] [rbp-31h]
  int v36; // [rsp+74h] [rbp-2Dh]
  int v37; // [rsp+78h] [rbp-29h]
  int v38; // [rsp+7Ch] [rbp-25h]
  int v39; // [rsp+8Ch] [rbp-15h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+F8h] [rbp+57h] BYREF
  __int128 *v42; // [rsp+100h] [rbp+5Fh]

  v42 = a4;
  v17 = a1;
  v41 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(v17, a2, 82);
  v19 = a6;
  CChannel::CheckOptionalHandle(v17, a6, 60);
  v20 = a7;
  CChannel::CheckOptionalHandle(v17, a7, 185);
  v21 = a8;
  CChannel::CheckOptionalHandle(v17, a8, 185);
  v22 = a11;
  CChannel::CheckOptionalHandle(v17, a11, 140);
  v23 = a12;
  CChannel::CheckOptionalHandle(v17, a12, 140);
  LODWORD(v17) = a17;
  CChannel::CheckOptionalHandle(a1, a17, 83);
  v29 = 487;
  memset_0(v30, 0, 0x64uLL);
  v24 = a3;
  v30[0] = a2;
  v30[2] = v19;
  v30[3] = v20;
  v30[4] = v21;
  v25 = *v42;
  *(float *)&v30[1] = v24;
  v31 = v25;
  v32 = v22;
  v26 = *a5;
  v30[5] = a9;
  v30[6] = a10;
  v35 = a13;
  v36 = a14;
  v37 = a15;
  v38 = a16;
  v33 = v26;
  v34 = v23;
  v39 = v17;
  v27 = CChannel::SendCommand((CChannel *)a1, &v29, 0x68u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v41);
  return v27;
}
