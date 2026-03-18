/*
 * XREFs of ?RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPAK@Z @ 0x1579FA
 * Callers:
 *     _ValidateDeviceSignature@36 @ 0x15991D (_ValidateDeviceSignature@36.c)
 * Callees:
 *     ?BuildSignatureFeatureReport@@YGJPAU_HIDP_CAPS@@PAU_HIDP_VALUE_CAPS@@PAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD4@Z @ 0x156B36 (-BuildSignatureFeatureReport@@YGJPAU_HIDP_CAPS@@PAU_HIDP_VALUE_CAPS@@PAU_DEVICE_OBJECT@@PAU_FILE.c)
 *     ?CoreSignatureVerify@@YGHGGPAEPAK@Z @ 0x156D0B (-CoreSignatureVerify@@YGHGGPAEPAK@Z.c)
 *     ?RetrieveSegmentedBlob@@YGJPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD2PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x157B81 (-RetrieveSegmentedBlob@@YGJPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD2PAU_HIDP_CAPS@@PAU_HIDP_PRE.c)
 */

BOOL __userpurge RetrieveAndVerifySignature@<eax>(
        struct _HIDP_VALUE_CAPS *a1@<edx>,
        struct _DEVICE_OBJECT *a2@<ecx>,
        USAGE Usage,
        struct _FILE_OBJECT *a4,
        char **a5,
        char **PreparsedData,
        struct _HIDP_CAPS *a7,
        struct _HIDP_PREPARSED_DATA *a8,
        struct _HID_COLLECTION_INFORMATION a9,
        unsigned __int16 a10,
        unsigned int *a11)
{
  BOOL v11; // edi
  int SegmentedBlob; // eax
  UCHAR *v13; // esi
  unsigned int v15; // ecx
  PSECTION_OBJECT_POINTERS *p_SectionObjectPointer; // eax
  USAGE v17; // dx
  _BYTE v18[80]; // [esp-48h] [ebp-68h] BYREF
  PCHAR UsageValue; // [esp+10h] [ebp-10h] BYREF
  PCHAR Report; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v21; // [esp+18h] [ebp-8h]
  PSECTION_OBJECT_POINTERS *v22; // [esp+1Ch] [ebp-4h]

  UsageValue = 0;
  Report = 0;
  v11 = 0;
  v22 = (PSECTION_OBJECT_POINTERS *)a2;
  if ( Usage == 199 )
  {
    qmemcpy(v18, (char *)a4 + 72 * *(unsigned __int16 *)&a9.Polled, 0x48u);
    SegmentedBlob = RetrieveSegmentedBlob(
                      (struct _DEVICE_OBJECT *)&UsageValue,
                      (struct _FILE_OBJECT *)&Report,
                      a5,
                      PreparsedData,
                      *(struct _HIDP_CAPS **)v18,
                      *(struct _HIDP_PREPARSED_DATA **)&v18[4],
                      *(struct _HIDP_VALUE_CAPS *)&v18[8]);
    v13 = (UCHAR *)UsageValue;
    if ( SegmentedBlob >= 0 )
    {
      v11 = CoreSignatureVerify(
              a9.DescriptorSize,
              SHIWORD(a8),
              (UCHAR *)UsageValue,
              *(_DWORD **)&a9.ProductID,
              *(unsigned __int8 **)&v18[72],
              *(unsigned int **)&v18[76]);
    }
    else
    {
      v11 = 0;
      **(_DWORD **)&a9.ProductID = 0;
    }
    goto LABEL_8;
  }
  if ( BuildSignatureFeatureReport(
         (int)a4,
         (int)a5,
         a2,
         a1,
         (struct _DEVICE_OBJECT *)&Report,
         (struct _FILE_OBJECT *)&UsageValue,
         *(char ***)&v18[72],
         *(char ***)&v18[76]) < 0 )
  {
    v11 = 0;
    **(_DWORD **)&a9.ProductID = 0;
LABEL_7:
    v13 = (UCHAR *)UsageValue;
    goto LABEL_8;
  }
  v15 = 0;
  v21 = 0;
  if ( !*((_WORD *)a5 + 30) )
    goto LABEL_7;
  v13 = (UCHAR *)UsageValue;
  p_SectionObjectPointer = &a4->SectionObjectPointer;
  v22 = &a4->SectionObjectPointer;
  do
  {
    v17 = *((_WORD *)p_SectionObjectPointer - 10);
    UsageValue = (PCHAR)65280;
    if ( v17 >= 0xFF00u && *((_WORD *)p_SectionObjectPointer - 1) == 8 )
    {
      v15 = v21;
      if ( *(_WORD *)p_SectionObjectPointer == 256 )
      {
        if ( HidP_GetUsageValueArray(
               HidP_Feature,
               v17,
               0,
               Usage,
               (PCHAR)v13,
               0x100u,
               (PHIDP_PREPARSED_DATA)PreparsedData,
               Report,
               *((unsigned __int16 *)a5 + 4)) >= 0 )
        {
          v11 = CoreSignatureVerify(
                  a9.DescriptorSize,
                  SHIWORD(a8),
                  v13,
                  *(_DWORD **)&a9.ProductID,
                  *(unsigned __int8 **)&v18[72],
                  *(unsigned int **)&v18[76]);
          if ( v11 )
            break;
        }
        else
        {
          v11 = 0;
          **(_DWORD **)&a9.ProductID = 0;
        }
        v15 = v21;
        p_SectionObjectPointer = v22;
      }
    }
    ++v15;
    v22 = p_SectionObjectPointer + 18;
    v21 = v15;
    p_SectionObjectPointer += 18;
  }
  while ( v15 < *((unsigned __int16 *)a5 + 30) );
LABEL_8:
  if ( v13 )
    Win32FreePool(v13);
  if ( Report )
    Win32FreePool(Report);
  return v11;
}
