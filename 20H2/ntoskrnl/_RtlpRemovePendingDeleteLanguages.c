/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x1403B712C
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1407A3610 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x1403F87B0 (ZwEnumerateKey.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     LdrpOpenKey @ 0x1407A3968 (LdrpOpenKey.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x140983E6C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  __int16 *v2; // rbp
  __int64 v5; // r8
  ULONG v7; // ebx
  NTSTATUS v8; // esi
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx
  _WORD v13[2]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (__int16 *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v2 + 1) = 0LL;
  *((_DWORD *)v2 + 1) = 0;
  *v2 = -1;
  *((_OWORD *)v2 + 1) = 0LL;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)v2 + 1,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  if ( (int)LdrpOpenKey(v2 + 8, 0LL, v5, v2 + 4) >= 0 )
  {
    v7 = 0;
    do
    {
      v8 = ZwEnumerateKey(
             *(HANDLE *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             v7,
             KeyBasicInformation,
             v2 + 16,
             0x200u,
             (PULONG)v2 + 1);
      if ( v8 >= 0 )
      {
        v10 = *(unsigned int *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C);
        if ( v10 + 24 < 0x1FE )
        {
          *(_WORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30 + 2 * (v10 >> 1)) = 0;
          if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(
                      a1,
                      v2 + 24,
                      v9,
                      (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFE0uLL) >= 0 )
          {
            v11 = *v2;
            if ( (_WORD)v11 != 0xFFFF && (_WORD)v11 != a2 )
            {
              *(_WORD *)(28 * v11 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) &= ~0x20u;
              *(_WORD *)(28LL * *v2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) |= 0x8000u;
            }
          }
        }
      }
      ++v7;
    }
    while ( v8 != -2147483622 );
    v12 = *(void **)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v12 )
      NtClose(v12);
  }
  return 0LL;
}
