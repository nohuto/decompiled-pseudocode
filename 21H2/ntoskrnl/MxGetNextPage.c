/*
 * XREFs of MxGetNextPage @ 0x140A45EE4
 * Callers:
 *     MxMapVa @ 0x140A45B6C (MxMapVa.c)
 * Callees:
 *     MxBootDescriptorDepleted @ 0x140A4602C (MxBootDescriptorDepleted.c)
 *     MxSwitchDescriptors @ 0x140A9404C (MxSwitchDescriptors.c)
 */

__int64 __fastcall MxGetNextPage(int a1, int a2)
{
  unsigned int v2; // r11d
  __int64 v4; // rbx
  unsigned int v5; // r8d
  int v6; // eax
  __int64 *v7; // r10
  __int64 v9; // r8
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v2 = 0;
  v4 = -1LL;
  do
  {
    v5 = 0;
    v6 = a1;
    do
    {
      v7 = (__int64 *)MxFreeDescriptor[v6];
      if ( v7 && v7[1] && !(a2 == 1 ? v7[3] == -1 : v7[2] == -1) )
        break;
      v12 = v6 + 1;
      v6 = 0;
      v7 = 0LL;
      ++v5;
      if ( v12 != (unsigned __int16)KeNumberNodes )
        v6 = v12;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
    if ( v7 )
      break;
    ++v2;
  }
  while ( v2 < 2 );
  if ( v5 != (unsigned __int16)KeNumberNodes )
  {
LABEL_10:
    if ( a2 == 1 )
    {
      v9 = v7[3];
      if ( (unsigned __int64)(v9 - *v7) >= 0x200 )
      {
        v7[3] = v9 - 512;
        return v9;
      }
    }
    else
    {
      v11 = v7[2];
      if ( v11 != (v11 & 0xFFFFFFFFFFFFFE00uLL) && v11 != *v7 )
      {
        v7[2] = v11 - 1;
LABEL_18:
        MxBootDescriptorDepleted(v7);
        return v9;
      }
      v13 = v7[3];
      v14 = *v7;
      if ( v13 == -1 )
      {
        if ( v11 != v14 && v14 != (v14 & 0xFFFFFFFFFFFFFE00uLL) )
          v4 = v14 | 0x1FF;
        v7[2] = v4;
        goto LABEL_18;
      }
      v7[2] = v13 + 511;
      if ( (unsigned __int64)(v13 - v14) >= 0x200 )
      {
        v7[3] = v13 - 512;
        goto LABEL_18;
      }
    }
    v7[3] = -1LL;
    goto LABEL_18;
  }
  if ( a2 != 1 )
  {
    v7 = (__int64 *)MxSwitchDescriptors();
    if ( v7 )
      goto LABEL_10;
    byte_140C4E83A = 16;
  }
  return -1LL;
}
