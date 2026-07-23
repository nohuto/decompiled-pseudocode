/*
 * XREFs of _RtlGetSetBootStatusData@24 @ 0x4B350A70
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpGetSetBootStatusData@24 @ 0x4B350EC6 (_RtlpGetSetBootStatusData@24.c)
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
  unsigned int v7; // ecx
  char v8; // al
  unsigned int v9; // edx
  unsigned int v10; // edx
  char v11; // [esp+13h] [ebp-BDh] BYREF
  int v12; // [esp+14h] [ebp-BCh] BYREF
  _BYTE v13[180]; // [esp+18h] [ebp-B8h] BYREF

  if ( Read )
    return RtlpGetSetBootStatusData(FileHandle, DataClass, Buffer, BufferSize, (int)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 15, &v11, 1, 0);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, DataClass, v13, 176, 0);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, DataClass, Buffer, BufferSize, (int)&v12);
      if ( result >= 0 )
      {
        v7 = v12;
        if ( ReturnLength )
          *ReturnLength = v12;
        v8 = v11;
        v9 = 0;
        if ( v7 )
        {
          do
            v8 += v13[v9++];
          while ( v9 < v7 );
          v11 = v8;
        }
        v10 = 0;
        if ( v7 )
        {
          do
            v8 -= *((_BYTE *)Buffer + v10++);
          while ( v10 < v7 );
          v11 = v8;
        }
        return RtlpGetSetBootStatusData(FileHandle, 15, &v11, 1, 0);
      }
    }
  }
  return result;
}
