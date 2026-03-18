/*
 * XREFs of PiGetDefaultMessageString @ 0x1408523B4
 * Callers:
 *     PiNormalizeDeviceText @ 0x1406E1D34 (PiNormalizeDeviceText.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlInitUTF8String @ 0x1405E4060 (RtlInitUTF8String.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x14067B694 (IopGetDriverNameFromKeyNode.c)
 *     IopReferenceDriverObjectByName @ 0x14067BCBC (IopReferenceDriverObjectByName.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BEC80 (RtlUTF8StringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 *v6; // rdi
  int DriverNameFromKeyNode; // ebx
  unsigned __int64 *v8; // rax
  unsigned __int16 v9; // ax
  const WCHAR *v10; // rdx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v13; // rbx
  _WORD *Pool2; // rax
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
    v8 = (unsigned __int64 *)IopReferenceDriverObjectByName(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(v8[3], 0xBu, 0, a2, &v22);
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
      Pool2 = (_WORD *)ExAllocatePool2(256LL, Length + 2LL, 538996816LL);
      v15 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Buffer, (unsigned int)v13);
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
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
