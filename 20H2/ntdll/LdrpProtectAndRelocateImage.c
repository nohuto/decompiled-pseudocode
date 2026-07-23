/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x180082ECC
 * Callers:
 *     LdrpRelocateImage @ 0x180082DEC (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSetProtection @ 0x180082FA8 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x18008458C (LdrRelocateImageWithBias.c)
 *     ZwQueryVirtualMemory @ 0x18009D510 (ZwQueryVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(PVOID BaseOfImage)
{
  bool v2; // di
  LONGLONG v3; // rdx
  NTSTATUS v4; // ecx
  CHAR *v5; // r8
  NTSTATUS v6; // r9d
  int v7; // eax
  NTSTATUS v8; // ebx
  char v10; // al
  int v11; // edx
  NTSTATUS v12; // [rsp+20h] [rbp-48h]
  NTSTATUS v13; // [rsp+28h] [rbp-40h]
  PVOID v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v14 = BaseOfImage;
  v4 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v14, 0x10uLL, 0LL);
  if ( v4 < 0 )
  {
    v10 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1971,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        (__int64)"Querying large page info failed with status 0x%08lx\n",
        v4);
      v10 = LdrpDebugFlags;
    }
    if ( (v10 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v15 & 1) != 0 )
  {
    v2 = (v15 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v7 = LdrpSetProtection(BaseOfImage);
    v8 = v7;
    if ( v7 < 0 )
    {
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_21;
      v11 = 1981;
      goto LABEL_20;
    }
  }
  v8 = LdrRelocateImageWithBias(BaseOfImage, v3, v5, v6, v12, v13);
  if ( v8 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  v7 = LdrpSetProtection(BaseOfImage);
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_9;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    v11 = 2005;
LABEL_20:
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v11,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      (__int64)"Changing the protection of the executable at %p failed with status 0x%08lx\n",
      BaseOfImage,
      v7);
  }
LABEL_21:
  if ( (LdrpDebugFlags & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      2045,
      (unsigned int)"LdrpProtectAndRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n",
      v8);
  return (unsigned int)v8;
}
