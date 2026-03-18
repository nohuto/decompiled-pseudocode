/*
 * XREFs of MiReadImageHeaders @ 0x1406FE9CC
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MiPageRead @ 0x140263414 (MiPageRead.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     MiIsRetryIoStatus @ 0x1402F8164 (MiIsRetryIoStatus.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiCopyFromDirectMapExtent @ 0x1408CC97C (MiCopyFromDirectMapExtent.c)
 */

__int64 __fastcall MiReadImageHeaders(
        struct _FILE_OBJECT *a1,
        ULONG_PTR a2,
        struct _MDL *a3,
        struct _IO_STATUS_BLOCK *a4)
{
  __int64 v5; // r10
  unsigned __int64 Process; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  int Status; // ebx
  ULONG_PTR Information; // rcx
  struct _MDL *i; // rdi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  char *MappedSystemVa; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r10
  size_t v20; // r8
  char *v21; // rdx
  unsigned __int64 v22; // r9
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF

  v5 = (__int64)a3->MappedSystemVa & 0xFFF;
  Process = (unsigned __int64)a3->Process;
  v7 = a3->ByteCount + 4095LL;
  a4->Information = 0LL;
  v8 = (unsigned __int64)(v5 + v7) >> 12;
  v24 = Process << 12;
  if ( a2 )
  {
    Status = MiCopyFromDirectMapExtent(a2);
  }
  else
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    Status = MiPageRead(a1, a3, &v24, &Event, a4, 2, 0LL);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      Status = a4->Status;
    }
  }
  if ( Status < 0 )
  {
    dword_140C4CA18 = 32;
    if ( !MiIsRetryIoStatus(Status, 0LL) && Status != -1073741740 && Status != -1073741209 )
      return (unsigned int)-1073741792;
  }
  else
  {
    Information = a4->Information;
    if ( Information != v8 << 12 )
      memset((char *)a3->MappedSystemVa + Information, 0, (v8 << 12) - Information);
    for ( i = a3->Next; i; i = i->Next )
    {
      v15 = (unsigned __int64)i->Process;
      v16 = (((__int64)i->MappedSystemVa & 0xFFF) + (unsigned __int64)i->ByteCount + 4095) >> 12;
      if ( Process < v16 + v15 && v8 + Process > v15 )
      {
        MappedSystemVa = (char *)a3->MappedSystemVa;
        if ( v15 > Process )
        {
          v22 = v15 - Process;
          v21 = (char *)i->MappedSystemVa;
          if ( v8 - v22 <= v16 )
            v16 = v8 - v22;
          MappedSystemVa += 4096 * v22;
          v20 = v16 << 12;
        }
        else
        {
          v18 = v8;
          v19 = v16 - (Process - v15);
          if ( v19 <= v8 )
            v18 = v19;
          v20 = v18 << 12;
          v21 = (char *)i->MappedSystemVa + 4096 * (Process - v15);
        }
        memmove(MappedSystemVa, v21, v20);
      }
    }
  }
  return (unsigned int)Status;
}
