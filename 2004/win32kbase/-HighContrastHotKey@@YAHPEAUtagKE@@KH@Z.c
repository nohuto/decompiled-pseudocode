/*
 * XREFs of ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C0183C40
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C9ACC (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall HighContrastHotKey(struct tagKE *a1)
{
  char v1; // r8
  __int64 v2; // rdx
  int v3; // ecx
  char v4; // al

  v1 = *((_BYTE *)a1 + 2);
  v2 = *((_WORD *)a1 + 1) & 0x8000;
  v3 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned __int8)gPhysModifierState;
  v4 = dword_1C024BB7C;
  if ( (dword_1C024BB7C & 1) != 0 )
  {
    if ( (dword_1C024BB7C & 4) != 0 && v1 == 44 && !(_DWORD)v2 && v3 == 17 )
    {
      dword_1C024BB7C &= ~1u;
      if ( (v4 & 0x10) != 0 )
        ApiSetEditionPostRitSound(1LL, v2, 0LL);
      PostWinlogonMessage(1026LL, 9u);
    }
    return 1LL;
  }
  if ( (dword_1C024BB7C & 4) == 0 || v1 != 44 || (_DWORD)v2 || v3 != 17 )
    return 1LL;
  if ( (dword_1C024BB7C & 0x10) != 0 )
    ApiSetEditionPostRitSound(0LL, v2, 0LL);
  PostWinlogonMessage(1026LL, 5u);
  return 0LL;
}
