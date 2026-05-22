/*
 * XREFs of _lambda_7dd15323b66e2cd0571b9e9db64f2cef_::operator() @ 0x18019F988
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18019FB94 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall lambda_7dd15323b66e2cd0571b9e9db64f2cef_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  char v3; // bl
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = *a2;
  v3 = 0;
  if ( *a2 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    v5 = *v4 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *v4 == *(_QWORD *)&GUID_NULL.Data1 )
      v5 = v4[1] - *(_QWORD *)GUID_NULL.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v2 + 84) - *v4;
      if ( !v6 )
        v6 = *(_QWORD *)(v2 + 92) - v4[1];
      if ( !v6 )
        v3 = 1;
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v3;
}
