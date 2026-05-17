/*
 * XREFs of _EtwpPreEnableEventApiCallback@4 @ 0x4B3807EE
 * Callers:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

unsigned __int8 __thiscall EtwpPreEnableEventApiCallback(int this)
{
  int v2; // ebx
  bool v3; // zf
  unsigned __int8 result; // al
  int v5; // edi
  int v6; // ecx
  int v7; // esi
  int (__thiscall *v8)(_DWORD, _BYTE *, int, _DWORD, int, int, int, int, _DWORD, _DWORD); // edi
  _BYTE v9[25]; // [esp+10h] [ebp-38h] BYREF
  int v10; // [esp+30h] [ebp-18h]
  _BYTE v11[16]; // [esp+34h] [ebp-14h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = -1;
  v3 = *(_BYTE *)(this + 76) == 0;
  memset(v9, 0, 0x18u);
  result = v9[21];
  v5 = -1;
  v10 = -1;
  if ( v3 )
  {
    v7 = *(_DWORD *)&v9[12];
    v6 = *(_DWORD *)&v9[8];
  }
  else
  {
    if ( v9[21] <= *(_BYTE *)(this + 77) )
    {
      result = *(_BYTE *)(this + 77);
      v9[21] = result;
    }
    v6 = *(_DWORD *)(this + 64) | *(_DWORD *)&v9[8];
    v5 = *(_DWORD *)(this + 60);
    v7 = *(_DWORD *)(this + 68) | *(_DWORD *)&v9[12];
    v2 = *(_DWORD *)(this + 56);
    v10 = v5;
  }
  if ( *(_BYTE *)(this + 196) )
  {
    if ( result <= *(_BYTE *)(this + 197) )
      v9[21] = *(_BYTE *)(this + 197);
    v6 |= *(_DWORD *)(this + 184);
    v7 |= *(_DWORD *)(this + 188);
    v2 &= *(_DWORD *)(this + 176);
    v10 = *(_DWORD *)(this + 180) & v5;
  }
  v8 = *(int (__thiscall **)(_DWORD, _BYTE *, int, _DWORD, int, int, int, int, _DWORD, _DWORD))(this + 28);
  if ( v8 )
    return v8(
             v8,
             v11,
             1,
             *(_DWORD *)&v9[21],
             v6,
             v7,
             v2,
             v10,
             *(_DWORD *)(*(_DWORD *)(this + 200) + 148),
             *(_DWORD *)(this + 32));
  return result;
}
