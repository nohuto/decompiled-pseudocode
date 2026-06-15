/*
 * XREFs of sub_180006EA0 @ 0x180006EA0
 * Callers:
 *     sub_18000ABD0 @ 0x18000ABD0 (sub_18000ABD0.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180006EA0(__int64 a1, DWORD a2, __int64 a3, float a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // ecx
  HANDLE ProcessHeap; // rax
  float *v9; // rax
  int v10; // edx
  int v11; // ecx
  LPVOID *v12; // rbx
  int v13; // edi
  __int64 v14; // r9
  LPVOID *v15; // rsi
  LPVOID *v16; // rbp
  LPVOID *v17; // rbx
  int v18; // edx
  HANDLE v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  HANDLE v22; // rcx
  signed int LastError; // eax
  __int64 v25; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( !(unsigned int)sub_18002880C(a2) )
  {
    if ( a4 <= -6.0 )
    {
      if ( a4 <= -18.0 )
      {
        v7 = 0;
        LOBYTE(v7) = a4 > -96.0;
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 3;
    }
    *(_DWORD *)(v25 + 320) = v7;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  ProcessHeap = GetProcessHeap();
  v9 = (float *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v12 = (LPVOID *)v9;
  if ( v9 )
  {
    v9[3] = a4;
    *(_QWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 2) = a2;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = v12 == 0LL ? 0x8007000E : 0;
  if ( v12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(a3 + 2 * v14) );
    v13 = sub_180018844(v11, v10, a3, v14);
  }
  v15 = 0LL;
  v16 = v12;
  if ( v13 < 0 )
  {
    v15 = v12;
    v16 = 0LL;
  }
  if ( v15 )
  {
    CoTaskMemFree(*v15);
    *v15 = 0LL;
    sub_180039D98(v15);
  }
  v17 = v16;
  if ( v13 < 0 )
  {
    v18 = 444;
LABEL_39:
    sub_180003AB0(
      retaddr,
      v18,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v13);
    goto LABEL_41;
  }
  v19 = GetProcessHeap();
  v20 = HeapAlloc(v19, 0, 0x18uLL);
  v21 = v20;
  if ( v20 )
  {
    *v20 = off_18003E5D8;
    _InterlockedIncrement((volatile signed __int32 *)(qword_18004FE78 + 8));
    v17 = v16;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v21 )
  {
    v22 = CompletionPort;
    v21[1] = sub_18001FF60;
    v21[2] = v16;
    if ( PostQueuedCompletionStatus(v22, 0, (ULONG_PTR)v21, 0LL) )
    {
      v13 = 0;
    }
    else
    {
      LastError = GetLastError();
      v13 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v13 = LastError;
    }
    if ( v13 >= 0 )
      v21 = 0LL;
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v21 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v21 + 8LL))(v21, 1LL);
  if ( v13 < 0 )
  {
    v18 = 446;
    goto LABEL_39;
  }
  v17 = 0LL;
  v13 = 0;
LABEL_41:
  if ( v17 )
  {
    CoTaskMemFree(*v17);
    *v17 = 0LL;
    sub_180039D98(v17);
  }
  return (unsigned int)v13;
}
