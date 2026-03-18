/*
 * XREFs of _NtGdiAddFontResourceW@24 @ 0xDC320
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     _GreAddFontResourceWInternal@28 @ 0xDC42C (_GreAddFontResourceWInternal@28.c)
 *     ?bCheckAndCapThePath@@YGHPAGPBGKK@Z @ 0xDEE26 (-bCheckAndCapThePath@@YGHPAGPBGKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ProbeAndReadDesignVector@@YGKPAUtagDESIGNVECTOR@@0@Z @ 0x211FC1 (-ProbeAndReadDesignVector@@YGKPAUtagDESIGNVECTOR@@0@Z.c)
 */

int __stdcall NtGdiAddFontResourceW(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  unsigned __int16 *v6; // edi
  int v7; // esi
  struct tagDESIGNVECTOR *v9; // [esp+0h] [ebp-12Ch]
  struct tagDESIGNVECTOR *v10; // [esp+4h] [ebp-128h]
  int v11; // [esp+18h] [ebp-114h]
  struct tagDESIGNVECTOR *v12; // [esp+24h] [ebp-108h]
  _DWORD v13[18]; // [esp+28h] [ebp-104h] BYREF
  _BYTE v14[164]; // [esp+70h] [ebp-BCh] BYREF
  CPPEH_RECORD ms_exc; // [esp+114h] [ebp-18h]

  v12 = a6;
  v6 = 0;
  v7 = 0;
  memset(v13, 0, sizeof(v13));
  v11 = 0;
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0
    || a4 == 0x80000000 && PsGetCurrentProcess() != _gpepCSRSS )
  {
    return 0;
  }
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a2 > 1 )
  {
    if ( (unsigned int)a2 > 0x50 )
    {
      if ( (unsigned int)a2 > 0x414 )
        v7 = 0;
      else
        v6 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * (_DWORD)a2);
    }
    else
    {
      v6 = (unsigned __int16 *)v14;
    }
    if ( v6 )
      v7 = bCheckAndCapThePath(a2, a3, (unsigned int)v9, (unsigned int)v10);
  }
  if ( v7 && a6 )
  {
    if ( ProbeAndReadDesignVector(v9, v10) )
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
    v7 = GreAddFontResourceWInternal(v6, (unsigned int)a3, a4, a5, v12, v11);
  if ( v6 )
  {
    if ( v6 != (unsigned __int16 *)v14 )
      FreeTmpBuffer(v6);
  }
  return v7;
}
