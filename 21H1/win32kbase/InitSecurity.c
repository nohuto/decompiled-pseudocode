/*
 * XREFs of InitSecurity @ 0x1C0299470
 * Callers:
 *     Win32UserInitialize @ 0x1C0299728 (Win32UserInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     AllocAce @ 0x1C008CA40 (AllocAce.c)
 *     CreateSecurityDescriptor @ 0x1C0091FF0 (CreateSecurityDescriptor.c)
 */

__int64 InitSecurity()
{
  unsigned int v0; // ebx
  char *v1; // rax
  char *v2; // rdi
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rsi
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v16; // rcx
  ULONG AceListLength; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  AceListLength = 0;
  v1 = AllocAce(0LL, 0, 14, 983935, SeExports->SeWorldSid, &AceListLength);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  v3 = AllocAce(v1, 0, 14, 983935, SeExports->SeRestrictedSid, &AceListLength);
  v6 = v3;
  if ( !v3 )
    goto LABEL_10;
  v7 = AllocAce(v3, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
  v2 = v7;
  if ( v7 )
  {
    v8 = AllocAce(v7, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
    v6 = v8;
    if ( !v8 )
      goto LABEL_10;
    v9 = AllocAce(v8, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
    v2 = v9;
    if ( v9 )
    {
      v10 = AllocAce(v9, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
      v6 = v10;
      if ( v10 )
      {
        v11 = AllocAce(v10, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
        v12 = (__int64)v11;
        if ( v11 )
        {
          gpsdInitWinSta = (__int64)CreateSecurityDescriptor(v11, AceListLength, 0);
          Win32FreePool(v12, v13, v14);
          LOBYTE(v0) = gpsdInitWinSta != 0;
          return v0;
        }
        goto LABEL_9;
      }
LABEL_10:
      v16 = (__int64)v2;
      goto LABEL_11;
    }
  }
LABEL_9:
  v16 = (__int64)v6;
LABEL_11:
  Win32FreePool(v16, v4, v5);
  return 0LL;
}
