/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001A990
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x180024174 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333333@Z @ 0x1801D6160 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333333333@Z @ 0x1801D6294 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall CManipulationTransform::GetRealization(
        CManipulationTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3,
        int a4)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  unsigned int v9; // r8d
  char v10; // dl
  __int64 v11; // rcx
  int v12; // [rsp+A0h] [rbp+7h] BYREF
  int v13; // [rsp+A4h] [rbp+Bh] BYREF
  int v14; // [rsp+A8h] [rbp+Fh] BYREF
  int v15; // [rsp+ACh] [rbp+13h] BYREF
  int v16; // [rsp+B0h] [rbp+17h] BYREF
  int v17; // [rsp+B4h] [rbp+1Bh] BYREF
  int v18; // [rsp+B8h] [rbp+1Fh] BYREF
  int v19; // [rsp+BCh] [rbp+23h] BYREF
  int v20; // [rsp+C0h] [rbp+27h] BYREF
  int v21; // [rsp+C4h] [rbp+2Bh] BYREF
  int v22; // [rsp+C8h] [rbp+2Fh] BYREF
  int v23; // [rsp+CCh] [rbp+33h] BYREF
  _DWORD v24[8]; // [rsp+D0h] [rbp+37h] BYREF
  int v25; // [rsp+100h] [rbp+67h] BYREF
  int v26; // [rsp+110h] [rbp+77h] BYREF
  int v27; // [rsp+118h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)this + 264) )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      (CManipulationTransform *)((char *)this + 152),
      (CManipulationTransform *)((char *)this + 176),
      (CManipulationTransform *)((char *)this + 188),
      (CManipulationTransform *)((char *)this + 200));
    *((_BYTE *)this + 264) = 0;
  }
  v6 = *(_OWORD *)((char *)this + 216);
  v7 = *(_OWORD *)((char *)this + 232);
  v8 = *(_OWORD *)((char *)this + 248);
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 200);
  *((_OWORD *)a3 + 1) = v6;
  *((_OWORD *)a3 + 2) = v7;
  *((_OWORD *)a3 + 3) = v8;
  *((_DWORD *)a3 + 16) = 0;
  v9 = dword_180344EF0;
  if ( (unsigned int)dword_180344EF0 > 4 )
  {
    v10 = qword_180344F00;
    v11 = qword_180344F08;
    if ( (qword_180344F00 & 1) != 0 && (qword_180344F08 & 1) == qword_180344F08 )
    {
      v25 = *((_DWORD *)this + 65);
      v26 = *((_DWORD *)this + 64);
      v27 = *((_DWORD *)this + 63);
      v21 = *((_DWORD *)this + 62);
      v22 = *((_DWORD *)this + 61);
      v23 = *((_DWORD *)this + 60);
      v24[0] = *((_DWORD *)this + 59);
      v12 = *((_DWORD *)this + 58);
      v13 = *((_DWORD *)this + 57);
      v14 = *((_DWORD *)this + 56);
      v15 = *((_DWORD *)this + 55);
      v16 = *((_DWORD *)this + 54);
      v17 = *((_DWORD *)this + 53);
      v18 = *((_DWORD *)this + 52);
      v19 = *((_DWORD *)this + 51);
      v20 = *((_DWORD *)this + 50);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        qword_180344F08,
        (unsigned int)&unk_1802E9146,
        dword_180344EF0,
        a4,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
      v11 = qword_180344F08;
      v10 = qword_180344F00;
      v9 = dword_180344EF0;
    }
    if ( v9 > 4 && (v10 & 1) != 0 && (v11 & 1) == v11 )
    {
      v25 = *((_DWORD *)this + 49);
      v26 = *((_DWORD *)this + 48);
      v27 = *((_DWORD *)this + 47);
      v20 = *((_DWORD *)this + 46);
      v19 = *((_DWORD *)this + 45);
      v18 = *((_DWORD *)this + 44);
      v17 = *((_DWORD *)this + 43);
      v16 = *((_DWORD *)this + 42);
      v15 = *((_DWORD *)this + 41);
      v14 = *((_DWORD *)this + 40);
      v13 = *((_DWORD *)this + 39);
      v12 = *((_DWORD *)this + 38);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1802E91CB,
        v9,
        a4,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v16,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v19,
        (__int64)&v20,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
}
