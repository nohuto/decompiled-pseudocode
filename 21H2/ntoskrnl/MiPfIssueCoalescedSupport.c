/*
 * XREFs of MiPfIssueCoalescedSupport @ 0x1405394E8
 * Callers:
 *     MiPfIssueCoalesceCandidates @ 0x140539410 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInitializeInPageSupport @ 0x1402E3830 (MiInitializeInPageSupport.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

char *__fastcall MiPfIssueCoalescedSupport(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char *result; // rax
  char *v6; // rsi
  char *v7; // r13
  int v8; // r12d
  _QWORD *v9; // r14
  __int64 v10; // rax
  PVOID *v11; // rcx
  struct _FILE_OBJECT *v12; // rax
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  size_t v15; // rdi
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp+20h]

  v2 = 0LL;
  v3 = a2;
  v18 = 0LL;
  result = (char *)MiAllocatePool(64, 8 * (a2 >> 12) + 320, 0x7343694Du);
  v6 = result;
  if ( result )
  {
    MiInitializeInPageSupport((ULONG_PTR)result, 0);
    *((_DWORD *)v6 + 48) |= 0x800000u;
    *((_QWORD *)v6 + 34) = 0LL;
    v7 = v6 + 320;
    *((_WORD *)v6 + 141) = 0;
    v8 = 0;
    *((_WORD *)v6 + 140) = 8 * (((unsigned __int64)(v3 + 4095) >> 12) + 6);
    *((_QWORD *)v6 + 38) = 0LL;
    *((_DWORD *)v6 + 79) = 0;
    *((_DWORD *)v6 + 78) = v3;
    *((_WORD *)v6 + 141) |= 0x4042u;
    FileObject = (PFILE_OBJECT)MmBadPointer;
    while ( 1 )
    {
      v9 = (_QWORD *)*a1;
      if ( (_QWORD *)*a1 == a1 )
        break;
      if ( (_QWORD *)v9[1] != a1
        || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9)
        || (*a1 = v10, *(_QWORD *)(v10 + 8) = a1, v11 = (PVOID *)*((_QWORD *)v6 + 3), *v11 != v6 + 16) )
      {
        __fastfail(3u);
      }
      v9[1] = v11;
      *v9 = v6 + 16;
      *v11 = v9;
      *((_QWORD *)v6 + 3) = v9;
      if ( (*((_WORD *)v9 + 141) & 0x4000) == 0 )
        *((_WORD *)v6 + 141) &= ~0x4000u;
      if ( v8 )
      {
        if ( v2 != v9[12] )
        {
          *((_WORD *)v6 + 141) &= ~0x4000u;
          v13 = *((_DWORD *)v9 + 24) - v2;
          v14 = (unsigned __int64)(8 * (v13 >> 12)) >> 3;
          memset64(v7, qword_140C4EDB8, v14);
          v7 += 8 * v14;
          v2 += v13;
          v8 += v13;
        }
      }
      else
      {
        v2 = v9[12];
        v12 = (struct _FILE_OBJECT *)v9[25];
        v18 = v2;
        FileObject = v12;
      }
      v15 = (unsigned int)(8 * (*((_DWORD *)v9 + 46) >> 12));
      memmove(v7, v9 + 40, v15);
      v16 = *((unsigned int *)v9 + 46);
      v2 += v16;
      v8 += v16;
      v7 += 8 * (v15 >> 3);
    }
    v17 = IoPageReadEx(FileObject, (__int64)(v6 + 272), &v18, (__int64)(v6 + 32), (__int64)(v6 + 80), 6, 0LL);
    if ( v17 < 0 )
    {
      *((_QWORD *)v6 + 11) = 0LL;
      *((_DWORD *)v6 + 20) = v17;
      KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
    }
    return v6;
  }
  return result;
}
