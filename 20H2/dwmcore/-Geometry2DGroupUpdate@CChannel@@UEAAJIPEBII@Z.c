/*
 * XREFs of ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18014F830
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

__int64 __fastcall CChannel::Geometry2DGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _DWORD v13[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 67);
  v13[0] = 484;
  v14 = 0;
  v13[1] = a2;
  v8 = 4LL * a4;
  if ( v8 > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x9F9u, 0LL);
  }
  else
  {
    v14 = 4 * a4;
    v9 = CChannel::BeginCommand(this, v13, 0xCu, v8);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x9FAu, 0LL);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v14);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v11;
}
