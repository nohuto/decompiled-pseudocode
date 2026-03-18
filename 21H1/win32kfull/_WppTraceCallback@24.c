/*
 * XREFs of _WppTraceCallback@24 @ 0x27AFB5
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _WppIsEqualGuid@8 @ 0x178114 (_WppIsEqualGuid@8.c)
 */

int __stdcall WppTraceCallback(char a1, int a2, size_t Size, _DWORD *a4, int a5, int *a6)
{
  int *v6; // edi
  int v7; // ebx
  unsigned int v8; // esi
  int v9; // eax
  const void **v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  _DWORD *v19; // esi
  int v20; // esi
  _DWORD *v21; // edx
  bool v22; // zf
  int v23; // ecx
  int v25; // [esp+Ch] [ebp-10h]
  const void **v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h] BYREF
  int v28; // [esp+24h] [ebp+8h]

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  switch ( a1 )
  {
    case 4:
    case 5:
      v20 = a5;
      a6 = 0;
      v27 = 0;
      if ( !a5 )
        goto LABEL_20;
      if ( Size < 0x30 )
        goto LABEL_5;
      v21 = a4 + 6;
      do
      {
        if ( WppIsEqualGuid(*(_DWORD **)(v20 + 4), v21) )
          break;
        v20 = *(_DWORD *)(v20 + 8);
      }
      while ( v20 );
      if ( v20 )
      {
        if ( a1 == 5 )
        {
          *(_BYTE *)(v20 + 29) = 0;
          *(_DWORD *)(v20 + 32) = 0;
          *(_DWORD *)(v20 + 16) = 0;
          *(_DWORD *)(v20 + 20) = 0;
        }
        else
        {
          v22 = WPPTraceSuite == 2;
          v23 = a4[3];
          v25 = a4[2];
          *(_DWORD *)(v20 + 16) = v25;
          *(_DWORD *)(v20 + 20) = v23;
          if ( v22 )
          {
            if ( !pfnWppQueryTraceInformation(3, &a6, 4, &v27, a4) )
              *(_BYTE *)(v20 + 29) = (_BYTE)a6;
            v7 = pfnWppQueryTraceInformation(2, v20 + 32, 4, &v27, a4);
          }
          else
          {
            *(_DWORD *)(v20 + 32) = v23;
            *(_BYTE *)(v20 + 29) = BYTE2(v25);
          }
        }
      }
      else
      {
LABEL_20:
        v7 = -1073741163;
      }
      break;
    case 6:
    case 7:
      return v7;
    case 8:
      v8 = 0;
      v9 = a5;
      v10 = *(const void ***)(a5 + 24);
      v26 = v10;
      do
      {
        v9 = *(_DWORD *)(v9 + 8);
        ++v8;
      }
      while ( v9 );
      if ( v8 <= 0x3F )
      {
        v11 = 28 * v8 + 20;
        v28 = v11;
        if ( v10 )
        {
          v12 = *(unsigned __int16 *)v10 + 2;
          v27 = 28 * v8 + 20;
          v11 = v27 + v12;
          v6 = a6;
          v28 = v11;
        }
        else
        {
          v27 = 0;
        }
        if ( v11 > Size )
        {
          v7 = -1073741789;
          if ( Size >= 4 )
          {
            *a4 = v11;
            *v6 = 4;
          }
        }
        else
        {
          memset(a4, 0, Size);
          v13 = v28;
          v14 = v27;
          *a4 = v28;
          a4[2] = v14;
          a4[4] = v8;
          if ( v26 )
          {
            v15 = v27;
            *(_WORD *)((char *)a4 + v27) = *(_WORD *)v26;
            memcpy((char *)a4 + v15 + 2, v26[1], *(unsigned __int16 *)v26);
            v13 = v28;
          }
          if ( v8 )
          {
            v16 = v8;
            v17 = a4 + 9;
            v18 = a5;
            do
            {
              v19 = *(_DWORD **)(v18 + 4);
              *(v17 - 4) = *v19++;
              *(v17 - 3) = *v19++;
              *(v17 - 2) = *v19;
              *(v17 - 1) = v19[1];
              *v17 = (char *)&loc_80FFF + 1;
              v17 += 7;
              *(_BYTE *)(v18 + 29) = 0;
              *(_DWORD *)(v18 + 32) = 0;
              v18 = *(_DWORD *)(v18 + 8);
              --v16;
            }
            while ( v16 );
            v13 = v28;
          }
          *a6 = v13;
        }
      }
      else
      {
LABEL_5:
        v7 = -1073741811;
      }
      break;
    default:
      v7 = -1073741808;
      break;
  }
  return v7;
}
