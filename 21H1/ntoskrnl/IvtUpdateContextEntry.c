/*
 * XREFs of IvtUpdateContextEntry @ 0x1404DB70C
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1404DA118 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x1409A6508 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x1409A6FE8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404DAA6C (IvtGetBlockedDomain.c)
 *     IvtGetContextEntryType @ 0x1404DAAC0 (IvtGetContextEntryType.c)
 *     IvtInvalidateContextEntry @ 0x1404DB1F0 (IvtInvalidateContextEntry.c)
 */

__int64 *__fastcall IvtUpdateContextEntry(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, __int64 *a6)
{
  __int64 v7; // r10
  unsigned __int16 v8; // si
  _QWORD *v9; // rax
  char v10; // r12
  char v11; // r14
  __int64 v12; // r15
  int v13; // edi
  __int64 v14; // rbp
  int v15; // eax
  char ContextEntryType; // al
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *result; // rax
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF

  v23 = a2;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = a2;
  if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
    v9 = (_QWORD *)(v7 + 8 * (2 * ((unsigned __int64)a2 >> 8) + ((unsigned __int8)((unsigned __int8)a2 >> 3) >= 0x10u)));
  else
    v9 = (_QWORD *)(v7 + 16 * ((unsigned __int64)a2 >> 8));
  v10 = 0;
  v11 = 0;
  v12 = *v9 + 16LL * (unsigned __int8)a2;
  LOWORD(v13) = 0;
  v14 = 0x10000LL;
  if ( (*(_OWORD *)v12 & 1) != 0 && !a5 )
  {
    v10 = 1;
    v14 = (unsigned __int16)((unsigned int)*(_QWORD *)(v12 + 8) >> 8);
  }
  v15 = *(_DWORD *)(a3 + 4);
  v22 = 0LL;
  if ( v15 == 1 )
  {
    v11 = 1;
    LOWORD(v13) = IvtGetBlockedDomain(a1, &v23, &v22);
  }
  else if ( v15 )
  {
    v11 = 1;
    v13 = *(_DWORD *)(a3 + 24);
    v22 = *(_QWORD *)(a3 + 16) >> 12;
  }
  ContextEntryType = IvtGetContextEntryType(0, v11);
  v18 = v17 << 10;
  *(_QWORD *)(v12 + 8) = v19;
  *(_QWORD *)v12 = (4 * (v18 | ContextEntryType & 3)) | 1;
  if ( v10 )
  {
    IvtInvalidateContextEntry(a1, v8, v14, v18, 1);
    if ( v11 )
      IvtInvalidateContextEntry(a1, v8, v13, v20, 1);
  }
  result = a6;
  if ( a6 )
    *a6 = v14;
  return result;
}
