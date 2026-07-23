/*
 * XREFs of _LdrpResolveDllName@20 @ 0x4B2D1F2E
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpMapDllFullPath@4 @ 0x4B2DE04A (_LdrpMapDllFullPath@4.c)
 *     _LdrpAppCompatRedirect@20 @ 0x4B2DE3B6 (_LdrpAppCompatRedirect@20.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 * Callees:
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _LdrpAllocateUnicodeString@8 @ 0x4B2D1D30 (_LdrpAllocateUnicodeString@8.c)
 *     _LdrpGetNtPathFromDosPath@8 @ 0x4B2D204F (_LdrpGetNtPathFromDosPath@8.c)
 *     _LdrpGetFullPath@8 @ 0x4B2D2394 (_LdrpGetFullPath@8.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpResolveDllName(int *a1, int *a2, PUNICODE_STRING DestinationString, _DWORD *a4, __int16 a5)
{
  int FullPath; // esi
  void *v7; // eax
  _WORD *v8; // eax
  int v9; // ebx
  int NtPathFromDosPath; // eax
  unsigned __int16 v11; // ax
  const WCHAR *v12; // edx
  const WCHAR *i; // eax
  int v14; // ecx
  size_t v16; // [esp-4h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-10h] BYREF
  void *v18; // [esp+10h] [ebp-Ch]
  void *Src; // [esp+14h] [ebp-8h]

  Src = a1;
  if ( (ShowSnaps & 9) != 0 )
  {
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrfind.c", 1738, "LdrpResolveDllName", 3, "DLL name: %wZ\n", a1);
    a1 = (int *)Src;
  }
  if ( (a5 & 0x200) != 0 )
  {
    FullPath = 0;
    v17 = *a1;
    v7 = (void *)a1[1];
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    v7 = (void *)a2[1];
    v17 = *a2;
  }
  v18 = v7;
  Src = v7;
  if ( FullPath >= 0 )
  {
    if ( (a5 & 0x200) != 0 || (v8 = a2 + 2, a2 + 2 == (int *)a2[1]) )
    {
      v9 = (unsigned __int16)v17;
      FullPath = LdrpAllocateUnicodeString((int)&v17, (unsigned __int16)v17);
      if ( FullPath >= 0 )
      {
        LODWORD(v16) = v9 + 2;
        memcpy(v18, Src, v16);
        LOWORD(v17) = v9;
      }
    }
    else
    {
      a2[1] = (int)v8;
      *((_WORD *)a2 + 1) = 256;
      *v8 = 0;
    }
    *(_WORD *)a2 = 0;
    if ( FullPath >= 0 )
    {
      NtPathFromDosPath = LdrpGetNtPathFromDosPath(&v17, a2);
      FullPath = NtPathFromDosPath;
      if ( NtPathFromDosPath < 0 )
      {
        if ( NtPathFromDosPath == -1073741772
          || NtPathFromDosPath == -1073741766
          || NtPathFromDosPath == -1073741773
          || NtPathFromDosPath == -1073741767
          || NtPathFromDosPath == -1073741765
          || NtPathFromDosPath == -1073741809
          || NtPathFromDosPath == -1073741805
          || NtPathFromDosPath == -1073741661
          || NtPathFromDosPath == -2147483632 )
        {
          FullPath = -1073741515;
        }
        LdrpFreeUnicodeString(&v17);
      }
      else
      {
        v11 = v17;
        v12 = (const WCHAR *)v18;
        *a4 = v17;
        a4[1] = v12;
        for ( i = (const WCHAR *)((char *)v12 + v11 - 2); i >= v12; --i )
        {
          v14 = *(unsigned __int16 *)i;
          if ( v14 == 92 || v14 == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx(DestinationString, i);
      }
    }
  }
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrfind.c", 1849, "LdrpResolveDllName", 4, "Status: 0x%08lx\n", FullPath);
  return FullPath;
}
