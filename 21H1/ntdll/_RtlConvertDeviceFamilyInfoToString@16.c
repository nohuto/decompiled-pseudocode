/*
 * XREFs of _RtlConvertDeviceFamilyInfoToString@16 @ 0x4B334FA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetDeviceFamilyInfoEnum@12 @ 0x4B2EB980 (_RtlpGetDeviceFamilyInfoEnum@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

DWORD __cdecl RtlConvertDeviceFamilyInfoToString(
        PDWORD pulDeviceFamilyBufferSize,
        PDWORD pulDeviceFormBufferSize,
        PWSTR DeviceFamily,
        PWSTR DeviceForm)
{
  char v4; // bl
  wchar_t *v5; // ecx
  void *v6; // eax
  wchar_t *v7; // edx
  const unsigned __int16 *v8; // edi
  unsigned int v10; // edx
  unsigned int v11; // kr00_4
  unsigned int v12; // esi
  size_t v14; // [esp-10h] [ebp-24h]
  size_t v15; // [esp-4h] [ebp-18h]
  void *Src; // [esp+Ch] [ebp-8h] BYREF
  ULONG v17; // [esp+10h] [ebp-4h] BYREF

  v4 = 0;
  RtlpGetDeviceFamilyInfoEnum(0, &v17, (ULONG *)&Src);
  v5 = off_4B281A98[v17 <= 0x11 ? v17 : 0];
  v6 = (unsigned int)Src <= 0x21 ? Src : 0;
  Src = v5;
  v7 = v5 + 1;
  v8 = (const unsigned __int16 *)*((_DWORD *)&::Src + (_DWORD)v6);
  while ( *v5++ )
    ;
  v10 = 2 * (v5 - v7) + 2;
  v11 = wcslen(v8);
  v12 = 2 * v11 + 2;
  if ( v10 > *pulDeviceFamilyBufferSize || v12 > *pulDeviceFormBufferSize )
    v4 = 1;
  *pulDeviceFamilyBufferSize = v10;
  *pulDeviceFormBufferSize = v12;
  if ( v4 )
    return -1073741789;
  LODWORD(v15) = v10;
  memcpy(DeviceFamily, Src, v15);
  LODWORD(v14) = 2 * v11 + 2;
  memcpy(DeviceForm, v8, v14);
  return 0;
}
