/*
 * XREFs of ExpQueryInterruptSteeringInformation @ 0x1407CF714
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeIntSteerIsSteeringEnabled @ 0x14025225C (KeIntSteerIsSteeringEnabled.c)
 *     KeIntSteerGetSteeringMode @ 0x140377C70 (KeIntSteerGetSteeringMode.c)
 */

__int64 __fastcall ExpQueryInterruptSteeringInformation(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v6; // eax
  char v7; // r8
  char v8; // r10
  bool v9; // zf
  unsigned int v10; // r11d
  __int128 v12; // [rsp+60h] [rbp-18h] BYREF

  v12 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return (unsigned int)-1073741790;
  if ( !a1 || (_DWORD)a2 != 24 )
    return (unsigned int)-1073741820;
  v6 = *(_DWORD *)a1;
  LOBYTE(a2) = *(_BYTE *)(a1 + 4);
  v7 = *(_BYTE *)(a1 + 5);
  v8 = *(_BYTE *)(a1 + 6);
  v12 = *(_OWORD *)(a1 + 8);
  if ( a4 < 4 )
  {
    if ( a5 )
      *a5 = 4;
    return (unsigned int)-1073741820;
  }
  *a3 = 0;
  if ( (_BYTE)a2 && v6 == -1 )
    v9 = KeIntSteerIsSteeringEnabled() == 0;
  else
    v9 = (unsigned int)KeIntSteerGetSteeringMode(a1, a2, v8, v7 != 0, (__int64)&v12) == 0;
  if ( !v9 )
    *a3 = 1;
  return v10;
}
