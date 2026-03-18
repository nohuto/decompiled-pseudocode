/*
 * XREFs of _GreDrvReconnect@8 @ 0x2260D5
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     ??1SEMOBJEX@@QAE@XZ @ 0xD2964 (--1SEMOBJEX@@QAE@XZ.c)
 *     ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC (--0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 */

int __thiscall GreDrvReconnect(_DWORD *this)
{
  int v1; // edi
  void (__fastcall *v2)(_DWORD); // edx
  void (__stdcall *v3)(const struct HSEMAPHORE__ *, _DWORD, int); // ebx
  struct _LDEV *v4; // esi
  struct PDEV *i; // ebx
  int v6; // eax
  void (__stdcall *v7)(_DWORD, struct HSEMAPHORE__ *, _DWORD, _DWORD, _DWORD); // edx
  HSEMAPHORE v9; // [esp+28h] [ebp-C8h]
  HSEMAPHORE v10; // [esp+28h] [ebp-C8h]
  unsigned int v11; // [esp+2Ch] [ebp-C4h]
  unsigned int v12; // [esp+2Ch] [ebp-C4h]
  HSEMAPHORE v13; // [esp+30h] [ebp-C0h]
  HSEMAPHORE v14; // [esp+30h] [ebp-C0h]
  HSEMAPHORE v15; // [esp+30h] [ebp-C0h]
  unsigned int v16; // [esp+34h] [ebp-BCh]
  unsigned int v17; // [esp+34h] [ebp-BCh]
  unsigned int v18; // [esp+34h] [ebp-BCh]
  int v19; // [esp+34h] [ebp-BCh]
  struct PDEV *v20; // [esp+48h] [ebp-A8h] BYREF
  void (__thiscall *v21)(_DWORD); // [esp+4Ch] [ebp-A4h]
  void (__stdcall *v22)(const struct HSEMAPHORE__ *, _DWORD, int); // [esp+50h] [ebp-A0h]
  int v23; // [esp+54h] [ebp-9Ch]
  int v24; // [esp+58h] [ebp-98h]
  void (__stdcall *v25)(const struct HSEMAPHORE__ *, _DWORD); // [esp+5Ch] [ebp-94h]
  void (__thiscall *v26)(_DWORD); // [esp+60h] [ebp-90h]
  _DWORD *v27; // [esp+64h] [ebp-8Ch]
  void (__thiscall *v28)(PDEVOBJ *__hidden, struct _SURFOBJ *, struct _RECTL *, unsigned int); // [esp+68h] [ebp-88h]
  struct HSEMAPHORE__ v29; // [esp+6Ch] [ebp-84h] BYREF
  _BYTE v30[64]; // [esp+70h] [ebp-80h] BYREF
  _BYTE v31[64]; // [esp+B0h] [ebp-40h] BYREF

  v27 = this;
  v1 = 0;
  v24 = 1;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v31,
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
    v9,
    v11,
    v13,
    v16);
  v2 = (void (__fastcall *)(_DWORD))GreAcquireSemaphore;
  v3 = (void (__stdcall *)(const struct HSEMAPHORE__ *, _DWORD, int))EtwTraceGreLockAcquireSemaphoreExclusive;
  v21 = (void (__thiscall *)(_DWORD))GreAcquireSemaphore;
  v4 = gpldevDrivers;
  v26 = (void (__thiscall *)(_DWORD))GreReleaseSemaphoreInternal;
  v28 = PDEVOBJ::vSync;
  v22 = (void (__stdcall *)(const struct HSEMAPHORE__ *, _DWORD, int))EtwTraceGreLockAcquireSemaphoreExclusive;
  v25 = (void (__stdcall *)(const struct HSEMAPHORE__ *, _DWORD))EtwTraceGreLockReleaseSemaphore;
  do
  {
    if ( !v4 )
      break;
    v23 = 0;
    if ( *((_DWORD *)v4 + 2) && *((_DWORD *)v4 + 3) == 1 && *(_DWORD *)(*((_DWORD *)v4 + 114) + 316) )
    {
      v2(_ghsemDriverMgmt);
      v3(&stru_100BA6, _ghsemDriverMgmt, 13);
      for ( i = gppdevList; v1 >= 0 && i && *((struct _LDEV **)i + 276) == v4; i = *(struct PDEV **)i )
      {
        v20 = i;
        if ( (*((_BYTE *)i + 24) & 1) != 0 )
        {
          v25(&stru_100BA6, _ghsemDriverMgmt);
          v26(_ghsemDriverMgmt);
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v30,
            *((HSEMAPHORE *)v20 + 10),
            4u,
            _ghsemSprite,
            5u,
            _ghsemHT,
            6u,
            *((HSEMAPHORE *)v20 + 8),
            0xBu,
            0,
            0,
            0,
            0,
            v10,
            v12,
            v14,
            v17);
          v28((PDEVOBJ *)&v20, *((_DWORD *)v20 + 455) != 0 ? (struct _SURFOBJ *)(*((_DWORD *)v20 + 455) + 16) : 0, 0, 0);
          if ( !v23 )
          {
            v24 = (*(int (__stdcall **)(_DWORD, _DWORD))(*((_DWORD *)v4 + 114) + 316))(v27[4], v27[3]);
            v23 = 1;
            if ( v24 )
            {
              *((_DWORD *)v4 + 9) = 2;
            }
            else
            {
              *((_DWORD *)v4 + 9) = 5;
              v1 = -2143354874;
            }
          }
          v6 = *((_DWORD *)v20 + 278);
          v29.unused = v6;
          if ( v24 == 1 && (*(_DWORD *)(v6 + 16) & 0x800) != 0 )
          {
            v7 = (void (__stdcall *)(_DWORD, struct HSEMAPHORE__ *, _DWORD, _DWORD, _DWORD))*((_DWORD *)v20 + 497);
            if ( v7 )
              v7(*((_DWORD *)v20 + 277), &v29, 0, 0, *(_DWORD *)(v6 + 20));
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v30);
          v21(_ghsemDriverMgmt);
          v22(&stru_100BA6, _ghsemDriverMgmt, 13);
        }
      }
      v25(&stru_100BA6, _ghsemDriverMgmt);
      v26(_ghsemDriverMgmt);
      if ( !v23 && v1 >= 0 )
      {
        SEMOBJEX::SEMOBJEX(
          (SEMOBJEX *)v30,
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
          v10,
          v12,
          v15,
          v18);
        v24 = (*(int (__stdcall **)(_DWORD, _DWORD))(*((_DWORD *)v4 + 114) + 316))(v27[4], v27[3]);
        if ( v24 )
        {
          v19 = 2;
        }
        else
        {
          v1 = -2143354873;
          v19 = 5;
        }
        *((_DWORD *)v4 + 9) = v19;
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v30);
      }
      v2 = (void (__fastcall *)(_DWORD))v21;
      v3 = v22;
    }
    v4 = *(struct _LDEV **)v4;
  }
  while ( v1 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v31);
  return v1;
}
