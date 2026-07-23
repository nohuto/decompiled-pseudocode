/*
 * XREFs of DrvDbGetDriverInfFileMappedProperty @ 0x14062FE6C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140630540 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x14062FE24 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406303EC (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14097E040 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r14
  _DWORD *v10; // rdi
  int v11; // ebp
  int v12; // r15d
  int v13; // ebx
  __int64 v14; // rdx
  __int64 (**i)[3]; // r8
  __int64 *v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (**v19)[3]; // rsi
  int RegValueMappedProperty; // ebx
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned int v24; // [rsp+20h] [rbp-38h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = a2;
  Handle = 0LL;
  v12 = a1;
  *a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 != 2 )
    goto LABEL_2;
  v22 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v22 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( v22 )
  {
LABEL_2:
    v14 = 0LL;
    for ( i = &off_140004010; ; i += 5 )
    {
      v16 = (__int64 *)*i;
      if ( LODWORD((**i)[2]) == v13 )
      {
        v17 = *v16 - *(_QWORD *)a4;
        if ( *v16 == *(_QWORD *)a4 )
          v17 = v16[1] - *(_QWORD *)(a4 + 8);
        if ( !v17 )
          break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= 4 )
        return (unsigned int)-1073741802;
    }
    v18 = 5 * v14;
    v19 = &off_140004010 + 5 * v14;
    if ( !v19 )
      return (unsigned int)-1073741802;
    if ( !a3 )
    {
      RegValueMappedProperty = DrvDbOpenDriverInfFileRegKey(v12, v11, 1, 0, (__int64)&Handle, 0LL);
      if ( RegValueMappedProperty < 0 )
        goto LABEL_12;
      a3 = Handle;
    }
    RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v18, a3, v19, v8, a6, a7, v10);
  }
  else
  {
    v23 = a6;
    v24 = a7 >> 1;
    *v8 = 18;
    RegValueMappedProperty = DrvDbGetObjectDatabaseNodeName(a1, 3LL, a2, v23, v24, v10);
    if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
      *v10 *= 2;
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
