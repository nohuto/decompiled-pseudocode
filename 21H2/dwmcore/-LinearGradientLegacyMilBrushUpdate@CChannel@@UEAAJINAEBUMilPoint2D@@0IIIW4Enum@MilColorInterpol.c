/*
 * XREFs of ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x1801AAD90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070B20 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CChannel::LinearGradientLegacyMilBrushUpdate(
        __int64 a1,
        unsigned int a2,
        double a3,
        __int128 *a4,
        void *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *Src,
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
  unsigned int v25; // esi
  unsigned int v26; // edi
  CDataStreamWriter *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // r8d
  _DWORD *v40; // rcx
  int v41; // eax
  int v43; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v44[8]; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int Size[5]; // [rsp+5Ch] [rbp-35h]
  __int128 v46; // [rsp+70h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+2Fh]
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+C8h] [rbp+37h] BYREF

  v48 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 98);
  v16 = a6;
  CChannel::CheckOptionalHandle(a1, a6);
  v17 = a7;
  CChannel::CheckOptionalHandle(a1, a7);
  v18 = a8;
  CChannel::CheckOptionalHandle(a1, a8);
  v43 = 483;
  memset_0(v44, 0, 0x44uLL);
  v19 = *a4;
  v44[0] = a2;
  v20 = a3;
  v44[2] = v16;
  v44[3] = v17;
  v44[4] = v18;
  *(_OWORD *)&Size[1] = v19;
  *(float *)&v44[1] = v20;
  v21 = *(_OWORD *)a5;
  v44[5] = a9;
  v44[6] = a10;
  v44[7] = a11;
  v46 = v21;
  v22 = 24LL * a13;
  if ( v22 > 0xFFFFFFFF )
  {
    v25 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2147024362, 0xB85u);
    goto LABEL_21;
  }
  Size[0] = 24 * a13;
  v23 = CChannel::BeginCommand((CDataStreamWriter **)a1, &v43, 0x48u, v22);
  v25 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0xB86u);
    goto LABEL_21;
  }
  v26 = Size[0];
  if ( Size[0] )
  {
    v27 = *(CDataStreamWriter **)(a1 + 160);
    a5 = 0LL;
    v28 = CDataStreamWriter::GetItemDataWritePointer(v27, Size[0], &a5);
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0xB2u);
    else
      memcpy_0(a5, Src, v26);
  }
  v30 = *(_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(v30 + 48) || *(_DWORD *)(v30 + 56) )
  {
    v33 = *(_DWORD *)(v30 + 56);
    v34 = (v33 + 3) & 0xFFFFFFFC;
    if ( v34 < v33 )
    {
      v31 = 2147942934LL;
      v32 = 259LL;
    }
    else
    {
      v35 = *(_QWORD *)(v30 + 32);
      *(_DWORD *)(v30 + 56) = v34;
      v36 = v34 - v33;
      v37 = *(_DWORD *)(v35 + 20);
      if ( v37 + (unsigned int)v36 < v37 )
      {
        *(_DWORD *)(v35 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, -2147024362, 0x247u);
      }
      else
      {
        *(_DWORD *)(v35 + 20) = v37 + v36;
        v38 = *(_DWORD *)(v30 + 44);
        v39 = v38 + v36;
        if ( v38 + (unsigned int)v36 >= v38 )
        {
          v40 = *(_DWORD **)(v30 + 48);
          v41 = *(_DWORD *)(v30 + 56);
          *(_DWORD *)(v30 + 44) = v39;
          *v40 = v41;
          *(_QWORD *)(v30 + 48) = 0LL;
          *(_DWORD *)(v30 + 56) = 0;
          goto LABEL_21;
        }
        *(_DWORD *)(v30 + 44) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, -2147024362, 0x248u);
      }
      v31 = 2147942934LL;
      v32 = 264LL;
    }
  }
  else
  {
    v31 = 2147549183LL;
    v32 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v31);
LABEL_21:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v48);
  return v25;
}
