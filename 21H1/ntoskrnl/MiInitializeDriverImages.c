/*
 * XREFs of MiInitializeDriverImages @ 0x140A4165C
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlClearBitsEx @ 0x1402AA000 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x140301D30 (MiSystemVaToDynamicBitmap.c)
 *     MiSplitBitmapPages @ 0x140301DA4 (MiSplitBitmapPages.c)
 *     MiBuildDynamicRegion @ 0x1403AC314 (MiBuildDynamicRegion.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VfInitBootDriversLoaded @ 0x140A41CDC (VfInitBootDriversLoaded.c)
 *     MiCreateInitialSystemWsles @ 0x140A42174 (MiCreateInitialSystemWsles.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5E5DC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140A5F4D8 (MiInitializeDriverPtes.c)
 *     MxMarkActiveDriverBits @ 0x140A607E8 (MxMarkActiveDriverBits.c)
 *     MiFreeKernelPadSections @ 0x140A67380 (MiFreeKernelPadSections.c)
 */

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rdi
  unsigned __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int16 *j; // rdi
  unsigned __int64 v18; // rcx
  _QWORD *Pool; // rax
  __int16 v20; // si
  _QWORD *v21; // rcx
  char v22; // [rsp+30h] [rbp-78h] BYREF
  char v23; // [rsp+38h] [rbp-70h] BYREF

  v1 = qword_140C4FAC8;
  v3 = MiSystemVaToDynamicBitmap(12);
  if ( !(unsigned int)MiBuildDynamicRegion(v3, v1, 0x8000000000uLL) )
    return 0LL;
  v4 = v1 + 0x7FFFFFFFFFLL;
  v5 = (unsigned __int64 *)&v23;
  v6 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v1;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  MxMarkActiveDriverBits((unsigned int)&qword_140C4E020, v1, v4, (unsigned int)&v22, 3);
  v7 = qword_140C4E028;
  v8 = (_DWORD *)((((unsigned __int64)qword_140C4E028 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < qword_140C4E020; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5, v7, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_140C4E020, i, 0x8000uLL);
    }
    v7 += 4096LL;
    v8 += 2;
  }
  qword_140C4E020 = i;
  v10 = MiSystemVaToDynamicBitmap(11);
  if ( !(unsigned int)MiBuildDynamicRegion(v10, v11, 0x2000000000uLL) )
    return 0LL;
  qword_140C4CC30 = -1LL;
  qword_140C4CC68 = 0LL;
  qword_140C4CC40 = (__int64)&qword_140C4CC38;
  qword_140C4CC38 = (__int64)&qword_140C4CC38;
  if ( MmLargePageDriverBufferLength != -1 )
  {
    v13 = (unsigned __int16 *)&MmLargePageDriverBuffer;
    v14 = (unsigned __int16 *)((char *)&MmLargePageDriverBuffer
                             + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1));
    if ( &MmLargePageDriverBuffer < (_UNKNOWN *)v14 )
    {
      v15 = 0x100002601LL;
      do
      {
        v16 = *v13;
        if ( (unsigned __int16)v16 <= 0x20u && _bittest64(&v15, v16) || (_WORD)v16 == 12288 )
        {
          j = v13;
        }
        else
        {
          if ( (_DWORD)v16 == 42 )
          {
            byte_140C4CC29 = 1;
            break;
          }
          for ( j = v13; j < v14; ++j )
          {
            v18 = *j;
            if ( (unsigned __int16)v18 <= 0x20u && _bittest64(&v15, v18) )
              break;
            if ( (_WORD)v18 == 12288 )
              break;
          }
          Pool = MiAllocatePool(64, 0x20uLL, 0x704C6D4Du);
          if ( !Pool )
            break;
          v20 = 2 * (j - v13);
          Pool[3] = v13;
          *((_WORD *)Pool + 8) = v20;
          *((_WORD *)Pool + 9) = v20;
          v21 = (_QWORD *)qword_140C4CC40;
          if ( *(__int64 **)qword_140C4CC40 != &qword_140C4CC38 )
            __fastfail(3u);
          *Pool = &qword_140C4CC38;
          Pool[1] = v21;
          v15 = 0x100002601LL;
          *v21 = Pool;
          qword_140C4CC40 = (__int64)Pool;
        }
        v13 = j + 1;
      }
      while ( j + 1 < v14 );
    }
  }
  qword_140C4CCA0 = 0LL;
  if ( !(unsigned int)MiInitializeBootLoadedDriverPfns(a1) )
    return 0LL;
  if ( !(unsigned int)MiInitializeDriverPtes(a1) )
    return 0LL;
  MiFreeKernelPadSections(
    *(_QWORD *)(qword_140C4CC58 + 48),
    *(_QWORD *)(qword_140C4CC58 + 48) + *(unsigned int *)(qword_140C4CC58 + 64));
  if ( !(unsigned int)MiReloadBootLoadedDrivers(a1) || !(unsigned int)MiCreateInitialSystemWsles() )
    return 0LL;
  VfInitBootDriversLoaded(a1);
  result = 1LL;
  qword_140C4CC50 = (__int64)&qword_140C4CC48;
  qword_140C4CC48 = &qword_140C4CC48;
  return result;
}
