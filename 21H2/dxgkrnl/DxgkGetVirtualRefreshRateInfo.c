/*
 * XREFs of DxgkGetVirtualRefreshRateInfo @ 0x1C01DD530
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001D198 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001D1B4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C002E920 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall DxgkGetVirtualRefreshRateInfo(struct _LUID a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  DWORD LowPart; // ebx
  DXGADAPTER *v6; // r14
  __int64 HighPart; // rdi
  unsigned int v8; // esi
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r15
  int v14; // ebx
  __int64 v15; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rcx
  __int64 v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h]
  DXGADAPTER *v20[2]; // [rsp+50h] [rbp-30h] BYREF
  char v21[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGADAPTER *v22; // [rsp+68h] [rbp-18h]
  char v23; // [rsp+70h] [rbp-10h]
  struct _LUID v24; // [rsp+B0h] [rbp+30h] BYREF
  char v25; // [rsp+C8h] [rbp+48h] BYREF

  v24 = a1;
  v3 = a2;
  LowPart = a1.LowPart;
  v20[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v20, &v24);
  v6 = v20[0];
  if ( !v20[0] )
  {
    HighPart = v24.HighPart;
    v8 = -1073741811;
    WdLogSingleEntry3(2LL, v24.HighPart, LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_22;
  }
  v9 = *((_QWORD *)v20[0] + 349);
  if ( !v9 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, v20[0], -1073741811LL);
    v10 = L"Caller specified adapter 0x%I64x is not a display adapter in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.";
    v19 = 0LL;
    v18 = -1073741811LL;
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, (__int64)v6, v18, v19, 0LL, 0LL);
    goto LABEL_22;
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(v9 + 96) )
  {
    v11 = v3;
    v8 = -1073741811;
    WdLogSingleEntry3(2LL, v20[0], v11, -1073741811LL);
    v10 = L"Adapter 0x%I64x does not have caller specified VidPn source Id 0x%I64x in DxgkGetVirtualRefreshRateInfo functi"
           "on, returning 0x%I64x.";
    v19 = -1073741811LL;
    v18 = v11;
    goto LABEL_7;
  }
  v25 = 0;
  v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v25, 0);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v22 = v6;
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    v14 = 1;
    if ( *((_DWORD *)v6 + 50) == 1 )
    {
      if ( ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v6 + 349), v3) )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v6 + 349), v3);
        if ( *((_DWORD *)DisplayModeInfo + 14) == -2 && *((_DWORD *)DisplayModeInfo + 15) == -2 )
        {
          a3[6] = 1;
          a3[5] = 64;
          a3[7] = 64;
          a3[8] = 1;
        }
        else
        {
          a3[5] = *((_DWORD *)DisplayModeInfo + 16);
          a3[6] = *((_DWORD *)DisplayModeInfo + 17);
          a3[7] = *((_DWORD *)DisplayModeInfo + 14);
          a3[8] = *((_DWORD *)DisplayModeInfo + 15);
          v14 = *((_DWORD *)DisplayModeInfo + 18);
        }
        a3[9] = v14;
        v8 = 0;
      }
      else
      {
        v15 = v3;
        v8 = -1073741811;
        WdLogSingleEntry3(3LL, v15, v20[0], -1073741811LL);
      }
    }
    else
    {
      v8 = -1073741130;
      WdLogSingleEntry2(3LL, v20[0], -1073741130LL);
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  }
  else
  {
    WdLogSingleEntry1(2LL, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    v8 = v13;
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v25);
LABEL_22:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v20);
  return v8;
}
