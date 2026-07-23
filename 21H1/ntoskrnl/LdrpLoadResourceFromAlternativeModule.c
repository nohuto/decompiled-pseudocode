/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x14033A6C4
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x14033A250 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x14033B4C4 (LdrpFindMessageInAlternateModule.c)
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __fastcall LdrpLoadResourceFromAlternativeModule(void *a1, __int64 a2, int a3, ULONG Flags, _QWORD *a5)
{
  char v5; // si
  LANGID v7; // bx
  NTSTATUS result; // eax
  int v9; // ecx
  PVOID ResourceDllBase; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR ResourceOffset[2]; // [rsp+38h] [rbp-10h] BYREF

  ResourceDllBase = 0LL;
  v5 = Flags;
  if ( (unsigned int)(a3 - 3) > 1 )
    return -1073741583;
  if ( (Flags & 0x1000000) != 0 )
    v7 = -3346;
  else
    v7 = *(_WORD *)(a2 + 16);
  ResourceOffset[0] = 0LL;
  result = LdrLoadAlternateResourceModuleEx(a1, v7, &ResourceDllBase, ResourceOffset, Flags);
  if ( result >= 0 )
  {
    v9 = (int)ResourceDllBase;
    *(_QWORD *)(a2 + 16) = v7;
    result = LdrpSearchResourceSection_U(v9, a2, 3, 33554480, (__int64)a5);
    if ( (v5 & 0x40) != 0 && result >= 0 )
    {
      result = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *a5, 0, *(_DWORD *)(a2 + 24), 0);
      if ( result < 0 )
        *a5 = 0LL;
    }
  }
  else if ( result == -1073741766 || result == -1073741772 )
  {
    return -1073020927;
  }
  return result;
}
