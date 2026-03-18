/*
 * XREFs of ?Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x1800F0AA4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x180193918 (McTemplateU0qqx_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::Channel_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ROUNDTRIPREQUEST *a4)
{
  char *v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  v4 = (char *)this + 576;
  v12 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v5 = *((_DWORD *)this + 150);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_10;
  }
  v7 = 0;
  if ( v6 <= *((_DWORD *)this + 149) )
  {
    LODWORD(v8) = 2 * v5;
    *(_OWORD *)(*(_QWORD *)v4 + 16LL * v5) = v12;
    *((_DWORD *)v4 + 6) = v6;
    goto LABEL_4;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 576, 0x10u, 1, &v12);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v10, 0xC0u);
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v7, 0x6B9u);
    return v7;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(v8, v6, DWORD1(v12), v12, SBYTE8(v12));
  return v7;
}
