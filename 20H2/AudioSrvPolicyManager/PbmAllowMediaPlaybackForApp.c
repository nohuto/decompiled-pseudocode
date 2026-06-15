/*
 * XREFs of PbmAllowMediaPlaybackForApp @ 0x1800232A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002633C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z @ 0x18002CC18 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmAllowMediaPlaybackForApp(void *a1, const unsigned __int16 *a2, unsigned __int64 a3)
{
  int v5; // eax
  signed int v6; // ebx
  int v7; // eax
  struct IPBMWorkItem *v8; // rdi
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  struct IPBMWorkItem *v11; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = RpcClientProcessSessionId(a1, &v10, &v12);
  if ( v5 )
  {
    v6 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v6 = v5;
  }
  else
  {
    v7 = CTransportControlRouterWorkItem::CreateInstance(v12, a2, a3, &v11);
    v8 = v11;
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v6 >= 0 )
        v8 = 0LL;
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_4109024a29aa3ddbb06fcdb3e71bfe0c_Traceguids, v6);
    }
    AudPolicyLogError("PbmAllowMediaPlaybackForApp", 179, v6);
  }
  return (unsigned int)v6;
}
