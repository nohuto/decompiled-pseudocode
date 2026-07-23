/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x1403BD71C
 * Callers:
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 *     CcPostWorkQueueRegular @ 0x140301D58 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140301F10 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403033B4 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380FDC (CcWaitForCurrentLazyWriterActivityInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1403004D4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140300520 (CcReferenceSharedCacheMapFileObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  char v7; // bl
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  char v13; // al
  __int64 v14; // rdx
  ULONG_PTR v15; // rax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int128 *v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)(a2 + 128);
  v17 = 0LL;
  v16 = 0LL;
  if ( a1 == v4 + 224 )
  {
    v7 = 1;
  }
  else if ( a1 == v4 + 288 )
  {
    v7 = 7;
  }
  else if ( a1 == v4 + 240 )
  {
    v7 = 2;
  }
  else if ( a1 == v4 + 256 )
  {
    v7 = 3;
  }
  else if ( a1 == v4 + 272 )
  {
    v7 = 4;
  }
  else
  {
    v14 = *(_QWORD *)(v4 + 864);
    if ( a1 == v14 || a1 == v14 + 16 || a1 == v14 + 32 )
      v7 = 5;
    else
      v7 = a1 == 0 ? 6 : 0;
  }
  v8 = *(_BYTE *)(a2 + 120);
  switch ( v8 )
  {
    case 2:
      v10 = *(_QWORD *)(a2 + 16);
      BYTE1(v17) = 2;
      if ( a4 )
      {
        *((_QWORD *)&v16 + 1) = *(_QWORD *)((*(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v15 = CcReferenceSharedCacheMapFileObject(v10);
        *((_QWORD *)&v16 + 1) = *(_QWORD *)(v15 + 24);
        CcDereferenceSharedCacheMapFileObject(v10, v15);
      }
      break;
    case 1:
      v9 = *(_QWORD *)(a2 + 16);
      BYTE1(v17) = 1;
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(v9 + 24);
      break;
    case 3:
      BYTE1(v17) = 3;
      break;
    default:
      v13 = BYTE1(v17);
      if ( v8 == 4 )
        v13 = 4;
      BYTE1(v17) = v13;
      break;
  }
  LOBYTE(v17) = v7;
  *(_QWORD *)&v16 = a2;
  BYTE2(v17) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0;
  v19 = 24;
  v18 = &v16;
  if ( CurrentIrql >= 2u )
    return EtwTraceKernelEvent((int)&v18, 1, 0x80020000, 5632, 4194562);
  else
    return EtwTraceKernelEvent((int)&v18, 1, 0x80020000, 5632, 4200706);
}
