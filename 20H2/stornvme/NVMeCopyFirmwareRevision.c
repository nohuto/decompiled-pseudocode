/*
 * XREFs of NVMeCopyFirmwareRevision @ 0x1C0012B94
 * Callers:
 *     FormInquiryStandardData @ 0x1C0010C78 (FormInquiryStandardData.c)
 *     NVMeGetRichDeviceDescription @ 0x1C0013A88 (NVMeGetRichDeviceDescription.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeCopyFirmwareRevision(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  int v4; // ebx
  unsigned int v5; // r9d
  __int64 i; // r11
  __int64 v7; // rax
  _BYTE *v8; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 7;
  for ( i = 7LL; i >= 0; --i )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + i + 64) - 33;
    if ( (unsigned __int8)v7 <= 0x5Du && ++v4 == a3 )
      break;
    if ( !i )
      break;
    --v5;
  }
  if ( v5 < 8 )
  {
    v8 = (_BYTE *)((int)v5 + a1 + 64);
    do
    {
      LOBYTE(v7) = *v8 - 33;
      if ( (unsigned __int8)v7 <= 0x5Du )
      {
        v7 = v3++;
        *(_BYTE *)(v7 + a2) = *v8;
        if ( v3 >= a3 )
          break;
      }
      ++v5;
      ++v8;
    }
    while ( v5 < 8 );
  }
  return v7;
}
