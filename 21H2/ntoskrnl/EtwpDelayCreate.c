/*
 * XREFs of EtwpDelayCreate @ 0x1406F0C9C
 * Callers:
 *     EtwpCreateLogFile @ 0x1406F0614 (EtwpCreateLogFile.c)
 *     EtwpRealtimeCreateLogfile @ 0x14079AADC (EtwpRealtimeCreateLogfile.c)
 *     EtwpSavePersistedLogger @ 0x1409ED100 (EtwpSavePersistedLogger.c)
 * Callees:
 *     SeImpersonateClientEx @ 0x1406BFE80 (SeImpersonateClientEx.c)
 *     EtwpCreateDirectoryFile @ 0x1406F0DC8 (EtwpCreateDirectoryFile.c)
 *     EtwpCreateNtFileName @ 0x1406F0F04 (EtwpCreateNtFileName.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDelayCreate(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        char a5,
        char a6,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  __int64 v9; // rcx
  char v10; // r15
  NTSTATUS v11; // ebx
  WCHAR *v12; // rsi
  NTSTATUS v13; // eax
  _WORD *i; // rdi
  __int16 v16; // ax
  int v17; // [rsp+30h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-18h] BYREF
  char v21; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0;
  P = 0LL;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = 0;
  IoStatusBlock = 0LL;
  v11 = EtwpCreateNtFileName(v9, &P, &v21);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( ClientContext )
  {
    v11 = SeImpersonateClientEx(ClientContext, 0LL);
    if ( v11 < 0 )
    {
LABEL_15:
      v12 = (WCHAR *)P;
      goto LABEL_5;
    }
    v10 = 1;
  }
  v12 = (WCHAR *)P;
  v13 = EtwpCreateDirectoryFile((PCWSTR)P, a1, &IoStatusBlock, (unsigned __int8)*a3);
  v11 = v13;
  if ( a6 && v13 == -1073741766 && !v21 )
  {
    for ( i = v12 + 12; *i != 92; ++i )
    {
      if ( !*i )
        goto LABEL_27;
    }
    do
    {
      v16 = *++i;
      if ( *i == 92 )
      {
        v17 = (unsigned __int8)*a3;
        *i = 0;
        v11 = EtwpCreateDirectoryFile(v12, 0LL, &IoStatusBlock, v17);
        if ( v11 < 0 )
          goto LABEL_4;
        *i = 92;
        v16 = 92;
      }
    }
    while ( v16 );
LABEL_27:
    v11 = EtwpCreateDirectoryFile(v12, a1, &IoStatusBlock, (unsigned __int8)*a3);
  }
LABEL_4:
  if ( v10 )
  {
    PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
    goto LABEL_15;
  }
LABEL_5:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( v11 >= 0 && *a3 && IoStatusBlock.Information == 2 )
    *a3 = 0;
  return (unsigned int)v11;
}
