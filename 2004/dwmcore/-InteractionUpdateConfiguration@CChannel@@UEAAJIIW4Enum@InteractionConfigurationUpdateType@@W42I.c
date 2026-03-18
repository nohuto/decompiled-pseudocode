/*
 * XREFs of ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800D05A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180097FD0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009EBAC (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F4B0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800BBCB0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::InteractionUpdateConfiguration(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        unsigned int a7)
{
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _DWORD v15[10]; // [rsp+30h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 87);
  v15[1] = a2;
  v15[2] = a3;
  v15[3] = a4;
  v15[4] = a5;
  v15[0] = 204;
  v11 = CChannel::BeginCommand((CDataStreamWriter **)a1, v15, 0x14u, a7);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x97Du, 0LL);
  }
  else
  {
    CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 160), a6, a7);
    CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 160));
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v13;
}
