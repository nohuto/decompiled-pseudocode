/*
 * XREFs of PiDrvDbSetupNodes @ 0x1407A37EC
 * Callers:
 *     PiDrvDbInit @ 0x1407A370C (PiDrvDbInit.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7FC4 (PiDrvDbSetupNodeHive.c)
 */

__int64 __fastcall PiDrvDbSetupNodes(int a1)
{
  int ObjectProperty; // edi
  const wchar_t *v3; // rbp
  __int64 i; // rbx
  _DWORD *v5; // r14
  int v7; // eax
  int v8; // [rsp+80h] [rbp+8h] BYREF
  int v9; // [rsp+88h] [rbp+10h] BYREF

  ObjectProperty = 0;
  v8 = 0;
  v9 = 0;
  if ( !a1 )
  {
    v3 = L"SYSTEM";
LABEL_3:
    for ( i = PiDrvDbNodeList; ; i = *(_QWORD *)i )
    {
      if ( (__int64 *)i == &PiDrvDbNodeList )
        return (unsigned int)ObjectProperty;
      if ( (*(_DWORD *)(i + 64) & 4) == 0 )
        break;
LABEL_5:
      ;
    }
    if ( !a1 )
    {
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(i + 24),
                  7LL,
                  *(_QWORD *)(i + 72),
                  0LL,
                  (__int64)DEVPKEY_DriverDatabase_SetupOptions,
                  (__int64)&v8,
                  i + 492,
                  4,
                  (__int64)&v9,
                  0) < 0
        || v8 != 7
        || v9 != 4 )
      {
        *(_DWORD *)(i + 492) = 51;
      }
      v5 = (_DWORD *)(i + 496);
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         *(_QWORD *)(i + 24),
                         7LL,
                         *(_QWORD *)(i + 72),
                         0LL,
                         (__int64)DEVPKEY_DriverDatabase_SetupStatus,
                         (__int64)&v8,
                         i + 496,
                         4,
                         (__int64)&v9,
                         0);
      if ( ObjectProperty >= 0 && v8 == 24 && v9 == 4 )
      {
        if ( *v5 != 259 )
          goto LABEL_4;
      }
      else
      {
        ObjectProperty = 0;
      }
      *v5 = 0;
      *(_DWORD *)(i + 64) |= 0x20u;
    }
LABEL_4:
    if ( (*(_DWORD *)(i + 64) & 0x20) != 0 )
    {
      v7 = PiDrvDbSetupNodeHive(i, v3);
      ObjectProperty = v7;
      if ( v7 < 0 )
      {
        if ( *(int *)(i + 496) >= 0 )
          *(_DWORD *)(i + 496) = v7;
        ObjectProperty = 0;
      }
      if ( a1 == 2 )
      {
        PnpSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(i + 24),
          7u,
          *(_QWORD *)(i + 72),
          0LL,
          (__int64)DEVPKEY_DriverDatabase_SetupStatus,
          24,
          i + 496,
          4u,
          0);
        *(_DWORD *)(i + 64) &= ~0x20u;
      }
    }
    goto LABEL_5;
  }
  if ( a1 == 2 )
  {
    v3 = L"SOFTWARE";
    goto LABEL_3;
  }
  return (unsigned int)ObjectProperty;
}
