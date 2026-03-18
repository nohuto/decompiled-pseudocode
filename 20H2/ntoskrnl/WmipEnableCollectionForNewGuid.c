/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x140750CFC
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140750B50 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1407BFBC8 (WmipUpdateDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     WmipUnreferenceEntry @ 0x140647C78 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x140667D70 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x14075074C (WmipSendWmiIrp.c)
 *     WmipDoDisableRequest @ 0x14077683C (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x14077DBB4 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_QWORD *a1, __int64 a2)
{
  _QWORD *GEByGuid; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v12[6]; // [rsp+40h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        *((_DWORD *)v5 + 4) |= 2u;
        KeReleaseMutex(&WmipSMMutex, 0);
        v7 = *(_QWORD *)(a2 + 64);
        v12[5].QuadPart = 0LL;
        memset((char *)&v12[0].QuadPart + 4, 0, 20);
        v12[0].LowPart = 48;
        *(_OWORD *)&v12[3].LowPart = *(_OWORD *)a1;
        WmipSendWmiIrp(4u, *(_DWORD *)(v7 + 56), (UNICODE_STRING *)&v12[3], 0x30u, (__int64)v12, &v11);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *((_DWORD *)v5 + 22) )
        {
          *((_DWORD *)v5 + 4) &= ~2u;
        }
        else
        {
          LOBYTE(v8) = 1;
          WmipDoDisableRequest(v5, v8);
        }
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v9 = *(_QWORD *)(a2 + 64);
      v12[5].QuadPart = 0LL;
      memset((char *)&v12[0].QuadPart + 4, 0, 20);
      v12[0].LowPart = 48;
      *(_OWORD *)&v12[3].LowPart = *(_OWORD *)a1;
      WmipSendWmiIrp(6u, *(_DWORD *)(v9 + 56), (UNICODE_STRING *)&v12[3], 0x30u, (__int64)v12, &v11);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
