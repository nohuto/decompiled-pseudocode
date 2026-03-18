/*
 * XREFs of ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018B400
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0194254 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0194658 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019ADC4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C018414C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 */

void InputTraceLogging::Pointer::DropInput()
{
  __int64 v0; // r8
  __int64 v1; // r9
  _WORD *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rdx
  const char *v5; // rax
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
  {
    v3 = *(_QWORD *)(v1 + 72);
    v4 = *(_QWORD *)(v1 + 112);
    if ( (_DWORD)v0 )
    {
      v0 = (unsigned int)(v0 - 1);
      if ( (_DWORD)v0 )
      {
        v0 = (unsigned int)(v0 - 1);
        if ( (_DWORD)v0 )
        {
          v0 = (unsigned int)(v0 - 1);
          if ( (_DWORD)v0 )
          {
            v0 = (unsigned int)(v0 - 1);
            if ( (_DWORD)v0 )
            {
              v0 = (unsigned int)(v0 - 1);
              if ( (_DWORD)v0 )
              {
                if ( (_DWORD)v0 == 1 )
                  v5 = "UIPI";
                else
                  v5 = "UNKNOWN";
              }
              else
              {
                v5 = "HitTestFailed";
              }
            }
            else
            {
              v5 = "InvalidStateTransition";
            }
          }
          else
          {
            v5 = "PointerTypeChanged";
          }
        }
        else
        {
          v5 = "CreateNodeFailed";
        }
      }
      else
      {
        v5 = "NoPointerFlags";
      }
    }
    else
    {
      v5 = "Suppressed";
    }
    v6 = (__int64)v5;
    LOWORD(v9) = *v2;
    v7 = v3;
    v8[0] = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0244A70,
      byte_1C0217F00,
      v0,
      v1,
      (__int64)v8,
      (__int64)&v7,
      (__int64)&v9,
      (void **)&v6);
  }
}
