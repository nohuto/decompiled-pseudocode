/*
 * XREFs of SmpMakeSystemManagedPagingFileDescriptor @ 0x14001232C
 * Callers:
 *     SmpProcessPagefileDescriptor @ 0x14000C59C (SmpProcessPagefileDescriptor.c)
 * Callees:
 *     SmpInitializeManagedPagefileSupport @ 0x1400120BC (SmpInitializeManagedPagefileSupport.c)
 *     SmpRoundDownToPowerOf2 @ 0x1400124C8 (SmpRoundDownToPowerOf2.c)
 */

unsigned __int64 __fastcall SmpMakeSystemManagedPagingFileDescriptor(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // r10

  SmpInitializeManagedPagefileSupport();
  v2 = 3 * SmpMemorySize;
  if ( (unsigned __int64)(3 * SmpMemorySize) < 0x100000000LL )
    v2 = 0x100000000LL;
  SmpRoundDownToPowerOf2(v2 >> 4);
  v4 = SmpDesiredPfSizeBasedOnRAM;
  v5 = 0x400000000LL;
  if ( !SmpNumberOfManagedPagefilesCreated )
    v4 = SmpDesiredPfSizeBasedOnHistory;
  if ( v4 < 0x4000000 )
    v4 = 0x4000000LL;
  v6 = v3 >> 4;
  if ( v6 < 0x400000000LL )
    v5 = v6;
  if ( v4 < v5 )
  {
    v4 = 0x400000000LL;
    if ( v6 < 0x400000000LL )
      v4 = v6;
  }
  v7 = SmpRoundDownToPowerOf2(v4 >> 4);
  v11 = v10;
  if ( v7 > v10 )
    v11 = v7;
  result = v9;
  if ( (~(v11 - 1) & (v11 + v8 - 1)) <= v9 )
    result = ~(v11 - 1) & (v11 + v8 - 1);
  v13 = result;
  if ( !SmpNumberOfManagedPagefilesCreated && result < SmpDesiredPfSizeForApps )
  {
    v14 = SmpRoundDownToPowerOf2((unsigned __int64)SmpDesiredPfSizeForApps >> 4);
    v17 = v16;
    if ( v14 > v16 )
      v17 = v14;
    result = ~(v17 - 1);
    v13 = result & (v17 + v15 - 1);
    *(_DWORD *)(a1 + 92) |= 8u;
  }
  v18 = v13;
  if ( !SmpNumberOfPagefilesCreated && v13 < SmpDesiredPfSizeForCrashDump )
  {
    v19 = SmpRoundDownToPowerOf2((unsigned __int64)SmpDesiredPfSizeForCrashDump >> 4);
    if ( v19 > v20 )
      v20 = v19;
    result = ~(v20 - 1);
    v18 = result & (v20 + v21 - 1);
    if ( SmpDumpType != 1 )
      v13 = result & (v20 + v21 - 1);
    if ( SmpTryHardForCrashDump == 1 )
      *(_DWORD *)(a1 + 92) |= 8u;
  }
  *(_DWORD *)(a1 + 92) |= 2u;
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)(a1 + 56) = v18;
  *(_QWORD *)(a1 + 64) = v9;
  return result;
}
