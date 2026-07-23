/*
 * XREFs of LdrpGetDelayloadDescriptor @ 0x1800CEA7C
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CE830 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800CE8F0 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     _stricmp @ 0x18008D5F0 (_stricmp.c)
 */

char *__fastcall LdrpGetDelayloadDescriptor(unsigned __int64 a1, const char *a2)
{
  NTSTATUS v4; // eax
  char *v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  char *v11; // [rsp+88h] [rbp+20h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0xDu, &v10, &v11);
  v5 = v11;
  v6 = 0LL;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v7 = 0;
    v8 = v10 >> 5;
    if ( *((_DWORD *)v5 + 1) )
    {
      while ( v7 < v8 )
      {
        if ( !stricmp((const char *)(a1 + *(unsigned int *)&v5[32 * v7 + 4]), a2) )
          return &v5[32 * v7];
        if ( !*(_DWORD *)&v5[32 * ++v7 + 4] )
          return (char *)v6;
      }
    }
  }
  return (char *)v6;
}
