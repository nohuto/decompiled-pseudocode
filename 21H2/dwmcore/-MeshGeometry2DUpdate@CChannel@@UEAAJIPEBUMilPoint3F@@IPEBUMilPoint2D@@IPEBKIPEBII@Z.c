/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801AB660
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

__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct MilPoint3F *a3,
        unsigned int a4,
        const struct MilPoint2D *Src,
        unsigned int a6,
        const unsigned int *a7,
        unsigned int a8,
        const unsigned int *a9,
        unsigned int a10)
{
  __int64 v11; // rdi
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned int v23; // edi
  CDataStreamWriter *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // edi
  CDataStreamWriter *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // edi
  CDataStreamWriter *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // edi
  CDataStreamWriter *v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  CDataStreamWriter *v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // eax
  int v48; // r8d
  _DWORD *v49; // rcx
  int v50; // eax
  unsigned int v52; // [rsp+20h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+30h] [rbp-20h] BYREF
  int v54; // [rsp+38h] [rbp-18h] BYREF
  size_t Size[2]; // [rsp+3Ch] [rbp-14h]
  size_t var4; // [rsp+4Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *v58; // [rsp+80h] [rbp+30h] BYREF

  v11 = a4;
  v53 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 109);
  v54 = 488;
  LODWORD(var4) = 0;
  v15 = 12 * v11;
  *(_OWORD *)Size = 0LL;
  LODWORD(Size[0]) = a2;
  if ( (unsigned __int64)(12 * v11) > 0xFFFFFFFF )
  {
    v52 = 2582;
    goto LABEL_45;
  }
  v16 = 16LL * a6;
  HIDWORD(Size[0]) = 12 * v11;
  if ( v16 > 0xFFFFFFFF )
  {
    v52 = 2583;
    goto LABEL_45;
  }
  v14 = 4LL * a8;
  LODWORD(Size[1]) = 16 * a6;
  if ( v14 > 0xFFFFFFFF )
  {
    v52 = 2584;
    goto LABEL_45;
  }
  v17 = 4LL * a10;
  HIDWORD(Size[1]) = 4 * a8;
  if ( v17 > 0xFFFFFFFF )
  {
    v52 = 2585;
    goto LABEL_45;
  }
  v18 = v15 + v16;
  LODWORD(var4) = 4 * a10;
  if ( v15 + (unsigned int)v16 < v15 )
  {
    v52 = 2588;
    goto LABEL_45;
  }
  v19 = v18 + v14;
  if ( v18 + (unsigned int)v14 < v18 )
  {
    v52 = 2589;
    goto LABEL_45;
  }
  if ( (unsigned int)v17 + v19 < v19 )
  {
    v52 = 2590;
LABEL_45:
    v22 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024362, v52);
    goto LABEL_46;
  }
  v20 = CChannel::BeginCommand(this, &v54, 0x18u, (unsigned int)v17 + v19);
  v22 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0xA1Fu);
    goto LABEL_46;
  }
  v23 = HIDWORD(Size[0]);
  if ( HIDWORD(Size[0]) )
  {
    v24 = this[20];
    v58 = 0LL;
    v25 = CDataStreamWriter::GetItemDataWritePointer(v24, HIDWORD(Size[0]), &v58);
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0xB2u);
    else
      memcpy_0(v58, a3, v23);
  }
  v27 = Size[1];
  if ( LODWORD(Size[1]) )
  {
    v28 = this[20];
    v58 = 0LL;
    v29 = CDataStreamWriter::GetItemDataWritePointer(v28, Size[1], &v58);
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0xB2u);
    else
      memcpy_0(v58, Src, v27);
  }
  v31 = HIDWORD(Size[1]);
  if ( HIDWORD(Size[1]) )
  {
    v32 = this[20];
    v58 = 0LL;
    v33 = CDataStreamWriter::GetItemDataWritePointer(v32, HIDWORD(Size[1]), &v58);
    if ( v33 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0xB2u);
    else
      memcpy_0(v58, a7, v31);
  }
  v35 = var4;
  if ( (_DWORD)var4 )
  {
    v36 = this[20];
    v58 = 0LL;
    v37 = CDataStreamWriter::GetItemDataWritePointer(v36, var4, &v58);
    if ( v37 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v37, 0xB2u);
    else
      memcpy_0(v58, a9, v35);
  }
  v39 = this[20];
  if ( *((_QWORD *)v39 + 6) || *((_DWORD *)v39 + 14) )
  {
    v42 = *((_DWORD *)v39 + 14);
    v43 = (v42 + 3) & 0xFFFFFFFC;
    if ( v43 < v42 )
    {
      v40 = 2147942934LL;
      v41 = 259LL;
    }
    else
    {
      v44 = *((_QWORD *)v39 + 4);
      *((_DWORD *)v39 + 14) = v43;
      v45 = v43 - v42;
      v46 = *(_DWORD *)(v44 + 20);
      if ( v46 + (unsigned int)v45 < v46 )
      {
        *(_DWORD *)(v44 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0LL, -2147024362, 0x247u);
      }
      else
      {
        *(_DWORD *)(v44 + 20) = v46 + v45;
        v47 = *((_DWORD *)v39 + 11);
        v48 = v47 + v45;
        if ( v47 + (unsigned int)v45 >= v47 )
        {
          v49 = (_DWORD *)*((_QWORD *)v39 + 6);
          v50 = *((_DWORD *)v39 + 14);
          *((_DWORD *)v39 + 11) = v48;
          *v49 = v50;
          *((_QWORD *)v39 + 6) = 0LL;
          *((_DWORD *)v39 + 14) = 0;
          goto LABEL_46;
        }
        *((_DWORD *)v39 + 11) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0LL, -2147024362, 0x248u);
      }
      v40 = 2147942934LL;
      v41 = 264LL;
    }
  }
  else
  {
    v40 = 2147549183LL;
    v41 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v41,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v40);
LABEL_46:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v53);
  return v22;
}
