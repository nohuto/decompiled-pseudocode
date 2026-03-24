/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801509B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180038258 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18005D71C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800BF490 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct MilPoint3F *a3,
        unsigned int a4,
        const struct MilPoint2D *a5,
        unsigned int a6,
        const unsigned int *a7,
        unsigned int a8,
        const unsigned int *a9,
        unsigned int a10)
{
  __int64 v11; // rdi
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v26[4]; // [rsp+34h] [rbp-1Ch]
  unsigned int v27; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+70h] [rbp+20h] BYREF

  v11 = a4;
  v28 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 109);
  v25 = 493;
  v27 = 0;
  v15 = 12 * v11;
  *(_OWORD *)v26 = 0LL;
  v26[0] = a2;
  if ( (unsigned __int64)(12 * v11) > 0xFFFFFFFF )
  {
    v24 = 2522;
    goto LABEL_18;
  }
  v16 = 16LL * a6;
  v26[1] = 12 * v11;
  if ( v16 > 0xFFFFFFFF )
  {
    v24 = 2523;
    goto LABEL_18;
  }
  v14 = 4LL * a8;
  v26[2] = 16 * a6;
  if ( v14 > 0xFFFFFFFF )
  {
    v24 = 2524;
    goto LABEL_18;
  }
  v17 = 4LL * a10;
  v26[3] = 4 * a8;
  if ( v17 > 0xFFFFFFFF )
  {
    v24 = 2525;
    goto LABEL_18;
  }
  v18 = v16 + v15;
  v27 = 4 * a10;
  if ( (unsigned int)v16 + v15 < v15 )
  {
    v24 = 2528;
    goto LABEL_18;
  }
  v19 = v18 + v14;
  if ( v18 + (unsigned int)v14 < v18 )
  {
    v24 = 2529;
    goto LABEL_18;
  }
  if ( v19 + (unsigned int)v17 < v19 )
  {
    v24 = 2530;
LABEL_18:
    v22 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, v24, 0LL);
    goto LABEL_19;
  }
  v20 = CChannel::BeginCommand(this, &v25, 0x18u, v19 + (unsigned int)v17);
  v22 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x9E3u, 0LL);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v26[1]);
    CDataStreamWriter::AddItemData(this[20], a5, v26[2]);
    CDataStreamWriter::AddItemData(this[20], a7, v26[3]);
    CDataStreamWriter::AddItemData(this[20], a9, v27);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_19:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  return v22;
}
