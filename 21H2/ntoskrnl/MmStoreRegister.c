/*
 * XREFs of MmStoreRegister @ 0x14084A7D0
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     MiInsertPageFileInList @ 0x14084B418 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 *     MmStoreCheckPagefiles @ 0x14084BD8C (MmStoreCheckPagefiles.c)
 *     MiDeletePagefile @ 0x14096F074 (MiDeletePagefile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmStoreRegister(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *Pool; // rbx
  struct _KEVENT *v7; // r12
  _DWORD *v8; // r14
  int SystemThread; // edi
  RTL_BITMAP *v10; // rax
  RTL_BITMAP *v11; // rsi
  unsigned __int64 v12; // r9
  __int64 *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 Pagefile; // rax
  _WORD *v19; // rdi
  int inserted; // ebx
  int v21; // eax
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF

  Handle = 0LL;
  dword_140C5541C = 1;
  if ( !(unsigned int)MmStoreCheckPagefiles() )
    return 3221225799LL;
  Pool = (char *)MiAllocatePool(64, 0x28uLL, 0x70546D4Du);
  if ( !Pool )
    return 3221225626LL;
  v7 = (struct _KEVENT *)(Pool + 8);
  *(_QWORD *)Pool = &MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(Pool + 8), NotificationEvent, 0);
  v8 = Pool + 32;
  *((_DWORD *)Pool + 8) = 0;
  SystemThread = PsCreateSystemThreadEx(
                   (int)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)MiStoreEvictThread,
                   (__int64)Pool,
                   0LL,
                   0LL);
  if ( SystemThread >= 0 )
  {
    v10 = (RTL_BITMAP *)MiAllocatePool(
                          64,
                          8 * (((unsigned int)dword_140D051CC >> 6) + ((dword_140D051CC & 0x3F) != 0) + 2),
                          0x20206D4Du);
    v11 = v10;
    if ( v10 )
    {
      v10->SizeOfBitMap = dword_140D051CC;
      v10->Buffer = &v10[1].SizeOfBitMap;
      RtlClearAllBits(v10);
      v12 = 0LL;
      if ( Count )
      {
        v13 = (__int64 *)&unk_140C590E0;
        v14 = Count;
        do
        {
          v15 = *v13;
          v16 = v12;
          ++v13;
          v12 = *(_QWORD *)(v15 + 8);
          if ( v16 >= v12 )
            v12 = v16;
          --v14;
        }
        while ( v14 );
      }
      v17 = qword_140C590D0 + v12;
      if ( v17 > 0xFFFFFFF )
        v17 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile((unsigned int)&MiSystemPartition, 0, 0, v17, v17, 0LL, 0, 2);
      v19 = (_WORD *)Pagefile;
      if ( Pagefile )
      {
        inserted = MiInsertPageFileInList(Pagefile);
        if ( inserted >= 0 )
        {
          Object = 0LL;
          qword_140C55488 = (__int64)v11;
          dword_140C5541C = 254;
          v21 = v19[102] & 0xF;
          qword_140C55490 = a3;
          dword_140C55414 = v21;
          ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          inserted = 0;
          qword_140C55438 = (__int64)Object;
          dword_140C55498 = a4;
          dword_140C55418 = 1;
LABEL_15:
          KeSetEvent(v7, 0, 0);
          ObCloseHandle(Handle, 0);
          return (unsigned int)inserted;
        }
      }
      else
      {
        inserted = -1073741670;
      }
      *v8 = 1;
      ExFreePoolWithTag(v11, 0);
      if ( v19 )
        MiDeletePagefile(v19);
      goto LABEL_15;
    }
    *v8 = 1;
    inserted = -1073741670;
    goto LABEL_15;
  }
  ExFreePoolWithTag(Pool, 0);
  return (unsigned int)SystemThread;
}
