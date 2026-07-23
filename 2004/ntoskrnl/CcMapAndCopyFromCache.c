/*
 * XREFs of CcMapAndCopyFromCache @ 0x1405FCB10
 * Callers:
 *     CcCopyReadEx @ 0x14022EBC0 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1402C7C20 (CcCompleteAsyncRead.c)
 * Callees:
 *     CcFreeVirtualAddress @ 0x14022EE90 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x14022EED0 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x14022F3B0 (CcGetVirtualAddress.c)
 *     CcCopyBytesToUserBuffer @ 0x140231960 (CcCopyBytesToUserBuffer.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140320EF0 (CcUpdateSharedCacheMapFlag.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 */

char __fastcall CcMapAndCopyFromCache(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        char *a5,
        _DWORD *a6,
        int a7)
{
  char v8; // si
  unsigned int v9; // edi
  __int64 v10; // rbx
  NTSTATUS v11; // ebp
  __int64 v12; // r15
  char *v13; // r14
  __int64 VirtualAddress; // rax
  __int64 v15; // r8
  _QWORD *v16; // r12
  char *v17; // rcx
  unsigned int v18; // esi
  char *Src; // [rsp+40h] [rbp-58h]
  _QWORD *v21; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+18h] BYREF
  char v24; // [rsp+B8h] [rbp+20h]

  v24 = (char)a4;
  v22 = a2;
  v8 = (char)a4;
  v9 = a3;
  v21 = 0LL;
  v10 = a2;
  v11 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !a3 )
    goto LABEL_14;
  v13 = a5;
  while ( 1 )
  {
    LODWORD(Size) = 0;
    VirtualAddress = CcGetVirtualAddress(v12, v10, (__int64 *)&v21, &Size, 0, v13 == 0LL);
    v16 = v21;
    v17 = (char *)VirtualAddress;
    Src = (char *)VirtualAddress;
    if ( (*(_DWORD *)(v12 + 152) & 8) != 0 )
      break;
    if ( !CcFetchDataForRead(a1, &v22, v9, v8, a6, v21, a7) )
      goto LABEL_18;
    v17 = Src;
LABEL_6:
    v18 = Size;
    v10 += (unsigned int)Size;
    if ( (unsigned int)Size > v9 )
      v18 = v9;
    if ( v13 )
    {
      v11 = CcCopyBytesToUserBuffer(v13, v17, v18, (*(_DWORD *)(v12 + 152) & 0x1000) != 0);
      if ( v11 < 0 )
        goto LABEL_19;
      v13 += v18;
    }
    CcFreeVirtualAddress((__int64)v16);
    v22 = v10;
    v21 = 0LL;
    v9 -= v18;
    if ( !v9 )
      goto LABEL_12;
    v8 = v24;
  }
  if ( v8 )
    goto LABEL_6;
  v16 = v21;
LABEL_18:
  v11 = -1073741608;
LABEL_19:
  if ( v16 )
    CcFreeVirtualAddress((__int64)v16);
LABEL_12:
  if ( v11 == -1073741608 )
    return 0;
  if ( v11 < 0 )
  {
    LOBYTE(v15) = 1;
    CcUpdateSharedCacheMapFlag(v12, 8LL, v15, a4);
    RtlRaiseStatus(v11);
  }
LABEL_14:
  if ( (*(_DWORD *)(v12 + 152) & 8) != 0 )
    CcUpdateSharedCacheMapFlag(v12, 8LL, 0LL, a4);
  return 1;
}
