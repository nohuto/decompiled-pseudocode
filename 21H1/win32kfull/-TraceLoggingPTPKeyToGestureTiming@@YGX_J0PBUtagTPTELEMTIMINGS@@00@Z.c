/*
 * XREFs of ?TraceLoggingPTPKeyToGestureTiming@@YGX_J0PBUtagTPTELEMTIMINGS@@00@Z @ 0x186B8F
 * Callers:
 *     _TraceLoggingPTPAAPKeyPress@4 @ 0x187303 (_TraceLoggingPTPAAPKeyPress@4.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x186267 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

void __userpurge TraceLoggingPTPKeyToGestureTiming(
        _DWORD *a1@<ecx>,
        __int64 a2,
        __int64 a3,
        const struct tagTPTELEMTIMINGS *a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // ecx
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [esp-10h] [ebp-44h]
  _DWORD v14[3]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD *v15; // [esp+18h] [ebp-1Ch] BYREF
  int v16; // [esp+1Ch] [ebp-18h] BYREF
  int v17; // [esp+20h] [ebp-14h] BYREF
  int v18; // [esp+24h] [ebp-10h] BYREF
  int v19; // [esp+28h] [ebp-Ch] BYREF
  int v20; // [esp+2Ch] [ebp-8h] BYREF
  int v21; // [esp+30h] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v14[0] = 0x1000000;
    v14[1] = 0;
    v8 = a6;
    HIDWORD(v13) = a1[9];
    LODWORD(a5) = (__int64)(1000 * __PAIR64__(a5, (unsigned int)a4)) / __SPAIR64__(a6, HIDWORD(a5));
    LODWORD(v13) = a1[8];
    LODWORD(a6) = a1[11];
    v21 = a1[10];
    v9 = 1000 * v13 / __SPAIR64__(v8, HIDWORD(a5));
    HIDWORD(v13) = a1[7];
    v20 = v9;
    LODWORD(v13) = a1[6];
    v10 = 1000 * v13 / __SPAIR64__(v8, HIDWORD(a5));
    HIDWORD(v13) = a1[5];
    v19 = v10;
    LODWORD(v13) = a1[4];
    v11 = 1000 * v13 / __SPAIR64__(v8, HIDWORD(a5));
    HIDWORD(v13) = a1[3];
    v18 = v11;
    LODWORD(v13) = a1[2];
    v12 = 1000 * v13 / __SPAIR64__(v8, HIDWORD(a5));
    HIDWORD(v13) = a1[1];
    v17 = v12;
    LODWORD(v13) = *a1;
    v16 = 1000 * v13 / __SPAIR64__(v8, HIDWORD(a5));
    HIDWORD(a3) = 1000 * a3 / __SPAIR64__(v8, HIDWORD(a5));
    HIDWORD(a2) = 1000 * a2 / __SPAIR64__(v8, HIDWORD(a5));
    v15 = v14;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      byte_256272,
      v7,
      v7,
      (int *)&v15,
      (int)&a2 + 4,
      (int)&a3 + 4,
      (int)&v16,
      (int)&v17,
      (int)&v18,
      (int)&v19,
      (int)&v20,
      (int)&v21,
      (int)&a6,
      (int)&a5);
  }
}
