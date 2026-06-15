/*
 * XREFs of sub_180028B58 @ 0x180028B58
 * Callers:
 *     TS_RegisterAudioProtocolNotification @ 0x18002AD60 (TS_RegisterAudioProtocolNotification.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028B58(DWORD SessionId, int a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  void *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rbx
  HANDLE v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 4uLL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = a2;
    v10 = sub_18002880C(SessionId, 1, 0LL, &v17);
    if ( v10 )
      goto LABEL_12;
    v11 = v17;
    v12 = GetProcessHeap();
    v13 = HeapAlloc(v12, 0, 0x18uLL);
    v14 = v13;
    if ( v13 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      v13[2] = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      v14[2] = v9;
      *v14 = *(_QWORD *)(v11 + 16);
      v14[1] = 0LL;
      v15 = *(_QWORD *)(v11 + 16);
      if ( v15 )
        *(_QWORD *)(v15 + 8) = v14;
      else
        *(_QWORD *)(v11 + 24) = v14;
      *(_QWORD *)(v11 + 16) = v14;
      ++*(_DWORD *)(v11 + 32);
      *a3 = v9;
      v9 = 0LL;
      v10 = 0;
      goto LABEL_12;
    }
  }
  v10 = 14;
LABEL_12:
  sub_180039D98(v9);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
