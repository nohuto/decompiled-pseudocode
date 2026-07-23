/*
 * XREFs of _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1
 * Callers:
 *     _LdrpRelocateImage@16 @ 0x4B2ED3BF (_LdrpRelocateImage@16.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwFlushInstructionCache@12 @ 0x4B2F3800 (_ZwFlushInstructionCache@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpSetProtection@8 @ 0x4B331251 (_LdrpSetProtection@8.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 *     _LdrRelocateImageWithBias@28 @ 0x4B342836 (_LdrRelocateImageWithBias@28.c)
 */

NTSTATUS __thiscall LdrpProtectAndRelocateImage(_IMAGE_NT_HEADERS64 *this, int a2, int a3, int a4)
{
  NTSTATUS v5; // ecx
  char v6; // al
  int v7; // eax
  NTSTATUS v8; // esi
  char v9; // cl
  int v10; // eax
  void *v12; // [esp-14h] [ebp-58h]
  LONGLONG v13; // [esp-10h] [ebp-54h]
  CHAR *v14; // [esp-8h] [ebp-4Ch]
  NTSTATUS v15; // [esp-4h] [ebp-48h]
  SIZE_T v16; // [esp-4h] [ebp-48h]
  ULONG_PTR *v17; // [esp+0h] [ebp-44h]
  NTSTATUS v18; // [esp+0h] [ebp-44h]
  NTSTATUS v19; // [esp+4h] [ebp-40h]
  _IMAGE_NT_HEADERS64 *MemoryInformation; // [esp+14h] [ebp-30h] BYREF
  int v21; // [esp+18h] [ebp-2Ch]
  NTSTATUS v22; // [esp+1Ch] [ebp-28h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+20h] [ebp-24h] BYREF
  char v24; // [esp+2Bh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  OutHeaders = this;
  v24 = 0;
  MemoryInformation = this;
  v5 = NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, 0, MemoryWorkingSetExInformation, &MemoryInformation, 8uLL, v17);
  if ( v5 < 0 )
  {
    v6 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (int)"minkernel\\ntdll\\ldrfind.c",
        1971,
        (int)"LdrpProtectAndRelocateImage",
        0,
        "Querying large page info failed with status 0x%08lx\n",
        v5);
      v6 = ShowSnaps;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v21 & 1) != 0 && (v21 & 0x800000) != 0 )
  {
    v24 = 1;
  }
  if ( !v24 )
  {
    v7 = LdrpSetProtection(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = ShowSnaps;
      if ( (ShowSnaps & 3) == 0 )
        goto LABEL_14;
      LdrpLogDbgPrint(
        (int)"minkernel\\ntdll\\ldrfind.c",
        1981,
        (int)"LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        this,
        v7);
      goto LABEL_13;
    }
  }
  ms_exc.registration.TryLevel = 0;
  v8 = LdrRelocateImageWithBias(v12, v13, v14, v15, v18, v19);
  v22 = v8;
  ms_exc.registration.TryLevel = -2;
  if ( v8 < 0 || v24 || (v10 = LdrpSetProtection(this), v8 = v10, v10 >= 0) )
  {
    RtlImageNtHeaderEx(3u, this, 0LL, &OutHeaders);
    LODWORD(v16) = OutHeaders->OptionalHeader.SizeOfImage;
    ZwFlushInstructionCache((HANDLE)0xFFFFFFFF, this, v16);
    v9 = ShowSnaps;
    goto LABEL_22;
  }
  v9 = ShowSnaps;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrfind.c",
      2005,
      (int)"LdrpProtectAndRelocateImage",
      0,
      "Changing the protection of the executable at %p failed with status 0x%08lx\n",
      this,
      v10);
LABEL_13:
    v9 = ShowSnaps;
  }
LABEL_14:
  if ( (v9 & 0x10) != 0 )
    __debugbreak();
LABEL_22:
  if ( (v9 & 9) != 0 )
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrfind.c",
      2045,
      (int)"LdrpProtectAndRelocateImage",
      4,
      "Status: 0x%08lx\n",
      v8);
  return v8;
}
