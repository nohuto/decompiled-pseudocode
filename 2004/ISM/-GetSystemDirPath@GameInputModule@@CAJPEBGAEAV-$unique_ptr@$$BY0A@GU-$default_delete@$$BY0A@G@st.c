/*
 * XREFs of ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x180011AF4
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800426F0 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x1800427F8 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D310 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GameInputModule::GetSystemDirPath(__int64 a1, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  UINT SystemDirectoryW; // eax
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  WCHAR *v10; // rax
  WCHAR *v11; // rbx
  const struct std::nothrow_t *v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 i; // rbp
  unsigned __int64 v15; // rbp
  void *v16; // rcx
  signed int LastError; // eax
  unsigned int v19; // ecx

  v3 = *(void **)a2;
  *(_QWORD *)a2 = 0LL;
  if ( v3 )
    operator delete(v3, a2);
  SystemDirectoryW = GetSystemDirectoryW(0LL, 0);
  v6 = SystemDirectoryW;
  if ( SystemDirectoryW )
  {
    if ( a1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(a1 + 2 * v7) );
    }
    else
    {
      v7 = 0LL;
    }
    v8 = v7 + SystemDirectoryW + 1LL;
    if ( !a1 )
      v8 = SystemDirectoryW;
    v9 = 2 * v8;
    if ( !is_mul_ok(v8, 2uLL) )
      v9 = -1LL;
    v10 = (WCHAR *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( !v10 )
      return 2147942414LL;
    v13 = GetSystemDirectoryW(v10, v8);
    if ( v13 == v6 - 1 )
    {
      for ( i = 0LL; i < v13; ++i )
        v11[i] = _o_towlower(v11[i]);
      if ( a1 )
      {
        v15 = 0LL;
        for ( v11[v13++] = 92; v15 < v7; ++v13 )
          v11[v13] = _o_towlower(*(unsigned __int16 *)(a1 + 2 * v15++));
      }
      v11[v13] = 0;
      v16 = *(void **)a2;
      *(_QWORD *)a2 = v11;
      if ( v16 )
        operator delete(v16, v12);
      return 0LL;
    }
    operator delete(v11, v12);
    if ( v13 )
      return 2147549183LL;
  }
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  v19 = -2147418113;
  if ( LastError < 0 )
    return (unsigned int)LastError;
  return v19;
}
