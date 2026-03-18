/*
 * XREFs of PnpNotifyUserModeDeviceRemoval @ 0x140765C60
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14095E4BC (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PiUEventNotifyUserMode @ 0x14078B2D4 (PiUEventNotifyUserMode.c)
 */

NTSTATUS __fastcall PnpNotifyUserModeDeviceRemoval(
        __int64 a1,
        _WORD *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  __int128 v9; // xmm6
  __int64 v10; // r12
  void *v11; // r15
  __int64 v12; // r13
  NTSTATUS result; // eax
  __int64 v14; // r11
  int v15; // ebx
  __int128 v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  wchar_t pszDest[200]; // [rsp+20h] [rbp-1E8h] BYREF

  if ( a6 )
    *a6 = 0;
  v9 = *(_OWORD *)(a1 + 112);
  v10 = *(_QWORD *)(a1 + 48);
  v11 = (void *)(a1 + 160);
  v12 = *(_QWORD *)(a1 + 56);
  result = RtlStringCchCopyW(pszDest, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a1 + 160));
  v15 = result;
  if ( !result )
  {
    v16 = *a3;
    v17 = -1LL;
    *(_QWORD *)(a1 + 48) = v14;
    *(_OWORD *)(a1 + 112) = v16;
    *(_QWORD *)(a1 + 56) = a5;
    while ( *a2 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a2[v18] );
      memmove(v11, a2, 2 * v18 + 2);
      v15 = PiUEventNotifyUserMode(a1);
      if ( v15 < 0 )
      {
        if ( v15 == -1073741536 )
          v15 = -2147483608;
        break;
      }
      if ( a6 )
        ++*a6;
      v19 = -1LL;
      do
        ++v19;
      while ( a2[v19] );
      a2 += v19 + 1;
    }
    *(_OWORD *)(a1 + 112) = v9;
    *(_QWORD *)(a1 + 48) = v10;
    *(_QWORD *)(a1 + 56) = v12;
    do
      ++v17;
    while ( pszDest[v17] );
    memmove(v11, pszDest, 2 * v17 + 2);
    return v15;
  }
  return result;
}
