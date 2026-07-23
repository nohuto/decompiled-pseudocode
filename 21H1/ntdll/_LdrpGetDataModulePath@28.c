/*
 * XREFs of _LdrpGetDataModulePath@28 @ 0x4B2B8EDE
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 *     _LdrFindEntryForAddress@8 @ 0x4B2CF200 (_LdrFindEntryForAddress@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 */

NTSTATUS __fastcall LdrpGetDataModulePath(
        PVOID DllHandle,
        void *a2,
        int a3,
        unsigned int *a4,
        wchar_t **a5,
        _DWORD *a6,
        wchar_t **a7)
{
  NTSTATUS EntryForAddress; // esi
  wchar_t *v8; // edx
  wchar_t *v9; // edx
  wchar_t *v10; // ecx
  wchar_t *v11; // edi
  unsigned int v13; // edx
  wchar_t **v14; // ecx
  wchar_t *EntryPointActivationContext; // eax
  PLDR_DATA_TABLE_ENTRY v17; // edi
  unsigned int v18; // edx
  size_t v19; // [esp-4h] [ebp-34h]
  PLDR_DATA_TABLE_ENTRY Entry; // [esp+10h] [ebp-20h] BYREF
  void *v21; // [esp+14h] [ebp-1Ch]
  wchar_t *v22[6]; // [esp+18h] [ebp-18h] BYREF

  Entry = 0;
  v21 = a2;
  memset(v22, 0, sizeof(v22));
  if ( ((unsigned __int8)DllHandle & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
    if ( EntryForAddress < 0 )
      return EntryForAddress;
    v17 = Entry;
    v18 = Entry->FullDllName.Length - Entry->BaseDllName.Length;
    *a4 = v18;
    if ( v18 <= v17->FullDllName.Length && v18 < 0x2BE )
    {
      LODWORD(v19) = v18;
      memcpy(v21, v17->FullDllName.Buffer, v19);
      *a5 = v17->BaseDllName.Buffer;
      *a6 = v17->BaseDllName.Length;
      v14 = a7;
      if ( !a7 )
        return EntryForAddress;
      EntryPointActivationContext = (wchar_t *)v17->EntryPointActivationContext;
      goto LABEL_9;
    }
    return -2147483643;
  }
  EntryForAddress = LdrpGetLoadAsEntry((unsigned __int8)DllHandle, (char *)v22);
  if ( EntryForAddress < 0 )
    return EntryForAddress;
  v8 = wcsrchr(v22[1], 0x5Cu);
  if ( !v8 )
    return -1073741767;
  v9 = v8 + 1;
  v10 = v9;
  *a5 = v9;
  v11 = v9 + 1;
  while ( *v10++ )
    ;
  v13 = ((char *)v9 - (char *)v22[1]) & 0xFFFFFFFE;
  *a6 = 2 * (v10 - v11);
  *a4 = v13;
  if ( v13 >= 0x2BE )
    return -2147483643;
  LODWORD(v19) = v13;
  memcpy(v21, v22[1], v19);
  v14 = a7;
  if ( a7 )
  {
    EntryPointActivationContext = v22[5];
    if ( v22[5] != (wchar_t *)-1 )
LABEL_9:
      *v14 = EntryPointActivationContext;
  }
  return EntryForAddress;
}
