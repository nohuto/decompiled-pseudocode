/*
 * XREFs of ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C024F7A8
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0254E90 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceCaps(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct UsageValueInfo *a2,
        struct UsageValueInfo *a3,
        struct InkDevice::Capabilities *a4)
{
  unsigned int v5; // r13d
  _BYTE *v6; // r14
  PHIDP_PREPARSED_DATA v9; // rdx
  struct UsageValueInfo *v10; // rdi
  USAGE v11; // r9
  USAGE v12; // dx
  NTSTATUS SpecificValueCaps; // ebx
  _BYTE *v14; // r14
  struct _HIDP_PREPARSED_DATA *v15; // r13
  struct UsageValueInfo *v16; // rdi
  char v17; // al
  unsigned int v18; // r15d
  USAGE v19; // r9
  USAGE v20; // dx
  struct _HIDP_PREPARSED_DATA *PreparsedDataa; // [rsp+30h] [rbp-49h]
  USHORT ValueCapsLength[4]; // [rsp+40h] [rbp-39h] BYREF
  PHIDP_PREPARSED_DATA v24; // [rsp+48h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-29h] BYREF
  USHORT *v26; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]

  v24 = PreparsedData;
  v5 = 0;
  v6 = &unk_1C02F5304;
  v9 = PreparsedData;
  v10 = a2;
  while ( 1 )
  {
    v11 = *((_WORD *)v6 - 1);
    PreparsedDataa = v9;
    v12 = *((_WORD *)v6 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          v12,
                          0,
                          v11,
                          (PHIDP_VALUE_CAPS)((char *)a2 + 76 * v5 + 4),
                          ValueCapsLength,
                          PreparsedDataa);
    if ( SpecificValueCaps >= 0 )
      break;
    *(_BYTE *)v10 = 0;
    if ( *v6 )
      goto LABEL_11;
    SpecificValueCaps = 0;
LABEL_8:
    ++v5;
    v10 = (struct UsageValueInfo *)((char *)v10 + 76);
    v6 += 6;
    if ( v5 >= 7 )
      goto LABEL_11;
    v9 = v24;
  }
  *(_BYTE *)v10 = 1;
  if ( *((_BYTE *)v10 + 6) == *((_BYTE *)a2 + 6) )
    goto LABEL_8;
  if ( !*v6 )
  {
    *(_BYTE *)v10 = 0;
    goto LABEL_8;
  }
  SpecificValueCaps = -1073741762;
LABEL_11:
  if ( SpecificValueCaps < 0 )
  {
    if ( (unsigned int)dword_1C032A288 > 2 )
      goto LABEL_13;
    return (unsigned int)SpecificValueCaps;
  }
  v14 = &unk_1C02F52F8;
  v15 = v24;
  v16 = a3;
  *(_BYTE *)a4 = *((_BYTE *)a2 + 6);
  *((_BYTE *)a4 + 2) = *((_BYTE *)a2 + 380);
  v17 = *((_BYTE *)a2 + 456);
  v18 = 0;
  *((_BYTE *)a4 + 1) = v17;
  while ( 2 )
  {
    v19 = *((_WORD *)v14 - 1);
    v20 = *((_WORD *)v14 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Output,
                          v20,
                          0,
                          v19,
                          (PHIDP_VALUE_CAPS)((char *)a3 + 76 * v18 + 4),
                          ValueCapsLength,
                          v15);
    if ( SpecificValueCaps < 0 )
    {
      *(_BYTE *)v16 = 0;
      if ( *v14 )
        goto LABEL_24;
      SpecificValueCaps = 0;
LABEL_21:
      ++v18;
      v16 = (struct UsageValueInfo *)((char *)v16 + 76);
      v14 += 6;
      if ( v18 )
        goto LABEL_24;
      continue;
    }
    break;
  }
  *(_BYTE *)v16 = 1;
  if ( *((_BYTE *)v16 + 6) == *((_BYTE *)a3 + 6) )
    goto LABEL_21;
  if ( !*v14 )
  {
    *(_BYTE *)v16 = 0;
    goto LABEL_21;
  }
  SpecificValueCaps = -1073741762;
LABEL_24:
  if ( SpecificValueCaps >= 0 )
  {
    if ( *((_WORD *)a3 + 11) == 8 )
    {
      *((_BYTE *)a4 + 4) = *((_BYTE *)a3 + 6);
      *((_DWORD *)a4 + 2) = *((unsigned __int16 *)a3 + 12);
    }
    else
    {
      SpecificValueCaps = -1073741762;
      if ( (unsigned int)dword_1C032A288 > 2 )
      {
LABEL_13:
        v27 = 4LL;
        v26 = ValueCapsLength;
        *(_DWORD *)ValueCapsLength = SpecificValueCaps;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C032A288,
          (unsigned __int8 *)dword_1C02F0A0C,
          0LL,
          0LL,
          3u,
          &v25);
      }
    }
  }
  else if ( (unsigned int)dword_1C032A288 > 2 )
  {
    goto LABEL_13;
  }
  return (unsigned int)SpecificValueCaps;
}
