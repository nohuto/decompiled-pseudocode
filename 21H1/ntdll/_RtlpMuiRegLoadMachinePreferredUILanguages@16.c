/*
 * XREFs of _RtlpMuiRegLoadMachinePreferredUILanguages@16 @ 0x4B36BB58
 * Callers:
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __thiscall RtlpMuiRegLoadMachinePreferredUILanguages(_DWORD *this, _BYTE *a2, int *a3)
{
  unsigned __int16 *v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  unsigned __int16 *Heap; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  ULONG v11; // [esp-14h] [ebp-54h]
  SIZE_T v12; // [esp-4h] [ebp-44h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-30h] BYREF
  _UNICODE_STRING DestinationString; // [esp+28h] [ebp-18h] BYREF
  _DWORD *v15; // [esp+30h] [ebp-10h]
  ULONG v16; // [esp+34h] [ebp-Ch] BYREF
  int v17; // [esp+38h] [ebp-8h] BYREF
  HANDLE KeyHandle; // [esp+3Ch] [ebp-4h] BYREF

  KeyHandle = 0;
  v16 = 0;
  v3 = 0;
  v15 = this;
  v17 = 7;
  if ( this && a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      goto LABEL_5;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v6 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v17, 0, &v16, v5);
    v4 = -1073741772;
    if ( v6 == -1073741772 || !v16 )
      goto LABEL_5;
    if ( v6 != -2147483643 )
      goto LABEL_16;
    LODWORD(v12) = v16 + 2;
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v12);
    v3 = Heap;
    if ( !Heap )
    {
      v4 = -1073741801;
      goto LABEL_16;
    }
    v4 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v17, Heap, &v16, v8);
    if ( v4 >= 0 )
    {
      if ( v17 == 7 || v17 == 1 )
      {
        v9 = v15;
        v11 = v16 >> 1;
        *a2 = 0;
        v4 = RtlpMuiRegAddMultiSzToLangFallbackList(v9, v3, v11, 8, 3, 1u, a3);
        goto LABEL_16;
      }
LABEL_5:
      v4 = 0;
      *a2 = 1;
    }
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_16:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v4;
}
