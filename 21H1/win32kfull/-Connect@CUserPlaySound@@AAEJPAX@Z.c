/*
 * XREFs of ?Connect@CUserPlaySound@@AAEJPAX@Z @ 0xEA274
 * Callers:
 *     _NtUserDoSoundConnect@0 @ 0xEC128 (_NtUserDoSoundConnect@0.c)
 * Callees:
 *     _PlaySoundDisconnect@4 @ 0x27A60E (_PlaySoundDisconnect@4.c)
 *     _PlaySoundConnect@12 @ 0x27A9D0 (_PlaySoundConnect@12.c)
 */

int __thiscall CUserPlaySound::Connect(CUserPlaySound *this, void *a2)
{
  RPC_BINDING_HANDLE *v2; // ebx
  int v3; // edi
  RPC_BINDING_HANDLE v4; // eax
  RPC_BINDING_HANDLE Binding; // [esp+8h] [ebp-4h] BYREF

  Binding = 0;
  v2 = CUserPlaySound::s_pUserPlaySound;
  v3 = PlaySoundConnect(&Binding);
  if ( v3 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2 + 1, 0);
    if ( !*v2 )
    {
      v4 = Binding;
      Binding = 0;
      *v2 = v4;
    }
    if ( v2 != (RPC_BINDING_HANDLE *)-4 )
    {
      ExReleasePushLockExclusiveEx(v2 + 1, 0);
      KeLeaveCriticalRegion();
    }
  }
  if ( Binding )
  {
    PlaySoundDisconnect(&Binding);
    return -1073741823;
  }
  return v3;
}
