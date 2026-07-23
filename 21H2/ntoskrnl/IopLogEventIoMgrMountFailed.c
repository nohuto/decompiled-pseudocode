/*
 * XREFs of IopLogEventIoMgrMountFailed @ 0x140393E04
 * Callers:
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall IopLogEventIoMgrMountFailed(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3, int a4)
{
  int v4; // esi
  __int16 v7; // ax
  REGHANDLE v9; // rbx
  __int16 v11; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int16 *v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  __int64 v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  int *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  int v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = a4;
  v4 = *a3;
  v7 = (unsigned __int16)v4 >> 1;
  v11 = (unsigned __int16)v4 >> 1;
  if ( (_BYTE)dword_140CFB19C )
  {
    v9 = IoMgrTraceHandle;
    LOBYTE(v7) = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountFailed);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &v11;
      v16 = *((_QWORD *)a3 + 1);
      v19 = &v22;
      v20 = 4;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v14 = 2;
      v17 = v4;
      LOBYTE(v7) = EtwWriteEx(v9, &IoMgr_MountFailed, 0LL, 0, ActivityId, 0LL, 4u, &UserData);
    }
  }
  return v7;
}
