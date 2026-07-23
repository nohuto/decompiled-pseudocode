/*
 * XREFs of LdrpGetDataModulePath @ 0x1800537A4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x180053918 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x1800539E0 (LdrFindEntryForAddress.c)
 *     wcsrchr @ 0x1800926A0 (wcsrchr.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall LdrpGetDataModulePath(
        void *a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        wchar_t **a5,
        _DWORD *a6,
        PVOID DllHandle)
{
  NTSTATUS EntryForAddress; // ebx
  wchar_t *v10; // rdi
  wchar_t *v11; // rcx
  wchar_t *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ecx
  _QWORD *v15; // rcx
  struct _ACTIVATION_CONTEXT *EntryPointActivationContext; // rax
  PLDR_DATA_TABLE_ENTRY v18; // rdi
  unsigned int v19; // eax
  wchar_t *v20[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+40h] [rbp-28h]
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+70h] [rbp+8h] BYREF

  Entry = 0LL;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  if ( ((unsigned __int8)a1 & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(a1, &Entry);
    if ( EntryForAddress < 0 )
      return (unsigned int)EntryForAddress;
    v18 = Entry;
    v19 = Entry->FullDllName.Length - Entry->BaseDllName.Length;
    *a4 = v19;
    if ( v19 <= v18->FullDllName.Length && v19 < 0x2BE )
    {
      memmove(a2, v18->FullDllName.Buffer, v19);
      *a5 = v18->BaseDllName.Buffer;
      *a6 = v18->BaseDllName.Length;
      v15 = DllHandle;
      if ( !DllHandle )
        return (unsigned int)EntryForAddress;
      EntryPointActivationContext = v18->EntryPointActivationContext;
      goto LABEL_9;
    }
    return (unsigned int)-2147483643;
  }
  EntryForAddress = LdrpGetLoadAsEntry(a1, v20);
  if ( EntryForAddress < 0 )
    return (unsigned int)EntryForAddress;
  v10 = v20[1];
  v11 = wcsrchr(v20[1], 0x5Cu);
  if ( !v11 )
    return (unsigned int)-1073741767;
  v12 = v11 + 1;
  v13 = -1LL;
  *a5 = v12;
  do
    ++v13;
  while ( v12[v13] );
  v14 = 2 * (v12 - v10);
  *a6 = 2 * v13;
  *a4 = v14;
  if ( v14 >= 0x2BE )
    return (unsigned int)-2147483643;
  memmove(a2, v10, v14);
  v15 = DllHandle;
  if ( DllHandle )
  {
    EntryPointActivationContext = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) != -1LL )
LABEL_9:
      *v15 = EntryPointActivationContext;
  }
  return (unsigned int)EntryForAddress;
}
