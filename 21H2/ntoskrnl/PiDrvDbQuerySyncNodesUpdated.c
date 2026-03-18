/*
 * XREFs of PiDrvDbQuerySyncNodesUpdated @ 0x14095CDBC
 * Callers:
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     _RegRtlSetValue @ 0x1406D5A30 (_RegRtlSetValue.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbQuerySyncNodesUpdated(char a1, char *a2)
{
  char v3; // r12
  __int64 v5; // rsi
  int PersistedStateLocation; // eax
  int Tree; // ebx
  void *Pool2; // rdi
  __int64 i; // rsi
  const WCHAR *v11; // rdx
  int v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+64h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h]
  __int64 Source2; // [rsp+70h] [rbp-10h] BYREF
  __int64 Source1; // [rsp+78h] [rbp-8h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+50h] BYREF
  int v18; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  Handle = 0LL;
  Source1 = 0LL;
  Source2 = 0LL;
  v5 = 520LL;
  v18 = 0;
  v12 = 0;
  v13 = 0;
  LODWORD(v17) = 0;
  while ( 1 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v5, 1650749520LL);
    if ( !Pool2 )
    {
      Tree = -1073741670;
      goto LABEL_7;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"DriverDatabaseUpdates",
                               0LL,
                               L"\\Registry\\Machine\\System\\DriverDatabase\\Updates",
                               0,
                               Pool2,
                               v5,
                               (unsigned int *)&v17);
    Tree = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    if ( (unsigned int)v17 <= (unsigned int)v5 )
    {
      Tree = -1073741595;
      goto LABEL_7;
    }
    v5 = (unsigned int)v17;
  }
  if ( PersistedStateLocation >= 0 )
  {
    Tree = PnpCtxRegCreateTree(0LL);
    if ( Tree >= 0 )
    {
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 4) == 0 || !PnpBootMode )
        {
          if ( (int)PnpGetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(i + 24),
                      7LL,
                      *(_QWORD *)(i + 72),
                      0LL,
                      (__int64)DEVPKEY_DriverDatabase_LastUpdateDate,
                      (__int64)&v18,
                      (__int64)&Source1,
                      8,
                      (__int64)&v12,
                      0) >= 0
            && v18 == 16
            && v12 == 8 )
          {
            v11 = *(const WCHAR **)(i + 24);
            LODWORD(v17) = 8;
            Tree = RegRtlQueryValue(Handle, v11, &v13, &Source2, (unsigned int *)&v17);
            if ( Tree < 0 || v13 != 3 || (_DWORD)v17 != 8 )
            {
              Tree = 0;
              Source2 = 0LL;
            }
            if ( RtlCompareMemory(&Source1, &Source2, 8uLL) != 8 )
            {
              v3 = 1;
              if ( !a1 )
                break;
              Tree = RegRtlSetValue(Handle, *(const WCHAR **)(i + 24), 3u, &Source1, 8u);
              if ( Tree < 0 )
                goto LABEL_7;
            }
          }
          else
          {
            Tree = 0;
          }
        }
      }
      if ( a2 )
        *a2 = v3;
    }
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Tree;
}
