/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x1C0024A9C
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01F3488 (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 *     DpIndicateConnectorChange @ 0x1C0025880 (DpIndicateConnectorChange.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C0060760 (DpiFdoInitializeConnectionChangePackage.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C00608A8 (DpiFdoQueueConnectionChangePackage.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C01F35DC (DpiPdoIsChildConnected.c)
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x1C039D12C (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v3; // rcx
  int v5; // esi
  int v6; // esi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  int IsChildConnected; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // esi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  int ConnectionChanges; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-50h]
  int v24; // [rsp+28h] [rbp-48h]
  _QWORD *v25; // [rsp+40h] [rbp-30h]
  _QWORD *v26; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  char v28; // [rsp+B8h] [rbp+48h] BYREF
  char v29; // [rsp+C0h] [rbp+50h] BYREF
  char v30; // [rsp+C8h] [rbp+58h]

  v3 = *a2;
  v5 = *a2;
  v28 = 0;
  v6 = v5 & 0xF000000;
  v29 = 0;
  v7 = 0;
  if ( ((v6 - 50331648) & 0xFEFFFFFF) != 0 )
  {
    if ( v6 == 0x2000000 )
    {
      v30 = 0;
      v8 = *(_QWORD **)(a1 + 3464);
      if ( v8 != (_QWORD *)(a1 + 3464) )
      {
        while ( 1 )
        {
          v9 = v8;
          v25 = v8;
          v26 = (_QWORD *)*v8;
          IsChildConnected = DpiPdoIsChildConnected(
                               *(_QWORD *)(a1 + 24),
                               *((_DWORD *)v8 - 2),
                               *((_BYTE *)a2 + 17),
                               (*a2 & 0x10000000) != 0,
                               (__int64)&v28,
                               (__int64)&v29);
          v13 = IsChildConnected;
          if ( IsChildConnected < 0 )
            break;
          if ( IsChildConnected != 1075708975 && IsChildConnected != 1075708988 )
            goto LABEL_58;
          if ( (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
          {
            v20 = DmmSetTargetForceableState(*(void *const *)(a1 + 3896), *((_DWORD *)v25 - 2), v13 == 1075708975);
            if ( v20 < 0 )
              WdLogSingleEntry3(2LL, v20, v13 == 1075708975, 0LL);
            DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
            v9 = v25;
          }
          if ( v13 != 1075708975 )
          {
LABEL_58:
            if ( v29 || v28 && *((_BYTE *)a2 + 16) )
            {
              v21 = DpiFdoInitializeConnectionChangePackage(
                      *((_QWORD *)a2 + 1),
                      *((_DWORD *)v9 - 2),
                      v28 != 0 ? 10 : 8,
                      -2,
                      *((_BYTE *)a2 + 16),
                      0,
                      0,
                      1);
              if ( !v21 )
              {
                v13 = -1073741670;
LABEL_53:
                v22 = v13;
                goto LABEL_55;
              }
              v13 = DpiFdoQueueConnectionChangePackage(a1, v21, 0LL);
              if ( v13 < 0 )
                goto LABEL_53;
              v30 = 1;
            }
          }
          v8 = v26;
          if ( v26 == (_QWORD *)(a1 + 3464) )
            goto LABEL_10;
        }
        v22 = IsChildConnected;
LABEL_55:
        WdLogSingleEntry1(2LL, v22);
LABEL_10:
        v7 = v13;
        if ( v13 < 0 )
          goto LABEL_41;
        if ( !v30 )
          return v7;
        goto LABEL_37;
      }
    }
    else
    {
      if ( v6 != 0x1000000 )
      {
        v7 = -1073741811;
        WdLogSingleEntry2(2LL, (v3 >> 24) & 0xF, -1073741811LL);
        return v7;
      }
      v15 = DpiPdoIsChildConnected(
              *(_QWORD *)(a1 + 24),
              v3 & 0xFFFFFF,
              *((_BYTE *)a2 + 17),
              (v3 & 0x10000000) != 0,
              (__int64)&v28,
              (__int64)&v29);
      v7 = v15;
      if ( v15 < 0 )
      {
        v16 = v15;
        goto LABEL_40;
      }
      if ( (v15 == 1075708975 || v15 == 1075708988) && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
      {
        v17 = DmmSetTargetForceableState(*(void *const *)(a1 + 3896), *a2 & 0xFFFFFF, v7 == 1075708975);
        if ( v17 < 0 )
          WdLogSingleEntry3(2LL, v17, v7 == 1075708975, 0LL);
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
      }
      if ( (v29 || v28 && *((_BYTE *)a2 + 16)) && v7 != 1075708975 )
      {
        v18 = DpiFdoInitializeConnectionChangePackage(
                *((_QWORD *)a2 + 1),
                *a2 & 0xFFFFFF,
                v28 != 0 ? 10 : 8,
                -2,
                *((_BYTE *)a2 + 16),
                0,
                0,
                1);
        if ( v18 )
        {
          v7 = DpiFdoQueueConnectionChangePackage(a1, v18, 0LL);
          if ( (v7 & 0x80000000) == 0 )
          {
LABEL_37:
            if ( !*((_BYTE *)a2 + 18) )
            {
              LOBYTE(v11) = 1;
              v7 = DpiFdoQueueConnectionChangePackage(a1, 0LL, v11);
              if ( (v7 & 0x80000000) == 0 )
                return v7;
LABEL_41:
              _InterlockedAnd((volatile signed __int32 *)(a1 + 3644), 0xFFFFFFFE);
              IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
              return v7;
            }
            LOBYTE(v12) = *((_BYTE *)a2 + 17);
            LOBYTE(v11) = *((_BYTE *)a2 + 16);
            LOBYTE(v24) = 0;
            LOBYTE(v23) = 0;
            ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0LL, v11, v12, v23, v24);
            v7 = ConnectionChanges;
            if ( ConnectionChanges >= 0 )
              return v7;
            v16 = ConnectionChanges;
LABEL_40:
            WdLogSingleEntry1(2LL, v16);
            goto LABEL_41;
          }
        }
        else
        {
          v7 = -1073741670;
        }
        v16 = (int)v7;
        goto LABEL_40;
      }
    }
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3488), &LockHandle);
    if ( v6 == 50331648 && *(_QWORD *)(a1 + 3496) != a1 + 3496 )
      v7 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3512) = v6 == 50331648;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v7;
}
