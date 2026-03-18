/*
 * XREFs of ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B5E1C
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1C02B6600 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreCheckBitmapBits(HDC a1, void *a2, struct _DEVBITMAPINFO *a3, void *a4, unsigned __int8 *a5)
{
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdi
  _QWORD v13[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v14; // [rsp+78h] [rbp-21h] BYREF
  char v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+84h] [rbp-15h]
  __int128 v17; // [rsp+88h] [rbp-11h] BYREF
  __int64 v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+A0h] [rbp+7h]
  _QWORD v20[2]; // [rsp+A8h] [rbp+Fh] BYREF
  __int16 v21; // [rsp+B8h] [rbp+1Fh]
  __int64 v22; // [rsp+C0h] [rbp+27h]
  __int64 v23; // [rsp+C8h] [rbp+2Fh]
  __int64 v24; // [rsp+D0h] [rbp+37h]

  v13[1] = 0LL;
  v8 = 0;
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v20[1] = 0LL;
    v17 = 0LL;
    v21 = 256;
    v18 = 0LL;
    v19 = 0;
    v20[0] = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v17, (struct XDCOBJ *)v13, 0) )
    {
      v10 = *(_QWORD *)(v13[0] + 48LL);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 3216) )
        {
          LOBYTE(v9) = 14;
          v11 = HmgShareLockCheck(a2, v9);
          if ( v11 )
          {
            v14 = 0LL;
            v15 = 0;
            v16 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v14, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v14 )
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v10 + 3216))(
                     *(_QWORD *)(v10 + 1800),
                     *(_QWORD *)(v11 + 24),
                     v14 + 24,
                     a5);
            SURFMEM::~SURFMEM((SURFMEM *)&v14);
            DEC_SHARE_REF_CNT(v11);
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v17);
    if ( v20[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v20);
  }
  return v8;
}
