/*
 * XREFs of _RtlExpandEnvironmentStrings@24 @ 0x4B2DC3A0
 * Callers:
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 * Callees:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 */

int __stdcall RtlExpandEnvironmentStrings(_WORD *a1, _WORD *a2, int a3, _WORD *a4, unsigned int a5, _DWORD *a6)
{
  int v6; // ebx
  int v7; // edx
  int v8; // esi
  _WORD *v10; // ecx
  _WORD *v12; // eax
  int result; // eax
  _WORD *v14; // eax
  wchar_t *v15; // eax
  int v16; // [esp+10h] [ebp-20h] BYREF
  wchar_t *String1; // [esp+14h] [ebp-1Ch]
  size_t v18; // [esp+18h] [ebp-18h]
  _WORD *v19; // [esp+1Ch] [ebp-14h]
  int v20; // [esp+20h] [ebp-10h]
  size_t MaxCount; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]
  void *i; // [esp+2Ch] [ebp-4h]

  v6 = a3;
  v7 = 0;
  v8 = 0;
  v22 = 0;
  v20 = 0;
  if ( !a3 )
  {
    v12 = a4;
    goto LABEL_12;
  }
  v10 = a4;
  for ( i = a4; ; v10 = i )
  {
    if ( *a2 != 37 )
      goto LABEL_5;
    MaxCount = 0;
    v14 = a2 + 1;
    v18 = v6 - 1;
    String1 = a2 + 1;
    v7 = v22;
    if ( v6 == 1 )
      goto LABEL_5;
    do
    {
      if ( *v14 == 37 )
        break;
      ++MaxCount;
      ++v14;
    }
    while ( MaxCount < v6 - 1 );
    v10 = i;
    v19 = v14;
    if ( !MaxCount || MaxCount >= v18 )
      goto LABEL_5;
    v15 = (wchar_t *)RtlQueryEnvironmentVariable(a1, String1, MaxCount, (char *)i, a5, &v16);
    String1 = v15;
    if ( (int)v15 < 0 && v15 != (wchar_t *)-1073741789 )
    {
      v10 = i;
      v7 = v22;
LABEL_5:
      if ( v20 >= 0 )
      {
        if ( a5 <= 1 )
        {
          v20 = -1073741789;
        }
        else
        {
          --a5;
          *v10 = *a2;
          i = v10 + 1;
        }
      }
      ++v7;
      v19 = a2;
      v22 = v7;
      --v6;
LABEL_9:
      v12 = i;
      goto LABEL_10;
    }
    v7 = v16 + v22;
    v22 += v16;
    if ( v15 == (wchar_t *)-1073741789 )
      v22 = --v7;
    v6 += -2 - MaxCount;
    if ( (int)String1 < 0 )
    {
      v20 = (int)String1;
      goto LABEL_9;
    }
    a5 -= v16;
    v12 = (char *)i + 2 * v16;
    i = v12;
LABEL_10:
    a2 = v19 + 1;
    if ( !v6 )
      break;
  }
  v8 = v20;
  if ( v20 >= 0 )
  {
LABEL_12:
    if ( a5 )
      *v12 = 0;
    else
      v8 = -1073741789;
  }
  result = v8;
  if ( a6 )
    *a6 = v7 + 1;
  return result;
}
