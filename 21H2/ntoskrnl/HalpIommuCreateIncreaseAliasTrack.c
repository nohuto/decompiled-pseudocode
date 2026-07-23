/*
 * XREFs of HalpIommuCreateIncreaseAliasTrack @ 0x1403F01F0
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404CA0C0 (HalpIommuUnblockDevice.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuCloneDeviceId @ 0x1403F00C8 (HalpIommuCloneDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x1405C65BC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuCreateIncreaseAliasTrack(void *Src, _QWORD *a2)
{
  __int64 *i; // r11
  __int64 v5; // r11
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rcx
  int v10; // esi
  _QWORD *v11; // rcx
  __int64 v12; // rdx

  for ( i = (__int64 *)HalpRidAliasList; ; i = *(__int64 **)v5 )
  {
    if ( i == &HalpRidAliasList )
    {
      v6 = HalpMmAllocCtxAlloc((__int64)Src, 32LL);
      v7 = (_QWORD *)v6;
      if ( !v6 )
        return 3221225626LL;
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      v10 = HalpIommuCloneDeviceId(Src, (__int64 *)(v6 + 16));
      if ( v10 < 0 )
      {
        v12 = v7[2];
        if ( v12 )
          HalpMmAllocCtxFree(v9, v12);
        HalpMmAllocCtxFree(v9, (__int64)v7);
      }
      else
      {
        v7[3] = 1LL;
        v11 = (_QWORD *)qword_140C49EA8;
        if ( *(__int64 **)qword_140C49EA8 != &HalpRidAliasList )
          __fastfail(3u);
        *v7 = &HalpRidAliasList;
        v7[1] = v11;
        *v11 = v7;
        qword_140C49EA8 = (__int64)v7;
        *a2 = v7;
      }
      return (unsigned int)v10;
    }
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i[2], Src) )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
    __fastfail(0xEu);
  *a2 = v5;
  return 0LL;
}
