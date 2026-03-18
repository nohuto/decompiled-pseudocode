/*
 * XREFs of ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0351D08
 * Callers:
 *     NtDxgkVailConnect @ 0x1C0353FA0 (NtDxgkVailConnect.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C0351404 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C03518D8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailGuestConnect(DXGSESSIONDATA *this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  __int64 v4; // rax
  DXGVAILGUESTOBJECT *v5; // rdi
  __int64 v6; // rdx
  const struct _GUID *v7; // r8
  int v8; // eax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( *((_QWORD *)this + 2370) )
  {
    ++*((_DWORD *)this + 4738);
  }
  else
  {
    v4 = operator new[](0x60uLL, 0x4B677844u, 256LL, v3);
    v5 = (DXGVAILGUESTOBJECT *)v4;
    if ( v4 )
    {
      *(_QWORD *)v4 = this;
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_DWORD *)(v4 + 48) = 0;
      *(_DWORD *)(v4 + 52) = -1;
      *(_DWORD *)(v4 + 56) = 57;
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_QWORD *)(v4 + 80) = 0LL;
      *(_QWORD *)(v4 + 88) = 0LL;
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v4 + 64));
      *((_QWORD *)this + 2370) = v5;
      v8 = DXGVAILGUESTOBJECT::Initialize(v5, v6, v7);
      v2 = v8;
      if ( v8 >= 0 )
      {
        *((_DWORD *)this + 4738) = 1;
      }
      else
      {
        WdLogSingleEntry1(3LL, v8);
        DXGVAILGUESTOBJECT::ReleaseReference(*((DXGVAILGUESTOBJECT **)this + 2370));
        *((_QWORD *)this + 2370) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)this + 2370) = 0LL;
      v2 = -1073741801;
      WdLogSingleEntry1(3LL, -1073741801LL);
    }
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v2;
}
