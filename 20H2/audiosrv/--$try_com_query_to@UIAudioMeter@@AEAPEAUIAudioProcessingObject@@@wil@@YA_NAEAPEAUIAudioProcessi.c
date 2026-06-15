/*
 * XREFs of ??$try_com_query_to@UIAudioMeter@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioMeter@@@Z @ 0x1800BCF8C
 * Callers:
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18000FE50 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall wil::try_com_query_to<IAudioMeter,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c, a2) >= 0;
}
