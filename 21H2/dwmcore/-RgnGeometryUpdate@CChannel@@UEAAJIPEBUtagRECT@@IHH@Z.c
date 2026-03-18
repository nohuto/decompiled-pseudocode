/*
 * XREFs of ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x180070090
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

__int64 __fastcall CChannel::RgnGeometryUpdate(
        CChannel *this,
        unsigned int a2,
        const struct tagRECT *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  int v15; // r15d
  int v16; // edi
  unsigned int v17; // edi
  CDataStreamWriter *v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r8
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r8d
  _DWORD *v29; // rcx
  int v30; // eax
  CDataStreamWriter *v32; // rcx
  LONG *p_right; // r8
  signed __int64 v34; // r13
  _DWORD *v35; // rdx
  LONG v36; // ecx
  __int64 v37; // r9
  __int64 v38; // rdx
  char *v39; // [rsp+30h] [rbp-20h] BYREF
  int v40; // [rsp+38h] [rbp-18h] BYREF
  size_t Size; // [rsp+3Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *v43; // [rsp+80h] [rbp+30h] BYREF

  v39 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 141LL);
  v40 = 489;
  Size = a2;
  v11 = 16LL * a4;
  if ( v11 > 0xFFFFFFFF )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0xB2Au, 0LL);
    goto LABEL_14;
  }
  HIDWORD(Size) = 16 * a4;
  v12 = CChannel::BeginCommand(this, &v40, 0xCu, v11);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB2Bu, 0LL);
    goto LABEL_14;
  }
  if ( a4 )
  {
    v15 = a5;
    v16 = a6;
    if ( a5 || a6 )
    {
      v32 = (CDataStreamWriter *)*((_QWORD *)this + 20);
      v43 = 0LL;
      CDataStreamWriter::GetItemDataWritePointer(v32, HIDWORD(Size), &v43);
      p_right = &a3->right;
      v34 = (char *)a3 - (_BYTE *)v43;
      v35 = (char *)v43 + 8;
      do
      {
        *(v35 - 2) = v15 + *(_DWORD *)((char *)v35 + v34 - 8);
        *(v35 - 1) = v16 + *(p_right - 1);
        v36 = *p_right;
        p_right += 4;
        *v35 = v15 + v36;
        v35 += 4;
        *(v35 - 3) = v16 + *(p_right - 3);
        --a4;
      }
      while ( a4 );
    }
    else
    {
      v17 = HIDWORD(Size);
      if ( HIDWORD(Size) )
      {
        v18 = (CDataStreamWriter *)*((_QWORD *)this + 20);
        v43 = 0LL;
        v19 = CDataStreamWriter::GetItemDataWritePointer(v18, HIDWORD(Size), &v43);
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xB2u, 0LL);
        else
          memcpy_0(v43, a3, v17);
      }
    }
  }
  v21 = *((_QWORD *)this + 20);
  if ( !*(_QWORD *)(v21 + 48) && !*(_DWORD *)(v21 + 56) )
  {
    v37 = 2147549183LL;
    v38 = 240LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v37);
    goto LABEL_14;
  }
  v22 = *(_DWORD *)(v21 + 56);
  v23 = (v22 + 3) & 0xFFFFFFFC;
  if ( v23 < v22 )
  {
    v37 = 2147942934LL;
    v38 = 259LL;
    goto LABEL_22;
  }
  v24 = *(_QWORD *)(v21 + 32);
  *(_DWORD *)(v21 + 56) = v23;
  v25 = v23 - v22;
  v26 = *(_DWORD *)(v24 + 20);
  if ( v26 + v25 < v26 )
  {
    *(_DWORD *)(v24 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024362, 0x247u, 0LL);
    goto LABEL_25;
  }
  *(_DWORD *)(v24 + 20) = v26 + v25;
  v27 = *(_DWORD *)(v21 + 44);
  v28 = v27 + v25;
  if ( v27 + v25 < v27 )
  {
    *(_DWORD *)(v21 + 44) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_25:
    v37 = 2147942934LL;
    v38 = 264LL;
    goto LABEL_22;
  }
  v29 = *(_DWORD **)(v21 + 48);
  v30 = *(_DWORD *)(v21 + 56);
  *(_DWORD *)(v21 + 44) = v28;
  *v29 = v30;
  *(_QWORD *)(v21 + 48) = 0LL;
  *(_DWORD *)(v21 + 56) = 0;
LABEL_14:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v39);
  return v14;
}
