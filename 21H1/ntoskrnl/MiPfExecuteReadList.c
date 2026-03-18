/*
 * XREFs of MiPfExecuteReadList @ 0x14063F024
 * Callers:
 *     MmPrefetchPagesEx @ 0x14063ECA8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14063EE9C (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406CA620 (MiPrefetchControlArea.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiReferenceInPageFile @ 0x14028249C (MiReferenceInPageFile.c)
 *     MiPageRead @ 0x1402BC444 (MiPageRead.c)
 *     SmPageRead @ 0x14031D378 (SmPageRead.c)
 */

int __fastcall MiPfExecuteReadList(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r12d
  char v9; // r15
  int v11; // edi
  struct _MDL *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v4 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 120;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = a2 & 2;
  v9 = 0;
  if ( v7 != a1 + 120 )
  {
    v11 = a2 & 1;
    do
    {
      v12 = *(struct _MDL **)(v7 + 256);
      v12->MdlFlags |= 0x42u;
      *(_DWORD *)(v7 + 184) = v12->ByteCount;
      v13 = MiReferenceInPageFile(v7, a3);
      if ( v13 )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = *(_QWORD *)(v7 + 200);
        v13 = *(_QWORD *)(v14 + 56);
      }
      *(_QWORD *)(v7 + 200) = v13;
      *(_QWORD *)(v7 + 168) = 0LL;
      *(_QWORD *)(v7 + 232) = *(_QWORD *)(v7 + 240);
      if ( v11 )
      {
        v9 = BYTE4(CurrentThread[1].Queue);
        BYTE4(CurrentThread[1].Queue) = 1;
      }
      if ( v14 && (*(_WORD *)(v14 + 204) & 0x800) != 0 )
      {
        LODWORD(v4) = 0;
      }
      else if ( (*(_DWORD *)(v7 + 192) & 0x100) != 0 )
      {
        LODWORD(v4) = SmPageRead(
                        (union _MM_STORE_KEY *)(v7 + 96),
                        (v7 + 272) | ((-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3));
      }
      else
      {
        LODWORD(v4) = MiPageRead(
                        *(struct _FILE_OBJECT **)(v7 + 200),
                        v12,
                        (_QWORD *)(v7 + 96),
                        (struct _KEVENT *)(v7 + 32),
                        (struct _IO_STATUS_BLOCK *)(v7 + 80),
                        6,
                        a4);
      }
      if ( v11 )
        BYTE4(CurrentThread[1].Queue) = v9;
      if ( (int)v4 < 0 )
      {
        *(_QWORD *)(v7 + 88) = 0LL;
        *(_DWORD *)(v7 + 80) = (_DWORD)v4;
        LODWORD(v4) = KeSetEvent((PRKEVENT)(v7 + 32), 0, 0);
      }
      v7 = *(_QWORD *)v7;
    }
    while ( v7 != v6 );
  }
  return (int)v4;
}
