/*
 * XREFs of ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013AB74
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C008BBE0 (xxxSystemParametersInfo.c)
 * Callees:
 *     CreateProfileUserName @ 0x1C008DA20 (CreateProfileUserName.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C008DC50 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C013A6B4 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C0181A10 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C01C7834 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetFilterKeys(int a1, struct tagFILTERKEYS *a2, int a3, int a4, int *a5)
{
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // edx
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  if ( a1 && a1 != 24 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 24 )
    return 0LL;
  v8 = *((_DWORD *)a2 + 2);
  if ( v8 )
  {
    if ( *((_DWORD *)a2 + 5) )
      return 0LL;
  }
  v9 = *((_DWORD *)a2 + 1);
  if ( (v9 & 0x7F) != v9 )
    return 0LL;
  v10 = v9 & 0xFFFFFFFD;
  v11 = v9 | 2;
  if ( (xmmword_1C0249BCC & 2) == 0 )
    v11 = v10;
  *((_DWORD *)a2 + 1) = v11;
  if ( v8 > 0x4E20 || *((_DWORD *)a2 + 3) > 0x4E20u || *((_DWORD *)a2 + 4) > 0x4E20u || *((_DWORD *)a2 + 5) > 0x4E20u )
    return 0LL;
  if ( a3 )
  {
    v15 = 0LL;
    v16 = 0LL;
    ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName((__int64)&v15);
    a4 = SetFilterKeys(ProfileUserName, a2);
    *a5 = a4;
    if ( !a4 )
      SetFilterKeys(ProfileUserName, (struct tagFILTERKEYS *)&gFilterKeys);
    if ( ProfileUserName && qword_1C024FFE8 )
      qword_1C024FFE8(&v15);
  }
  if ( !a4 )
    return 0LL;
  memmove(&gFilterKeys, a2, *(unsigned int *)a2);
  gFilterKeys = 24;
  if ( (xmmword_1C0249BCC & 1) == 0 )
    StopFilterKeysTimers();
  SetAccessEnabledFlag();
  if ( qword_1C02507F0 )
    qword_1C02507F0();
  ApiSetEditionPostShellHookMessages(v13, 2LL);
  return 1LL;
}
