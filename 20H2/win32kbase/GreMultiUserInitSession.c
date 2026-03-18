/*
 * XREFs of GreMultiUserInitSession @ 0x1C00CAD50
 * Callers:
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C008FD68 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall GreMultiUserInitSession(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int16 *a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rbp
  char *v15; // rax
  __int64 v16; // rcx
  char *v17; // rax

  *(_DWORD *)(a1 + 4) = a5;
  v12 = 0;
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 16) = a7;
  *(_DWORD *)a1 = a4;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 24) = a2;
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
    Win32FreePool(v13);
  v14 = (unsigned int)(a8 + 1);
  v15 = (char *)Win32AllocPool(2 * v14, 0x79737355u);
  *(_QWORD *)(a1 + 40) = v15;
  if ( v15 )
  {
    StringCchCopyNW(v15, (unsigned int)(a8 + 1), (char *)a9, (unsigned int)(a8 + 1));
    *(_DWORD *)(a1 + 48) = v14;
    v12 = 1;
  }
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
    Win32FreePool(v16);
  v17 = (char *)Win32AllocPool(2LL * (unsigned int)(a10 + 1), 0x79737355u);
  *(_QWORD *)(a1 + 56) = v17;
  if ( v17 )
  {
    StringCchCopyNW(v17, (unsigned int)(a10 + 1), (char *)a11, (unsigned int)(a10 + 1));
    return 1;
  }
  return v12;
}
