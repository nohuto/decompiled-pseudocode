/*
 * XREFs of _NtGdiEnumObjects@16 @ 0x21F2D2
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

unsigned int __stdcall NtGdiEnumObjects(HDC a1, int a2, SIZE_T Length, _DWORD *Address)
{
  unsigned int v4; // ebx
  _DWORD *v5; // esi
  unsigned int v6; // edi
  SIZE_T v7; // ecx
  char *j; // ecx
  _DWORD *v9; // ecx
  char *v10; // eax
  char *k; // edx
  _DWORD *v12; // ecx
  char *v13; // eax
  char *i; // edx
  int v16; // [esp-4h] [ebp-4Ch]
  _DWORD v17[3]; // [esp+10h] [ebp-38h] BYREF
  volatile void *v18; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v19; // [esp+20h] [ebp-28h]
  _DWORD *v20; // [esp+24h] [ebp-24h]
  volatile void *v21; // [esp+28h] [ebp-20h]
  char *v22; // [esp+2Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v4 = 0;
  v5 = Address;
  if ( (Length == 0) != (Address == 0) )
    return v4;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] )
  {
LABEL_37:
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return v4;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(v17[0] + 36) + 1452);
  if ( !v6 )
    goto LABEL_40;
  if ( v6 >= 0x14 )
  {
    v16 = 20;
LABEL_12:
    v6 = v16;
    goto LABEL_13;
  }
  if ( v6 >= 0x10 )
  {
    v16 = 16;
    goto LABEL_12;
  }
  if ( v6 >= 8 )
  {
    v16 = 8;
    goto LABEL_12;
  }
  if ( v6 >= 2 )
  {
    v16 = 2;
    goto LABEL_12;
  }
LABEL_13:
  if ( a2 == 1 )
  {
    v7 = Length >> 4;
    if ( 0xFFFFFFFF / v6 >= 5 )
      v4 = 5 * v6;
    goto LABEL_19;
  }
  if ( a2 == 2 )
  {
    v7 = Length / 0xC;
    if ( 0xFFFFFFFF / v6 >= 7 )
      v4 = 7 * v6;
LABEL_19:
    if ( v7 < v4 )
    {
      v4 &= -(v7 == 0);
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      ProbeForWrite(Address, Length, 4u);
      v22 = 0;
      v19 = 0;
      v20 = 0;
      v18 = Address;
      v21 = Address;
      if ( a2 == 1 )
      {
        v12 = dword_26DE60;
        v13 = (char *)&dword_26DE78[v6];
        while ( 1 )
        {
          v19 = v12;
          if ( v12 >= &dword_26DE74 )
            break;
          for ( i = (char *)dword_26DE78; ; i += 4 )
          {
            v22 = i;
            if ( i >= v13 )
              break;
            v5[1] = 0;
            v5[2] = 0;
            *v5 = *v12;
            v5[3] = *(_DWORD *)i;
            v5 += 4;
            v18 = v5;
            v13 = (char *)&dword_26DE78[v6];
          }
          ++v12;
        }
      }
      else
      {
        for ( j = (char *)dword_26DE78; ; j += 4 )
        {
          v22 = j;
          if ( j >= (char *)&dword_26DE78[v6] )
            break;
          *v5 = 0;
          v5[1] = *(_DWORD *)j;
          v5[2] = 0;
          v5 += 3;
          v21 = v5;
        }
        v9 = &gaulHatchStyles;
        v10 = (char *)&dword_26DE78[v6];
        while ( 1 )
        {
          v20 = v9;
          if ( v9 >= dword_26DE60 )
            break;
          for ( k = (char *)dword_26DE78; ; k += 4 )
          {
            v22 = k;
            if ( k >= v10 )
              break;
            *v5 = 2;
            v5[1] = *(_DWORD *)k;
            v5[2] = *v9;
            v5 += 3;
            v21 = v5;
            v10 = (char *)&dword_26DE78[v6];
          }
          ++v9;
        }
      }
      ms_exc.registration.TryLevel = -2;
    }
    goto LABEL_37;
  }
LABEL_40:
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return 0;
}
