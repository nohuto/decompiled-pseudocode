/*
 * XREFs of KiInitializeXSave @ 0x1409972B0
 * Callers:
 *     KiSystemStartup @ 0x14098B010 (KiSystemStartup.c)
 * Callees:
 *     KiGetIptInfo @ 0x1403A96A4 (KiGetIptInfo.c)
 *     KiGetXSaveSupportedFeatures @ 0x1403A9720 (KiGetXSaveSupportedFeatures.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiIntersectFeaturesWithPolicy @ 0x14099BA70 (KiIntersectFeaturesWithPolicy.c)
 *     KiUpdateXSaveSizeAndVolatileFeatures @ 0x14099C790 (KiUpdateXSaveSizeAndVolatileFeatures.c)
 *     KiParseLoadOptions @ 0x14099C8D0 (KiParseLoadOptions.c)
 *     KiIntersectFeaturesWithLoader @ 0x14099C988 (KiIntersectFeaturesWithLoader.c)
 */

__int64 __fastcall KiInitializeXSave(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  ULONG_PTR *v6; // rax
  _OWORD *v7; // r8
  __int128 v8; // xmm1
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1[104]; // [rsp+40h] [rbp-C0h] BYREF

  BugCheckParameter3[0] = 0LL;
  if ( !a2 )
    KiParseLoadOptions(*(_QWORD *)(a1 + 216));
  memset(BugCheckParameter1, 0, 0x338uLL);
  KiGetXSaveSupportedFeatures((__int64)BugCheckParameter1);
  KiGetIptInfo((_DWORD *)BugCheckParameter3 + 1, BugCheckParameter3);
  if ( a2 )
  {
    if ( (BugCheckParameter1[0] & MEMORY[0xFFFFF780000003D8]) != MEMORY[0xFFFFF780000003D8]
      || (BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0]) != MEMORY[0xFFFFF780000005F0]
      || (BugCheckParameter1[2] & 0x100000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 1) != 0
      || (BugCheckParameter1[2] & 0x200000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      KeBugCheckEx(0x3Eu, (ULONG_PTR)BugCheckParameter1, 0xFFFFF780000003D8uLL, 1uLL, 0LL);
    }
    result = BugCheckParameter3[0] & (unsigned int)KiIptMsrMask;
    if ( (_DWORD)result != (_DWORD)KiIptMsrMask )
      KeBugCheckEx(
        0x3Eu,
        (unsigned int)KiIptSaveAreaLength,
        (unsigned int)KiIptMsrMask,
        HIDWORD(BugCheckParameter3[0]),
        LODWORD(BugCheckParameter3[0]));
  }
  else
  {
    KiIntersectFeaturesWithLoader(a1, BugCheckParameter1);
    KiIntersectFeaturesWithPolicy(a1, BugCheckParameter1);
    if ( KeTestRemovedFeatureMask )
    {
      BugCheckParameter1[0] &= ~KeTestRemovedFeatureMask;
      BugCheckParameter1[67] &= ~KeTestRemovedFeatureMask;
    }
    if ( KeTestDisableXSave )
    {
      BugCheckParameter1[0] = 0LL;
      BugCheckParameter1[67] = 0LL;
      HIDWORD(BugCheckParameter1[2]) &= 0xFFFFFFFC;
    }
    KiUpdateXSaveSizeAndVolatileFeatures(BugCheckParameter1);
    v5 = 6LL;
    v6 = BugCheckParameter1;
    v7 = (_OWORD *)0xFFFFF780000003D8LL;
    do
    {
      *v7 = *(_OWORD *)v6;
      v7[1] = *((_OWORD *)v6 + 1);
      v7[2] = *((_OWORD *)v6 + 2);
      v7[3] = *((_OWORD *)v6 + 3);
      v7[4] = *((_OWORD *)v6 + 4);
      v7[5] = *((_OWORD *)v6 + 5);
      v7[6] = *((_OWORD *)v6 + 6);
      v7 += 8;
      v8 = *((_OWORD *)v6 + 7);
      v6 += 16;
      *(v7 - 1) = v8;
      --v5;
    }
    while ( v5 );
    *v7 = *(_OWORD *)v6;
    v7[1] = *((_OWORD *)v6 + 1);
    v7[2] = *((_OWORD *)v6 + 2);
    *((_QWORD *)v7 + 6) = v6[6];
    if ( BugCheckParameter1[0] )
    {
      KeXStateLength = MEMORY[0xFFFFF78000000600];
      KiXSaveAreaLength = MEMORY[0xFFFFF78000000600];
    }
    result = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(result + 2840) & 0x20) != 0 )
    {
      result = LODWORD(BugCheckParameter3[0]);
      KiXSaveAreaLength += HIDWORD(BugCheckParameter3[0]);
      LODWORD(KiIptSaveAreaLength) = HIDWORD(BugCheckParameter3[0]);
      LODWORD(KiIptMsrMask) = BugCheckParameter3[0];
    }
  }
  return result;
}
