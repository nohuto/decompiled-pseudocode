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

int __stdcall RtlQueryActivationContextApplicationSettings(
        int a1,
        int a2,
        const wchar_t *a3,
        PCWSTR SourceString,
        void *a5,
        unsigned int a6,
        _DWORD *a7)
{
  const wchar_t *v7; // ebx
  int v8; // edi
  int ActivationContextData; // esi
  int v11; // ecx
  const wchar_t *v12; // eax
  bool v13; // cf
  wchar_t v14; // dx
  int v15; // [esp-8h] [ebp-70h]
  int v16; // [esp-4h] [ebp-6Ch]
  unsigned int v17; // [esp+10h] [ebp-58h] BYREF
  int v18; // [esp+14h] [ebp-54h] BYREF
  _DWORD *v19; // [esp+18h] [ebp-50h] BYREF
  int v20; // [esp+1Ch] [ebp-4Ch] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-48h] BYREF
  _DWORD v22[16]; // [esp+28h] [ebp-40h] BYREF

  v20 = -1;
  v7 = a3;
  v8 = 0;
  v18 = 0;
  v17 = 0;
  if ( !a3 )
    v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  if ( !a5 && a6 )
    return -1073741811;
  ActivationContextData = RtlpGetActivationContextData(0, &v18);
  if ( ActivationContextData >= 0 )
  {
    ActivationContextData = RtlpLocateActivationContextSection(10, &v19, &v17);
    if ( ActivationContextData >= 0 )
    {
      if ( v17 >= 0x2C && *v19 == 1682469715 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        memset(v22, 0, sizeof(v22));
        v22[0] = 64;
        ActivationContextData = RtlpFindUnicodeStringInSection(&DestinationString, v22, &v20, &v19, v15, v16);
        if ( ActivationContextData >= 0 )
        {
          if ( v22[1] != 1 )
            return -1072365565;
          v11 = v22[2];
          v12 = (const wchar_t *)(v22[2] + *(_DWORD *)(v22[2] + 12));
          while ( 1 )
          {
            v13 = *v12 < *v7;
            if ( *v12 != *v7 )
              break;
            if ( !*v12 )
              goto LABEL_20;
            v14 = v12[1];
            v13 = v14 < v7[1];
            if ( v14 != v7[1] )
              break;
            v12 += 2;
            v7 += 2;
            if ( !v14 )
              goto LABEL_20;
          }
          v8 = v13 ? -1 : 1;
LABEL_20:
          if ( v8 )
            return -1072365560;
          if ( a6 < *(_DWORD *)(v22[2] + 24) >> 1 )
          {
            ActivationContextData = -1073741789;
          }
          else
          {
            memcpy(a5, (const void *)(v22[2] + *(_DWORD *)(v22[2] + 28)), *(_DWORD *)(v22[2] + 24) + 2);
            v11 = v22[2];
          }
          if ( a7 )
            *a7 = (*(_DWORD *)(v11 + 24) >> 1) + 1;
        }
      }
      else
      {
        DbgPrintEx(
          51,
          0,
          "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
          v19,
          v17);
        ActivationContextData = -1072365565;
      }
    }
  }
  if ( ActivationContextData == -1072365567 )
    return -1072365560;
  return ActivationContextData;
}
