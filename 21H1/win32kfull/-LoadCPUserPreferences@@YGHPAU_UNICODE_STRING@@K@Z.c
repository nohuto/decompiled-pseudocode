/*
 * XREFs of ?LoadCPUserPreferences@@YGHPAU_UNICODE_STRING@@K@Z @ 0xDB6FE
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall LoadCPUserPreferences(int a1, int a2)
{
  size_t ProfileValue; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v7; // [esp-14h] [ebp-2Ch]
  _DWORD Src[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v7 = _gpviCPUserPreferences[2];
  v9 = a1;
  ProfileValue = FastGetProfileValue(a1, _gpviCPUserPreferences[1], v7, 0, Src, 8, a2);
  if ( ProfileValue )
  {
    if ( ProfileValue > 8 )
      ProfileValue = 8;
    memcpy(_gpdwCPUserPreferencesMask, Src, ProfileValue);
  }
  v4 = &_gpviCPUserPreferences[3];
  v5 = 21;
  do
  {
    if ( FastGetProfileValue(v9, v4[1], v4[2], 0, Src, 4, a2) )
      *v4 = Src[0];
    v4 += 3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(_gpsi + 6248) ^= (*(_DWORD *)(_gpsi + 6248) ^ (unsigned int)_gpdwCPUserPreferencesMask) & 4;
  *(_DWORD *)(_gpsi + 6248) ^= (*(_DWORD *)(_gpsi + 6248) ^ (unsigned int)_gpdwCPUserPreferencesMask) & 8;
  *(_DWORD *)(_gpsi + 6248) ^= (*(_DWORD *)(_gpsi + 6248) ^ (unsigned int)_gpdwCPUserPreferencesMask) & 0x20;
  if ( ((unsigned int)&loc_20000 & _gdwPUDFlags) != 0 )
    _InterlockedOr(_gpsi, 0x80u);
  else
    _InterlockedAnd(_gpsi, 0xFFFFFF7F);
  *(_DWORD *)(_gpsi + 6252) = *(_DWORD *)UPDWORDPointer(8198);
  *(_DWORD *)(_gpsi + 1828) = *(_DWORD *)UPDWORDPointer(8206);
  *(_DWORD *)(_gpsi + 1832) = *(_DWORD *)UPDWORDPointer(8208);
  *(_DWORD *)(_gpsi + 6248) = (unsigned int)_gpdwCPUserPreferencesMask ^ (*(_DWORD *)(_gpsi + 6248) ^ (unsigned int)_gpdwCPUserPreferencesMask) & 0x7FFFFFFF;
  EnforceColorDependentSettings();
  return 1;
}
