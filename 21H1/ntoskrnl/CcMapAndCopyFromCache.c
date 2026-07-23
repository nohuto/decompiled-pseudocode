/*
 * XREFs of CcMapAndCopyFromCache @ 0x140631B50
 * Callers:
 *     CcCompleteAsyncRead @ 0x140234DF0 (CcCompleteAsyncRead.c)
 *     CcCopyReadEx @ 0x140287C10 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 * Callees:
 *     CcFreeVirtualAddress @ 0x140287EE0 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x140287F20 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     CcCopyBytesToUserBuffer @ 0x14028A9B0 (CcCopyBytesToUserBuffer.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402D036C (CcUpdateSharedCacheMapFlag.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

char __fastcall CcMapAndCopyFromCache(__int64 a1, __int64 a2, unsigned int a3, char a4, char *a5, _DWORD *a6, int a7)
{
  char v8; // si
  unsigned int v9; // edi
  __int64 v10; // rbx
  NTSTATUS v11; // ebp
  __int64 v12; // r15
  char *v13; // r14
  __int64 VirtualAddress; // rax
  __int64 *v15; // r12
  char *v16; // rcx
  unsigned int v17; // esi
  char *Src; // [rsp+40h] [rbp-58h]
  __int64 *v20; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+18h] BYREF
  char v23; // [rsp+B8h] [rbp+20h]

  v23 = a4;
  v21 = a2;
  v8 = a4;
  v9 = a3;
  v20 = 0LL;
  v10 = a2;
  v11 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !a3 )
    goto LABEL_14;
  v13 = a5;
  while ( 1 )
  {
    LODWORD(Size) = 0;
    VirtualAddress = CcGetVirtualAddress(v12, v10, &v20, &Size, 0, v13 == 0LL);
    v15 = v20;
    v16 = (char *)VirtualAddress;
    Src = (char *)VirtualAddress;
    if ( (*(_DWORD *)(v12 + 152) & 8) != 0 )
      break;
    if ( !CcFetchDataForRead(a1, &v21, v9, v8, a6, v20, a7) )
      goto LABEL_18;
    v16 = Src;
LABEL_6:
    v17 = Size;
    v10 += (unsigned int)Size;
    if ( (unsigned int)Size > v9 )
      v17 = v9;
    if ( v13 )
    {
      v11 = CcCopyBytesToUserBuffer(v13, v16, v17, (*(_DWORD *)(v12 + 152) & 0x1000) != 0);
      if ( v11 < 0 )
        goto LABEL_19;
      v13 += v17;
    }
    CcFreeVirtualAddress((__int64)v15);
    v21 = v10;
    v20 = 0LL;
    v9 -= v17;
    if ( !v9 )
      goto LABEL_12;
    v8 = v23;
  }
  if ( v8 )
    goto LABEL_6;
  v15 = v20;
LABEL_18:
  v11 = -1073741608;
LABEL_19:
  if ( v15 )
    CcFreeVirtualAddress((__int64)v15);
LABEL_12:
  if ( v11 == -1073741608 )
    return 0;
  if ( v11 < 0 )
  {
    CcUpdateSharedCacheMapFlag(v12, 8, 1);
    RtlRaiseStatus(v11);
  }
LABEL_14:
  if ( (*(_DWORD *)(v12 + 152) & 8) != 0 )
    CcUpdateSharedCacheMapFlag(v12, 8, 0);
  return 1;
}
