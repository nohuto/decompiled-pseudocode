/*
 * XREFs of ?DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C0211C40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0267DE4 (DxgkRequestSyncDisplaySwitchCallout.c)
 */

void __fastcall DisconnectFromDisplayAdaptersWorkItem(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  _QWORD v7[4]; // [rsp+30h] [rbp-49h] BYREF
  struct _DXGK_WIN32K_PARAM_DATA v8; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v9[10]; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0x100000000LL;
  if ( (_DWORD)Context != -1 )
    v4 = (unsigned int)Context;
  memset(v9, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  *(_OWORD *)&v8.NumPathArrayElements = 0LL;
  v9[8] = MEMORY[0xFFFFF78000000014];
  v8.SDCFlags = 2447;
  LODWORD(v9[3]) = 62;
  LOBYTE(v9[6]) = -1;
  *(_OWORD *)&v8.PathsArray = 0LL;
  DxgkRequestSyncDisplaySwitchCallout(&v8, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v9, v4);
  LODWORD(v7[0]) = 10;
  LOBYTE(v5) = 1;
  memset((char *)v7 + 4, 0, 28);
  SMgrGdiCallout(v7, v4, v5, &IncreaseAdapterUniquenessCallback, 0LL, 0LL);
  LOBYTE(v6) = 1;
  v7[2] = 1LL;
  SMgrGdiCallout(v7, v4, v6, 0LL, 0LL, 0LL);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
