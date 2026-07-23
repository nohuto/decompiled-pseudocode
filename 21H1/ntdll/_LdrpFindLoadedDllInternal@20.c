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

int __fastcall LdrpFindLoadedDllInternal(_UNICODE_STRING *a1, wchar_t *a2, int *a3, _DWORD *a4, __int16 a5)
{
  UNICODE_STRING *Buffer; // esi
  int LoadedDllByName; // esi
  int v8; // ecx
  int v9; // eax
  _UNICODE_STRING DestinationString; // [esp+14h] [ebp-128h] BYREF
  _DWORD *v11; // [esp+1Ch] [ebp-120h]
  UNICODE_STRING v12; // [esp+20h] [ebp-11Ch] BYREF
  _UNICODE_STRING v13; // [esp+28h] [ebp-114h] BYREF
  _WORD v14[130]; // [esp+30h] [ebp-10Ch] BYREF

  Buffer = a1;
  v12.Buffer = a2;
  DestinationString.Buffer = &a1->Length;
  v11 = a4;
  *a3 = 0;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0, a5, a3, a4);
    goto LABEL_3;
  }
  v8 = a5 & 0x200;
  if ( (a5 & 0x200) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(0, &Buffer->Length, a5, a3, a4);
    if ( LoadedDllByName >= 0 )
      goto LABEL_3;
    v8 = a5 & 0x200;
    Buffer = (UNICODE_STRING *)DestinationString.Buffer;
    a2 = v12.Buffer;
  }
  *(_DWORD *)&v13.Length = 0x1000000;
  v13.Buffer = v14;
  v14[0] = 0;
  *(_DWORD *)&v12.Length = 0;
  v12.Buffer = 0;
  if ( v8 )
    v9 = LdrpResolveDllName((int *)Buffer, (int *)&v13, &DestinationString, &v12, a5);
  else
    v9 = LdrpSearchPath(Buffer, (PCWSTR *)a2, 0, 0, (int *)&v13, &DestinationString, &v12, 0, 0);
  LoadedDllByName = v9;
  if ( v9 >= 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(&DestinationString, &v12.Length, a5, a3, v11);
    if ( LoadedDllByName == -1073741515 )
      LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v13, (int)a3, (int)v11);
  }
  LdrpFreeUnicodeString((POBJECT_BOUNDARY_DESCRIPTOR *)&v12);
  if ( v14 != v13.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v13.Buffer);
  *(_DWORD *)&v13.Length = 0x1000000;
  v13.Buffer = v14;
  v14[0] = 0;
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
