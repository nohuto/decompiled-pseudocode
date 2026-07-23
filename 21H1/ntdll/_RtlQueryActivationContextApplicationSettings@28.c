/*
 * XREFs of _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270
 * Callers:
 *     _LdrpIsNlsUtf8Process@0 @ 0x4B333E8F (_LdrpIsNlsUtf8Process@0.c)
 *     _RtlpHpOptIntoSegmentHeap@4 @ 0x4B358522 (_RtlpHpOptIntoSegmentHeap@4.c)
 * Callees:
 *     _RtlpGetActivationContextData@16 @ 0x4B2B4F76 (_RtlpGetActivationContextData@16.c)
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 *     _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720 (_RtlpFindUnicodeStringInSection@32.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __cdecl RtlQueryActivationContextApplicationSettings(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PWSTR SettingsNameSpace,
        PWSTR SettingName,
        PWSTR Buffer,
        SIZE_T BufferLength,
        PSIZE_T RequiredLength)
{
  PWSTR v7; // ebx
  int v8; // edi
  NTSTATUS ActivationContextData; // esi
  int v11; // esi
  _DWORD *v12; // ecx
  _WORD *v13; // eax
  bool v14; // cf
  unsigned __int16 v15; // dx
  int v16; // [esp-8h] [ebp-70h]
  size_t v17; // [esp-4h] [ebp-6Ch]
  size_t v18; // [esp-4h] [ebp-6Ch]
  int v19; // [esp+10h] [ebp-58h] BYREF
  int v20; // [esp+14h] [ebp-54h] BYREF
  int v21; // [esp+18h] [ebp-50h] BYREF
  int v22; // [esp+1Ch] [ebp-4Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-48h] BYREF
  _DWORD v24[2]; // [esp+28h] [ebp-40h] BYREF
  _DWORD *v25; // [esp+30h] [ebp-38h]

  v22 = -1;
  v7 = SettingsNameSpace;
  v8 = 0;
  v20 = 0;
  v19 = 0;
  if ( !SettingsNameSpace )
    v7 = (PWSTR)L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  if ( !Buffer && (_DWORD)BufferLength )
    return -1073741811;
  ActivationContextData = RtlpGetActivationContextData(0, &v20);
  if ( ActivationContextData >= 0 )
  {
    ActivationContextData = RtlpLocateActivationContextSection(v20, 10, (int)&v21, (int)&v19);
    if ( ActivationContextData >= 0 )
    {
      v11 = v21;
      if ( (unsigned int)v19 >= 0x2C && *(_DWORD *)v21 == 1682469715 )
      {
        RtlInitUnicodeString(&DestinationString, SettingName);
        LODWORD(v17) = 64;
        memset(v24, 0, v17);
        v24[0] = 64;
        ActivationContextData = RtlpFindUnicodeStringInSection(v11, v19, &DestinationString, v24, &v22, &v21, v16, v18);
        if ( ActivationContextData >= 0 )
        {
          if ( v24[1] != 1 )
            return -1072365565;
          v12 = v25;
          v13 = (_WORD *)((char *)v25 + v25[3]);
          while ( 1 )
          {
            v14 = *v13 < (unsigned __int16)*v7;
            if ( *v13 != *v7 )
              break;
            if ( !*v13 )
              goto LABEL_20;
            v15 = v13[1];
            v14 = v15 < (unsigned __int16)v7[1];
            if ( v15 != v7[1] )
              break;
            v13 += 2;
            v7 += 2;
            if ( !v15 )
              goto LABEL_20;
          }
          v8 = v14 ? -1 : 1;
LABEL_20:
          if ( v8 )
            return -1072365560;
          if ( (unsigned int)BufferLength < v25[6] >> 1 )
          {
            ActivationContextData = -1073741789;
          }
          else
          {
            LODWORD(v18) = v25[6] + 2;
            memcpy(Buffer, (char *)v25 + v25[7], v18);
            v12 = v25;
          }
          if ( HIDWORD(BufferLength) )
            *(_DWORD *)HIDWORD(BufferLength) = (v12[6] >> 1) + 1;
        }
      }
      else
      {
        DbgPrintEx(
          51,
          0,
          (int)"RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
          v21);
        ActivationContextData = -1072365565;
      }
    }
  }
  if ( ActivationContextData == -1072365567 )
    return -1072365560;
  return ActivationContextData;
}
