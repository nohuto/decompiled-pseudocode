/*
 * XREFs of _ValidateDeviceSignature@36 @ 0x15991D
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForSegmentedSignatureBlob@@YGJPAXGPAU_HIDP_VALUE_CAPS@@PAG@Z @ 0x156C3E (-CheckForSegmentedSignatureBlob@@YGJPAXGPAU_HIDP_VALUE_CAPS@@PAG@Z.c)
 *     ?RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPAK@Z @ 0x1579FA (-RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HI.c)
 *     ?_SqmTHQA@@YGXGGK@Z @ 0x158C19 (-_SqmTHQA@@YGXGGK@Z.c)
 *     __GetLicensingType@0 @ 0x159AB1 (__GetLicensingType@0.c)
 */

NTSTATUS __stdcall ValidateDeviceSignature(
        struct _DEVICE_OBJECT *a1,
        struct _HIDP_VALUE_CAPS *a2,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        char **a4,
        int a5,
        struct _HIDP_CAPS *a6,
        struct _HIDP_PREPARSED_DATA *a7,
        ULONG a8,
        PHIDP_VALUE_CAPS ValueCaps)
{
  unsigned int v9; // edi
  int v10; // esi
  int v11; // ebx
  int LicensingType; // eax
  int v13; // ecx
  NTSTATUS SpecificValueCaps; // ebx
  struct _HIDP_VALUE_CAPS *v15; // eax
  USHORT v16; // dx
  USAGE v17; // ax
  struct _HID_COLLECTION_INFORMATION v19; // [esp-Ch] [ebp-34h]
  int v20; // [esp-4h] [ebp-2Ch]
  struct _HIDP_VALUE_CAPS *v21; // [esp+0h] [ebp-28h]
  unsigned __int16 *v22; // [esp+4h] [ebp-24h]
  int SystemInformation; // [esp+Ch] [ebp-1Ch] BYREF
  int v24; // [esp+10h] [ebp-18h]
  ULONG ReturnLength; // [esp+14h] [ebp-14h] BYREF
  unsigned __int16 v26[2]; // [esp+18h] [ebp-10h] BYREF
  USHORT ValueCapsLength[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int v28; // [esp+20h] [ebp-8h]
  int v29; // [esp+24h] [ebp-4h] BYREF
  struct _HIDP_VALUE_CAPS *ValueCapsa; // [esp+50h] [ebp+28h]

  v9 = 0;
  v10 = 0;
  *(_DWORD *)v26 = 0;
  v29 = 0;
  EtwTraceTHQAStart();
  v24 = 0;
  SystemInformation = 8;
  ReturnLength = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
    && (v24 & 2) != 0 )
  {
    v11 = 1;
    v28 = 1;
  }
  else
  {
    v11 = 0;
    v28 = 0;
  }
  LicensingType = _GetLicensingType();
  if ( v11 )
  {
    v10 = 4;
    v29 = 4;
  }
  if ( !LicensingType )
  {
    v20 = 3;
LABEL_11:
    v10 = v20;
    v29 = v20;
    goto LABEL_12;
  }
  if ( ValueCaps )
  {
    v20 = 5;
    goto LABEL_11;
  }
LABEL_12:
  v13 = *((unsigned __int16 *)a4 + 30);
  *(_DWORD *)ValueCapsLength = v13;
  if ( !(_WORD)v13 || (v15 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72 * v13, 1668707157), (ValueCapsa = v15) == 0) )
  {
    SpecificValueCaps = -1073741668;
    goto LABEL_23;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0, 0, 0xC5u, v15, ValueCapsLength, PreparsedData);
  if ( SpecificValueCaps >= 0 )
  {
    v17 = 197;
    goto LABEL_21;
  }
  v16 = *((_WORD *)a4 + 30);
  *(_DWORD *)ValueCapsLength = v16;
  if ( *(_DWORD *)(a5 + 12) == 7 )
  {
    SpecificValueCaps = CheckForSegmentedSignatureBlob(v16, PreparsedData, ValueCapsa, v26, v21, v22);
    if ( SpecificValueCaps >= 0 )
    {
      v9 = *(_DWORD *)v26;
      v17 = 199;
LABEL_21:
      *(_QWORD *)&v19.Polled = __PAIR64__(&v29, v9);
      v19.DescriptorSize = a8;
      RetrieveAndVerifySignature(
        a2,
        a1,
        v17,
        (struct _FILE_OBJECT *)ValueCapsa,
        a4,
        (char **)PreparsedData,
        a6,
        a7,
        v19,
        (unsigned __int16)v21,
        (unsigned int *)v22);
      v10 = v29;
      goto LABEL_22;
    }
  }
  SpecificValueCaps = -1073741668;
LABEL_22:
  Win32FreePool(ValueCapsa);
LABEL_23:
  if ( v10 == 1 || v10 == 2 && *(_DWORD *)(a5 + 12) == 7 || v28 )
    *(_DWORD *)(a5 + 300) |= 0x100u;
  _SqmTHQA(a8, HIWORD(a7), v10, (unsigned __int16)v21, (unsigned int)v22);
  EtwTraceTHQAStop();
  if ( !v28 )
  {
    if ( SpecificValueCaps >= 0 )
    {
LABEL_32:
      UserLogError(1073742091);
      return SpecificValueCaps;
    }
    if ( *(_DWORD *)(a5 + 12) == 7 )
    {
      UserLogError(-1073741554);
      goto LABEL_32;
    }
  }
  return 0;
}
