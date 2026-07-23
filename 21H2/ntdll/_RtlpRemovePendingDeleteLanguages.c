/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x180107B68
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x180107418 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtOpenKey @ 0x18009D840 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009DC40 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  __int16 *v2; // rbp
  ULONG v6; // ebx
  NTSTATUS v7; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  _WORD v12[2]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (__int16 *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_DWORD *)v2 + 1) = 0;
  *v2 = -1;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)v2 + 1,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = ((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                      + 16;
  *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 48;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
  *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 64;
  *(_OWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  if ( NtOpenKey((PHANDLE)v2 + 1, 0x20019u, (POBJECT_ATTRIBUTES)(v2 + 16)) >= 0 )
  {
    v6 = 0;
    do
    {
      v7 = NtEnumerateKey(
             *(HANDLE *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             v6,
             KeyBasicInformation,
             v2 + 48,
             0x200u,
             (PULONG)v2 + 1);
      if ( v7 >= 0 )
      {
        v8 = *(unsigned int *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
        if ( v8 + 24 < 0x1FE )
        {
          *(_WORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70 + 2 * (v8 >> 1)) = 0;
          if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(
                      a1,
                      (const WCHAR *)v2 + 56,
                      0,
                      (_WORD *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL)) >= 0 )
          {
            v9 = *v2;
            if ( (_WORD)v9 != 0xFFFF && (_WORD)v9 != a2 )
            {
              v10 = 28 * v9;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) &= ~0x20u;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) |= 0x8000u;
            }
          }
        }
      }
      ++v6;
    }
    while ( v7 != -2147483622 );
    v11 = *(void **)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v11 )
      NtClose(v11);
  }
  return 0LL;
}
