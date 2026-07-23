/*
 * XREFs of RtlConvertDeviceFamilyInfoToString @ 0x18007A810
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18003F8A0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

DWORD __cdecl RtlConvertDeviceFamilyInfoToString(
        PDWORD pulDeviceFamilyBufferSize,
        PDWORD pulDeviceFormBufferSize,
        PWSTR DeviceFamily,
        PWSTR DeviceForm)
{
  __int64 v8; // rax
  __int64 v9; // r8
  wchar_t *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  wchar_t *v13; // rbp
  DWORD v14; // edx
  DWORD v15; // ebx
  char v16; // al
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  RtlpGetDeviceFamilyInfoEnum(0LL, &v18, &v19);
  v8 = v18;
  v9 = v19;
  if ( v18 > 0x11 )
    v8 = 0LL;
  if ( v19 > 0x21 )
    v9 = 0LL;
  v10 = off_18011E040[v8];
  v11 = -1LL;
  v12 = -1LL;
  v13 = off_18011E0D0[v9];
  do
    ++v12;
  while ( v10[v12] );
  v14 = 2 * v12 + 2;
  do
    ++v11;
  while ( v13[v11] );
  v15 = 2 * v11 + 2;
  if ( v14 > *pulDeviceFamilyBufferSize || (v16 = 0, v15 > *pulDeviceFormBufferSize) )
    v16 = 1;
  *pulDeviceFamilyBufferSize = v14;
  *pulDeviceFormBufferSize = v15;
  if ( v16 )
    return -1073741789;
  memmove(DeviceFamily, v10, v14);
  memmove(DeviceForm, v13, v15);
  return 0;
}
