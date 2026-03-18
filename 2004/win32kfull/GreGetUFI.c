/*
 * XREFs of GreGetUFI @ 0x1C0142710
 * Callers:
 *     NtGdiGetUFI @ 0x1C01425C0 (NtGdiGetUFI.c)
 *     NtGdiGetEmbUFI @ 0x1C02AF440 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C0009FD0 (ComputeFileviewCheckSum.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall GreGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, __int64 a6, _QWORD *a7)
{
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  _QWORD *v9; // r15
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdi
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = (_DWORD *)a6;
  v8 = 0;
  v9 = a7;
  *(_DWORD *)a6 = 0;
  if ( v9 )
    *v9 = 0LL;
  v17[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v17, a1);
  if ( v17[0] )
  {
    a6 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&a6, (struct XDCOBJ *)v17, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(a6 + 504));
    v13 = a6;
    if ( a6 )
    {
      *a2 = *(_QWORD *)(*(_QWORD *)(a6 + 120) + 84LL);
      v14 = *(__int64 **)(v13 + 120);
      if ( v14 )
      {
        v15 = *v14;
        if ( *v14 )
        {
          if ( *(struct PFT **const *)(v15 + 128) == gpPFTPrivate )
          {
            *v7 |= 1u;
            if ( v9 )
              *v9 = *(unsigned int *)(*v14 + 140);
          }
          if ( (*(_DWORD *)(v15 + 52) & 0x10) != 0 )
            *v7 |= 4u;
          if ( *(_QWORD *)(v15 + 40) )
          {
            *v7 |= 2u;
            if ( a3 )
              memmove(a3, *(const void **)(v15 + 40), *(unsigned int *)(v15 + 48));
            if ( a4 )
              *a4 = *(_DWORD *)(v15 + 48);
            if ( a5 )
            {
              *a5 = *(_DWORD *)(v15 + 136);
              *a5 -= ComputeFileviewCheckSum(*(_DWORD **)(v15 + 40), *(_DWORD *)(v15 + 48));
            }
          }
          else
          {
            if ( a3 )
              memset(a3, 0, 0x48uLL);
            if ( a4 )
              *a4 = 0;
            if ( a5 )
              *a5 = 0;
          }
          v8 = 1;
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
  }
  return v8;
}
