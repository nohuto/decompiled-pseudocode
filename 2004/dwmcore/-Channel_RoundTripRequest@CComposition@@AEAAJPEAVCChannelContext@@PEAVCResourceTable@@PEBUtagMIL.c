/*
 * XREFs of ?Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x1800D7A64
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x180157C30 (McTemplateU0qqx_EventWriteTransfer.c)
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
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v4 = (char *)this + 424;
  v11 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v5 = *((_DWORD *)this + 112);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v7 = 0;
    if ( v6 <= *((_DWORD *)this + 111) )
    {
      LODWORD(v8) = 2 * v5;
      *(_OWORD *)(*(_QWORD *)v4 + 16LL * v5) = v11;
      *((_DWORD *)v4 + 6) = v6;
      goto LABEL_4;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 424, 16, 1, &v11);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, 0xC0u, 0LL);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x61Eu, 0LL);
    return (unsigned int)v7;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(v8, v6, DWORD1(v11), v11, SBYTE8(v11));
  return (unsigned int)v7;
}
