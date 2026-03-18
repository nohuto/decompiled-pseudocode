/*
 * XREFs of ?ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z @ 0x13E409
 * Callers:
 *     _RetrieveCalibrationData@12 @ 0x13EF9A (_RetrieveCalibrationData@12.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102 (-RtlStringCchCopyNW@@YGJPAGIPBGI@Z.c)
 *     ?GetDeviceId@@YGJU_UNICODE_STRING@@PAPAG1@Z @ 0x13E1A4 (-GetDeviceId@@YGJU_UNICODE_STRING@@PAPAG1@Z.c)
 *     ?ReadLinearityDataImp@@YGHPAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PAKPAPAE@Z @ 0x13E720 (-ReadLinearityDataImp@@YGHPAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PAKPAPAE@Z.c)
 */

int __userpurge ReadLinearityData@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        struct _UNICODE_STRING a4,
        void *a5)
{
  int LinearityDataImp; // edi
  const WCHAR *v6; // ebx
  _DWORD *v7; // esi
  int v8; // edi
  void *v9; // ecx
  unsigned __int16 **v11; // [esp+0h] [ebp-60h]
  const unsigned __int16 *v12; // [esp+0h] [ebp-60h]
  unsigned __int16 **v13; // [esp+4h] [ebp-5Ch]
  unsigned int v14; // [esp+4h] [ebp-5Ch]
  void *KeyHandle; // [esp+Ch] [ebp-54h] BYREF
  size_t cchDest; // [esp+10h] [ebp-50h] BYREF
  struct _UNICODE_STRING v17; // [esp+14h] [ebp-4Ch] BYREF
  struct _UNICODE_STRING v18; // [esp+1Ch] [ebp-44h] BYREF
  int v19; // [esp+24h] [ebp-3Ch]
  struct _UNICODE_STRING v20; // [esp+28h] [ebp-38h] BYREF
  struct _UNICODE_STRING v21; // [esp+30h] [ebp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+38h] [ebp-28h] BYREF
  struct _UNICODE_STRING v23; // [esp+40h] [ebp-20h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+48h] [ebp-18h] BYREF

  *(_DWORD *)&v17.Length = a1;
  v19 = a2;
  LinearityDataImp = 0;
  KeyHandle = 0;
  v6 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&v23.Length = 0;
  v23.Buffer = 0;
  *(_DWORD *)&v21.Length = 0;
  v21.Buffer = 0;
  *(_DWORD *)&v20.Length = 0;
  v20.Buffer = 0;
  v7 = (_DWORD *)Win32AllocPoolZInit(48, 2020635477);
  if ( !v7 )
    return LinearityDataImp;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\LinearityData");
  RtlInitUnicodeString(&v23, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC");
  RtlInitUnicodeString(&v20, L"LinearityData");
  LinearityDataImp = ReadLinearityDataImp(*(_DWORD *)&v17.Length, 1, v7 + 1, v7, *(_DWORD *)&v20.Length, v20.Buffer);
  if ( LinearityDataImp )
    goto LABEL_24;
  if ( *(_DWORD *)&a4.Length )
  {
    cchDest = 0;
    *(_DWORD *)&v18.Length = 0;
    if ( (GetDeviceId(
            (wchar_t **)&v18,
            (wchar_t **)&cchDest,
            (struct _UNICODE_STRING)__PAIR64__(*(unsigned int *)&a4.Length, (unsigned int)a3),
            v11,
            v13) & 0x80000000) == 0 )
    {
      v8 = (int)(*(_DWORD *)&v18.Length - cchDest) >> 1;
      v6 = (const WCHAR *)Win32AllocPool(2 * v8 + 2, 2020635477);
      if ( v6 )
      {
        RtlStringCchCopyNW(cchDest, (size_t *)v8, v12, v14);
        RtlInitUnicodeString(&v21, v6);
        ObjectAttributes.Length = 24;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = 0;
        ObjectAttributes.SecurityQualityOfService = 0;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        {
          LinearityDataImp = ReadLinearityDataImp(KeyHandle, 1, v7 + 1, v7, *(_DWORD *)&v21.Length, v21.Buffer);
          ZwClose(KeyHandle);
          if ( LinearityDataImp )
            goto LABEL_18;
        }
      }
    }
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &v23;
  *(_DWORD *)&v18.Length = 0;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v9 = *(void **)&v17.Length;
    KeyHandle = *(void **)&v17.Length;
  }
  else
  {
    v9 = KeyHandle;
    *(_DWORD *)&v18.Length = 1;
  }
  LinearityDataImp = ReadLinearityDataImp(v9, 1, v7 + 1, v7, *(_DWORD *)&v20.Length, v20.Buffer);
  if ( *(_DWORD *)&v18.Length )
    ZwClose(KeyHandle);
  if ( LinearityDataImp
    || (*(_DWORD *)&v18.Length = 0,
        v18.Buffer = 0,
        RtlInitUnicodeString(&v18, L"UserLinearityData"),
        (LinearityDataImp = ReadLinearityDataImp(
                              *(_DWORD *)&v17.Length,
                              2,
                              v7 + 1,
                              v7,
                              *(_DWORD *)&v18.Length,
                              v18.Buffer)) != 0) )
  {
LABEL_18:
    if ( v6 )
      Win32FreePool(v6);
    if ( !LinearityDataImp )
      goto LABEL_21;
LABEL_24:
    *(_DWORD *)(v19 + 316) = v7;
    return LinearityDataImp;
  }
  *(_DWORD *)&v17.Length = 0;
  v17.Buffer = 0;
  if ( v6 )
  {
    RtlInitUnicodeString(&v17, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\UserLinearityData");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &v17;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      *(_DWORD *)&v18.Length = 0;
      v18.Buffer = 0;
      RtlInitUnicodeString(&v18, v6);
      LinearityDataImp = ReadLinearityDataImp(KeyHandle, 2, v7 + 1, v7, *(_DWORD *)&v18.Length, v18.Buffer);
      ZwClose(KeyHandle);
    }
    goto LABEL_18;
  }
LABEL_21:
  if ( *v7 )
  {
    Win32FreePool(*v7);
    *v7 = 0;
  }
  Win32FreePool(v7);
  return LinearityDataImp;
}
