/*
 * XREFs of ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18006DA50
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

__int64 __fastcall CChannel::InteractionUpdateConfiguration(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        size_t Size)
{
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  CDataStreamWriter *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r8d
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v32[6]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v34; // [rsp+70h] [rbp+20h] BYREF

  v31 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 87LL);
  v32[0] = 194;
  v32[1] = a2;
  v11 = Size;
  v32[2] = a3;
  v32[3] = a4;
  v32[4] = a5;
  v12 = CChannel::BeginCommand((CChannel *)a1, v32, 0x14u, Size);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x9B7u, 0LL);
    goto LABEL_10;
  }
  if ( v11 )
  {
    v15 = *(CDataStreamWriter **)(a1 + 160);
    v34 = 0LL;
    v16 = CDataStreamWriter::GetItemDataWritePointer(v15, v11, &v34);
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xB2u, 0LL);
    else
      memcpy_0(v34, Src, v11);
  }
  v18 = *(_QWORD *)(a1 + 160);
  if ( !*(_QWORD *)(v18 + 48) && !*(_DWORD *)(v18 + 56) )
  {
    v29 = 2147549183LL;
    v30 = 240LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v29);
    goto LABEL_10;
  }
  v19 = *(_DWORD *)(v18 + 56);
  v20 = (v19 + 3) & 0xFFFFFFFC;
  if ( v20 < v19 )
  {
    v29 = 2147942934LL;
    v30 = 259LL;
    goto LABEL_15;
  }
  v21 = *(_QWORD *)(v18 + 32);
  *(_DWORD *)(v18 + 56) = v20;
  v22 = v20 - v19;
  v23 = *(_DWORD *)(v21 + 20);
  if ( v23 + v22 < v23 )
  {
    *(_DWORD *)(v21 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0x247u, 0LL);
    goto LABEL_18;
  }
  *(_DWORD *)(v21 + 20) = v23 + v22;
  v24 = *(_DWORD *)(v18 + 44);
  v25 = v24 + v22;
  if ( v24 + v22 < v24 )
  {
    *(_DWORD *)(v18 + 44) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_18:
    v29 = 2147942934LL;
    v30 = 264LL;
    goto LABEL_15;
  }
  v26 = *(_DWORD **)(v18 + 48);
  v27 = *(_DWORD *)(v18 + 56);
  *(_DWORD *)(v18 + 44) = v25;
  *v26 = v27;
  *(_QWORD *)(v18 + 48) = 0LL;
  *(_DWORD *)(v18 + 56) = 0;
LABEL_10:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v31);
  return v14;
}
