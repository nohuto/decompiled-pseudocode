/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180067170
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

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CChannel *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        const struct MilRectF *a5,
        const struct MilRectF *a6,
        const unsigned int *a7)
{
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v19[4]; // [rsp+34h] [rbp-1Ch]
  unsigned int v20[3]; // [rsp+44h] [rbp-Ch]
  char *v21; // [rsp+70h] [rbp+20h] BYREF

  v21 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 7LL);
  v18 = 474;
  *(_QWORD *)v20 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v19[0] = a2;
  v11 = -1;
  LOBYTE(v19[1]) = a3;
  v19[2] = a4;
  if ( 16 * (unsigned __int64)a4 > 0xFFFFFFFF )
  {
    v17 = 2578;
    goto LABEL_13;
  }
  v12 = 4LL * a4;
  v19[3] = 16 * a4;
  v20[0] = 16 * a4;
  if ( v12 > 0xFFFFFFFF )
  {
    v17 = 2580;
    goto LABEL_13;
  }
  v11 = 32 * a4;
  v20[1] = 4 * a4;
  if ( 32 * a4 < 16 * a4 )
  {
    v17 = 2583;
    goto LABEL_13;
  }
  if ( (unsigned int)v12 + v11 < v11 )
  {
    v17 = 2584;
LABEL_13:
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, v17, 0LL);
    goto LABEL_7;
  }
  v13 = CChannel::BeginCommand(this, &v18, 0x1Cu, v11 + v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA19u, 0LL);
  }
  else
  {
    CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a5, v19[3]);
    CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a6, v20[0]);
    CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a7, v20[1]);
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  }
LABEL_7:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
  return v15;
}
