/*
 * XREFs of UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0005AC0
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C00078C4 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C004721C (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C004740C (UsbDevice_HandleDropEndpointsState.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C00059BC (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C0005C1C (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C0007D58 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddDropEndpoints(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r8d

  v6 = -1073741823;
  UsbDevice_InitializeInputContextCommon(a1);
  v7 = 0;
  if ( a3 )
  {
    if ( a3 == 2 )
    {
LABEL_3:
      v6 = UsbDevice_InitializeInputContextForAddEndpoints(a1, a2);
      if ( v6 < 0 )
        return (unsigned int)v6;
      goto LABEL_4;
    }
    if ( a3 != 1 )
      return (unsigned int)-1073741595;
  }
  if ( (a3 & 0xFFFFFFFD) == 0 )
    goto LABEL_3;
LABEL_4:
  if ( a3 > 1 || (v6 = UsbDevice_InitializeInputContextForDropEndpoints(a1, a2), v6 >= 0) )
  {
    v8 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
    if ( v8 )
      v9 = *(_DWORD **)(v8 + 16);
    else
      v9 = 0LL;
    v10 = -(__int64)((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 100LL) & 4) != 0);
    *(_DWORD *)(a1 + 152) &= ~*v9;
    v11 = v10 & 0x20;
    *(_DWORD *)(a1 + 152) |= v9[1];
    do
    {
      v12 = *(_DWORD *)(a1 + 152);
      if ( _bittest(&v12, v7) )
        *(_DWORD *)((char *)v9 + v11 + 32) = (v7 << 27) | *(_DWORD *)((char *)v9 + v11 + 32) & 0x7FFFFFF;
      ++v7;
    }
    while ( v7 < 0x20 );
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_DWORD *)((char *)v9 + v11 + 32);
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v9,
        12,
        44,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_BYTE *)(a1 + 135),
        v13 >> 27);
    }
  }
  return (unsigned int)v6;
}
