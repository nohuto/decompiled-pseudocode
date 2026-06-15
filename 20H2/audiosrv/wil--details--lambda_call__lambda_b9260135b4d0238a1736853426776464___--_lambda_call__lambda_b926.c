/*
 * XREFs of wil::details::lambda_call__lambda_b9260135b4d0238a1736853426776464___::_lambda_call__lambda_b9260135b4d0238a1736853426776464___ @ 0x18010E808
 * Callers:
 *     _PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor$1 @ 0x18010EE19 (_PhoneCallAudio--DoSetPhoneCallAudioActiveEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180112E7C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_b9260135b4d0238a1736853426776464___::_lambda_call__lambda_b9260135b4d0238a1736853426776464___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *(struct IAudioProcess **)(*(_QWORD *)a1 + 136LL),
      *(_QWORD *)(*(_QWORD *)a1 + 152LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 152LL) = 0LL;
  }
  return result;
}
