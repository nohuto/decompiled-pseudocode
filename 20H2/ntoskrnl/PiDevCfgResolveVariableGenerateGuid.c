/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x1408AC2E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x140682390 (RtlUpcaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140710ED0 (ExUuidCreate.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  PVOID PoolWithTag; // rax
  PVOID v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-20h] BYREF

  Uuid = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = ExUuidCreate(&Uuid);
  if ( v4 >= 0 )
  {
    v4 = RtlStringFromGUIDEx(&Uuid.Data1, (__int64)&DestinationString, 1);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( v4 >= 0 )
      {
        v5 = DestinationString.Length + 2;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x63647050u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, DestinationString.Buffer, v5);
          *(_DWORD *)(a3 + 32) = 1;
          *(_DWORD *)(a3 + 36) = v5;
          *(_QWORD *)(a3 + 40) = v7;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v4;
}
