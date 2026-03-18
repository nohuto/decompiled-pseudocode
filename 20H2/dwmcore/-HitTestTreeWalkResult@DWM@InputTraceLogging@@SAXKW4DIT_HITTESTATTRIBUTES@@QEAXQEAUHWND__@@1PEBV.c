/*
 * XREFs of ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18005B61C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18005B154 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x18001730C (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18005B764 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1802221C8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x180222218 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180222234 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1802222A8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U4@U1@U1@U3@U4@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@44444444AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@666633565555@Z @ 0x180225844 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$03@@U-$_.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestTreeWalkResult(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct CInteraction *a6)
{
  struct CInteraction *v6; // rdi
  int v10; // ebx
  __int64 v11; // r10
  int v12; // eax
  unsigned __int8 v13; // al
  int v14; // eax
  const struct CInteraction *v15; // rcx
  int v16; // eax
  int v17; // r10d
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  const char *v32; // rax
  BOOL v33; // [rsp+E8h] [rbp-80h] BYREF
  int v34; // [rsp+ECh] [rbp-7Ch] BYREF
  int v35; // [rsp+F0h] [rbp-78h] BYREF
  int v36; // [rsp+F4h] [rbp-74h] BYREF
  int v37; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v38; // [rsp+100h] [rbp-68h] BYREF
  __int64 v39; // [rsp+108h] [rbp-60h] BYREF
  __int64 v40; // [rsp+110h] [rbp-58h] BYREF
  __int64 v41; // [rsp+118h] [rbp-50h] BYREF
  __int64 v42; // [rsp+120h] [rbp-48h] BYREF
  __int64 v43; // [rsp+128h] [rbp-40h] BYREF
  __int64 v44; // [rsp+130h] [rbp-38h] BYREF
  __int64 v45; // [rsp+138h] [rbp-30h] BYREF
  __int64 v46; // [rsp+140h] [rbp-28h] BYREF
  __int64 v47; // [rsp+148h] [rbp-20h] BYREF
  __int64 v48; // [rsp+150h] [rbp-18h] BYREF
  __int64 v49; // [rsp+158h] [rbp-10h] BYREF
  __int64 v50; // [rsp+160h] [rbp-8h] BYREF
  __int64 v51; // [rsp+168h] [rbp+0h] BYREF
  __int64 v52; // [rsp+170h] [rbp+8h] BYREF
  __int64 v53; // [rsp+178h] [rbp+10h] BYREF
  __int64 v54; // [rsp+180h] [rbp+18h] BYREF
  __int64 v55; // [rsp+188h] [rbp+20h] BYREF

  v6 = a6;
  v10 = a1;
  v11 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                      a1,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v11 > 4u && (*(_BYTE *)(v11 + 16) & 2) != 0 && (*(_QWORD *)(v11 + 24) & 2LL) == *(_QWORD *)(v11 + 24) )
  {
    v12 = 0;
    if ( v6 )
      LOBYTE(v12) = *((_QWORD *)v6 + 34) != 0LL;
    LODWORD(a6) = v12;
    v33 = InputTraceLogging::InteractionInputTransparency(v6);
    if ( v6 )
      v13 = *((_BYTE *)v6 + 184) & 1;
    else
      v13 = 0;
    v34 = v13;
    if ( v6 )
      v14 = *((_DWORD *)v6 + 45);
    else
      v14 = 0;
    v35 = v14;
    v38 = (__int64)InputTraceLogging::InteractionInputSink(v6);
    if ( v6 )
      v16 = *((_DWORD *)v6 + 424);
    else
      v16 = 0;
    v36 = v16;
    v39 = (__int64)InputTraceLogging::InteractionDefaultToString(v15);
    v40 = (__int64)InputTraceLogging::InteractionSourceTypeToString(v6);
    v42 = (__int64)v6;
    v44 = a4;
    v43 = a5;
    v45 = a3;
    v41 = ((unsigned __int64)v6 + 8) & -(__int64)(v6 != 0LL);
    v37 = a2;
    v18 = L"ControlDown";
    if ( (a2 & 0x100) == 0 )
      v18 = (const wchar_t *)&unk_180288730;
    v46 = (__int64)v18;
    v19 = L"EraserDown";
    if ( (a2 & 0x80u) == 0 )
      v19 = (const wchar_t *)&unk_180288730;
    v47 = (__int64)v19;
    v20 = L"BarrelButtonDown";
    if ( (a2 & 0x40) == 0 )
      v20 = (const wchar_t *)&unk_180288730;
    v48 = (__int64)v20;
    v21 = L"NoHoverPointer";
    if ( (a2 & 0x20) == 0 )
      v21 = (const wchar_t *)&unk_180288730;
    v49 = (__int64)v21;
    v22 = L"TouchTargeting";
    if ( (a2 & 0x10) == 0 )
      v22 = (const wchar_t *)&unk_180288730;
    v50 = (__int64)v22;
    v23 = L"ButtonDown";
    if ( (a2 & 8) == 0 )
      v23 = (const wchar_t *)&unk_180288730;
    v51 = (__int64)v23;
    v24 = L"WheelHorizontal";
    if ( (a2 & 4) == 0 )
      v24 = (const wchar_t *)&unk_180288730;
    v52 = (__int64)v24;
    v25 = L"WheelIncreasing";
    if ( (a2 & 2) == 0 )
      v25 = (const wchar_t *)&unk_180288730;
    v53 = (__int64)v25;
    v26 = L"MouseWheel";
    if ( (a2 & 1) == 0 )
      v26 = (const wchar_t *)&unk_180288730;
    v54 = (__int64)v26;
    if ( v10 )
    {
      v27 = v10 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                if ( v31 == 1 )
                  v32 = "DropTarget";
                else
                  v32 = "UNKNOWN";
              }
              else
              {
                v32 = "Touchpad";
              }
            }
            else
            {
              v32 = "Mouse";
            }
          }
          else
          {
            v32 = "Pen";
          }
        }
        else
        {
          v32 = "Touch";
        }
      }
      else
      {
        v32 = "Pointer";
      }
    }
    else
    {
      v32 = "ComputeLuid";
    }
    v55 = (__int64)v32;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (int)&dword_1802E83CF,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v37,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v36,
      (__int64)&v38,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&a6);
  }
  if ( v6 )
    InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(v6);
}
