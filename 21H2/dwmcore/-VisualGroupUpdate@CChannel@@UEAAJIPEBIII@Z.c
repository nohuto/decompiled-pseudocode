/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801ACDB0
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

__int64 __fastcall CChannel::VisualGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // esi
  CDataStreamWriter *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  CDataStreamWriter *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // r8d
  _DWORD *v29; // rcx
  int v30; // eax
  unsigned int v32; // [rsp+20h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v36; // [rsp+70h] [rbp+8h] BYREF

  v33 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 198);
  v10 = 4LL * a4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( v10 > 0xFFFFFFFF )
  {
    v32 = 1829;
    goto LABEL_25;
  }
  v11 = 4LL * a5;
  si128.m128i_i32[2] = 4 * a4;
  if ( v11 > 0xFFFFFFFF )
  {
    v32 = 1830;
    goto LABEL_25;
  }
  v12 = v11 + v10;
  si128.m128i_i32[3] = 4 * a5;
  if ( (int)v11 + (int)v10 < (unsigned int)v10 )
  {
    v32 = 1833;
LABEL_25:
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024362, v32);
    goto LABEL_26;
  }
  v13 = CChannel::BeginCommand(this, &si128, 0x10u, v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x72Au);
    goto LABEL_26;
  }
  if ( v12 )
  {
    v16 = this[20];
    v36 = 0LL;
    v17 = CDataStreamWriter::GetItemDataWritePointer(v16, v12, &v36);
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0xB2u);
    else
      memcpy_0(v36, a3, v12);
  }
  v19 = this[20];
  if ( *((_QWORD *)v19 + 6) || *((_DWORD *)v19 + 14) )
  {
    v22 = *((_DWORD *)v19 + 14);
    v23 = (v22 + 3) & 0xFFFFFFFC;
    if ( v23 < v22 )
    {
      v20 = 2147942934LL;
      v21 = 259LL;
    }
    else
    {
      v24 = *((_QWORD *)v19 + 4);
      *((_DWORD *)v19 + 14) = v23;
      v25 = v23 - v22;
      v26 = *(_DWORD *)(v24 + 20);
      if ( v26 + (unsigned int)v25 < v26 )
      {
        *(_DWORD *)(v24 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, -2147024362, 0x247u);
      }
      else
      {
        *(_DWORD *)(v24 + 20) = v26 + v25;
        v27 = *((_DWORD *)v19 + 11);
        v28 = v27 + v25;
        if ( v27 + (unsigned int)v25 >= v27 )
        {
          v29 = (_DWORD *)*((_QWORD *)v19 + 6);
          v30 = *((_DWORD *)v19 + 14);
          *((_DWORD *)v19 + 11) = v28;
          *v29 = v30;
          *((_QWORD *)v19 + 6) = 0LL;
          *((_DWORD *)v19 + 14) = 0;
          goto LABEL_26;
        }
        *((_DWORD *)v19 + 11) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, -2147024362, 0x248u);
      }
      v20 = 2147942934LL;
      v21 = 264LL;
    }
  }
  else
  {
    v20 = 2147549183LL;
    v21 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v20);
LABEL_26:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v33);
  return v15;
}
