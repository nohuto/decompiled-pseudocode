/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0083920
 * Callers:
 *     HmgAlloc @ 0x1C0081830 (HmgAlloc.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0083BD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B200 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(__int64 a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  struct OBJECT *v7; // r15
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  GdiHandleEntryTable *v12; // r9
  __int64 v13; // r14
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // ecx
  struct _KTHREAD *v21; // rax
  struct HOBJ__ *v22; // rdi
  GdiHandleManager *v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // r9
  struct HOBJ__ *result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v31; // rcx
  __int64 CurrentThreadProcess; // rax
  signed __int32 v33[18]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v34; // [rsp+58h] [rbp+10h]

  v4 = a4;
  v6 = a3;
  v7 = (struct OBJECT *)a1;
  v8 = a4;
  if ( a4 >= 0x10000 )
  {
    a1 = (__int64)gpHandleManager;
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      a1 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a4,
                                  1)
           + 13);
      if ( (_DWORD)a1 == HIWORD(v4) )
        v8 = (unsigned __int16)v4;
    }
    else
    {
      v8 = (unsigned __int16)a4;
    }
  }
  v9 = *((_QWORD *)gpHandleManager + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
  {
    v13 = 0LL;
  }
  else
  {
    v11 = ((v8 - v10) >> 16) + 1;
    if ( v8 < v10 )
      v11 = 0LL;
    v12 = *(GdiHandleEntryTable **)(v9 + 8 * v11 + 8);
    if ( (_DWORD)v11 )
      v8 += ((1 - (_DWORD)v11) << 16) - v10;
    v13 = 0LL;
    if ( v8 < *((_DWORD *)v12 + 5) || GdiHandleEntryTable::GetEntryObject(v12, v8) )
    {
      a1 = 3LL * v8;
      v13 = *(_QWORD *)v12 + 24LL * v8;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess(a1)
     || (CurrentProcess = PsGetCurrentProcess(v16, v15),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v31),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
    && (v18 = *ThreadWin32Thread) != 0
    && (v6 & 0x10) == 0 )
  {
    v19 = *(_QWORD *)(v18 + 72);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *(_DWORD *)(v13 + 8) & 1;
  *(_BYTE *)(v13 + 14) = a2;
  *(_BYTE *)(v13 + 15) = 0;
  *(_QWORD *)(v13 + 16) = 0LL;
  if ( (v6 & 8) == 0 )
  {
    if ( v19 )
      v20 |= *(_DWORD *)(v19 + 8) & 0xFFFFFFFE;
    else
      v20 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( v19 )
      v21 = *(struct _KTHREAD **)v19;
    else
      v21 = KeGetCurrentThread();
    *((_QWORD *)v7 + 2) = v21;
  }
  LOBYTE(v34) = a2;
  *((_WORD *)v7 + 6) = v6 & 1;
  *((_DWORD *)v7 + 2) = (v6 >> 1) & 1;
  HIBYTE(v34) = BYTE2(v4);
  *(_WORD *)(v13 + 12) = v34;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_DWORD *)(v13 + 8) = v20;
  if ( (v6 & 0x40) != 0 )
    *(_WORD *)(v13 + 12) = v34 | 0x80;
  if ( (v6 & 0x80u) != 0 )
    *(_BYTE *)(v13 + 15) |= 1u;
  *(_QWORD *)v13 = v4 | 0xFFFFFFFFFF000000uLL;
  v22 = (struct HOBJ__ *)((unsigned __int16)v4 | (unsigned __int64)(*(unsigned __int16 *)(v13 + 12) << 16));
  *(_QWORD *)v7 = v22;
  _InterlockedOr(v33, 0);
  v23 = gpHandleManager;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v24 = *((_QWORD *)v23 + 2);
  v25 = *(_DWORD *)(v24 + 2056);
  if ( v4 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
    return v22;
  v26 = ((v4 - v25) >> 16) + 1;
  if ( v4 < v25 )
    v26 = 0LL;
  v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
  if ( (_DWORD)v26 )
    v4 += ((1 - (_DWORD)v26) << 16) - v25;
  result = v22;
  if ( v4 < *(_DWORD *)(v27 + 20) )
    *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) = v7;
  return result;
}
