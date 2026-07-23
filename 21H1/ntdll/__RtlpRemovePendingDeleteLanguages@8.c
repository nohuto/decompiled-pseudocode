/*
 * XREFs of __RtlpRemovePendingDeleteLanguages@8 @ 0x4B2AC58A
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __usercall _RtlpRemovePendingDeleteLanguages@<eax>(__int16 a1@<dx>, int a2@<ecx>, int a3@<ebp>)
{
  ULONG v4; // esi
  NTSTATUS v6; // eax
  int v7; // ecx
  _WORD *v8; // eax
  _UNICODE_STRING v9; // [esp-254h] [ebp-260h] BYREF
  _OBJECT_ATTRIBUTES v10; // [esp-24Ch] [ebp-258h] BYREF
  ULONG v11; // [esp-234h] [ebp-240h] BYREF
  __int16 v12; // [esp-22Eh] [ebp-23Ah]
  HANDLE v13; // [esp-22Ch] [ebp-238h] BYREF
  NTSTATUS v14; // [esp-228h] [ebp-234h]
  __int16 v15; // [esp-224h] [ebp-230h] BYREF
  int v16; // [esp-220h] [ebp-22Ch] BYREF
  unsigned int v17; // [esp-214h] [ebp-220h]
  _WORD v18[264]; // [esp-210h] [ebp-21Ch] BYREF
  int v19; // [esp+0h] [ebp-Ch]
  void *v20; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v19 = a3;
  v20 = retaddr;
  v12 = a1;
  v4 = 0;
  v11 = 0;
  v15 = -1;
  if ( !a2 )
    return -1073741811;
  RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  v13 = 0;
  v10.ObjectName = &v9;
  v10.Length = 24;
  v10.RootDirectory = 0;
  v10.Attributes = 64;
  v10.SecurityDescriptor = 0;
  v10.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&v13, 0x20019u, &v10) >= 0 )
  {
    do
    {
      v6 = ZwEnumerateKey(v13, v4, KeyBasicInformation, &v16, 0x200u, &v11);
      v14 = v6;
      if ( v6 >= 0 && v17 + 24 < 0x1FE )
      {
        v18[v17 >> 1] = 0;
        if ( RtlpMuiRegGetInstalledLanguageIndexByName(a2, v18, 0, &v15) >= 0 && v15 != -1 && v15 != v12 )
        {
          v7 = 28 * v15;
          *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 12) + v7) &= ~0x20u;
          v8 = (_WORD *)(v7 + *(_DWORD *)(*(_DWORD *)(a2 + 20) + 12));
          *v8 |= 0x8000u;
        }
        v6 = v14;
      }
      ++v4;
    }
    while ( v6 != -2147483622 );
    if ( v13 )
      NtClose(v13);
  }
  return 0;
}
