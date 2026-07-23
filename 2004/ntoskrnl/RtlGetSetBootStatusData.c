/*
 * XREFs of RtlGetSetBootStatusData @ 0x140777DF0
 * Callers:
 *     PopBootStatSet @ 0x14076CA58 (PopBootStatSet.c)
 *     PopBootStatGet @ 0x1407AEDF0 (PopBootStatGet.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlpGetSetBootStatusData @ 0x140777F60 (RtlpGetSetBootStatusData.c)
 */

NTSTATUS __cdecl RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN Read,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // [rsp+34h] [rbp-A5h] BYREF
  _BYTE v17[176]; // [rsp+40h] [rbp-99h] BYREF

  LODWORD(v16) = 0;
  memset(v17, 0, sizeof(v17));
  if ( Read )
    return RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 176, 0LL);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)&v16);
      if ( result >= 0 )
      {
        v11 = (unsigned int)v16;
        if ( ReturnLength )
          *ReturnLength = v16;
        if ( (_DWORD)v11 )
        {
          v12 = v11;
          v13 = v17;
          v14 = v11;
          v15 = 0;
          do
          {
            v15 += *v13++;
            --v14;
          }
          while ( v14 );
          do
          {
            v15 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v12;
          }
          while ( v12 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
