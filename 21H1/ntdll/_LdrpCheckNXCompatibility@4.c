/*
 * XREFs of _LdrpCheckNXCompatibility@4 @ 0x4B2E7520
 * Callers:
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpIsImageArmadilloProtected@4 @ 0x4B2E760B (_LdrpIsImageArmadilloProtected@4.c)
 *     _LdrpCheckNxIncompatibleDllSection@4 @ 0x4B2E7618 (_LdrpCheckNxIncompatibleDllSection@4.c)
 *     _LdrpQueryDllExecuteOptions@8 @ 0x4B2E76BD (_LdrpQueryDllExecuteOptions@8.c)
 *     _LdrpCheckSafeDiscDll@4 @ 0x4B2E7708 (_LdrpCheckSafeDiscDll@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 *     _wcsstr @ 0x4B2FA9B0 (_wcsstr.c)
 *     _LdrpProcessImageProtectionParameter@8 @ 0x4B32CAFE (_LdrpProcessImageProtectionParameter@8.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

void __thiscall LdrpCheckNXCompatibility(int this)
{
  char v2; // al
  int v3; // edx
  unsigned int v5; // eax
  wchar_t *v6; // esi
  wchar_t *v7; // ebx
  size_t v8; // [esp-4h] [ebp-244h]
  _BYTE v9[4]; // [esp+Ch] [ebp-234h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-230h] BYREF
  unsigned int v11; // [esp+14h] [ebp-22Ch] BYREF
  int ProcessInformation; // [esp+18h] [ebp-228h] BYREF
  int v13; // [esp+1Ch] [ebp-224h] BYREF
  wchar_t Str[270]; // [esp+20h] [ebp-220h] BYREF

  if ( Kernel32BaseQueryModuleData )
  {
    RtlImageNtHeaderEx(3u, *(PVOID *)(this + 24), 0LL, &OutHeaders);
    if ( (MEMORY[0x7FFE02D5] & 3) != 0 )
      v2 = HIBYTE(OutHeaders->OptionalHeader.DllCharacteristics) & 1;
    else
      v2 = 0;
    if ( v2 )
      goto LABEL_5;
    ProcessInformation = 0;
    if ( (unsigned __int8)LdrpCheckSafeDiscDll(this) )
      goto LABEL_17;
    v13 = 0;
    if ( LdrpQueryDllExecuteOptions(this + 44, &v13) >= 0 )
    {
      if ( v13 )
      {
        DbgPrintEx(85, 3u, (int)"CLIENT(ntdll): Found CheckAppHelp = %d for %wZ in ImageFileExecutionOptions\n", v13);
        v11 = 532;
        LODWORD(v8) = 532;
        memset(Str, 0, v8);
        if ( (unsigned __int8)((int (__thiscall *)(PVOID, _DWORD, _DWORD, _DWORD, const WCHAR *, _BYTE *, wchar_t *, unsigned int *))Kernel32BaseQueryModuleData)(
                                Kernel32BaseQueryModuleData,
                                *(_DWORD *)(this + 40),
                                *(_DWORD *)(this + 24),
                                *(_DWORD *)(this + 32),
                                L"ExecuteOptions",
                                v9,
                                Str,
                                &v11) )
        {
          if ( v11 && v11 < 0x214 )
          {
            v5 = 2 * (v11 >> 1) - 2;
            if ( v5 >= 0x214 )
              __report_rangecheckfailure();
            *(wchar_t *)((char *)Str + v5) = 0;
            DbgPrintEx(
              85,
              3u,
              (int)"CLIENT(ntdll): Found ExecuteOptions = %ws for %wZ in application compatibility database\n",
              (int)Str);
            if ( wcsstr(Str, L"Execute=1") )
            {
              DbgPrintEx(
                85,
                3u,
                (int)"CLIENT(ntdll): Found Execute=1, turning off execution protection for the process because of %wZ\n",
                this + 36);
              goto LABEL_17;
            }
            DbgPrintEx(85, 3u, (int)"CLIENT(ntdll): Processing %ws for patching section protection for %wZ\n", (int)Str);
            v6 = Str;
            v13 = (int)Str + v11;
            if ( Str < (wchar_t *)((char *)Str + v11) )
            {
              do
              {
                v7 = wcschr(v6, 0x20u);
                if ( v7 )
                  *v7 = 0;
                DbgPrintEx(85, 3u, (int)"CLIENT(ntdll): Processing section info %ws...\n", (int)v6);
                LdrpProcessImageProtectionParameter(this, v6);
                if ( !v7 )
                  break;
                v6 = v7 + 1;
              }
              while ( (unsigned int)(v7 + 1) < v13 );
            }
          }
        }
      }
    }
    if ( !(unsigned __int8)LdrpCheckNxIncompatibleDllSection(this) )
    {
      v3 = ProcessInformation;
LABEL_11:
      if ( (MEMORY[0x7FFE02D5] & 0xC) != 4 && (unsigned __int8)LdrpIsImageArmadilloProtected(OutHeaders) != 0 )
      {
        v3 |= 0x40u;
        ProcessInformation = v3;
      }
      if ( v3 )
        ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessExecuteFlags, &ProcessInformation, 4u);
LABEL_5:
      *(_DWORD *)(this + 52) |= 0x80000000;
      return;
    }
LABEL_17:
    v3 = 2;
    ProcessInformation = 2;
    goto LABEL_11;
  }
}
