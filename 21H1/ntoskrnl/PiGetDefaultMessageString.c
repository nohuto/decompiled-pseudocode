/*
 * XREFs of PiGetDefaultMessageString @ 0x1407562E4
 * Callers:
 *     PiNormalizeDeviceText @ 0x140755F00 (PiNormalizeDeviceText.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlInitUTF8String @ 0x14057F9D0 (RtlInitUTF8String.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140690CB0 (RtlCreateUnicodeString.c)
 *     RtlFindMessage @ 0x1406FC510 (RtlFindMessage.c)
 *     IopReferenceDriverObjectByName @ 0x140727EC8 (IopReferenceDriverObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     RtlUTF8StringToUnicodeString @ 0x140915120 (RtlUTF8StringToUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, unsigned int a2, _QWORD *a3)
{
  struct _DMA_ADAPTER *v6; // rdi
  int DriverNameFromKeyNode; // ebx
  PVOID v8; // rax
  unsigned __int16 v9; // ax
  const WCHAR *v10; // rdx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v13; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v15; // r14
  __int64 v17; // r8
  NTSTATUS v18; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 *v22; // [rsp+A8h] [rbp+48h] BYREF

  v22 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v8 = IopReferenceDriverObjectByName(&DestinationString);
    v6 = (struct _DMA_ADAPTER *)v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(*((_QWORD *)v8 + 3), 0xBu, 0, a2, &v22);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_11;
      v9 = v22[1];
      v10 = v22 + 2;
      if ( (v9 & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, v10) )
        {
LABEL_14:
          DriverNameFromKeyNode = -1073741670;
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v9 & 2) != 0 )
        {
          SourceString = 0LL;
          RtlInitUTF8String(&SourceString, (const char *)v10);
          LOBYTE(v17) = 1;
          v18 = RtlUTF8StringToUnicodeString(&UnicodeString, &SourceString, v17);
        }
        else
        {
          RtlInitAnsiString(&SourceString, (PCSZ)v10);
          v18 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
        }
        DriverNameFromKeyNode = v18;
        if ( v18 < 0 )
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
