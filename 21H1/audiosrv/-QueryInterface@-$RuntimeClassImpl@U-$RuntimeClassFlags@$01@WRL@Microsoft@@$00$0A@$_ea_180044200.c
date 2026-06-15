/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044200
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800755A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800755A0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180028390 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  int v5; // edi
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  _QWORD *v10; // r8
  __int64 v11; // r11

  v3 = 0;
  *a3 = 0LL;
  v4 = a1;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
    return v3;
  }
  if ( *(_DWORD *)a2 == -538486513
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
    {
      if ( InlineIsEqualGUID(v7, &GUID_00000003_0000_0000_c000_000000000046) )
      {
        *v10 = v11;
        v5 = 0;
      }
      else
      {
        v5 = -2147467262;
        v4 = 0LL;
      }
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_8;
    }
    *v8 = v9;
  }
  v5 = 0;
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return (unsigned int)v5;
}
