/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180150E70
 * Callers:
 *     <none>
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180044DF8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x1800688DC (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800BB2B0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::VisualGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 197);
  v10 = 4LL * a4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( v10 > 0xFFFFFFFF )
  {
    v16 = 1791;
    goto LABEL_10;
  }
  v9 = 4LL * a5;
  si128.m128i_i32[2] = 4 * a4;
  if ( v9 > 0xFFFFFFFF )
  {
    v16 = 1792;
    goto LABEL_10;
  }
  si128.m128i_i32[3] = 4 * a5;
  if ( (int)v9 + (int)v10 < (unsigned int)v10 )
  {
    v16 = 1795;
LABEL_10:
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, v16, 0LL);
    goto LABEL_11;
  }
  v11 = v9 + v10;
  v12 = CChannel::BeginCommand(this, &si128, 0x10u, (int)v9 + (int)v10);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x704u, 0LL);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v11);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_11:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return v14;
}
