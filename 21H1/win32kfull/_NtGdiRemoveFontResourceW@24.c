/*
 * XREFs of _NtGdiRemoveFontResourceW@24 @ 0x213CF7
 * Callers:
 *     <none>
 * Callees:
 *     ?bCheckAndCapThePath@@YGHPAGPBGKK@Z @ 0xDEE26 (-bCheckAndCapThePath@@YGHPAGPBGKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreRemoveFontResourceW@28 @ 0x1EBD13 (_GreRemoveFontResourceW@28.c)
 *     ?ProbeAndReadDesignVector@@YGKPAUtagDESIGNVECTOR@@0@Z @ 0x211FC1 (-ProbeAndReadDesignVector@@YGKPAUtagDESIGNVECTOR@@0@Z.c)
 */

int __stdcall NtGdiRemoveFontResourceW(
        WCHAR *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        struct _FONTHASH **a5,
        ULONG a6)
{
  WCHAR *v6; // esi
  int v7; // edi
  unsigned int v9; // [esp+0h] [ebp-12Ch]
  unsigned int v10; // [esp+4h] [ebp-128h]
  unsigned int v11; // [esp+18h] [ebp-114h]
  struct tagDESIGNVECTOR *v12; // [esp+24h] [ebp-108h]
  _DWORD v13[18]; // [esp+28h] [ebp-104h] BYREF
  _BYTE v14[164]; // [esp+70h] [ebp-BCh] BYREF
  CPPEH_RECORD ms_exc; // [esp+114h] [ebp-18h]

  v12 = (struct tagDESIGNVECTOR *)a6;
  v6 = 0;
  v7 = 0;
  memset(v13, 0, sizeof(v13));
  v11 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v6 = (WCHAR *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v6 = (WCHAR *)v14;
    }
    if ( v6 )
      v7 = bCheckAndCapThePath(a1, v6, a2, a3, v9, v10);
  }
  if ( v7 && a6 )
  {
    if ( ProbeAndReadDesignVector(v13, a6) )
    {
      if ( v13[1] )
      {
        v12 = (struct tagDESIGNVECTOR *)v13;
        v11 = 4 * v13[1] + 8;
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( v7 )
    v7 = GreRemoveFontResourceW(v6, a2, (unsigned int)a3, a4, a5, v12, v11);
  if ( v6 && v6 != (WCHAR *)v14 )
    FreeTmpBuffer(v6);
  return v7;
}
