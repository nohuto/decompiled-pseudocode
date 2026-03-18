/*
 * XREFs of ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1801A9E30
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

__int64 __fastcall CChannel::AnimationUpdatePrimitives(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct DwmAnimationPrimitive *a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  CDataStreamWriter *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  CDataStreamWriter *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // r8d
  _DWORD *v26; // rcx
  int v27; // eax
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v30[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v32; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v29 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 2);
  v30[0] = 2;
  v30[2] = v5;
  v9 = 32 * v5;
  v30[1] = a2;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024362, 0x8BAu);
    goto LABEL_21;
  }
  v10 = CChannel::BeginCommand(this, v30, 0xCu, v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x8BBu);
    goto LABEL_21;
  }
  if ( (_DWORD)v9 )
  {
    v13 = this[20];
    v32 = 0LL;
    v14 = CDataStreamWriter::GetItemDataWritePointer(v13, v9, &v32);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xB2u);
    else
      memcpy_0(v32, a3, (unsigned int)v9);
  }
  v16 = this[20];
  if ( *((_QWORD *)v16 + 6) || *((_DWORD *)v16 + 14) )
  {
    v19 = *((_DWORD *)v16 + 14);
    v20 = (v19 + 3) & 0xFFFFFFFC;
    if ( v20 < v19 )
    {
      v17 = 2147942934LL;
      v18 = 259LL;
    }
    else
    {
      v21 = *((_QWORD *)v16 + 4);
      *((_DWORD *)v16 + 14) = v20;
      v22 = v20 - v19;
      v23 = *(_DWORD *)(v21 + 20);
      if ( v23 + (unsigned int)v22 < v23 )
      {
        *(_DWORD *)(v21 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2147024362, 0x247u);
      }
      else
      {
        *(_DWORD *)(v21 + 20) = v23 + v22;
        v24 = *((_DWORD *)v16 + 11);
        v25 = v24 + v22;
        if ( v24 + (unsigned int)v22 >= v24 )
        {
          v26 = (_DWORD *)*((_QWORD *)v16 + 6);
          v27 = *((_DWORD *)v16 + 14);
          *((_DWORD *)v16 + 11) = v25;
          *v26 = v27;
          *((_QWORD *)v16 + 6) = 0LL;
          *((_DWORD *)v16 + 14) = 0;
          goto LABEL_21;
        }
        *((_DWORD *)v16 + 11) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2147024362, 0x248u);
      }
      v17 = 2147942934LL;
      v18 = 264LL;
    }
  }
  else
  {
    v17 = 2147549183LL;
    v18 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v17);
LABEL_21:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v29);
  return v12;
}
