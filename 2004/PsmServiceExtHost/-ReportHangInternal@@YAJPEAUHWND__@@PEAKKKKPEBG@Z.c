/*
 * XREFs of ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180087028
 * Callers:
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180086794 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     GetTickCount_0 @ 0x1800453F2 (GetTickCount_0.c)
 *     CloseHandle_0 @ 0x180045428 (CloseHandle_0.c)
 *     WaitForMultipleObjects_0 @ 0x180046120 (WaitForMultipleObjects_0.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     RhpCaptureSnapshots @ 0x180086A48 (RhpCaptureSnapshots.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x180086D10 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x180086FA4 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x1800872C8 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 */

__int64 __fastcall ReportHangInternal(HWND a1, unsigned int *a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v8; // r14
  int v9; // ebx
  DWORD v10; // edx
  const unsigned __int16 *v11; // rcx
  int v12; // r9d
  _QWORD *v13; // rsi
  unsigned int *v14; // r8
  DWORD v15; // ecx
  __int64 v16; // rax
  unsigned int v18; // [rsp+30h] [rbp-D0h]
  HANDLE Handles[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v20[40]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  HWND hwnd; // [rsp+80h] [rbp-80h]
  HANDLE hObject; // [rsp+5B8h] [rbp+4B8h]
  HANDLE v25; // [rsp+5C0h] [rbp+4C0h]
  _DWORD v26[12]; // [rsp+5D0h] [rbp+4D0h] BYREF
  int v27[18]; // [rsp+600h] [rbp+500h] BYREF
  _QWORD v28[16]; // [rsp+648h] [rbp+548h] BYREF
  __int128 v29; // [rsp+6C8h] [rbp+5C8h] BYREF
  __m128i v30[4]; // [rsp+6D8h] [rbp+5D8h] BYREF
  __int64 v31; // [rsp+718h] [rbp+618h]
  _WORD pvInfo[520]; // [rsp+720h] [rbp+620h] BYREF
  unsigned int v33; // [rsp+B30h] [rbp+A30h]
  DWORD TickCount_0; // [rsp+B34h] [rbp+A34h]

  v5 = a3;
  memset_0(v26, 0, 0x578uLL);
  memset_0(v20, 0, 0x578uLL);
  if ( !a2 || !(_DWORD)v5 || (v18 = *a2, (a5 & 0xFFF80000) != 0) )
  {
    v9 = -1073741811;
    goto LABEL_37;
  }
  v8 = 16LL;
  if ( (unsigned int)v5 > 0x10 )
  {
    v9 = -1073740757;
    goto LABEL_37;
  }
  memset_0(v26, 0, 0x578uLL);
  v26[0] = 91751760;
  v26[10] = 0x10000000;
  v27[16] = a4;
  v31 = 0LL;
  TickCount_0 = GetTickCount_0();
  memcpy_0(v27, a2, 4 * v5);
  if ( (a5 & 2) != 0 )
    pvInfo[260] = 0;
  if ( !(unsigned int)GetCurrentDesktopName(pvInfo, v10) )
    pvInfo[0] = 0;
  v33 = a5;
  if ( (a5 & 0x4000) != 0 )
    v30[0].m128i_i32[0] = -1073741822;
  else
    RhpCaptureSnapshots(v28, &v29, v30, v12, v27);
  v9 = WersvcSendMessage(v11, (struct _WERSVC_MSG *)v26, (struct _WERSVC_MSG *)v20);
  v13 = v28;
  do
  {
    if ( *v13 )
      PssNtFreeSnapshot();
    ++v13;
    --v8;
  }
  while ( v8 );
  if ( v9 >= 0 )
  {
    if ( v9 == 258 )
    {
      v9 = -1073741248;
      goto LABEL_37;
    }
    v14 = (unsigned int *)v21;
    switch ( v21 )
    {
      case 0x10000001u:
        goto LABEL_23;
      case 0x10000002u:
        v9 = v22;
        if ( v22 < 0 )
          goto LABEL_37;
        break;
      case 0x10000005u:
LABEL_23:
        v15 = 0;
        if ( hObject )
        {
          Handles[0] = hObject;
          v15 = 1;
        }
        if ( v25 )
        {
          v16 = v15++;
          Handles[v16] = v25;
        }
        if ( (a5 & 0x20) != 0 && v15 )
        {
          WaitForMultipleObjects_0(v15, Handles, 0, 0xFFFFFFFF);
          v14 = (unsigned int *)v21;
        }
        if ( hwnd && (_DWORD)v14 == 268435461 )
          UtilRegisterErrorReportingDialog(hwnd, v18, v14);
        v9 = 0;
        goto LABEL_37;
    }
    v9 = -1073741823;
  }
LABEL_37:
  if ( hObject )
    CloseHandle_0(hObject);
  if ( v25 )
    CloseHandle_0(v25);
  return (unsigned int)v9;
}
