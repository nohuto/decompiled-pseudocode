/*
 * XREFs of ?Disconnect@CUserPlaySound@@AAEJXZ @ 0xEC2DE
 * Callers:
 *     _NtUserDoSoundDisconnect@0 @ 0xD4DA0 (_NtUserDoSoundDisconnect@0.c)
 *     _NtUserDoSoundConnect@0 @ 0xEC128 (_NtUserDoSoundConnect@0.c)
 * Callees:
 *     _PlaySoundDisconnect@4 @ 0x27A60E (_PlaySoundDisconnect@4.c)
 */

int __thiscall CUserPlaySound::Disconnect(CUserPlaySound *this)
{
  void **v1; // edi
  RPC_BINDING_HANDLE *v2; // esi
  void *v3; // eax
  RPC_BINDING_HANDLE Binding; // [esp+8h] [ebp-4h] BYREF

  Binding = 0;
  v1 = CUserPlaySound::s_pUserPlaySound;
  v2 = CUserPlaySound::s_pUserPlaySound + 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0);
  v3 = *v1;
  if ( *v1 )
  {
    *v1 = 0;
    Binding = v3;
  }
  if ( v2 )
  {
    ExReleasePushLockExclusiveEx(v2, 0);
    KeLeaveCriticalRegion();
  }
  if ( Binding )
    return PlaySoundDisconnect(&Binding);
  else
    return -1073741790;
}
