/*
 * XREFs of ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140008970
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400083C0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::SetModulesManagerOnAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    return (unsigned int)v3;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_DWORD *)(v5 + 40) == 2 )
      break;
LABEL_15:
    if ( !v4 )
      goto LABEL_16;
  }
  v6 = 0LL;
  v10 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v6 = v10;
  }
  v3 = 0;
  if ( v6 != v7 )
  {
    v8 = v6;
    v6 = 0LL;
    v10 = 0LL;
    if ( v7 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v7)(v7, &GUID_98f37dac_d0b6_49f5_896a_aa4d169a4c48, &v10);
      v6 = v10;
    }
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v6 = v10;
    }
  }
  if ( !v6 )
  {
LABEL_11:
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_15;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModulesManager *))(*(_QWORD *)v6 + 24LL))(
         v6,
         a2);
  if ( v3 >= 0 )
  {
    v6 = v10;
    goto LABEL_11;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_16:
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
        (unsigned int)v3);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::SetModulesManagerOnAPOs", 0xC2Fu, v3);
  }
  return (unsigned int)v3;
}
