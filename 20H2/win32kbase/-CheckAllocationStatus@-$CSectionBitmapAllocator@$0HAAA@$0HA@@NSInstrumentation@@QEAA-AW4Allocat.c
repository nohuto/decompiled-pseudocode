/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C0077EF0
 * Callers:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0120E14 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r10
  int v3; // r8d
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx

  v2 = a1[1];
  v3 = a2;
  v4 = a1[2];
  v5 = v4 ^ v2;
  if ( !a2 || a2 < v5 || a2 >= v5 + 28672 )
    return 0LL;
  v8 = a2 & 0xFFF;
  v9 = ((a2 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
  v10 = (v9 + (((unsigned __int64)(v3 & 0xFFF) - v9) >> 1)) >> 6;
  if ( v8 != 112 * v10 )
    return 3LL;
  if ( RtlTestBit((PRTL_BITMAP)(v4 ^ a1[3]), v10 + 36 * ((v3 - ((unsigned int)v4 ^ (unsigned int)v2)) >> 12)) )
    return 1LL;
  return 2LL;
}
