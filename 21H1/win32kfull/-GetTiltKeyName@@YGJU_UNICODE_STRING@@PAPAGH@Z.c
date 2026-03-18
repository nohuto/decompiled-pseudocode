/*
 * XREFs of ?GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z @ 0x13E265
 * Callers:
 *     _ReadTiltCalibrationData@12 @ 0x13ED9B (_ReadTiltCalibrationData@12.c)
 *     _WriteTiltCalibrationData@20 @ 0x13F29A (_WriteTiltCalibrationData@20.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102 (-RtlStringCchCopyNW@@YGJPAGIPBGI@Z.c)
 *     ?GetDeviceId@@YGJU_UNICODE_STRING@@PAPAG1@Z @ 0x13E1A4 (-GetDeviceId@@YGJU_UNICODE_STRING@@PAPAG1@Z.c)
 *     ?GetInstanceId@@YGJU_UNICODE_STRING@@PAPAG1@Z @ 0x13E1F9 (-GetInstanceId@@YGJU_UNICODE_STRING@@PAPAG1@Z.c)
 */

int __userpurge GetTiltKeyName@<eax>(_DWORD *a1@<ecx>, struct _UNICODE_STRING a2, unsigned __int16 **a3, int a4)
{
  signed int DeviceId; // esi
  int v6; // esi
  int v7; // eax
  unsigned __int16 **v9; // [esp+0h] [ebp-1Ch]
  unsigned __int16 **v10; // [esp+0h] [ebp-1Ch]
  const unsigned __int16 *v11; // [esp+0h] [ebp-1Ch]
  unsigned __int16 **v12; // [esp+4h] [ebp-18h]
  unsigned __int16 **v13; // [esp+4h] [ebp-18h]
  unsigned int v14; // [esp+4h] [ebp-18h]
  wchar_t *v15; // [esp+Ch] [ebp-10h] BYREF
  wchar_t *v16; // [esp+10h] [ebp-Ch] BYREF
  wchar_t *v17; // [esp+14h] [ebp-8h] BYREF
  size_t cchDest; // [esp+18h] [ebp-4h] BYREF

  cchDest = 0;
  v16 = 0;
  v15 = 0;
  v17 = 0;
  *a1 = 0;
  DeviceId = GetDeviceId(&v16, (wchar_t **)&cchDest, a2, v9, v12);
  if ( DeviceId < 0 )
    goto LABEL_11;
  DeviceId = GetInstanceId(&v17, &v15, a2, v10, v13);
  if ( DeviceId < 0 )
    goto LABEL_11;
  v6 = (int)((int)v17 - cchDest) >> 1;
  v7 = Win32AllocPool(2 * v6 + 2, 2020635477);
  *a1 = v7;
  if ( !v7 )
    return -1073741668;
  DeviceId = RtlStringCchCopyNW(cchDest, (size_t *)v6, v11, v14);
  if ( DeviceId < 0 )
  {
LABEL_11:
    if ( *a1 )
    {
      Win32FreePool(*a1);
      *a1 = 0;
    }
  }
  return DeviceId;
}
