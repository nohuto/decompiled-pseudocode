/*
 * XREFs of _RtlpScanEnvironment@28 @ 0x4B2E2428
 * Callers:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpScanEnvironment(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        int a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int *a6,
        int a7)
{
  unsigned __int16 *v7; // esi
  unsigned __int16 *v8; // edi
  unsigned __int16 *v9; // edx
  unsigned __int16 *v10; // ebx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  unsigned __int16 *v15; // ebx
  unsigned __int16 *v16; // edx
  _BYTE *v17; // edx
  unsigned int v18; // edi
  int result; // eax
  int v20; // ecx
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned __int16 **v23; // ecx
  unsigned __int16 **v24; // eax
  size_t v25; // [esp-4h] [ebp-20h]
  int v27; // [esp+10h] [ebp-Ch]
  unsigned int v28; // [esp+14h] [ebp-8h]
  unsigned __int16 *v29; // [esp+18h] [ebp-4h]

  v7 = a2;
  v8 = a1;
  v9 = &a2[a3];
  v28 = (unsigned int)v9;
  if ( !*a1 )
  {
LABEL_27:
    if ( a7 )
      dword_4B3A65D0 = (int)v8;
    return -1073741568;
  }
  while ( 1 )
  {
    v29 = v8;
    v10 = v7;
    if ( v7 < v9 )
    {
      do
      {
        if ( !*v8 )
          break;
        v11 = NLS_UPCASE(*v8);
        v12 = NLS_UPCASE(*v10);
        v9 = (unsigned __int16 *)v28;
        if ( v11 != v12 )
          break;
        ++v10;
        ++v8;
      }
      while ( (unsigned int)v10 < v28 );
    }
    if ( v10 == v9 && *v8 == 61 )
    {
      v27 = 1;
LABEL_22:
      v15 = v29;
      goto LABEL_11;
    }
    v13 = *v8;
    v27 = 0;
    v14 = *v8;
    if ( !*v8 )
    {
LABEL_30:
      if ( !v14 )
        goto LABEL_16;
      goto LABEL_22;
    }
    while ( 1 )
    {
      if ( v13 == 61 )
      {
        v15 = v29;
        if ( v8 != v29 )
          break;
      }
      v13 = *++v8;
      v14 = *v8;
      if ( !*v8 )
        goto LABEL_30;
    }
LABEL_11:
    v16 = v8;
    while ( *v8 )
      ++v8;
    if ( a7 )
    {
      v20 = v16 - v15;
      if ( (unsigned int)(v20 - 1) <= 0x13 )
      {
        v21 = 28 * v20;
        v22 = LdrpCurrentDllInitializer[7 * v20];
        if ( v22 < 3 )
        {
          v23 = (unsigned __int16 **)((char *)&CsrServerApiRoutine + v21);
          v24 = (unsigned __int16 **)((char *)&CsrServerApiRoutine + 8 * v22 + v21);
          while ( v23 < v24 && *v23 != v15 )
            v23 += 2;
          if ( v23 == v24 )
          {
            *v23 = v15;
            v23[1] = v8 + 1;
            ++LdrpCurrentDllInitializer[v21 / 4];
            dword_4B3A65D0 = (int)(v8 + 1);
          }
        }
      }
    }
    if ( v27 )
      break;
LABEL_16:
    if ( !*++v8 )
      goto LABEL_27;
    v9 = (unsigned __int16 *)v28;
    v7 = a2;
  }
  v17 = v16 + 1;
  v18 = ((char *)v8 - v17) >> 1;
  if ( a4 )
  {
    if ( v18 < a5 )
    {
      LODWORD(v25) = 2 * v18;
      *a6 = v18;
      memcpy(a4, v17, v25);
      result = 0;
      a4[v18] = 0;
      return result;
    }
    if ( a5 )
      *a4 = 0;
  }
  *a6 = v18 + 1;
  return -1073741789;
}
