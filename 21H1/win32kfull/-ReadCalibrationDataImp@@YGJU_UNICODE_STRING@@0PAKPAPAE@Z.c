/*
 * XREFs of ?ReadCalibrationDataImp@@YGJU_UNICODE_STRING@@0PAKPAPAE@Z @ 0x13E304
 * Callers:
 *     _ReadTiltCalibrationData@12 @ 0x13ED9B (_ReadTiltCalibrationData@12.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?RegQueryValueCal@@YGJPAXU_UNICODE_STRING@@KPAEKPAK@Z @ 0x13E820 (-RegQueryValueCal@@YGJPAXU_UNICODE_STRING@@KPAEKPAK@Z.c)
 *     _ValidateCalibrationData@12 @ 0x13F15C (_ValidateCalibrationData@12.c)
 */

NTSTATUS __userpurge ReadCalibrationDataImp@<eax>(
        void **a1@<edx>,
        WCHAR *a2@<ecx>,
        struct _UNICODE_STRING a3,
        struct _UNICODE_STRING a4,
        unsigned int *a5,
        unsigned __int8 **a6)
{
  NTSTATUS ValueCal; // esi
  size_t v9; // ecx
  void *v10; // eax
  struct _UNICODE_STRING v12; // [esp-10h] [ebp-38h]
  struct _UNICODE_STRING v13; // [esp-10h] [ebp-38h]
  unsigned int v14; // [esp+0h] [ebp-28h]
  unsigned int v15; // [esp+0h] [ebp-28h]
  unsigned int *v16; // [esp+4h] [ebp-24h]
  unsigned int *v17; // [esp+4h] [ebp-24h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-1Ch] BYREF
  void *KeyHandle; // [esp+24h] [ebp-4h] BYREF

  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &a4;
  ObjectAttributes.Attributes = 576;
  KeyHandle = 0;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ValueCal = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( ValueCal >= 0 )
  {
    v12.Buffer = a2;
    *(_DWORD *)&v12.Length = 0;
    ValueCal = RegQueryValueCal(0, v12, *(unsigned int *)&a3.Length, (unsigned __int8 *)a3.Buffer, v14, v16);
    if ( ValueCal == -1073741789 )
    {
      v9 = *(_DWORD *)a2;
      if ( (unsigned int)(*(_DWORD *)a2 - 40) <= 0xFFD7 )
      {
        if ( *a1 )
        {
          Win32FreePool(*a1);
          *a1 = 0;
          v9 = *(_DWORD *)a2;
        }
        v10 = (void *)Win32AllocPool(v9, 2020635477);
        *a1 = v10;
        if ( v10 )
        {
          memset(v10, 0, *(_DWORD *)a2);
          v13.Buffer = a2;
          *(_DWORD *)&v13.Length = *(_DWORD *)a2;
          ValueCal = RegQueryValueCal(*a1, v13, *(unsigned int *)&a3.Length, (unsigned __int8 *)a3.Buffer, v15, v17);
          if ( ValueCal >= 0 && !ValidateCalibrationData(3) )
            ValueCal = -1073741668;
        }
        else
        {
          ValueCal = -1073741670;
        }
      }
    }
    ZwClose(KeyHandle);
    if ( ValueCal < 0 )
    {
      *(_DWORD *)a2 = 0;
      if ( *a1 )
      {
        Win32FreePool(*a1);
        *a1 = 0;
      }
    }
  }
  return ValueCal;
}
