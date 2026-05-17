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
  size_t v4; // eax
  wchar_t *v5; // esi
  size_t v6; // eax
  int v7; // edi
  wchar_t *v8; // esi
  size_t v9; // eax
  void *v10; // edi
  wchar_t *v11; // edi
  const WCHAR *v12; // ebx
  const wchar_t *v13; // edi
  int v14; // eax
  int v15; // ecx
  size_t v16; // eax
  int result; // eax
  const WCHAR *v18; // ebx
  const wchar_t *v19; // esi
  const WCHAR *v20; // ebx
  const wchar_t *v21; // esi
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-40h] BYREF
  int v23; // [esp+18h] [ebp-38h]
  int v24; // [esp+1Ch] [ebp-34h]
  _DWORD *v25; // [esp+20h] [ebp-30h]
  PCWSTR SourceString; // [esp+24h] [ebp-2Ch]
  size_t v27; // [esp+28h] [ebp-28h]
  size_t v28; // [esp+2Ch] [ebp-24h]
  int v29; // [esp+34h] [ebp-1Ch]
  size_t v30; // [esp+38h] [ebp-18h]
  char v31[4]; // [esp+3Ch] [ebp-14h] BYREF
  int v32; // [esp+40h] [ebp-10h]
  wchar_t *String; // [esp+44h] [ebp-Ch]
  size_t Size; // [esp+48h] [ebp-8h] BYREF
  void *Src; // [esp+4Ch] [ebp-4h] BYREF

  v23 = -1;
  Heap = 0;
  v2 = this;
  v25 = this;
  Src = 0;
  v32 = 0;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v27 = 0;
  v24 = 0;
  v3 = 0;
  String = 0;
  if ( !this )
  {
    Heap = -1073741811;
    v14 = 0;
    goto LABEL_53;
  }
  if ( RtlpGetWindowsPolicy(L"WindowsExcludedProcs", (int)&Size, (int)&Src) >= 0 )
  {
    v24 = 1;
    if ( Src )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
    Src = 0;
  }
  if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed", (int)&Size, (int)&Src) >= 0 )
  {
    v23 = *(_DWORD *)Src;
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
    Src = 0;
  }
  if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed", (int)&Size, (int)&Src) >= 0 )
  {
    v4 = Size;
    v28 = Size + 4;
    if ( Size == -4 )
    {
      v32 = 0;
    }
    else
    {
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, Size + 4);
      v32 = Heap;
      v4 = Size;
    }
    if ( !Heap )
    {
      Heap = -1073741801;
      v28 = 0;
      goto LABEL_50;
    }
    memcpy((void *)Heap, Src, v4);
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
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, v31) )
          v3 = (wchar_t *)((char *)v3 + 1);
        v18 = v19;
        v5 = wcspbrk(v19, L";");
      }
      while ( v5 );
      SourceString = v18;
      v2 = v25;
    }
    Heap = 0;
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, v31) )
        v3 = (wchar_t *)((char *)v3 + 1);
    }
    if ( !v3 )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v32);
      v28 = 0;
      v32 = 0;
    }
    if ( Src )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
    Src = 0;
  }
  if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed", (int)&Size, (int)&Src) < 0 )
  {
LABEL_31:
    if ( RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU", (int)&Size, (int)&Src) >= 0 )
    {
      v9 = Size;
      v27 = Size + 4;
      if ( Size == -4 )
      {
        v10 = 0;
        v29 = 0;
      }
      else
      {
        v10 = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, Size + 4);
        v9 = Size;
        v29 = (int)v10;
      }
      if ( v10 )
      {
        memcpy(v10, Src, v9);
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
            if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, v31) )
              ++Heap;
            v12 = v13;
            v11 = wcspbrk(v13, L";");
          }
          while ( v11 );
          SourceString = v12;
          v2 = v25;
        }
        if ( *SourceString )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, v31) )
            ++Heap;
        }
        if ( Heap )
        {
          Heap = 0;
        }
        else
        {
          Heap = 0;
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v29);
          v27 = 0;
          v29 = 0;
        }
        if ( Src )
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
        Src = 0;
      }
      else
      {
        v27 = 0;
        Heap = -1073741801;
      }
    }
    v3 = String;
    goto LABEL_50;
  }
  v6 = Size;
  v30 = Size + 4;
  if ( Size == -4 )
  {
    v3 = 0;
    String = 0;
  }
  else
  {
    v3 = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, Size + 4);
    v6 = Size;
    String = v3;
  }
  if ( v3 )
  {
    memcpy(v3, Src, v6);
    SourceString = v3;
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
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, v31) )
          ++v7;
        v20 = v21;
        v8 = wcspbrk(v21, L";");
      }
      while ( v8 );
      SourceString = v20;
      v2 = v25;
    }
    Heap = 0;
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, v31) )
        ++v7;
    }
    if ( !v7 )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)String);
      v30 = 0;
      String = 0;
    }
    if ( Src )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
    Src = 0;
    goto LABEL_31;
  }
  v30 = 0;
  Heap = -1073741801;
LABEL_50:
  if ( Src )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Src);
  v14 = v32;
  if ( v32 && v3 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v3);
    v3 = 0;
    v30 = 0;
    v14 = v32;
  }
LABEL_53:
  v15 = v24;
  *v2 |= 0x800u;
  v2[19] = v14;
  v2[22] = v28;
  v2[24] = v30;
  v2[20] = v29;
  v16 = v27;
  v2[23] = v3;
  v2[21] = v16;
  result = Heap;
  v2[17] = v15;
  v2[18] = v23;
  return result;
}
