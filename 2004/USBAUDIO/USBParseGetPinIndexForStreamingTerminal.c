/*
 * XREFs of USBParseGetPinIndexForStreamingTerminal @ 0x1C002EE90
 * Callers:
 *     USBParseTerminalUnit @ 0x1C002F440 (USBParseTerminalUnit.c)
 *     USBParseMIDIInJack @ 0x1C0030080 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C0030180 (USBParseMIDIOutJack.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C002E52C (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002EDC4 (USBParseGetTerminalLinkFromPinId.c)
 */

__int64 __fastcall USBParseGetPinIndexForStreamingTerminal(__int64 a1, unsigned __int8 *a2, char a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  bool v5; // bp
  int TerminalLinkFromPinId; // r8d
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  char v15; // cl
  unsigned int v16; // eax
  __int64 v17; // r14
  __int64 v18; // r15
  char *v19; // rdx
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  UCHAR *v21; // rdx
  UCHAR *v22; // r8
  char *v23; // rcx
  char v24; // al
  unsigned int v25; // ecx

  v3 = -1;
  v4 = 0;
  v5 = 0;
  if ( a3 )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 4LL);
    if ( !*(_BYTE *)(a1 + 5) )
    {
      if ( !(_BYTE)v11 )
        return v3;
      v12 = *(__int64 **)(a1 + 16);
      v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 4LL);
      do
      {
        v14 = *v12;
        v12 += 2;
        v15 = *(_BYTE *)(v14 + 6);
        v16 = v4 + 1;
        if ( v15 != 2 )
          v16 = v4;
        v4 = v16;
        --v13;
      }
      while ( v13 );
    }
    if ( (_BYTE)v11 )
    {
      v17 = 0LL;
      v18 = v11;
      do
      {
        v19 = *(char **)(v17 + *(_QWORD *)(a1 + 16));
        if ( v19[6] == 3 )
        {
          DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                        *(unsigned __int16 **)(a1 + 40),
                                        v19,
                                        36,
                                        7uLL);
          if ( DescriptorInConfiguration )
          {
            v21 = &DescriptorInConfiguration->bLength + DescriptorInConfiguration->bLength;
            if ( !v5 )
            {
              v22 = &DescriptorInConfiguration->bLength
                  + *(unsigned __int16 *)&DescriptorInConfiguration[2].bDescriptorType;
              while ( v21 < v22 )
              {
                v5 = v21 == a2;
                if ( v21 == a2 )
                  break;
                v23 = (char *)(v21 + 3);
                v21 += *v21;
                v24 = *v23;
                v25 = v4 + 1;
                if ( v24 != 1 )
                  v25 = v4;
                v4 = v25;
              }
            }
          }
        }
        v17 += 16LL;
        --v18;
      }
      while ( v18 );
      if ( v5 )
        return v4;
    }
  }
  else
  {
    TerminalLinkFromPinId = USBParseGetTerminalLinkFromPinId(a1, 0);
    while ( TerminalLinkFromPinId != -1 )
    {
      v9 = TerminalLinkFromPinId;
      if ( v5 )
        break;
      v10 = a2[3];
      if ( TerminalLinkFromPinId == v10 )
      {
        v5 = 1;
        v3 = v4;
      }
      else
      {
        TerminalLinkFromPinId = USBParseGetTerminalLinkFromPinId(a1, v4 + 1);
      }
      if ( v9 != v10 )
        ++v4;
    }
  }
  return v3;
}
