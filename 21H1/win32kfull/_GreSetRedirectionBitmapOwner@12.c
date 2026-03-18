/*
 * XREFs of _GreSetRedirectionBitmapOwner@12 @ 0x20A60
 * Callers:
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     _ChangeRedirectionBitmapOwner@8 @ 0x153681 (_ChangeRedirectionBitmapOwner@8.c)
 * Callees:
 *     <none>
 */

int __fastcall GreSetRedirectionBitmapOwner(int a1, int a2, int a3)
{
  int v3; // ebx
  int v6; // edx
  SURFACE *v7; // eax
  SURFACE *v8; // esi
  int v9; // edx
  int v11; // [esp+Ch] [ebp-8h] BYREF
  SURFACE *v12; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  if ( GreSetBitmapOwner(a1, 0) )
  {
    LOBYTE(v6) = 5;
    v7 = (SURFACE *)HmgShareLockCheck(a1, v6);
    v12 = v7;
    if ( v7 )
    {
      if ( (*((_DWORD *)v7 + 18) & 0x800) != 0 )
      {
        v8 = 0;
        if ( v7 != (SURFACE *)-16 )
        {
          v9 = *((_DWORD *)v7 + 18);
          if ( (v9 & 0x80004000) != 0 && (v9 & 0x200) == 0 )
          {
            v8 = v7;
            GreLockDisplayDevice(*((_DWORD *)v7 + 7));
            v7 = v12;
          }
        }
        W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v7 + 168));
        v11 = *((_DWORD *)v12 + 7);
        PDEVOBJ::vSync((PDEVOBJ *)&v11, (struct _SURFOBJ *)((char *)v12 + 16), 0, 2u);
        if ( a2 != -1 )
          *((_DWORD *)v12 + 113) = a2;
        *((_DWORD *)v12 + 114) = a3;
        W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v12 + 168));
        if ( a3 && (unsigned int)SURFACE::Map(v12, &v12, 0) <= 1 )
          SURFACE::bUnMap(v12, &v12, 0);
        v3 = 1;
        if ( v8 )
          GreUnlockDisplayDevice(*((_DWORD *)v8 + 7));
        v7 = v12;
      }
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
    }
  }
  return v3;
}
