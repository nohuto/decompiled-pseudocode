/*
 * XREFs of _RtlpMuiRegLoadLicInformation@4 @ 0x4B2D50DF
 * Callers:
 *     _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0 (_RtlpMuiRegLoadRegistryInfo@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlpGetWindowsPolicy@16 @ 0x4B2D8BA1 (_RtlpGetWindowsPolicy@16.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcspbrk @ 0x4B2FA8A0 (_wcspbrk.c)
 */

int __thiscall RtlpMuiRegLoadLicInformation(_DWORD *this)
{
  int Heap; // esi
  _DWORD *v2; // ebx
  wchar_t *v3; // edi
  ULONG v4; // eax
  wchar_t *v5; // esi
  ULONG v6; // eax
  int v7; // edi
  wchar_t *v8; // esi
  ULONG v9; // eax
  PVOID v10; // edi
  wchar_t *v11; // edi
  const WCHAR *v12; // ebx
  const wchar_t *v13; // edi
  PVOID v14; // eax
  int v15; // ecx
  ULONG v16; // eax
  int result; // eax
  const WCHAR *v18; // ebx
  const wchar_t *v19; // esi
  const WCHAR *v20; // ebx
  const wchar_t *v21; // esi
  SIZE_T v22; // [esp-4h] [ebp-54h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-40h] BYREF
  int v24; // [esp+18h] [ebp-38h]
  int v25; // [esp+1Ch] [ebp-34h]
  _DWORD *v26; // [esp+20h] [ebp-30h]
  PCWSTR SourceString; // [esp+24h] [ebp-2Ch]
  ULONG v28; // [esp+28h] [ebp-28h]
  ULONG v29; // [esp+2Ch] [ebp-24h]
  ULONG Type; // [esp+30h] [ebp-20h] BYREF
  PVOID v31; // [esp+34h] [ebp-1Ch]
  ULONG v32; // [esp+38h] [ebp-18h]
  DWORD Lcid; // [esp+3Ch] [ebp-14h] BYREF
  PVOID BaseAddress; // [esp+40h] [ebp-10h]
  wchar_t *String; // [esp+44h] [ebp-Ch]
  ULONG Size; // [esp+48h] [ebp-8h] BYREF
  _DWORD *Size_4; // [esp+4Ch] [ebp-4h] BYREF

  v24 = -1;
  Heap = 0;
  v2 = this;
  v26 = this;
  Size_4 = 0;
  BaseAddress = 0;
  v29 = 0;
  v32 = 0;
  v31 = 0;
  v28 = 0;
  v25 = 0;
  v3 = 0;
  String = 0;
  if ( !this )
  {
    Heap = -1073741811;
    v14 = 0;
    goto LABEL_53;
  }
  if ( RtlpGetWindowsPolicy(L"WindowsExcludedProcs", &Type, &Size, (int)&Size_4) >= 0 )
  {
    v25 = 1;
    if ( Size_4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4);
    Size_4 = 0;
  }
  if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed", &Type, &Size, (int)&Size_4) >= 0 )
  {
    v24 = *Size_4;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4);
    Size_4 = 0;
  }
  if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed", &Type, &Size, (int)&Size_4) >= 0 )
  {
    v4 = Size;
    v29 = Size + 4;
    if ( Size == -4 )
    {
      BaseAddress = 0;
    }
    else
    {
      LODWORD(v22) = Size + 4;
      Heap = (int)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
      BaseAddress = (PVOID)Heap;
      v4 = Size;
    }
    if ( !Heap )
    {
      Heap = -1073741801;
      v29 = 0;
      goto LABEL_50;
    }
    LODWORD(v22) = v4;
    memcpy((void *)Heap, Size_4, v22);
    SourceString = (PCWSTR)Heap;
    v5 = wcspbrk((const wchar_t *)Heap, L";");
    if ( v5 )
    {
      v18 = SourceString;
      do
      {
        *v5 = 0;
        v19 = v5 + 1;
        RtlInitUnicodeString(&DestinationString, v18);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          v3 = (wchar_t *)((char *)v3 + 1);
        v18 = (const WCHAR *)v19;
        v5 = wcspbrk(v19, L";");
      }
      while ( v5 );
      SourceString = v18;
      v2 = v26;
    }
    Heap = 0;
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        v3 = (wchar_t *)((char *)v3 + 1);
    }
    if ( !v3 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      v29 = 0;
      BaseAddress = 0;
    }
    if ( Size_4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4);
    Size_4 = 0;
  }
  if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed", &Type, &Size, (int)&Size_4) < 0 )
  {
LABEL_31:
    if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU", &Type, &Size, (int)&Size_4) >= 0 )
    {
      v9 = Size;
      v28 = Size + 4;
      if ( Size == -4 )
      {
        v10 = 0;
        v31 = 0;
      }
      else
      {
        LODWORD(v22) = Size + 4;
        v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
        v9 = Size;
        v31 = v10;
      }
      if ( v10 )
      {
        LODWORD(v22) = v9;
        memcpy(v10, Size_4, v22);
        SourceString = (PCWSTR)v10;
        v11 = wcspbrk((const wchar_t *)v10, L";");
        if ( v11 )
        {
          v12 = SourceString;
          do
          {
            *v11 = 0;
            v13 = v11 + 1;
            RtlInitUnicodeString(&DestinationString, v12);
            if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              ++Heap;
            v12 = (const WCHAR *)v13;
            v11 = wcspbrk(v13, L";");
          }
          while ( v11 );
          SourceString = v12;
          v2 = v26;
        }
        if ( *SourceString )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            ++Heap;
        }
        if ( Heap )
        {
          Heap = 0;
        }
        else
        {
          Heap = 0;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v31);
          v28 = 0;
          v31 = 0;
        }
        if ( Size_4 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4);
        Size_4 = 0;
      }
      else
      {
        v28 = 0;
        Heap = -1073741801;
      }
    }
    v3 = String;
    goto LABEL_50;
  }
  v6 = Size;
  v32 = Size + 4;
  if ( Size == -4 )
  {
    v3 = 0;
    String = 0;
  }
  else
  {
    LODWORD(v22) = Size + 4;
    v3 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
    v6 = Size;
    String = v3;
  }
  if ( v3 )
  {
    LODWORD(v22) = v6;
    memcpy(v3, Size_4, v22);
    SourceString = (PCWSTR)v3;
    v7 = 0;
    v8 = wcspbrk(String, L";");
    if ( v8 )
    {
      v20 = SourceString;
      do
      {
        *v8 = 0;
        v21 = v8 + 1;
        RtlInitUnicodeString(&DestinationString, v20);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v7;
        v20 = (const WCHAR *)v21;
        v8 = wcspbrk(v21, L";");
      }
      while ( v8 );
      SourceString = v20;
      v2 = v26;
    }
    Heap = 0;
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v7;
    }
    if ( !v7 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String);
      v32 = 0;
      String = 0;
    }
    if ( Size_4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4);
    Size_4 = 0;
    goto LABEL_31;
  }
  v32 = 0;
  Heap = -1073741801;
LABEL_50:
  if ( Size_4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4);
  v14 = BaseAddress;
  if ( BaseAddress && v3 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    v3 = 0;
    v32 = 0;
    v14 = BaseAddress;
  }
LABEL_53:
  v15 = v25;
  *v2 |= 0x800u;
  v2[19] = v14;
  v2[22] = v29;
  v2[24] = v32;
  v2[20] = v31;
  v16 = v28;
  v2[23] = v3;
  v2[21] = v16;
  result = Heap;
  v2[17] = v15;
  v2[18] = v24;
  return result;
}
