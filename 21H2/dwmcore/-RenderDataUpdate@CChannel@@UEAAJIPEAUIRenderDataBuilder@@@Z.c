/*
 * XREFs of ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x1800705D0
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
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::RenderDataUpdate(CChannel *this, unsigned int a2, struct IRenderDataBuilder *a3)
{
  unsigned int v6; // r9d
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  size_t v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  _DWORD *v19; // rcx
  int v20; // eax
  const void *v22; // rdi
  CDataStreamWriter *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+34h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v31; // [rsp+60h] [rbp+20h] BYREF
  char *v32; // [rsp+70h] [rbp+30h] BYREF

  v32 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 144LL);
  v28 = 344;
  Size = a2;
  if ( a3 )
    v6 = *((_DWORD *)a3 + 10);
  else
    v6 = 0;
  HIDWORD(Size) = v6;
  v7 = CChannel::BeginCommand(this, &v28, 0xCu, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x48Eu, 0LL);
    goto LABEL_10;
  }
  v10 = HIDWORD(Size);
  if ( HIDWORD(Size) )
  {
    if ( *((_DWORD *)a3 + 2) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v22 = (const void *)*((_QWORD *)a3 + 2);
    v23 = (CDataStreamWriter *)*((_QWORD *)this + 20);
    v31 = 0LL;
    v24 = CDataStreamWriter::GetItemDataWritePointer(v23, HIDWORD(Size), &v31);
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xB2u, 0LL);
    else
      memcpy_0(v31, v22, v10);
  }
  v11 = *((_QWORD *)this + 20);
  if ( !*(_QWORD *)(v11 + 48) && !*(_DWORD *)(v11 + 56) )
  {
    v26 = 2147549183LL;
    v27 = 240LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v26);
    goto LABEL_10;
  }
  v12 = *(_DWORD *)(v11 + 56);
  v13 = (v12 + 3) & 0xFFFFFFFC;
  if ( v13 < v12 )
  {
    v26 = 2147942934LL;
    v27 = 259LL;
    goto LABEL_21;
  }
  v14 = *(_QWORD *)(v11 + 32);
  *(_DWORD *)(v11 + 56) = v13;
  v15 = v13 - v12;
  v16 = *(_DWORD *)(v14 + 20);
  if ( v16 + v15 < v16 )
  {
    *(_DWORD *)(v14 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024362, 0x247u, 0LL);
    goto LABEL_24;
  }
  *(_DWORD *)(v14 + 20) = v16 + v15;
  v17 = *(_DWORD *)(v11 + 44);
  v18 = v17 + v15;
  if ( v17 + v15 < v17 )
  {
    *(_DWORD *)(v11 + 44) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_24:
    v26 = 2147942934LL;
    v27 = 264LL;
    goto LABEL_21;
  }
  v19 = *(_DWORD **)(v11 + 48);
  v20 = *(_DWORD *)(v11 + 56);
  *(_DWORD *)(v11 + 44) = v18;
  *v19 = v20;
  *(_QWORD *)(v11 + 48) = 0LL;
  *(_DWORD *)(v11 + 56) = 0;
LABEL_10:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v32);
  return v9;
}
