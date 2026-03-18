/*
 * XREFs of _GreDrvDisconnect@4 @ 0xD28A4
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _xxxRemotePassthruEnable@0 @ 0x188512 (_xxxRemotePassthruEnable@0.c)
 * Callees:
 *     ??1SEMOBJEX@@QAE@XZ @ 0xD2964 (--1SEMOBJEX@@QAE@XZ.c)
 *     ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC (--0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 */

int __thiscall GreDrvDisconnect(_DWORD *this)
{
  int v1; // edi
  void (__fastcall *v2)(_DWORD); // edx
  void (__stdcall *v3)(const struct HSEMAPHORE__ *, _DWORD, int); // ebx
  struct _LDEV *v4; // esi
  struct PDEV *v6; // eax
  struct PDEV *i; // ebx
  int v8; // eax
  struct _LDEV **v9; // eax
  HSEMAPHORE v10; // [esp+18h] [ebp-D0h]
  HSEMAPHORE v11; // [esp+18h] [ebp-D0h]
  unsigned int v12; // [esp+1Ch] [ebp-CCh]
  unsigned int v13; // [esp+1Ch] [ebp-CCh]
  HSEMAPHORE v14; // [esp+20h] [ebp-C8h]
  HSEMAPHORE v15; // [esp+20h] [ebp-C8h]
  HSEMAPHORE v16; // [esp+20h] [ebp-C8h]
  unsigned int v17; // [esp+24h] [ebp-C4h]
  unsigned int v18; // [esp+24h] [ebp-C4h]
  unsigned int v19; // [esp+24h] [ebp-C4h]
  int v20; // [esp+24h] [ebp-C4h]
  struct _LDEV **v21; // [esp+34h] [ebp-B4h] BYREF
  void (__thiscall *v22)(_DWORD); // [esp+38h] [ebp-B0h]
  void (__stdcall *v23)(const struct HSEMAPHORE__ *, _DWORD, int); // [esp+3Ch] [ebp-ACh]
  int v24; // [esp+40h] [ebp-A8h]
  struct PDEV *v25; // [esp+44h] [ebp-A4h]
  void (__stdcall *v26)(const struct HSEMAPHORE__ *, _DWORD); // [esp+48h] [ebp-A0h]
  void (__thiscall *v27)(_DWORD); // [esp+4Ch] [ebp-9Ch]
  void (__thiscall *v28)(struct PDEV **, _DWORD); // [esp+50h] [ebp-98h]
  _DWORD *v29; // [esp+54h] [ebp-94h]
  void (__thiscall *v30)(PDEVOBJ *__hidden); // [esp+58h] [ebp-90h]
  struct PDEV *v31; // [esp+5Ch] [ebp-8Ch] BYREF
  void (__thiscall *v32)(PDEVOBJ *__hidden, struct _SURFOBJ *, struct _RECTL *, unsigned int); // [esp+60h] [ebp-88h]
  struct PDEV *v33; // [esp+64h] [ebp-84h] BYREF
  _BYTE v34[64]; // [esp+68h] [ebp-80h] BYREF
  _BYTE v35[64]; // [esp+A8h] [ebp-40h] BYREF

  v29 = this;
  v1 = 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v35,
    _ghsemDynamicModeChange,
    1u,
    _ghsemGreLock,
    2u,
    _ghsemDCVisRgn,
    3u,
    0,
    0,
    0,
    0,
    0,
    0,
    v10,
    v12,
    v14,
    v17);
  v2 = (void (__fastcall *)(_DWORD))GreAcquireSemaphore;
  v3 = (void (__stdcall *)(const struct HSEMAPHORE__ *, _DWORD, int))EtwTraceGreLockAcquireSemaphoreExclusive;
  v22 = (void (__thiscall *)(_DWORD))GreAcquireSemaphore;
  v4 = gpldevDrivers;
  v30 = PDEVOBJ::vReferencePdev;
  v27 = (void (__thiscall *)(_DWORD))GreReleaseSemaphoreInternal;
  v28 = (void (__thiscall *)(struct PDEV **, _DWORD))PDEVOBJ::vUnreferencePdev;
  v32 = PDEVOBJ::vSync;
  v23 = (void (__stdcall *)(const struct HSEMAPHORE__ *, _DWORD, int))EtwTraceGreLockAcquireSemaphoreExclusive;
  v26 = (void (__stdcall *)(const struct HSEMAPHORE__ *, _DWORD))EtwTraceGreLockReleaseSemaphore;
  do
  {
    if ( !v4 )
      break;
    v24 = 0;
    if ( *((_DWORD *)v4 + 2) && *((_DWORD *)v4 + 3) == 1 && *(_DWORD *)(*((_DWORD *)v4 + 114) + 312) )
    {
      v2(_ghsemDriverMgmt);
      v3(&stru_100BA6, _ghsemDriverMgmt, 13);
      v6 = gppdevList;
      for ( i = 0; ; i = v25 )
      {
        v9 = *(struct _LDEV ***)v6;
        v25 = (struct PDEV *)v9;
        if ( v1 < 0 || !v9 || v9[276] != v4 )
          break;
        v21 = v9;
        v30((PDEVOBJ *)&v21);
        v26(&stru_100BA6, _ghsemDriverMgmt);
        v27(_ghsemDriverMgmt);
        if ( i )
        {
          v31 = i;
          v28(&v31, 0);
        }
        if ( v21 && ((_BYTE)v21[6] & 1) != 0 )
        {
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v34,
            (HSEMAPHORE)v21[10],
            4u,
            _ghsemSprite,
            5u,
            _ghsemHT,
            6u,
            (HSEMAPHORE)v21[8],
            0xBu,
            0,
            0,
            0,
            0,
            v11,
            v13,
            v15,
            v18);
          v32((PDEVOBJ *)&v21, v21[455] != 0 ? (struct _SURFOBJ *)((char *)v21[455] + 16) : 0, 0, 0);
          if ( !v24 )
          {
            v8 = *((_DWORD *)v4 + 114);
            v24 = 1;
            if ( (*(int (__stdcall **)(_DWORD, _DWORD))(v8 + 312))(v29[4], v29[3]) )
            {
              *((_DWORD *)v4 + 9) = 3;
            }
            else
            {
              *((_DWORD *)v4 + 9) = 6;
              v1 = -2143354873;
            }
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v34);
        }
        v22(_ghsemDriverMgmt);
        v23(&stru_100BA6, _ghsemDriverMgmt, 13);
        v6 = v25;
      }
      v26(&stru_100BA6, _ghsemDriverMgmt);
      v27(_ghsemDriverMgmt);
      if ( i )
      {
        v33 = i;
        v28(&v33, 0);
      }
      if ( !v24 && v1 >= 0 )
      {
        SEMOBJEX::SEMOBJEX(
          (SEMOBJEX *)v34,
          _ghsemSprite,
          5u,
          _ghsemHT,
          6u,
          _ghsemDriverMgmt,
          0xDu,
          0,
          0,
          0,
          0,
          0,
          0,
          v11,
          v13,
          v16,
          v19);
        if ( (*(int (__stdcall **)(_DWORD, _DWORD))(*((_DWORD *)v4 + 114) + 312))(v29[4], v29[3]) )
        {
          v20 = 3;
        }
        else
        {
          v1 = -2143354873;
          v20 = 6;
        }
        *((_DWORD *)v4 + 9) = v20;
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v34);
      }
      v2 = (void (__fastcall *)(_DWORD))v22;
      v3 = v23;
    }
    v4 = *(struct _LDEV **)v4;
  }
  while ( v1 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v35);
  return v1;
}
