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

void __thiscall LdrpCheckNXCompatibility(unsigned int *this)
{
  char v2; // al
  int v3; // edx
  unsigned int v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // ebx
  unsigned int *v9; // [esp-4h] [ebp-244h]
  _BYTE v10[4]; // [esp+Ch] [ebp-234h] BYREF
  int v11; // [esp+10h] [ebp-230h] BYREF
  unsigned int v12; // [esp+14h] [ebp-22Ch] BYREF
  int v13; // [esp+18h] [ebp-228h] BYREF
  wchar_t *v14; // [esp+1Ch] [ebp-224h] BYREF
  wchar_t Str[270]; // [esp+20h] [ebp-220h] BYREF

  if ( Kernel32BaseQueryModuleData )
  {
    RtlImageNtHeaderEx(3, this[6], 0, 0, &v11);
    if ( (MEMORY[0x7FFE02D5] & 3) != 0 )
      v2 = *(_BYTE *)(v11 + 95) & 1;
    else
      v2 = 0;
    if ( v2 )
      goto LABEL_5;
    v13 = 0;
    if ( (unsigned __int8)LdrpCheckSafeDiscDll(this) )
      goto LABEL_17;
    v14 = 0;
    if ( LdrpQueryDllExecuteOptions(this + 11, &v14) >= 0 )
    {
      if ( v14 )
      {
        DbgPrintEx(
          85,
          3,
          "CLIENT(ntdll): Found CheckAppHelp = %d for %wZ in ImageFileExecutionOptions\n",
          v14,
          this + 9);
        v12 = 532;
        memset(Str, 0, 0x214u);
        if ( (unsigned __int8)Kernel32BaseQueryModuleData(
                                Kernel32BaseQueryModuleData,
                                this[10],
                                this[6],
                                this[8],
                                L"ExecuteOptions",
                                v10,
                                Str,
                                &v12) )
        {
          if ( v12 && v12 < 0x214 )
          {
            v5 = 2 * (v12 >> 1) - 2;
            if ( v5 >= 0x214 )
              __report_rangecheckfailure();
            *(wchar_t *)((char *)Str + v5) = 0;
            DbgPrintEx(
              85,
              3,
              "CLIENT(ntdll): Found ExecuteOptions = %ws for %wZ in application compatibility database\n",
              Str,
              this + 9);
            v6 = wcsstr(Str, L"Execute=1");
            v9 = this + 9;
            if ( v6 )
            {
              DbgPrintEx(
                85,
                3,
                "CLIENT(ntdll): Found Execute=1, turning off execution protection for the process because of %wZ\n",
                v9);
              goto LABEL_17;
            }
            DbgPrintEx(85, 3, "CLIENT(ntdll): Processing %ws for patching section protection for %wZ\n", Str, v9);
            v7 = Str;
            v14 = (wchar_t *)((char *)Str + v12);
            if ( Str < (wchar_t *)((char *)Str + v12) )
            {
              do
              {
                v8 = wcschr(v7, 0x20u);
                if ( v8 )
                  *v8 = 0;
                DbgPrintEx(85, 3, "CLIENT(ntdll): Processing section info %ws...\n", v7);
                LdrpProcessImageProtectionParameter(this, v7);
                if ( !v8 )
                  break;
                v7 = v8 + 1;
              }
              while ( v8 + 1 < v14 );
            }
          }
        }
      }
    }
    if ( !(unsigned __int8)LdrpCheckNxIncompatibleDllSection(this) )
    {
      v3 = v13;
LABEL_11:
      if ( (MEMORY[0x7FFE02D5] & 0xC) != 4 && (unsigned __int8)LdrpIsImageArmadilloProtected(v11) != 0 )
      {
        v3 |= 0x40u;
        v13 = v3;
      }
      if ( v3 )
        ZwSetInformationProcess(-1, 34, &v13, 4);
LABEL_5:
      this[13] |= 0x80000000;
      return;
    }
LABEL_17:
    v3 = 2;
    v13 = 2;
    goto LABEL_11;
  }
}
