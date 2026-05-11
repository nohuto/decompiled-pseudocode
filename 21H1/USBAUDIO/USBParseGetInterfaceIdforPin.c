/*
 * XREFs of USBParseGetInterfaceIdforPin @ 0x1C002EBC4
 * Callers:
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002ED44 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseGetDatarangesAndModes @ 0x1C0031010 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C002E4AC (USBParseFindDescriptorInConfiguration.c)
 *     USBParseFindDescriptor @ 0x1C002E508 (USBParseFindDescriptor.c)
 */

__int64 __fastcall USBParseGetInterfaceIdforPin(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  unsigned int v7; // ebp
  unsigned int v8; // edx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r12
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // r13
  PUSB_COMMON_DESCRIPTOR Descriptor; // rcx
  int v17; // eax
  unsigned int v19; // [rsp+80h] [rbp+8h]
  unsigned int v22; // [rsp+98h] [rbp+20h]

  v3 = -1;
  v4 = 0;
  v7 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 4LL);
  v22 = v7;
  if ( *(_BYTE *)(a1 + 5) || (v8 = 0, !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 4LL)) )
  {
LABEL_9:
    v11 = 0;
    v19 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 4LL) )
    {
      v12 = 0LL;
      do
      {
        if ( v3 != -1 )
          break;
        v13 = *(_QWORD *)(a1 + 16);
        v14 = *(_QWORD *)(v12 + v13);
        if ( *(_BYTE *)(v14 + 6) == 3 )
        {
          DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                        *(unsigned __int16 **)(a1 + 40),
                                        *(char **)(v12 + v13),
                                        36,
                                        7uLL);
          Descriptor = USBParseFindDescriptor(
                         *(_QWORD *)(a1 + 40),
                         DescriptorInConfiguration,
                         *(unsigned __int16 *)&DescriptorInConfiguration[2].bDescriptorType,
                         &DescriptorInConfiguration->bLength + DescriptorInConfiguration->bLength);
          if ( Descriptor )
          {
            do
            {
              if ( v3 != -1 )
                break;
              if ( (unsigned __int8)(Descriptor[1].bLength - 2) <= 1u )
              {
                if ( Descriptor[1].bDescriptorType == 1 )
                {
                  v17 = v4++;
                  if ( v17 == a2 )
                    v3 = *(unsigned __int8 *)(v14 + 2);
                }
                *a3 = Descriptor[2].bLength;
              }
              Descriptor = USBParseFindDescriptor(
                             *(_QWORD *)(a1 + 40),
                             DescriptorInConfiguration,
                             *(unsigned __int16 *)&DescriptorInConfiguration[2].bDescriptorType,
                             &Descriptor->bLength + Descriptor->bLength);
            }
            while ( Descriptor );
            v7 = v22;
            v11 = v19;
          }
        }
        ++v11;
        v12 += 16LL;
        v19 = v11;
      }
      while ( v11 < v7 );
    }
  }
  else
  {
    while ( v3 == -1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * v8);
      if ( *(_BYTE *)(v9 + 6) == 2 )
      {
        v10 = v4++;
        if ( v10 == a2 )
          v3 = *(unsigned __int8 *)(v9 + 2);
      }
      if ( ++v8 >= v7 )
      {
        if ( v3 != -1 )
          return v3;
        goto LABEL_9;
      }
    }
  }
  return v3;
}
