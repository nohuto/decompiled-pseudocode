/*
 * XREFs of ?DxgkpCopyAttributes@@YAJPEAX0@Z @ 0x1C025DC18
 * Callers:
 *     ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1C025DD08 (-DxgkpCopyFile@@YAJPEBG0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpCopyAttributes(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _OWORD FileInformation[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  memset(FileInformation, 0, sizeof(FileInformation));
  v14 = 0LL;
  IoStatusBlock = 0LL;
  v3 = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 32) = 386LL;
LABEL_5:
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v6;
  }
  v8 = ZwSetInformationFile(a2, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  v6 = v8;
  if ( v8 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v7 + 32) = 399LL;
    goto LABEL_5;
  }
  return (unsigned int)v6;
}
