/*
 * XREFs of ExpSetPendingUILanguage @ 0x140779C90
 * Callers:
 *     NtSetDefaultUILanguage @ 0x140779A50 (NtSetDefaultUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140361340 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140362A8C (DownLevelLangIDToLanguageName.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1403A1ABC (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403F3820 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1403F5020 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     NtQueryInstallUILanguage @ 0x1407021E0 (NtQueryInstallUILanguage.c)
 */

NTSTATUS ExpSetPendingUILanguage()
{
  unsigned __int64 v0; // rbp
  char v1; // r12
  char v2; // si
  __int64 v3; // rdx
  int v4; // ecx
  NTSTATUS result; // eax
  NTSTATUS Key; // ebx
  NTSTATUS InstallUILanguage; // ebx
  int v8; // eax
  ULONG v9; // r12d
  ULONG v10; // esi
  ULONG v11; // edx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  ULONG v17; // ebx
  unsigned int v18; // ecx
  void *v19; // rbx
  void *v20; // rcx
  ULONG v21; // ebx
  NTSTATUS v22; // esi
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r15
  void *v26; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // rax
  char v29; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v0 + 68) = 0;
  *(_DWORD *)(v0 + 92) = 0;
  *(_OWORD *)(v0 + 48) = 0LL;
  *(_OWORD *)(v0 + 112) = 0LL;
  *(_OWORD *)(v0 + 152) = 0LL;
  *(_QWORD *)(v0 + 128) = 0LL;
  *(_QWORD *)(v0 + 32) = 0LL;
  memset((void *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 448), 0, 0xAAuLL);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
  v1 = 1;
  *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
  v2 = 0;
  *(_BYTE *)v0 = 0;
  result = OpenGlobalizationUserSettingsKey(v4, v3, (HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 128));
  if ( result < 0 )
    return result;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x80);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
  Key = ZwOpenKey((PHANDLE)(v0 + 144), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 64));
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
  if ( Key < 0 )
    goto LABEL_23;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), L"PreferredUILanguagesPending");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
         (PUNICODE_STRING)(v0 + 112),
         KeyValuePartialInformation,
         (PVOID)(v0 + 192),
         0x100u,
         (PULONG)(v0 + 4)) >= 0 )
  {
    v17 = *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
    if ( v17 >= 4 && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), L"PreferredUILanguages");
      if ( ZwSetValueKey(
             *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
             (PUNICODE_STRING)(v0 + 112),
             0,
             7u,
             (PVOID)(v0 + 204),
             v17) >= 0 )
      {
        v2 = 1;
        *(_BYTE *)v0 = 1;
        v18 = *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
        if ( v18 + 12 < 0x100 )
        {
          *(_WORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xCA + 2 * ((unsigned __int64)v18 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), L"PreferredUILanguagesPending");
          ZwDeleteValueKey(
            *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
            (PUNICODE_STRING)(v0 + 112));
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 152), (PCWSTR)(v0 + 204));
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\LanguageConfigurationPending");
          *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 0x80);
          *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 48;
          *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
          if ( ZwOpenKey((PHANDLE)(v0 + 136), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 64)) >= 0
            && ZwQueryValueKey(
                 *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
                 (PUNICODE_STRING)(v0 + 152),
                 KeyValuePartialInformation,
                 (PVOID)(v0 + 640),
                 0x210u,
                 (PULONG)(v0 + 4)) >= 0
            && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\LanguageConfiguration");
            *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
            *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 0x80);
            *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
            *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 48;
            *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
            if ( ZwCreateKey((PHANDLE)(v0 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 64), 0, 0LL, 0, 0LL) >= 0 )
            {
              if ( ZwSetValueKey(
                     *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                     (PUNICODE_STRING)(v0 + 152),
                     0,
                     7u,
                     (PVOID)(v0 + 652),
                     *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288)) >= 0 )
                ZwDeleteValueKey(
                  *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
                  (PUNICODE_STRING)(v0 + 152));
              ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
            }
          }
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x80);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
  ZwOpenKey((PHANDLE)(v0 + 16), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 64));
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v0 + 48),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v0 + 32), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 64)) < 0 )
  {
    v19 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v19 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), L"MachinePreferredUILanguages");
      ZwDeleteValueKey(v19, (PUNICODE_STRING)(v0 + 112));
    }
    goto LABEL_15;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), L"PreferredUILanguages");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
         (PUNICODE_STRING)(v0 + 112),
         KeyValuePartialInformation,
         (PVOID)(v0 + 192),
         0x100u,
         (PULONG)(v0 + 4)) < 0
    || *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) < 4u
    || *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) != 7 )
  {
    *(_WORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 0;
    InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(v0 + 24));
    if ( InstallUILanguage >= 0 )
    {
      v8 = DownLevelLangIDToLanguageName(
             *(_WORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
             (unsigned __int16 *)(v0 + 204),
             128,
             0);
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = v8;
      if ( !v8 )
      {
        InstallUILanguage = -1073741823;
        goto LABEL_55;
      }
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 2 * v8;
    }
    if ( InstallUILanguage >= 0 )
      goto LABEL_10;
LABEL_55:
    DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
    v20 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v20 )
      ZwDeleteValueKey(v20, (PUNICODE_STRING)(v0 + 112));
    goto LABEL_14;
  }
LABEL_10:
  if ( *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
    goto LABEL_12;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x80);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
  Key = ZwCreateKey((PHANDLE)(v0 + 16), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 64), 0, 0LL, 1u, 0LL);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
  if ( Key >= 0 )
  {
LABEL_12:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), L"MachinePreferredUILanguages");
    if ( ZwSetValueKey(
           *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
           (PUNICODE_STRING)(v0 + 112),
           0,
           7u,
           (PVOID)(v0 + 204),
           *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8)) < 0 )
      DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
LABEL_14:
    ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
LABEL_15:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"MachineLanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 0x10);
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 48;
    *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 40), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 64)) >= 0 )
    {
      v21 = 0;
      do
      {
        memset((void *)(v0 + 192), 0, 0x100uLL);
        v22 = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
                v21,
                KeyValueBasicInformation,
                (PVOID)(v0 + 192),
                0xFEu,
                (PULONG)(v0 + 4));
        if ( v22 >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), (PCWSTR)(v0 + 204));
          if ( ZwDeleteValueKey(
                 *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
                 (PUNICODE_STRING)(v0 + 112)) < 0 )
          {
            DbgPrint(
              "*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n",
              (const wchar_t *)(v0 + 204));
            ++v21;
          }
        }
      }
      while ( v22 >= 0 );
    }
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 48),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 48;
    *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 32), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 64)) < 0 )
    {
      Key = 0;
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
    }
    else
    {
      v9 = 0;
      do
      {
        v10 = v9;
        memset((void *)(v0 + 640), 0, 0x210uLL);
        v11 = v9++;
        Key = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                v11,
                KeyValueFullInformation,
                (PVOID)(v0 + 640),
                0x20Eu,
                (PULONG)(v0 + 4));
        *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
        if ( Key >= 0 )
        {
          v23 = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290);
          if ( (unsigned __int64)(v23 + 24) <= 0x210
            && (v24 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288),
                v25 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C),
                (unsigned int)(v24 + v25) <= 0x210)
            && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7
            && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290) < 0xAAu )
          {
            memset((void *)(v0 + 448), 0, 0xAAuLL);
            memmove((void *)(v0 + 448), (const void *)(v0 + 660), (unsigned int)v23);
            RtlInitUnicodeString((PUNICODE_STRING)(v0 + 112), (PCWSTR)(v0 + 448));
            v26 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
            if ( !v26 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"MachineLanguageConfiguration");
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 48;
              *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                               + 0x10);
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 1600;
              *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 48;
              *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 0LL;
              Key = ZwCreateKey((PHANDLE)(v0 + 40), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 64), 0, 0LL, 1u, 0LL);
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
              if ( Key < 0 )
                goto LABEL_21;
              *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
              v26 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
              v25 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C);
              v24 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288);
            }
            Key = ZwSetValueKey(v26, (PUNICODE_STRING)(v0 + 112), 0, 7u, (PVOID)((unsigned int)v24 + v0 + 640), v25);
            *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
            if ( Key < 0 )
            {
              DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", (const wchar_t *)(v0 + 448));
              Key = 0;
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
            }
          }
          else
          {
            DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v10);
          }
        }
      }
      while ( Key >= 0 );
      ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
LABEL_21:
      v1 = *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
    }
    v2 = *(_BYTE *)v0;
  }
LABEL_23:
  v12 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90);
  if ( v12 )
    ZwClose(v12);
  v13 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
  if ( v13 )
  {
    if ( ZwEnumerateValueKey(v13, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 4)) == -2147483622 )
      ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88));
    ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88));
  }
  if ( *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
  {
    v14 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    if ( !v14 || v1 && ZwEnumerateValueKey(v14, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 4)) == -2147483622 )
    {
      v15 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      if ( v15 )
        ZwDeleteKey(v15);
      if ( ZwEnumerateValueKey(
             *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
             0,
             KeyValueBasicInformation,
             0LL,
             0,
             (PULONG)(v0 + 4)) == -2147483622 )
        ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
    }
    ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
  }
  v16 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( v16 )
    ZwClose(v16);
  ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80));
  if ( v2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1530] = 0;
  }
  return Key;
}
