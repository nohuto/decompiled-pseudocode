/*
 * XREFs of VidSchRestartAdapter @ 0x1C00D3970
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0026C84 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C003294C (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_1C003294C.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00D0C84 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C00D0CDC (VidSchResetGPUTimeout.c)
 */

__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  __int64 v10; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int16 *v11; // [rsp+70h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8h] BYREF
  __int16 v13; // [rsp+90h] [rbp+10h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  void *v15; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x400000000010LL) )
  {
    v3 = *(_QWORD *)(a1 + 2920);
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(v4 + 316);
    v15 = (void *)(v3 + 2813);
    v9 = *(_QWORD *)(v3 + 2800);
    v14 = *(_DWORD *)(a1 + 2936);
    v10 = v3;
    v11 = *(unsigned __int16 **)(v4 + 1496);
    v13 = 2;
    v12 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      v3,
      byte_1C00440B9,
      v5,
      v2,
      (__int64)&v13,
      (__int64)&v12,
      &v11,
      (__int64)&v10,
      (__int64)&v14,
      (__int64)&v9,
      &v15);
  }
  *(_QWORD *)(a1 + 2920) = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a1 + 2916) = 0;
  *(_BYTE *)(a1 + 2940) &= ~4u;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_BYTE *)(a1 + 2941) = 0;
  if ( *(_DWORD *)(a1 + 72) )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 624);
      if ( (unsigned int)v6 < *(_DWORD *)(a1 + 696) )
        v7 += 8 * v6;
      v6 = (unsigned int)(v6 + 1);
      *(_QWORD *)(*(_QWORD *)v7 + 40LL) = 0LL;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 72) );
  }
  *(_QWORD *)(a1 + 2928) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(a1);
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 3LL);
  return 0LL;
}
