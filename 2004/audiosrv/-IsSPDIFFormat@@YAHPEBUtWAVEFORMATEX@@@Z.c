/*
 * XREFs of ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180044E38
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPDIFFormat(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // edx
  BOOL v2; // edi
  DWORD v4; // ebx
  HRESULT v5; // eax
  unsigned int v6; // r9d
  WORD wFormatTag; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // rax
  DWORD cchName; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  v1 = g_cCompressedPassThruFormats;
  v2 = 0;
  hKey = 0LL;
  if ( !g_cCompressedPassThruFormats )
  {
    if ( RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\SPDIF_Formats",
           0,
           8u,
           &hKey) )
    {
      goto LABEL_22;
    }
    v4 = 0;
    while ( 1 )
    {
      cchName = 260;
      if ( RegEnumKeyExW(hKey, v4, sz, &cchName, 0LL, 0LL, 0LL, 0LL) )
        break;
      v5 = CLSIDFromString(sz, &g_rgCompressedPassThruFormats + v4);
      v1 = g_cCompressedPassThruFormats;
      if ( v5 >= 0 )
        v1 = ++g_cCompressedPassThruFormats;
      if ( ++v4 >= 0x20 )
        goto LABEL_10;
    }
    v1 = g_cCompressedPassThruFormats;
  }
LABEL_10:
  if ( a1 )
  {
    v6 = 0;
    if ( v1 )
    {
      wFormatTag = a1->wFormatTag;
      while ( 1 )
      {
        v8 = 16LL * v6;
        if ( wFormatTag == 0xFFFE )
          break;
        v9 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
           - *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v8 + 2);
        if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v8 + 2) )
        {
          v10 = *(unsigned int *)&g_rgCompressedPassThruFormats.Data4[v8 + 2];
          v9 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v10;
          if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v10 )
            v9 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
               - (unsigned __int64)*(unsigned __int16 *)&g_rgCompressedPassThruFormats.Data4[v8 + 6];
        }
        if ( !v9 )
        {
          if ( *(_WORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v8) == wFormatTag )
          {
            v2 = 1;
            goto LABEL_22;
          }
          v2 = 0;
          goto LABEL_20;
        }
LABEL_21:
        if ( ++v6 >= v1 )
          goto LABEL_22;
      }
      v12 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
          - *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v8);
      if ( !v12 )
        v12 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)&g_rgCompressedPassThruFormats.Data4[v8];
      v2 = v12 == 0;
LABEL_20:
      if ( v2 )
        goto LABEL_22;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( hKey )
    RegCloseKey(hKey);
  return v2;
}
