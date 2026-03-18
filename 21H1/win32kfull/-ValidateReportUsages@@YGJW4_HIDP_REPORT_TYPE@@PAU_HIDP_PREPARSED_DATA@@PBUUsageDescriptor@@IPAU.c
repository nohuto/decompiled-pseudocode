/*
 * XREFs of ?ValidateReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageDescriptor@@IPAUUsageValueInfo@@@Z @ 0x1AC721
 * Callers:
 *     ?GetDeviceCaps@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAUUsageValueInfo@@1PAVCapabilities@InkDevice@@@Z @ 0x1AC505 (-GetDeviceCaps@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAUUsageValueInfo@@1PAVCapabilities@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge ValidateReportUsages@<eax>(
        struct _HIDP_PREPARSED_DATA *a1@<edx>,
        HIDP_REPORT_TYPE a2@<ecx>,
        int ValueCapsLength,
        struct _HIDP_PREPARSED_DATA *a4,
        const struct UsageDescriptor *a5,
        unsigned int a6,
        struct UsageValueInfo *a7)
{
  NTSTATUS result; // eax
  unsigned int v8; // ebx
  const struct UsageDescriptor *v9; // esi
  _BYTE *v10; // edi
  const struct UsageDescriptor *v11; // edx
  char v12; // cl
  HIDP_REPORT_TYPE v13; // [esp+4h] [ebp-8h]
  struct _HIDP_PREPARSED_DATA *v14; // [esp+8h] [ebp-4h]

  result = 0;
  v14 = a1;
  v8 = 0;
  v13 = a2;
  if ( a4 )
  {
    v9 = a5;
    v10 = (_BYTE *)(ValueCapsLength + 4);
    while ( 1 )
    {
      ValueCapsLength = 1;
      result = HidP_GetSpecificValueCaps(
                 a2,
                 *((_WORD *)v10 - 2),
                 0,
                 *((_WORD *)v10 - 1),
                 (PHIDP_VALUE_CAPS)((char *)v9 + 4),
                 (PUSHORT)&ValueCapsLength,
                 a1);
      if ( result < 0 )
      {
        *(_BYTE *)v9 = 0;
        if ( *v10 )
          return result;
        result = 0;
      }
      else
      {
        v11 = a5;
        v12 = *((_BYTE *)v9 + 6);
        *(_BYTE *)v9 = 1;
        if ( v12 != *((_BYTE *)v11 + 6) )
        {
          if ( *v10 )
            return -1073741762;
          *(_BYTE *)v9 = 0;
        }
      }
      ++v8;
      v9 = (const struct UsageDescriptor *)((char *)v9 + 76);
      v10 += 6;
      if ( v8 >= (unsigned int)a4 )
        return result;
      a1 = v14;
      a2 = v13;
    }
  }
  return result;
}
