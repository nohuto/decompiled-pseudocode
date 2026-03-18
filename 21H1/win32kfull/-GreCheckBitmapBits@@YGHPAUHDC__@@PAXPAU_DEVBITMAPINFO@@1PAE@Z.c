/*
 * XREFs of ?GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z @ 0x21B680
 * Callers:
 *     _NtGdiCheckBitmapBits@32 @ 0x21BE51 (_NtGdiCheckBitmapBits@32.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 */

int __userpurge GreCheckBitmapBits@<eax>(
        int a1@<edx>,
        HDC a2@<ecx>,
        struct _DEVBITMAPINFO *a3,
        void *a4,
        struct _DEVBITMAPINFO *a5,
        void *a6,
        unsigned __int8 *a7)
{
  int v7; // ebx
  DEVLOCKOBJ *v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // edi
  struct _SURFOBJ *v13; // eax
  _DWORD v15[3]; // [esp+34h] [ebp-48h] BYREF
  SURFACE *v16; // [esp+40h] [ebp-3Ch] BYREF
  char v17; // [esp+44h] [ebp-38h]
  int v18; // [esp+48h] [ebp-34h]
  _BYTE v19[20]; // [esp+4Ch] [ebp-30h] BYREF
  _DWORD v20[3]; // [esp+60h] [ebp-1Ch] BYREF
  __int16 v21; // [esp+6Ch] [ebp-10h]

  v7 = 0;
  v15[1] = 0;
  v15[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v15, a2);
  if ( v15[0] )
  {
    memset(v20, 0, sizeof(v20));
    v21 = 256;
    DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v19);
    if ( DEVLOCKOBJ::bLock(v9, (struct XDCOBJ *)v15, 0) )
    {
      v11 = *(_DWORD *)(v15[0] + 36);
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 2164) )
        {
          LOBYTE(v10) = 14;
          v12 = HmgShareLockCheck(a1, v10);
          if ( v12 )
          {
            v16 = 0;
            v17 = 0;
            v18 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v16, a3, a4, 0, 0, 0, 0, 0, 1, 0, 0);
            if ( v16 )
            {
              v13 = SURFACE::pSurfobj(v16);
              v7 = (*(int (__stdcall **)(_DWORD, _DWORD, struct _SURFOBJ *, struct _DEVBITMAPINFO *))(v11 + 2164))(
                     *(_DWORD *)(v11 + 1108),
                     *(_DWORD *)(v12 + 16),
                     v13,
                     a5);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v16);
            DEC_SHARE_REF_CNT(v12);
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    if ( v20[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v20);
  }
  return v7;
}
