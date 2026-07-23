/*
 * XREFs of _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _InitializeUserOrMachineLangList@20 @ 0x4B2E98CF (_InitializeUserOrMachineLangList@20.c)
 * Callees:
 *     _RtlpLoadMachineUIByPolicy@12 @ 0x4B2A71E0 (_RtlpLoadMachineUIByPolicy@12.c)
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _RtlpLoadUserUIByPolicy@12 @ 0x4B2AD890 (_RtlpLoadUserUIByPolicy@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpHasMachineUILock@8 @ 0x4B36ABB1 (_RtlpHasMachineUILock@8.c)
 *     _RtlpMuiRegLoadMachinePreferredUILanguages@16 @ 0x4B36BB58 (_RtlpMuiRegLoadMachinePreferredUILanguages@16.c)
 */

int __thiscall RtlpMuiRegLoadPreferredUILanguages(void *this, unsigned int a2, int a3, _BYTE *a4, int *a5)
{
  int LanguageList; // edi
  unsigned int v6; // esi
  HANDLE v7; // ecx
  NTSTATUS v8; // esi
  NTSTATUS v9; // eax
  const WCHAR *v10; // eax
  int v11; // ecx
  int v12; // ecx
  PVOID Heap; // eax
  int v14; // ecx
  PVOID v15; // edi
  int v16; // ebx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  SIZE_T v20; // [esp-4h] [ebp-84h]
  char v21; // [esp+Fh] [ebp-71h] BYREF
  int v22; // [esp+10h] [ebp-70h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-6Ch] BYREF
  HANDLE CurrentUserKey; // [esp+18h] [ebp-68h] BYREF
  HANDLE KeyHandle; // [esp+1Ch] [ebp-64h] BYREF
  int v26; // [esp+20h] [ebp-60h]
  int v27; // [esp+24h] [ebp-5Ch] BYREF
  unsigned int v28; // [esp+28h] [ebp-58h] BYREF
  PVOID BaseAddress; // [esp+2Ch] [ebp-54h]
  _UNICODE_STRING DestinationString; // [esp+30h] [ebp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+38h] [ebp-48h] BYREF
  _OBJECT_ATTRIBUTES v32; // [esp+50h] [ebp-30h] BYREF
  _OBJECT_ATTRIBUTES v33; // [esp+68h] [ebp-18h] BYREF

  v26 = (int)this;
  CurrentUserKey = 0;
  Handle = 0;
  KeyHandle = 0;
  v27 = 7;
  v28 = 0;
  BaseAddress = 0;
  v21 = 0;
  LanguageList = 0;
  v22 = 0;
  if ( !this || !a4 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_23;
  }
  v6 = a2;
  *a4 = 0;
  if ( a2 > 1 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v18 = RtlpLoadMachineUIByPolicy((int)KeyHandle, v26, &v22);
    LanguageList = v22;
    v8 = v18;
    if ( !v18 && v22 )
      goto LABEL_24;
    v7 = KeyHandle;
    v6 = a2;
  }
  else
  {
    v7 = 0;
    KeyHandle = 0;
  }
  if ( v6 == 1 && v7 && RtlpHasMachineUILock(v7, &v21) >= 0 )
    a2 = (unsigned __int8)(v21 - 1) != 0;
  v8 = OpenGlobalizationUserSettingsKey(0x2000000u, &CurrentUserKey);
  if ( v8 < 0 )
    goto LABEL_52;
  if ( a2 == 1 )
  {
    v9 = RtlpLoadUserUIByPolicy(CurrentUserKey, v26, &v22);
    LanguageList = v22;
    v8 = v9;
    if ( !v9 && v22 )
      goto LABEL_31;
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v32.RootDirectory = CurrentUserKey;
    v32.ObjectName = &DestinationString;
    v32.SecurityDescriptor = 0;
    v32.SecurityQualityOfService = 0;
    v32.Length = 24;
    v32.Attributes = 64;
    v8 = ZwOpenKey(&Handle, 0x20019u, &v32);
    if ( v8 >= 0 )
    {
      v10 = L"PreferredUILanguages";
      if ( a3 != 3 )
        v10 = L"PreferredUILanguagesPending";
      goto LABEL_15;
    }
LABEL_52:
    *a4 = 1;
    goto LABEL_23;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v8 = 0;
  v33.RootDirectory = CurrentUserKey;
  v33.ObjectName = &DestinationString;
  v33.Length = 24;
  v33.Attributes = 64;
  v33.SecurityDescriptor = 0;
  v33.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&Handle, 0x20019u, &v33) < 0 )
  {
    *a4 = 1;
    goto LABEL_24;
  }
  v10 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v10);
  v12 = LdrpQueryValueKey(Handle, &DestinationString, &v27, 0, &v28, v11);
  v8 = -1073741772;
  if ( v12 == -1073741772 || !v28 )
  {
    *a4 = 1;
    v8 = 0;
    goto LABEL_24;
  }
  if ( v12 == -2147483643 )
  {
    LODWORD(v20) = v28 + 2;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v20);
    v15 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v8 = LdrpQueryValueKey(Handle, &DestinationString, &v27, Heap, &v28, v14);
      if ( v8 >= 0 )
      {
        if ( v27 != 7 && v27 != 1 )
        {
          LanguageList = v22;
          v8 = 0;
          *a4 = 1;
LABEL_24:
          if ( a2 || LanguageList && *(_WORD *)(LanguageList + 4) )
          {
            v16 = v26;
LABEL_28:
            if ( !LanguageList )
            {
              LanguageList = RtlpMuiRegCreateLanguageList(v16);
              if ( !LanguageList )
                v8 = -1073741801;
            }
            goto LABEL_31;
          }
          v16 = v26;
          v19 = RtlpMuiRegLoadMachinePreferredUILanguages(a4, &v22);
          LanguageList = v22;
          v8 = v19;
          if ( !v19 )
            goto LABEL_28;
LABEL_31:
          *a5 = LanguageList;
LABEL_32:
          if ( BaseAddress )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          goto LABEL_34;
        }
        v8 = RtlpMuiRegAddMultiSzToLangFallbackList(v26, v15, v28 >> 1, 8, (a2 != 1) + 2, 1, &v22);
      }
      LanguageList = v22;
LABEL_23:
      if ( v8 )
        goto LABEL_32;
      goto LABEL_24;
    }
    v8 = -1073741801;
  }
LABEL_34:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0;
  }
  if ( CurrentUserKey )
  {
    NtClose(CurrentUserKey);
    CurrentUserKey = 0;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v8;
}
