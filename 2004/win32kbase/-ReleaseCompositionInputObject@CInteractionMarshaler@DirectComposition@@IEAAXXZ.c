/*
 * XREFs of ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C000F330
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C000E31C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000E420 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0033A20 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C009D750 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017DF48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(
        DirectComposition::CInteractionMarshaler *this)
{
  void *v1; // rsi
  __int64 v3; // r8
  __int64 v4; // r9
  CInputSink *v5; // rdi
  int v6; // r8d
  int v7; // r9d
  CInputSink *v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = (void *)*((_QWORD *)this + 33);
  if ( v1 )
  {
    v8 = 0LL;
    if ( (int)CompositionInputObject::LockForWrite(v1, &v8) >= 0 )
    {
      v5 = v8;
      if ( *((_QWORD *)v8 + 11) )
        *((_QWORD *)v8 + 11) = 0LL;
      if ( (unsigned int)dword_1C0246A70 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 4LL, v3, v4) )
        {
          v8 = 0LL;
          v9 = v1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1C0246A70,
            (unsigned int)&unk_1C021C4B0,
            v6,
            v7,
            (__int64)&v9,
            (__int64)&v8);
        }
      }
      CInputSink::UnlockAndRelease(v5);
    }
    ObfDereferenceObject(*((PVOID *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
}
