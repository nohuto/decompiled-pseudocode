/*
 * XREFs of ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C006A6EC
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C000212C (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C006A6C0 (-SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0061490 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C006AAE0 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C006B700 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0094F70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0099770 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017BB18 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetInputSinkHelper(
        DirectComposition::CInteractionMarshaler *this,
        void *a2,
        bool *a3)
{
  PVOID v3; // rbx
  int v4; // esi
  int v7; // eax
  CInputSink *v8; // rbp
  DirectComposition::CInteractionMarshaler *v9; // rax
  int v11; // r8d
  int v12; // r9d
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  PVOID v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2
    || (v7 = CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)&Object),
        v3 = Object,
        v4 = v7,
        v7 >= 0) )
  {
    if ( *((PVOID *)this + 33) != v3 )
    {
      if ( v3 )
      {
        Object = 0LL;
        v4 = CompositionInputObject::LockForWrite(v3, (struct CInputSink **)&Object);
        if ( v4 >= 0 )
        {
          v8 = (CInputSink *)Object;
          v4 = 0;
          v9 = (DirectComposition::CInteractionMarshaler *)*((_QWORD *)Object + 11);
          if ( this != v9 )
          {
            if ( v9 )
              v4 = -1073741823;
            else
              *((_QWORD *)Object + 11) = this;
          }
          if ( v4 >= 0 && (unsigned int)dword_1C0244A70 > 5 && tlgKeywordOn((__int64)&dword_1C0244A70, 4LL) )
          {
            Object = this;
            v14 = v3;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1C0244A70,
              (unsigned int)&unk_1C021A641,
              v11,
              v12,
              (__int64)&v14,
              (__int64)&Object);
          }
          CInputSink::UnlockAndRelease(v8);
        }
      }
      if ( v4 >= 0 )
      {
        DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(this);
        if ( v3 )
        {
          *((_QWORD *)this + 33) = v3;
          v3 = 0LL;
        }
        *((_DWORD *)this + 4) |= 0x40u;
        *a3 = 1;
      }
    }
    DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
