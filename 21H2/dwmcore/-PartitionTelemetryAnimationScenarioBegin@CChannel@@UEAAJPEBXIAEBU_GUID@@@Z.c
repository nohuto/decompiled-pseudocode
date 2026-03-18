/*
 * XREFs of ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1801ABB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryAnimationScenarioBegin(
        CDataStreamWriter **this,
        const void *Src,
        unsigned int a3,
        const struct _GUID *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  CDataStreamWriter *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  CDataStreamWriter *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  CDataStreamWriter *v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // r8d
  _DWORD *v28; // rcx
  int v29; // eax
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+70h] [rbp+18h] BYREF

  v31 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v34 = 280;
  if ( a3 + 16 < a3 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024362, 0x3B9u);
    goto LABEL_24;
  }
  v9 = CChannel::BeginCommand(this, &v34, 4u, a3 + 16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x3BAu);
    goto LABEL_24;
  }
  if ( a3 )
  {
    v12 = this[20];
    v33 = 0LL;
    v13 = CDataStreamWriter::GetItemDataWritePointer(v12, a3, &v33);
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xB2u);
    else
      memcpy_0(v33, Src, a3);
  }
  v15 = this[20];
  v33 = 0LL;
  v16 = CDataStreamWriter::GetItemDataWritePointer(v15, 0x10u, &v33);
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0xB2u);
  else
    *(struct _GUID *)v33 = *a4;
  v18 = this[20];
  if ( *((_QWORD *)v18 + 6) || *((_DWORD *)v18 + 14) )
  {
    v21 = *((_DWORD *)v18 + 14);
    v22 = (v21 + 3) & 0xFFFFFFFC;
    if ( v22 < v21 )
    {
      v19 = 2147942934LL;
      v20 = 259LL;
    }
    else
    {
      v23 = *((_QWORD *)v18 + 4);
      *((_DWORD *)v18 + 14) = v22;
      v24 = v22 - v21;
      v25 = *(_DWORD *)(v23 + 20);
      if ( v25 + (unsigned int)v24 < v25 )
      {
        *(_DWORD *)(v23 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, -2147024362, 0x247u);
      }
      else
      {
        *(_DWORD *)(v23 + 20) = v25 + v24;
        v26 = *((_DWORD *)v18 + 11);
        v27 = v26 + v24;
        if ( v26 + (unsigned int)v24 >= v26 )
        {
          v28 = (_DWORD *)*((_QWORD *)v18 + 6);
          v29 = *((_DWORD *)v18 + 14);
          *((_DWORD *)v18 + 11) = v27;
          *v28 = v29;
          *((_QWORD *)v18 + 6) = 0LL;
          *((_DWORD *)v18 + 14) = 0;
          goto LABEL_24;
        }
        *((_DWORD *)v18 + 11) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, -2147024362, 0x248u);
      }
      v19 = 2147942934LL;
      v20 = 264LL;
    }
  }
  else
  {
    v19 = 2147549183LL;
    v20 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v19);
LABEL_24:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v31);
  return v11;
}
