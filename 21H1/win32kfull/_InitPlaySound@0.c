/*
 * XREFs of _InitPlaySound@0 @ 0xF0EA6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall InitPlaySound()
{
  int v0; // eax
  int v1; // ecx

  v0 = Win32AllocPool(8, 1936749397);
  CUserPlaySound::s_pUserPlaySound = (RPC_BINDING_HANDLE *)v0;
  if ( !v0 )
    return -1073741801;
  v1 = 0;
  *(_DWORD *)v0 = 0;
  *(_DWORD *)(v0 + 4) = 0;
  return v1;
}
