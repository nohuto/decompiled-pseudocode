/*
 * XREFs of RaWmiIrpNormalRequest @ 0x1C007A960
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C0073E64 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpNormalRequest(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r10
  int v6; // r9d
  char v7; // dl
  unsigned int v8; // eax

  v3 = *(_QWORD *)(a1 + 64);
  v6 = -1073741823;
  if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 != 1 )
      return (unsigned int)v6;
    v7 = *(_BYTE *)(*(_QWORD *)(v3 + 24) + 459LL);
  }
  else
  {
    v7 = *(_BYTE *)(v3 + 459);
  }
  if ( v7 )
  {
    v6 = RaWmiPassToMiniPort(a1, a2, a3);
    if ( v6 < 0 )
    {
      v8 = -1073741808;
      if ( v6 == -1073741632 )
        return (unsigned int)-1073741162;
      return v8;
    }
    else if ( (unsigned __int8)a2 <= 1u )
    {
      *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL) = MEMORY[0xFFFFF78000000014];
    }
  }
  return (unsigned int)v6;
}
