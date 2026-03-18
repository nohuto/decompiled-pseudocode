/*
 * XREFs of _GreGetUFI@28 @ 0x1D8D94
 * Callers:
 *     _NtGdiGetEmbUFI@28 @ 0x212CF5 (_NtGdiGetEmbUFI@28.c)
 *     _NtGdiGetUFI@24 @ 0x213461 (_NtGdiGetUFI@24.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bInPrivatePFT@PFFOBJ@@QBEHXZ @ 0x88E46 (-bInPrivatePFT@PFFOBJ@@QBEHXZ.c)
 *     _ComputeFileviewCheckSum@8 @ 0xDFA40 (_ComputeFileviewCheckSum@8.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall GreGetUFI(HDC a1, _DWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  int v9; // ebx
  _DWORD *v11; // eax
  int v12; // edx
  int *v13; // edx
  int v14; // esi
  int v15; // edx
  _BYTE *v16; // eax
  int v17; // ecx
  _DWORD v19[3]; // [esp+Ch] [ebp-14h] BYREF
  int v20; // [esp+18h] [ebp-8h] BYREF

  v7 = a7;
  v8 = a6;
  v9 = 0;
  *a6 = 0;
  if ( v7 )
    *v7 = 0;
  v19[1] = 0;
  v19[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( v19[0] )
  {
    a6 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&a6, (struct XDCOBJ *)v19, 0, 2u) )
      GreAcquireSemaphore(a6[137]);
    v11 = a6;
    if ( a6 )
    {
      v12 = a6[20];
      *a2 = *(_DWORD *)(v12 + 52);
      a2[1] = *(_DWORD *)(v12 + 56);
      v13 = (int *)v11[20];
      if ( v13 )
      {
        v14 = *v13;
        v20 = v14;
        if ( v14 )
        {
          if ( PFFOBJ::bInPrivatePFT((PFFOBJ *)&v20) )
          {
            *v8 |= 1u;
            if ( a7 )
              *a7 = *(_DWORD *)(*(_DWORD *)v15 + 88);
          }
          if ( (*(_BYTE *)(v14 + 32) & 0x10) != 0 )
            *v8 |= 4u;
          if ( *(_DWORD *)(v14 + 24) )
          {
            *v8 |= 2u;
            if ( a3 )
              memcpy(a3, *(const void **)(v14 + 24), *(_DWORD *)(v14 + 28));
            if ( a4 )
              *a4 = *(_DWORD *)(v14 + 28);
            if ( a5 )
            {
              *a5 = *(_DWORD *)(v14 + 84);
              *a5 -= ComputeFileviewCheckSum(*(_DWORD **)(v14 + 24), *(_DWORD *)(v14 + 28));
            }
          }
          else
          {
            v16 = a3;
            if ( a3 )
            {
              v17 = 72;
              do
              {
                *v16++ = 0;
                --v17;
              }
              while ( v17 );
            }
            if ( a4 )
              *a4 = 0;
            if ( a5 )
              *a5 = 0;
          }
          v9 = 1;
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v19);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
  }
  return v9;
}
