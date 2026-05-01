/*
 * XREFs of sub_18002A490 @ 0x18002A490
 * Callers:
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 *     sub_1800235DC @ 0x1800235DC (sub_1800235DC.c)
 *     sub_18002A048 @ 0x18002A048 (sub_18002A048.c)
 *     sub_18002A350 @ 0x18002A350 (sub_18002A350.c)
 *     sub_18006AE28 @ 0x18006AE28 (sub_18006AE28.c)
 *     sub_18006B8A0 @ 0x18006B8A0 (sub_18006B8A0.c)
 *     sub_180070AA0 @ 0x180070AA0 (sub_180070AA0.c)
 *     sub_18007CF6C @ 0x18007CF6C (sub_18007CF6C.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002A490(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 (__fastcall *a4)(__int64, HANDLE, _QWORD, __int64),
        __int64 a5)
{
  unsigned int v6; // esi
  __int64 (__fastcall *v7)(__int64, HANDLE, _QWORD, __int64); // r13
  unsigned int *v8; // r12
  unsigned int *Heap; // rdi
  __int64 v10; // rdx
  __int64 v11; // r10
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // r13d
  PVOID v15; // rax
  HANDLE *v16; // rsi
  PVOID v17; // rax
  _DWORD *v18; // r15
  __int64 v19; // rdi
  unsigned int *v20; // rcx
  void *v21; // rax
  NTSTATUS v22; // eax
  int v23; // r12d
  HANDLE *v24; // r14
  PVOID ProcessHeap; // rcx
  unsigned int *v27; // rax
  PVOID P[2]; // [rsp+40h] [rbp-61h]
  unsigned int v29; // [rsp+50h] [rbp-51h]
  unsigned int v30; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-45h]
  void *ProcessHandle; // [rsp+60h] [rbp-41h] BYREF
  int v33; // [rsp+68h] [rbp-39h]
  unsigned int *v34; // [rsp+70h] [rbp-31h]
  struct _CLIENT_ID ClientId; // [rsp+78h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-19h] BYREF
  int DesiredAccessa; // [rsp+108h] [rbp+67h]

  v30 = 1;
  v6 = a2;
  v29 = 0;
  v7 = a4;
  v8 = 0LL;
  *(_OWORD *)P = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v19 = 0LL;
    v13 = -1073741801;
    v18 = 0LL;
    v16 = 0LL;
    goto LABEL_20;
  }
  v10 = a1 + 88;
  v11 = a1 + 552;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) + 72LL))(
            v11,
            *(unsigned int *)(a1 + 620),
            v10,
            *(unsigned int *)(a1 + 624),
            *(_QWORD *)(a1 + 32),
            Heap,
            &v30);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v30;
      v8 = Heap;
      goto LABEL_5;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v12 != -2147483643 )
      break;
    RtlFreeHeap(ProcessHeap, 0, Heap);
    v27 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v30);
    v10 = a1 + 88;
    Heap = v27;
    v11 = a1 + 552;
    if ( !v27 )
    {
      v14 = a2;
      v13 = -1073741801;
      goto LABEL_5;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
  v14 = a2;
LABEL_5:
  if ( v13 < 0 )
  {
    v16 = 0LL;
    goto LABEL_48;
  }
  if ( !v14 )
  {
    v18 = 0LL;
    goto LABEL_10;
  }
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v14);
  P[0] = v15;
  v16 = (HANDLE *)v15;
  if ( !v15 )
  {
    v13 = -1073741801;
LABEL_48:
    v18 = 0LL;
    goto LABEL_49;
  }
  memset(v15, 0, 8 * v14);
  v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v14);
  P[1] = v17;
  v18 = v17;
  if ( v17 )
  {
    memset(v17, 0, 4 * v14);
    v6 = a2;
LABEL_10:
    v19 = 0LL;
    DesiredAccessa = v6 | 0x1000;
    v16 = (HANDLE *)P[0];
    ProcessHandle = 0LL;
    v31 = 0;
    if ( v14 )
    {
      v20 = v8;
      v34 = v8;
      do
      {
        v21 = (void *)*v20;
        ClientId.UniqueThread = 0LL;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        v33 = (int)v21;
        ClientId.UniqueProcess = v21;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Length = 48;
        v22 = NtOpenProcess(&ProcessHandle, DesiredAccessa, &ObjectAttributes, &ClientId);
        v13 = v22;
        if ( v22 < 0 )
        {
          if ( (a3 & 1) == 0 && v22 != -1073741813 )
            goto LABEL_17;
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) + 80LL))(
                    a1 + 552,
                    *(unsigned int *)(a1 + 620),
                    a1 + 88,
                    *(unsigned int *)(a1 + 624),
                    *(_QWORD *)(a1 + 32),
                    ProcessHandle) )
        {
          *((_QWORD *)P[0] + v19) = ProcessHandle;
          v18[v19] = v33;
          v19 = (unsigned int)(v19 + 1);
          v29 = v19;
        }
        else
        {
          NtClose(ProcessHandle);
        }
        v20 = v34 + 2;
        ++v31;
        v34 += 2;
      }
      while ( v31 < v14 );
    }
    v13 = 0;
    goto LABEL_17;
  }
  v16 = (HANDLE *)P[0];
  v13 = -1073741801;
LABEL_49:
  v19 = 0LL;
LABEL_17:
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v19 = v29;
    v18 = P[1];
    v16 = (HANDLE *)P[0];
  }
  v7 = a4;
LABEL_20:
  if ( v13 >= 0 )
  {
    v23 = 0;
    if ( (_DWORD)v19 )
    {
      while ( 1 )
      {
        v13 = v7(a1, v16[v23], (unsigned int)v18[v23], a5);
        if ( v13 < 0 && (a3 & 1) == 0 )
          break;
        if ( ++v23 >= (unsigned int)v19 )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      v13 = 0;
    }
  }
  if ( (_DWORD)v19 )
  {
    v24 = v16;
    do
    {
      NtClose(*v24++);
      --v19;
    }
    while ( v19 );
  }
  if ( v16 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
    v18 = P[1];
  }
  if ( v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  return (unsigned int)v13;
}
