/*
 * XREFs of _CleanupPlaySound@0 @ 0xF0E6E
 * Callers:
 *     <none>
 * Callees:
 *     _PlaySoundDisconnect@4 @ 0x27A60E (_PlaySoundDisconnect@4.c)
 */

int __stdcall CleanupPlaySound()
{
  RPC_BINDING_HANDLE *v0; // edi
  int v1; // esi
  int v2; // eax

  v0 = CUserPlaySound::s_pUserPlaySound;
  v1 = 0;
  if ( CUserPlaySound::s_pUserPlaySound )
  {
    v2 = 0;
    if ( *CUserPlaySound::s_pUserPlaySound )
    {
      v2 = PlaySoundDisconnect(CUserPlaySound::s_pUserPlaySound);
      *v0 = 0;
    }
    v1 = v2;
    Win32FreePool(CUserPlaySound::s_pUserPlaySound);
  }
  return v1;
}
