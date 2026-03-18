/*
 * XREFs of PspInitializeFullProcessImageName @ 0x1406D0B9C
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObQueryNameStringMode @ 0x1405D9AA0 (ObQueryNameStringMode.c)
 *     PspSetProcessShortName @ 0x1406D0D74 (PspSetProcessShortName.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  void *v4; // rdi
  ULONG_PTR v5; // rsi
  int v6; // eax
  int v7; // ebx
  char *v8; // rax
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[34]; // [rsp+50h] [rbp-B0h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = 0LL;
  if ( (*(_DWORD *)(a2 + 2172) & 1) != 0 )
    goto LABEL_17;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 176);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 1304);
    if ( !v12 )
    {
      v7 = -1073741637;
      goto LABEL_11;
    }
    v13 = MiSectionControlArea(v12);
    v5 = MiReferenceControlAreaFile(v13);
  }
  v15 = *(_OWORD *)(v5 + 88);
  PspSetProcessShortName(a2, &v15);
  LODWORD(NumberOfBytes) = 272;
  v6 = ObQueryNameStringMode((char *)v5, (__int64)Src, 0x110u, &NumberOfBytes, 0);
  v7 = v6;
  if ( v6 == -2147483643 || v6 == -1073741789 || v6 == -1073741820 )
  {
    if ( (unsigned int)NumberOfBytes <= 0x110 )
      goto LABEL_17;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_17;
    v7 = ObQueryNameStringMode((char *)v5, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes, 0);
    if ( v7 >= 0 )
      goto LABEL_12;
    ExFreePoolWithTag(v4, 0);
LABEL_11:
    if ( v7 >= 0 )
      goto LABEL_12;
    goto LABEL_17;
  }
  if ( v6 >= 0 && (unsigned int)(NumberOfBytes - 17) <= 0xFF )
  {
    v8 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v4 = v8;
    if ( v8 )
    {
      *(_OWORD *)v8 = *(_OWORD *)Src;
      *((_QWORD *)v8 + 1) = v8 + 16;
      memmove(v8 + 16, Src[1], WORD1(Src[0]));
      goto LABEL_11;
    }
  }
LABEL_17:
  LODWORD(NumberOfBytes) = 16;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
  v4 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned int)NumberOfBytes);
    v7 = 0;
  }
  else
  {
    v7 = -1073741801;
  }
LABEL_12:
  *(_QWORD *)(a2 + 1472) = v4;
  return (unsigned int)v7;
}
