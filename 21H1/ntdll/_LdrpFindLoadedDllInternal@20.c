/*
 * XREFs of _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpFindLoadedDll@12 @ 0x4B2E9CFC (_LdrpFindLoadedDll@12.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpFindLoadedDllInternal(unsigned __int16 *a1, int *a2, int *a3, _DWORD *a4, __int16 a5)
{
  unsigned __int16 *v5; // esi
  int LoadedDllByName; // esi
  int v8; // ecx
  int v9; // eax
  unsigned __int16 v10; // [esp+14h] [ebp-128h] BYREF
  unsigned __int16 *v11; // [esp+18h] [ebp-124h]
  _DWORD *v12; // [esp+1Ch] [ebp-120h]
  int v13; // [esp+20h] [ebp-11Ch] BYREF
  int *v14; // [esp+24h] [ebp-118h]
  UNICODE_STRING v15; // [esp+28h] [ebp-114h] BYREF
  _WORD v16[130]; // [esp+30h] [ebp-10Ch] BYREF

  v5 = a1;
  v14 = a2;
  v11 = a1;
  v12 = a4;
  *a3 = 0;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0, a5, a3, a4);
    goto LABEL_3;
  }
  v8 = a5 & 0x200;
  if ( (a5 & 0x200) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(0, v5, a5, a3, a4);
    if ( LoadedDllByName >= 0 )
      goto LABEL_3;
    v8 = a5 & 0x200;
    v5 = v11;
    a2 = v14;
  }
  *(_DWORD *)&v15.Length = 0x1000000;
  v15.Buffer = v16;
  v16[0] = 0;
  v13 = 0;
  v14 = 0;
  if ( v8 )
    v9 = LdrpResolveDllName((int *)v5, (int *)&v15, (int)&v10, &v13, a5);
  else
    v9 = LdrpSearchPath((const void **)v5, a2, 0, 0, (int *)&v15, (int)&v10, (unsigned __int16 *)&v13, 0, 0);
  LoadedDllByName = v9;
  if ( v9 >= 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(&v10, (unsigned __int16 *)&v13, a5, a3, v12);
    if ( LoadedDllByName == -1073741515 )
      LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v15, (int)a3, (int)v12);
  }
  LdrpFreeUnicodeString(&v13);
  if ( v16 != v15.Buffer )
    RtlDeleteBoundaryDescriptor((int)v15.Buffer);
  *(_DWORD *)&v15.Length = 0x1000000;
  v15.Buffer = v16;
  v16[0] = 0;
LABEL_3:
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrfind.c",
      480,
      "LdrpFindLoadedDllInternal",
      4,
      "Status: 0x%08lx\n",
      LoadedDllByName);
  return LoadedDllByName;
}
