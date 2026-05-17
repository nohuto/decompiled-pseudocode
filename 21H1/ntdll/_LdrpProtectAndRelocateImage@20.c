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

int __thiscall LdrpProtectAndRelocateImage(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edx
  int VirtualMemory; // ecx
  char v7; // al
  int v8; // eax
  int v9; // esi
  char v10; // cl
  int v11; // edx
  int v12; // eax
  int v14; // [esp-14h] [ebp-58h]
  int v15; // [esp-10h] [ebp-54h]
  int v16; // [esp-Ch] [ebp-50h]
  int v17; // [esp-8h] [ebp-4Ch]
  int v18; // [esp-4h] [ebp-48h]
  void *v19; // [esp+14h] [ebp-30h] BYREF
  int v20; // [esp+18h] [ebp-2Ch]
  int v21; // [esp+1Ch] [ebp-28h]
  _DWORD *v22; // [esp+20h] [ebp-24h] BYREF
  char v23; // [esp+2Bh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v22 = this;
  v23 = 0;
  v19 = this;
  VirtualMemory = NtQueryVirtualMemory(-1, 0, 4, (int)&v19, 8, 0);
  if ( VirtualMemory < 0 )
  {
    v7 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (int)"minkernel\\ntdll\\ldrfind.c",
        1971,
        "LdrpProtectAndRelocateImage",
        0,
        "Querying large page info failed with status 0x%08lx\n",
        VirtualMemory);
      v7 = ShowSnaps;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v20 & 1) != 0 && (v20 & 0x800000) != 0 )
  {
    v23 = 1;
  }
  if ( !v23 )
  {
    LOBYTE(v5) = 0;
    v8 = LdrpSetProtection(this, v5);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = ShowSnaps;
      if ( (ShowSnaps & 3) == 0 )
        goto LABEL_14;
      LdrpLogDbgPrint(
        (int)"minkernel\\ntdll\\ldrfind.c",
        1981,
        "LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        this,
        v8);
      goto LABEL_13;
    }
  }
  ms_exc.registration.TryLevel = 0;
  v9 = LdrRelocateImageWithBias(v14, v15, v16, v17, v18);
  v21 = v9;
  ms_exc.registration.TryLevel = -2;
  if ( v9 < 0 || v23 || (LOBYTE(v11) = 1, v12 = LdrpSetProtection(this, v11), v9 = v12, v12 >= 0) )
  {
    RtlImageNtHeaderEx(3, (unsigned int)this, 0, 0, &v22);
    ZwFlushInstructionCache(-1, (int)this, v22[20]);
    v10 = ShowSnaps;
    goto LABEL_22;
  }
  v10 = ShowSnaps;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrfind.c",
      2005,
      "LdrpProtectAndRelocateImage",
      0,
      "Changing the protection of the executable at %p failed with status 0x%08lx\n",
      this,
      v12);
LABEL_13:
    v10 = ShowSnaps;
  }
LABEL_14:
  if ( (v10 & 0x10) != 0 )
    __debugbreak();
LABEL_22:
  if ( (v10 & 9) != 0 )
    LdrpLogDbgPrint((int)"minkernel\\ntdll\\ldrfind.c", 2045, "LdrpProtectAndRelocateImage", 4, "Status: 0x%08lx\n", v9);
  return v9;
}
