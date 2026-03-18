/*
 * XREFs of MxGetNextPage @ 0x140AF65CC
 * Callers:
 *     MxMapVa @ 0x140AF61F4 (MxMapVa.c)
 * Callees:
 *     MxBootDescriptorDepleted @ 0x140AF6728 (MxBootDescriptorDepleted.c)
 *     MxSwitchDescriptors @ 0x140B51D98 (MxSwitchDescriptors.c)
 */

__int64 __fastcall MxGetNextPage(unsigned int a1, int a2)
{
  __int64 v3; // rsi
  __int64 *v5; // rdi
  __int64 v6; // r8
  __int64 v8; // r8
  unsigned int i; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = -1LL;
  v5 = &MxBootFreeDescriptor[5 * a1];
  if ( !v5[1] )
    goto LABEL_18;
  if ( !a2 )
  {
    if ( v5[2] != -1 )
      goto LABEL_4;
LABEL_18:
    if ( MxSwitchDescriptors(a1) )
      goto LABEL_5;
    for ( i = 0; i < 2; ++i )
    {
      v10 = 0;
      v11 = a1;
      while ( 1 )
      {
        v5 = &MxBootFreeDescriptor[5 * v11];
        if ( v5 && v5[1] )
        {
          if ( a2 )
          {
            if ( v5[3] != -1 )
              goto LABEL_6;
          }
          else if ( v5[2] != -1 )
          {
            goto LABEL_12;
          }
        }
        v12 = v11 + 1;
        if ( v11 + 1 != (unsigned __int16)KeNumberNodes )
          ++v10;
        if ( v10 >= (unsigned __int16)KeNumberNodes )
          break;
        v11 = 0;
        if ( v12 != (unsigned __int16)KeNumberNodes )
          v11 = v12;
      }
    }
LABEL_34:
    byte_140C52B32 = 16;
    return -1LL;
  }
  if ( v5[3] == -1 )
    return -1LL;
LABEL_4:
  if ( !&MxBootFreeDescriptor[5 * a1] )
    goto LABEL_34;
LABEL_5:
  if ( !a2 )
  {
LABEL_12:
    v8 = v5[2];
    if ( v8 != (v8 & 0xFFFFFFFFFFFFFE00uLL) && v8 != *v5 )
    {
      v5[2] = v8 - 1;
LABEL_15:
      MxBootDescriptorDepleted(v5);
      return v6;
    }
    v13 = v5[3];
    v14 = *v5;
    if ( v13 == -1 )
    {
      if ( v8 != v14 && v14 != (v14 & 0xFFFFFFFFFFFFFE00uLL) )
        v3 = v14 | 0x1FF;
      v5[2] = v3;
      goto LABEL_15;
    }
    v5[2] = v13 + 511;
    if ( (unsigned __int64)(v13 - v14) >= 0x200 )
    {
      v5[3] = v13 - 512;
      goto LABEL_15;
    }
LABEL_17:
    v5[3] = -1LL;
    goto LABEL_15;
  }
LABEL_6:
  v6 = v5[3];
  if ( v6 != -1 )
  {
    if ( (unsigned __int64)(v6 - *v5) >= 0x200 )
    {
      v5[3] = v6 - 512;
      return v6;
    }
    goto LABEL_17;
  }
  return -1LL;
}
