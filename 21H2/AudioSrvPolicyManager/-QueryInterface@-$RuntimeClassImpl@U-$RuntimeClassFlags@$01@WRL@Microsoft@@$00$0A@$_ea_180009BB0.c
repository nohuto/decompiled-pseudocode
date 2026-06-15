/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009BB0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009B60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPol.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009B90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180009B90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1104187591
      && a2[1] == *(_DWORD *)&GUID_be2f6f39_e560_43d1_aa63_22834e871de2.Data2
      && a2[2] == *(_DWORD *)GUID_be2f6f39_e560_43d1_aa63_22834e871de2.Data4
      && a2[3] == *(_DWORD *)&GUID_be2f6f39_e560_43d1_aa63_22834e871de2.Data4[4]
      || (a1 += 8LL, *a2 == -1500859031)
      && a2[1] == *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data2
      && a2[2] == *(_DWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4
      && a2[3] == *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == -1072434747
        && a2[1] == *(_DWORD *)&GUID_c013f1c5_445a_4e19_8cd2_f88de6b9e0ee.Data2
        && a2[2] == *(_DWORD *)GUID_c013f1c5_445a_4e19_8cd2_f88de6b9e0ee.Data4
        && a2[3] == *(_DWORD *)&GUID_c013f1c5_445a_4e19_8cd2_f88de6b9e0ee.Data4[4] )
      {
        v4 = 0;
        *a3 = a1 + 8;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
