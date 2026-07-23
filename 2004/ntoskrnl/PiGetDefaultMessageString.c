/*
 * XREFs of PiGetDefaultMessageString @ 0x140758254
 * Callers:
 *     PiNormalizeDeviceText @ 0x140757E70 (PiNormalizeDeviceText.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlInitUTF8String @ 0x140580120 (RtlInitUTF8String.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140642DF0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlFindMessage @ 0x140712910 (RtlFindMessage.c)
 *     IopReferenceDriverObjectByName @ 0x1407285F4 (IopReferenceDriverObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     RtlUTF8StringToUnicodeString @ 0x140916390 (RtlUTF8StringToUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, ULONG MessageId, _QWORD *a3)
{
  struct _DMA_ADAPTER *v6; // rdi
  NTSTATUS DriverNameFromKeyNode; // ebx
  struct _DMA_ADAPTER *v8; // rax
  WORD Flags; // ax
  BYTE *Text; // rdx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v13; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v15; // r14
  NTSTATUS v17; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+A8h] [rbp+48h] BYREF

  MessageEntry = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v8 = (struct _DMA_ADAPTER *)IopReferenceDriverObjectByName(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(v8[1].DmaOperations, 0xBu, 0, MessageId, &MessageEntry);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_11;
      Flags = MessageEntry->Flags;
      Text = MessageEntry->Text;
      if ( (Flags & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, (PCWSTR)Text) )
        {
LABEL_14:
          DriverNameFromKeyNode = -1073741670;
          goto LABEL_11;
        }
      }
      else
      {
        if ( (Flags & 2) != 0 )
        {
          SourceString = 0LL;
          RtlInitUTF8String(&SourceString, (PCSZ)Text);
          v17 = RtlUTF8StringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        else
        {
          RtlInitAnsiString(&SourceString, (PCSZ)Text);
          v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        DriverNameFromKeyNode = v17;
        if ( v17 < 0 )
          goto LABEL_11;
      }
      Length = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length >= 4u && *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) == 13 )
      {
        *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) = 0;
        Length -= 4;
        UnicodeString.Length = Length;
      }
      v13 = Length;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x20207050u);
      v15 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Buffer, (unsigned int)v13);
        *a3 = v15;
        v15[v13 >> 1] = 0;
        DriverNameFromKeyNode = 0;
        goto LABEL_11;
      }
      goto LABEL_14;
    }
    DriverNameFromKeyNode = -1073741823;
  }
LABEL_11:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v6 )
    HalPutDmaAdapter(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
