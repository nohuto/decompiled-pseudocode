/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call @ 0x1801706D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z @ 0x1800CA5D0 (-SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z.c)
 *     ??$EffectiveHapticsFeedback@AEAJAEAKAEAKAEAE@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAJAEAK1AEAE@Z @ 0x18016867C (--$EffectiveHapticsFeedback@AEAJAEAKAEAKAEAE@SpatialInteractionTraceContinuous@SpatialInteractio.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call(
        __int64 a1,
        _BYTE *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned __int16 v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v5) = *a2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 104LL) )
  {
    v3 = SpatialInteractionDevices::SetHapticsWaveForm(
           (SpatialInteractionDevices *)(*(_QWORD *)(a1 + 8) + 120LL),
           (struct SpatialInteractionDevices::HID_HANDLE *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 744LL),
           v5);
    v4 = *(_QWORD *)(a1 + 8);
    v6 = v3;
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::EffectiveHapticsFeedback<long &,unsigned long &,unsigned long &,unsigned char &>(
      &v6,
      (unsigned int *)(v4 + 8),
      (unsigned int *)(v4 + 12),
      (char *)&v5);
  }
}
