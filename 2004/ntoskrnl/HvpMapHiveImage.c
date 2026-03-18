/*
 * XREFs of HvpMapHiveImage @ 0x140870A58
 * Callers:
 *     HvpMapHiveImageFromFile @ 0x140870BCC (HvpMapHiveImageFromFile.c)
 * Callees:
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     HvpAllocateBin @ 0x140637B8C (HvpAllocateBin.c)
 *     HvpProtectBin @ 0x140637BD0 (HvpProtectBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140638644 (HvpPointMapEntriesToBuffer.c)
 *     HvpFreeBin @ 0x1407105B4 (HvpFreeBin.c)
 *     HvpReadHiveDataFromFile @ 0x140871200 (HvpReadHiveDataFromFile.c)
 */

__int64 __fastcall HvpMapHiveImage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  int v7; // r14d
  int v8; // eax
  int Bin; // ebx
  unsigned int v10; // esi
  const void *v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  v7 = 0;
  do
  {
LABEL_2:
    v8 = HvpReadHiveDataFromFile(a5, &v15, &v16);
    Bin = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741807 )
        return 0;
      else
        SetFailureLocation(v6, 0, 7, v8, 0);
      return (unsigned int)Bin;
    }
    v10 = 0;
  }
  while ( !v16 );
  while ( 1 )
  {
    v11 = (const void *)(v15 + v10);
    Bin = HvpAllocateBin(BugCheckParameter2, 4096LL, 0, 0x31334D43u, (__int64 *)&v17);
    if ( Bin < 0 )
      break;
    memmove(v17, v11, 0x1000uLL);
    Bin = HvpProtectBin(v12, 0x1000u, (__int64)v17, 0);
    if ( Bin < 0 )
    {
      v13 = 32;
      goto LABEL_10;
    }
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v17, 4096, v7, 1, 0LL);
    v17 = 0LL;
    v7 += 4096;
    v10 += 4096;
    if ( v10 >= v16 )
      goto LABEL_2;
  }
  v13 = 16;
LABEL_10:
  SetFailureLocation(v6, 0, 7, Bin, v13);
  if ( v17 )
    HvpFreeBin(BugCheckParameter2, 0x1000u, (unsigned __int64)v17);
  return (unsigned int)Bin;
}
