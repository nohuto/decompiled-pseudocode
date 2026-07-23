/*
 * XREFs of _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlPrefixUnicodeString@12 @ 0x4B2E40C0 (_RtlPrefixUnicodeString@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, ACCESS_MASK a2, _DWORD *a3)
{
  HANDLE *v3; // ebx
  PVOID Heap; // edi
  NTSTATUS result; // eax
  wchar_t *v6; // esi
  _BYTE *v7; // eax
  ULONG v8; // ecx
  NTSTATUS inited; // esi
  unsigned __int16 v10; // ax
  PVOID v11; // ebx
  ULONG v12; // eax
  NTSTATUS v13; // eax
  void *ProcessHeap; // ecx
  SIZE_T v15; // [esp-4h] [ebp-290h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-27Ch] BYREF
  _UNICODE_STRING v17; // [esp+28h] [ebp-264h] BYREF
  HANDLE *v18; // [esp+30h] [ebp-25Ch]
  ACCESS_MASK DesiredAccess; // [esp+34h] [ebp-258h]
  int v20; // [esp+38h] [ebp-254h]
  _BYTE *v21; // [esp+3Ch] [ebp-250h]
  PVOID v22; // [esp+40h] [ebp-24Ch]
  _UNICODE_STRING String2; // [esp+44h] [ebp-248h] BYREF
  _UNICODE_STRING DestinationString; // [esp+4Ch] [ebp-240h] BYREF
  ULONG ResultLength; // [esp+54h] [ebp-238h] BYREF
  ULONG Length; // [esp+58h] [ebp-234h]
  HANDLE KeyHandle; // [esp+5Ch] [ebp-230h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+60h] [ebp-22Ch] BYREF
  int v29; // [esp+64h] [ebp-228h]
  int v30; // [esp+68h] [ebp-224h]
  int v31; // [esp+6Ch] [ebp-220h]

  KeyHandle = 0;
  v3 = a1;
  DesiredAccess = a2;
  v18 = a1;
  Heap = 0;
  Length = 544;
  v22 = KeyValueInformation;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
             *v3,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result != -1073741772 && result != -1073741789 && result != -2147483643 )
      return result;
    return 0;
  }
  if ( v29 != 4 || v30 != 4 || !v31 )
    return 0;
  v6 = (wchar_t *)a3[1];
  *(_DWORD *)&String2.Length = *a3;
  String2.Buffer = v6;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result < 0 )
    return result;
  if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
  {
    String2.Length -= 8;
    String2.MaximumLength -= 8;
    String2.Buffer = v6 + 4;
  }
  v7 = KeyValueInformation;
  v8 = 0;
  v21 = KeyValueInformation;
  v20 = 0;
  while ( 1 )
  {
    inited = ZwEnumerateKey(*v3, v8, KeyBasicInformation, v7, Length, &ResultLength);
    if ( inited >= 0 )
    {
      DestinationString.Length = *((_WORD *)v21 + 6);
      v10 = *((_WORD *)v21 + 6);
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      DestinationString.MaximumLength = v10;
      DestinationString.Buffer = (wchar_t *)(v21 + 16);
      ObjectAttributes.RootDirectory = *v3;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 24;
      ObjectAttributes.Attributes = 576;
      inited = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( inited >= 0 )
        break;
    }
LABEL_38:
    v7 = v21;
    v8 = ++v20;
    if ( inited < 0 )
      goto LABEL_39;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
  if ( inited < 0 )
    goto LABEL_37;
  v11 = v22;
  v12 = Length;
  do
  {
    v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v11, v12, &ResultLength);
    inited = v13;
    if ( v13 == -2147483643 || v13 == -1073741789 )
    {
      if ( Heap )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( ProcessHeap )
      {
        LODWORD(v15) = ResultLength;
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v15);
        if ( Heap )
        {
          v12 = ResultLength;
          v11 = Heap;
          v21 = Heap;
          Length = ResultLength;
          continue;
        }
      }
      else
      {
        Heap = 0;
      }
      inited = -1073741801;
    }
    v12 = Length;
  }
  while ( inited == -2147483643 || inited == -1073741789 );
  v22 = v11;
  v3 = v18;
  if ( inited < 0 )
  {
    NtClose(KeyHandle);
    inited = inited != -1073741772 ? inited : 0;
    goto LABEL_38;
  }
  if ( *((_DWORD *)v22 + 1) != 1
    || *((_DWORD *)v22 + 2) > 0xFFFEu
    || (v17.Length = *((_WORD *)v22 + 4) - 2,
        v17.MaximumLength = v17.Length,
        v17.Buffer = (wchar_t *)((char *)v22 + 12),
        RtlCompareUnicodeString(&String2, &v17, 1u)) )
  {
LABEL_37:
    NtClose(KeyHandle);
    goto LABEL_38;
  }
LABEL_39:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( inited >= 0 )
  {
    NtClose(*v3);
    *v3 = KeyHandle;
  }
  return inited != -2147483622 ? inited : 0;
}
