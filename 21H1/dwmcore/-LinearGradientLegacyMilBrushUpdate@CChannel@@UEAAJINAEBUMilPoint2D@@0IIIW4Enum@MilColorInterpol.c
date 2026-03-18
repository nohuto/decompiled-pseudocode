/*
 * XREFs of ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180153590
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18003812C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18003871C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180039020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800B49B8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B4A68 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

__int64 __fastcall CChannel::LinearGradientLegacyMilBrushUpdate(
        __int64 a1,
        unsigned int a2,
        double a3,
        __int128 *a4,
        __int128 *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        unsigned int a13)
{
  int v16; // esi
  int v17; // edi
  int v18; // ebx
  __int128 v19; // xmm1
  float v20; // xmm0_4
  __int128 v21; // xmm0
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  int v27; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v28[8]; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-35h]
  __int128 v30; // [rsp+60h] [rbp-31h]
  __int128 v31; // [rsp+70h] [rbp-21h]
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+C8h] [rbp+37h] BYREF

  v32 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 98);
  v16 = a6;
  CChannel::CheckOptionalHandle(a1, a6);
  v17 = a7;
  CChannel::CheckOptionalHandle(a1, a7);
  v18 = a8;
  CChannel::CheckOptionalHandle(a1, a8);
  v27 = 488;
  memset_0(v28, 0, 0x44uLL);
  v19 = *a4;
  v28[0] = a2;
  v20 = a3;
  v28[2] = v16;
  v28[3] = v17;
  v28[4] = v18;
  v30 = v19;
  *(float *)&v28[1] = v20;
  v21 = *a5;
  v28[5] = a9;
  v28[6] = a10;
  v28[7] = a11;
  v31 = v21;
  v22 = 24LL * a13;
  if ( v22 > 0xFFFFFFFF )
  {
    v25 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0xB2Eu, 0LL);
  }
  else
  {
    v29 = 24 * a13;
    v23 = CChannel::BeginCommand((CDataStreamWriter **)a1, &v27, 0x48u, v22);
    v25 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xB2Fu, 0LL);
    }
    else
    {
      CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 160), a12, v29);
      CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 160));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v32);
  return v25;
}
