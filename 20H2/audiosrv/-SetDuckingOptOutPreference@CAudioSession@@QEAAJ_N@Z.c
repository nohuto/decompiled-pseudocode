/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180047294
 * Callers:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180047280 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D0690 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 56LL))(this);
  if ( (_DWORD)result )
    return 2290679811LL;
  *((_BYTE *)this + 484) = a2;
  return result;
}
