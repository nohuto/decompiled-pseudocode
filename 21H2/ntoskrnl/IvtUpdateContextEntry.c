/*
 * XREFs of IvtUpdateContextEntry @ 0x1404E0DFC
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1404DF808 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x1409AB0B8 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x1409ABBD8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404E015C (IvtGetBlockedDomain.c)
 *     IvtGetContextEntryType @ 0x1404E01B0 (IvtGetContextEntryType.c)
 *     IvtInvalidateContextEntry @ 0x1404E08E0 (IvtInvalidateContextEntry.c)
 */

__int64 *__fastcall IvtUpdateContextEntry(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, __int64 *a6)
{
  unsigned int v7; // edx
  __int64 v9; // r8
  _QWORD *v11; // rax
  char v12; // bp
  char v13; // r12
  __int64 v14; // rdi
  int v15; // r14d
  __int64 v16; // r15
  int v17; // eax
  char ContextEntryType; // al
  __int64 v19; // r10
  unsigned int v20; // ecx
  __int64 v21; // r8
  unsigned int v22; // edx
  __int64 i; // r9
  unsigned int v24; // edi
  unsigned int v25; // ebp
  __int64 *result; // rax
  unsigned __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v7 = *a2;
  v9 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
    v11 = (_QWORD *)(v9 + 8 * (2 * ((unsigned __int64)v7 >> 8) + ((unsigned __int8)((unsigned __int8)v7 >> 3) >= 0x10u)));
  else
    v11 = (_QWORD *)(v9 + 16 * ((unsigned __int64)v7 >> 8));
  v12 = 0;
  v13 = 0;
  v14 = *v11 + 16LL * (unsigned __int8)v7;
  LOWORD(v15) = 0;
  v16 = 0x10000LL;
  if ( (*(_OWORD *)v14 & 1) != 0 && !a5 )
  {
    v12 = 1;
    v16 = (unsigned __int16)((unsigned int)*(_QWORD *)(v14 + 8) >> 8);
  }
  v17 = *(_DWORD *)(a3 + 4);
  v27 = 0LL;
  if ( v17 == 1 )
  {
    v13 = 1;
    LOWORD(v15) = IvtGetBlockedDomain(a1, a2, &v27);
  }
  else if ( v17 )
  {
    v13 = 1;
    v15 = *(_DWORD *)(a3 + 24);
    v27 = *(_QWORD *)(a3 + 16) >> 12;
  }
  ContextEntryType = IvtGetContextEntryType(0, v13);
  v20 = a2[1];
  v22 = 0;
  for ( i = (4 * ((v21 << 10) | ContextEntryType & 3)) | 1; v22 < v20; v14 += 16LL * a2[2] )
  {
    *(_QWORD *)(v14 + 8) = v19;
    *(_QWORD *)v14 = i;
    ++v22;
    v20 = a2[1];
  }
  if ( v12 )
  {
    v24 = *a2;
    v25 = 0;
    if ( v20 )
    {
      do
      {
        IvtInvalidateContextEntry(a1, v24, v16, i, 1);
        if ( v13 )
          IvtInvalidateContextEntry(a1, v24, v15, i, 1);
        v24 += a2[2];
        ++v25;
      }
      while ( v25 < a2[1] );
    }
  }
  result = a6;
  if ( a6 )
    *a6 = v16;
  return result;
}
