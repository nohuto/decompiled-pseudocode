/*
 * XREFs of ?OnNotifyRelaunch@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1801D2D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_0b5fb972904d11c724cc9fe376f39de7_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0b5fb972904d11c724cc9fe376f39de7_@@@Z @ 0x1801924B4 (--$DoInvoke@V_lambda_0b5fb972904d11c724cc9fe376f39de7_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall SearchAppExperienceManagerNotification::OnNotifyRelaunch(__int64 a1, __int128 *a2)
{
  RTL_SRWLOCK *v2; // rcx
  __int128 v3; // xmm0
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  RTL_SRWLOCK *v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(RTL_SRWLOCK **)(a1 + 40);
  if ( v2 )
  {
    v3 = *a2;
    v7 = v2;
    *(_QWORD *)&v5 = &v7;
    *((_QWORD *)&v5 + 1) = &v6;
    v6 = v3;
    return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_0b5fb972904d11c724cc9fe376f39de7_>(
             v2 + 48,
             &v5);
  }
  return result;
}
