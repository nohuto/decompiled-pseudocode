/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x18009F970
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

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        const struct MilRectF *a5,
        const struct MilRectF *a6,
        const unsigned int *a7)
{
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-30h]
  int v19; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v20[4]; // [rsp+34h] [rbp-1Ch]
  unsigned int v21[3]; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+70h] [rbp+20h] BYREF

  v22 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 7);
  v19 = 474;
  *(_QWORD *)v21 = 0LL;
  *(_OWORD *)v20 = 0LL;
  v20[0] = a2;
  v11 = 16LL * a4;
  v12 = 0xFFFFFFFFLL;
  LOBYTE(v20[1]) = a3;
  v20[2] = a4;
  if ( v11 > 0xFFFFFFFF )
  {
    v18 = 2578;
    goto LABEL_13;
  }
  v13 = 4LL * a4;
  v20[3] = 16 * a4;
  v21[0] = 16 * a4;
  if ( v13 > 0xFFFFFFFF )
  {
    v18 = 2580;
    goto LABEL_13;
  }
  v12 = 32 * a4;
  v21[1] = 4 * a4;
  if ( (unsigned int)v12 < (unsigned int)v11 )
  {
    v18 = 2583;
    goto LABEL_13;
  }
  if ( (int)v13 + (int)v12 < (unsigned int)v12 )
  {
    v18 = 2584;
LABEL_13:
    v16 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, v18, 0LL);
    goto LABEL_7;
  }
  v14 = CChannel::BeginCommand(this, &v19, 0x1Cu, (int)v12 + (int)v13);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xA19u, 0LL);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a5, v20[3]);
    CDataStreamWriter::AddItemData(this[20], a6, v21[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v21[1]);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_7:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v22);
  return v16;
}
