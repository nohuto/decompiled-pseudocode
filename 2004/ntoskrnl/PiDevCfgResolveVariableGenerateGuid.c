/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x1408A67B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     RtlUpcaseUnicodeString @ 0x1406B7FF0 (RtlUpcaseUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v4; // ebx
  unsigned int v5; // edi
  PVOID PoolWithTag; // rax
  PVOID v7; // rsi
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-20h] BYREF

  Uuid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v4 = ExUuidCreate(&Uuid);
  if ( v4 >= 0 )
  {
    v4 = RtlStringFromGUIDEx(&Uuid, &GuidString, 1u);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&GuidString, &GuidString, 0);
      if ( v4 >= 0 )
      {
        v5 = GuidString.Length + 2;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x63647050u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, GuidString.Buffer, v5);
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
  RtlFreeAnsiString(&GuidString);
  return (unsigned int)v4;
}
