/*
 * XREFs of _LdrpInitializeShimDllDependencies@0 @ 0x4B2A672F
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 * Callees:
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpInitializationFailure@4 @ 0x4B331C4E (_LdrpInitializationFailure@4.c)
 */

int *__stdcall LdrpInitializeShimDllDependencies()
{
  int *v0; // ecx
  int *v1; // esi
  int v2; // ecx
  int *v3; // edx
  bool v4; // zf
  int *result; // eax
  int v6; // eax
  int *v7; // ebx
  int *v8; // edi
  int v9; // eax
  char v10; // al
  _DWORD v11[27]; // [esp+10h] [ebp-80h] BYREF
  int *v12; // [esp+84h] [ebp-Ch]
  int v13; // [esp+88h] [ebp-8h] BYREF
  char v14; // [esp+8Fh] [ebp-1h] BYREF

  memset(v11, 0, sizeof(v11));
  v0 = (int *)dword_4B3A5D8C;
  v11[6] = &v13;
  v11[4] = 0x80000;
  while ( v0 != &dword_4B3A5D8C )
  {
    if ( *(_DWORD *)(v0[20] + 32) == 7 && !v0[23] )
      v0[23] = (int)v11;
    v0 = (int *)*v0;
  }
  v1 = (int *)dword_4B3A5D8C;
  v2 = 0;
  v3 = 0;
  v13 = 0;
  if ( (int *)dword_4B3A5D8C == &dword_4B3A5D8C )
    goto LABEL_11;
  while ( 1 )
  {
    v4 = (v1[13] & 0x100) == 0;
    v12 = v1;
    if ( !v4 )
    {
      v6 = v1[20];
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        break;
    }
LABEL_9:
    v1 = (int *)*v1;
    if ( v1 == &dword_4B3A5D8C )
      goto LABEL_10;
  }
  v8 = *(int **)(v6 + 24);
  while ( 1 )
  {
    v8 = (int *)*v8;
    if ( (v8[3] & 1) == 0 )
    {
      v9 = v8[1];
      if ( *(_DWORD *)(v9 + 32) == 7 )
      {
        v14 = 0;
        v2 = LdrpInitializeGraphRecurse(&v14);
        v13 = v2;
        if ( v2 < 0 )
          goto LABEL_10;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v9 + 32) == -4 )
        break;
    }
LABEL_23:
    if ( v8 == v7 )
      goto LABEL_9;
  }
  v2 = -1073741502;
  v13 = -1073741502;
LABEL_10:
  v3 = v12;
LABEL_11:
  result = (int *)dword_4B3A5D8C;
  if ( (int *)dword_4B3A5D8C != &dword_4B3A5D8C )
  {
    do
    {
      v3 = result;
      if ( (_DWORD *)result[23] == v11 )
        result[23] = 0;
      result = (int *)*result;
    }
    while ( result != &dword_4B3A5D8C );
    v2 = v13;
  }
  if ( v2 < 0 )
  {
    v10 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        2566,
        "LdrpInitializeShimDllDependencies",
        0,
        "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        v3 + 9,
        v2);
      v2 = v13;
      v10 = ShowSnaps;
    }
    if ( (v10 & 0x10) != 0 )
      __debugbreak();
    LdrpInitializationFailure(v2);
    return (int *)ZwTerminateProcess(-1, v13);
  }
  return result;
}
