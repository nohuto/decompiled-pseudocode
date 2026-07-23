/*
 * XREFs of IopLogEventIoMgrMountSucceeded @ 0x1403930F8
 * Callers:
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall IopLogEventIoMgrMountSucceeded(LPCGUID ActivityId, ULONGLONG a2, unsigned __int16 *a3)
{
  int v3; // edi
  __int16 v6; // ax
  REGHANDLE v8; // rsi
  __int16 v10; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+74h] [rbp-Ch]

  v3 = *a3;
  v6 = (unsigned __int16)v3 >> 1;
  v10 = (unsigned __int16)v3 >> 1;
  if ( (_BYTE)dword_140CFB19C )
  {
    v8 = IoMgrTraceHandle;
    LOBYTE(v6) = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountSucceeded);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v12 = &v10;
      v15 = *((_QWORD *)a3 + 1);
      UserData.Ptr = a2;
      UserData.Size = 16;
      v13 = 2;
      v16 = v3;
      LOBYTE(v6) = EtwWriteEx(v8, &IoMgr_MountSucceeded, 0LL, 0, ActivityId, 0LL, 3u, &UserData);
    }
  }
  return v6;
}
