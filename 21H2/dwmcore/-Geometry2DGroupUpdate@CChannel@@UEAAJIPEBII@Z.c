/*
 * XREFs of ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801AA980
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

__int64 __fastcall CChannel::Geometry2DGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // edi
  CDataStreamWriter *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  CDataStreamWriter *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // r8d
  _DWORD *v27; // rcx
  int v28; // eax
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+38h] [rbp-30h] BYREF
  size_t Size; // [rsp+3Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v34; // [rsp+70h] [rbp+8h] BYREF

  v30 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 67);
  v31 = 479;
  Size = a2;
  v9 = 4LL * a4;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024362, 0xA35u);
    goto LABEL_21;
  }
  HIDWORD(Size) = 4 * a4;
  v10 = CChannel::BeginCommand(this, &v31, 0xCu, v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xA36u);
    goto LABEL_21;
  }
  v13 = HIDWORD(Size);
  if ( HIDWORD(Size) )
  {
    v14 = this[20];
    v34 = 0LL;
    v15 = CDataStreamWriter::GetItemDataWritePointer(v14, HIDWORD(Size), &v34);
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xB2u);
    else
      memcpy_0(v34, a3, v13);
  }
  v17 = this[20];
  if ( *((_QWORD *)v17 + 6) || *((_DWORD *)v17 + 14) )
  {
    v20 = *((_DWORD *)v17 + 14);
    v21 = (v20 + 3) & 0xFFFFFFFC;
    if ( v21 < v20 )
    {
      v18 = 2147942934LL;
      v19 = 259LL;
    }
    else
    {
      v22 = *((_QWORD *)v17 + 4);
      *((_DWORD *)v17 + 14) = v21;
      v23 = v21 - v20;
      v24 = *(_DWORD *)(v22 + 20);
      if ( v24 + (unsigned int)v23 < v24 )
      {
        *(_DWORD *)(v22 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, -2147024362, 0x247u);
      }
      else
      {
        *(_DWORD *)(v22 + 20) = v24 + v23;
        v25 = *((_DWORD *)v17 + 11);
        v26 = v25 + v23;
        if ( v25 + (unsigned int)v23 >= v25 )
        {
          v27 = (_DWORD *)*((_QWORD *)v17 + 6);
          v28 = *((_DWORD *)v17 + 14);
          *((_DWORD *)v17 + 11) = v26;
          *v27 = v28;
          *((_QWORD *)v17 + 6) = 0LL;
          *((_DWORD *)v17 + 14) = 0;
          goto LABEL_21;
        }
        *((_DWORD *)v17 + 11) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, -2147024362, 0x248u);
      }
      v18 = 2147942934LL;
      v19 = 264LL;
    }
  }
  else
  {
    v18 = 2147549183LL;
    v19 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v18);
LABEL_21:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v30);
  return v12;
}
