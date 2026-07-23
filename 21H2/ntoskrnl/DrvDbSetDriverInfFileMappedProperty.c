/*
 * XREFs of DrvDbSetDriverInfFileMappedProperty @ 0x14072E16C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140630540 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x14062FE24 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14072E80C (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverInfFileMappedProperty(
        int a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  int v8; // ebx
  __int64 v11; // rcx
  __int64 (**i)[3]; // r8
  __int64 *v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (**v16)[3]; // rsi
  unsigned int v17; // edi
  int v18; // ebx
  __int64 v20; // rax
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v8 = *(_DWORD *)(a4 + 16);
  if ( v8 == 2 )
  {
    v20 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v20 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v20 )
      return (unsigned int)-1073741790;
  }
  v11 = 0LL;
  for ( i = &off_140004010; ; i += 5 )
  {
    v13 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v8 )
    {
      v14 = *v13 - *(_QWORD *)a4;
      if ( *v13 == *(_QWORD *)a4 )
        v14 = v13[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
        break;
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= 4 )
      return (unsigned int)-1073741802;
  }
  v15 = 5 * v11;
  v16 = &off_140004010 + v15;
  if ( !v16 )
    return (unsigned int)-1073741802;
  v17 = a5;
  if ( a5 != *((_DWORD *)v16 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v18 = DrvDbOpenDriverInfFileRegKey(a1, a2, 2, 0, (__int64)&Handle, 0LL);
    if ( v18 < 0 )
      goto LABEL_13;
    a3 = Handle;
  }
  v18 = DrvDbSetRegValueMappedProperty(v15, a3, v16, v17, a6, a7);
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v18;
}
