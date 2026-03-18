/*
 * XREFs of _FindCachedSMP @ 0x1BA0CA
 * Callers:
 *     _GetCachedSMP @ 0x1BA272 (_GetCachedSMP.c)
 * Callees:
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _CreateStandardMonoPattern @ 0x1BBAAF (_CreateStandardMonoPattern.c)
 */

int **__fastcall FindCachedSMP(int a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *j; // esi
  char v6; // dl
  int *v7; // ebx
  int **i; // ecx
  int **result; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  void *v12; // eax
  int *v13; // eax
  PVOID v14; // ecx
  int v15; // edi
  char *v16; // eax
  char *v17; // esi
  int v18; // ecx
  int v19; // [esp+10h] [ebp-20h] BYREF
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  char *v22; // [esp+1Ch] [ebp-14h]
  int v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+24h] [ebp-Ch]
  ULONG cjMemSize; // [esp+28h] [ebp-8h] BYREF
  int v26; // [esp+2Ch] [ebp-4h]

  v26 = a2;
  v23 = a1;
  v2 = *(_DWORD *)(a1 + 16);
  v24 = v2;
  EngAcquireSemaphore(hsem);
  v3 = pv;
  if ( pv )
  {
    v4 = 0;
    while ( *v3 != v2 )
    {
      v4 = v3;
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
        goto LABEL_5;
    }
    if ( v4 )
    {
      v4[1] = v3[1];
      v3[1] = pv;
      pv = v3;
    }
    v6 = v26;
    v7 = v3 + 2;
    for ( i = (int **)v3[2]; i; i = (int **)*i )
    {
      if ( *((unsigned __int16 *)i + 2) == v26 )
        return i;
    }
  }
  else
  {
LABEL_5:
    if ( (unsigned __int16)word_27432A >= 0xAu )
    {
      cjMemSize = 0;
      for ( j = pv; ; j = v10 )
      {
        v10 = (_DWORD *)j[1];
        if ( !v10 )
          break;
        cjMemSize = (ULONG)j;
      }
      v11 = (_DWORD *)j[2];
      while ( 1 )
      {
        v12 = v11;
        if ( !v11 )
          break;
        v11 = (_DWORD *)*v11;
        EngFreeMem(v12);
      }
      EngFreeMem(j);
      v2 = v24;
      *(_DWORD *)(cjMemSize + 4) = 0;
      --word_27432A;
    }
    v13 = (int *)EngAllocMem(0, 0xCu, 0x32305448u);
    if ( !v13 )
      goto LABEL_26;
    v14 = pv;
    v6 = v26;
    *v13 = v2;
    v7 = v13 + 2;
    v13[2] = 0;
    ++word_27432A;
    v13[1] = (int)v14;
    pv = v13;
  }
  v19 = 65537;
  v20 = 3848;
  v21 = 0;
  v15 = v23;
  v22 = 0;
  HIBYTE(v19) = v6;
  cjMemSize = CreateStandardMonoPattern(v23, &v19);
  if ( (int)ULongAdd(&cjMemSize) >= 0 )
  {
    v16 = (char *)EngAllocMem(0, cjMemSize, 0x33305448u);
    v17 = v16;
    if ( v16 )
    {
      v22 = v16 + 12;
      CreateStandardMonoPattern(v15, &v19);
      v18 = *v7;
      *((_WORD *)v17 + 2) = v26;
      *(_DWORD *)(v17 + 6) = v21;
      *((_WORD *)v17 + 5) = HIWORD(v20);
      result = (int **)v17;
      *(_DWORD *)v17 = v18;
      *v7 = (int)v17;
      return result;
    }
  }
LABEL_26:
  EngReleaseSemaphore(hsem);
  return 0;
}
