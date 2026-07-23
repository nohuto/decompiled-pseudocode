/*
 * XREFs of MmStoreRegister @ 0x1407B6890
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MiInsertPageFileInList @ 0x1407B74F0 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1407B7770 (MiCreatePagefile.c)
 *     MmStoreCheckPagefiles @ 0x1407B7C20 (MmStoreCheckPagefiles.c)
 *     MiDeletePagefile @ 0x1408D05EC (MiDeletePagefile.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmStoreRegister(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *Pool; // rax
  __int64 v7; // rdi
  int SystemThread; // ebx
  _RTL_BITMAP *v9; // rax
  _RTL_BITMAP *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  __int64 Pagefile; // rax
  _WORD *v19; // rbp
  int v20; // eax
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF

  Handle = 0LL;
  dword_140C5124C = 1;
  if ( !(unsigned int)MmStoreCheckPagefiles() )
    return 3221225799LL;
  Pool = (char *)MiAllocatePool(64, 0x28uLL, 0x70546D4Du);
  v7 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)Pool = &MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(Pool + 8), NotificationEvent, 0);
  *(_DWORD *)(v7 + 32) = 0;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)MiStoreEvictThread,
                   v7,
                   0LL,
                   0LL);
  if ( SystemThread < 0 )
  {
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  else
  {
    v9 = (_RTL_BITMAP *)MiAllocatePool(
                          64,
                          8 * (((unsigned int)dword_140CFB18C >> 6) + ((dword_140CFB18C & 0x3F) != 0) + 2),
                          0x20206D4Du);
    v10 = v9;
    if ( v9 )
    {
      v9->SizeOfBitMap = dword_140CFB18C;
      v9->Buffer = &v9[1].SizeOfBitMap;
      RtlClearAllBits(v9);
      v11 = 0LL;
      if ( Count )
      {
        v12 = (__int64 *)&unk_140C528E0;
        v13 = Count;
        do
        {
          v14 = *v12;
          v15 = v11;
          ++v12;
          v11 = *(_QWORD *)(v14 + 8);
          if ( v15 >= v11 )
            v11 = v15;
          --v13;
        }
        while ( v13 );
      }
      v16 = qword_140C528D0 + v11;
      v17 = 0xFFFFFFFLL;
      if ( v16 <= 0xFFFFFFF )
        v17 = v16;
      Pagefile = MiCreatePagefile((unsigned int)&MiSystemPartition, 0, 0, v17, v17, 0LL, 0, 2);
      v19 = (_WORD *)Pagefile;
      if ( Pagefile )
      {
        SystemThread = MiInsertPageFileInList(Pagefile);
        if ( SystemThread < 0 )
        {
          *(_DWORD *)(v7 + 32) = 1;
        }
        else
        {
          Object = 0LL;
          qword_140C512B8 = (__int64)v10;
          dword_140C5124C = 254;
          v20 = v19[102] & 0xF;
          qword_140C512C0 = a3;
          dword_140C51244 = v20;
          ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v10 = 0LL;
          v19 = 0LL;
          qword_140C51268 = (__int64)Object;
          dword_140C512C8 = a4;
          SystemThread = 0;
          dword_140C51248 = 1;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 32) = 1;
        SystemThread = -1073741670;
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      if ( v19 )
        MiDeletePagefile(v19);
    }
    else
    {
      *(_DWORD *)(v7 + 32) = 1;
      SystemThread = -1073741670;
    }
    KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
    ObCloseHandle(Handle, 0);
  }
  return (unsigned int)SystemThread;
}
