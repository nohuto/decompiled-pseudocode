/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180070ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CChannel *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        const struct MilRectF *Src,
        const struct MilRectF *a6,
        const unsigned int *a7)
{
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // edi
  CDataStreamWriter *v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  CDataStreamWriter *v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // edi
  CDataStreamWriter *v25; // rcx
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // r8d
  _DWORD *v36; // rcx
  int v37; // eax
  __int64 v39; // r9
  __int64 v40; // rdx
  unsigned int v41; // [rsp+20h] [rbp-40h]
  char *v42; // [rsp+30h] [rbp-30h] BYREF
  int v43; // [rsp+38h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+3Ch] [rbp-24h]
  size_t v45; // [rsp+4Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  void *v47; // [rsp+80h] [rbp+20h] BYREF

  v42 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 7LL);
  v43 = 469;
  v45 = 0LL;
  *(_OWORD *)Size = 0LL;
  LODWORD(Size[0]) = a2;
  BYTE4(Size[0]) = a3;
  LODWORD(Size[1]) = a4;
  if ( 16 * (unsigned __int64)a4 > 0xFFFFFFFF )
  {
    v41 = 2638;
    goto LABEL_36;
  }
  v12 = 4LL * a4;
  HIDWORD(Size[1]) = 16 * a4;
  LODWORD(v45) = 16 * a4;
  if ( v12 > 0xFFFFFFFF )
  {
    v41 = 2640;
    goto LABEL_36;
  }
  v11 = 32 * a4;
  HIDWORD(v45) = 4 * a4;
  if ( 32 * a4 < 16 * a4 )
  {
    v41 = 2643;
    goto LABEL_36;
  }
  if ( v11 + (unsigned int)v12 < v11 )
  {
    v41 = 2644;
LABEL_36:
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, v41, 0LL);
    goto LABEL_20;
  }
  v13 = CChannel::BeginCommand((CDataStreamWriter **)this, &v43, 0x1Cu, v11 + (unsigned int)v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA55u, 0LL);
    goto LABEL_20;
  }
  v16 = HIDWORD(Size[1]);
  if ( HIDWORD(Size[1]) )
  {
    v17 = (CDataStreamWriter *)*((_QWORD *)this + 20);
    v47 = 0LL;
    v18 = CDataStreamWriter::GetItemDataWritePointer(v17, HIDWORD(Size[1]), &v47);
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xB2u, 0LL);
    else
      memcpy_0(v47, Src, v16);
  }
  v20 = v45;
  if ( (_DWORD)v45 )
  {
    v21 = (CDataStreamWriter *)*((_QWORD *)this + 20);
    v47 = 0LL;
    v22 = CDataStreamWriter::GetItemDataWritePointer(v21, v45, &v47);
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xB2u, 0LL);
    else
      memcpy_0(v47, a6, v20);
  }
  v24 = HIDWORD(v45);
  if ( HIDWORD(v45) )
  {
    v25 = (CDataStreamWriter *)*((_QWORD *)this + 20);
    v47 = 0LL;
    v26 = CDataStreamWriter::GetItemDataWritePointer(v25, HIDWORD(v45), &v47);
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xB2u, 0LL);
    else
      memcpy_0(v47, a7, v24);
  }
  v28 = *((_QWORD *)this + 20);
  if ( !*(_QWORD *)(v28 + 48) && !*(_DWORD *)(v28 + 56) )
  {
    v39 = 2147549183LL;
    v40 = 240LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v39);
    goto LABEL_20;
  }
  v29 = *(_DWORD *)(v28 + 56);
  v30 = (v29 + 3) & 0xFFFFFFFC;
  if ( v30 < v29 )
  {
    v39 = 2147942934LL;
    v40 = 259LL;
    goto LABEL_27;
  }
  v31 = *(_QWORD *)(v28 + 32);
  *(_DWORD *)(v28 + 56) = v30;
  v32 = v30 - v29;
  v33 = *(_DWORD *)(v31 + 20);
  if ( v33 + v32 < v33 )
  {
    *(_DWORD *)(v31 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0x247u, 0LL);
    goto LABEL_30;
  }
  *(_DWORD *)(v31 + 20) = v33 + v32;
  v34 = *(_DWORD *)(v28 + 44);
  v35 = v34 + v32;
  if ( v34 + v32 < v34 )
  {
    *(_DWORD *)(v28 + 44) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_30:
    v39 = 2147942934LL;
    v40 = 264LL;
    goto LABEL_27;
  }
  v36 = *(_DWORD **)(v28 + 48);
  v37 = *(_DWORD *)(v28 + 56);
  *(_DWORD *)(v28 + 44) = v35;
  *v36 = v37;
  *(_QWORD *)(v28 + 48) = 0LL;
  *(_DWORD *)(v28 + 56) = 0;
LABEL_20:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v42);
  return v15;
}
