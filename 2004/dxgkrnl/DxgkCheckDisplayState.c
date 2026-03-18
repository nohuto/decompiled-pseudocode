/*
 * XREFs of DxgkCheckDisplayState @ 0x1C02BBB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019634 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C378 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02B97B4 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02BAFB4 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BB3A8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkCheckDisplayState(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  PVOID v4; // rbx
  __int64 v5; // rax
  int v6; // edi
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v4 = operator new[](0x36F0uLL, 0x4B677844u, PagedPool);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 8) = 0;
    `vector constructor iterator'(
      (char *)v4 + 40,
      3504LL,
      4LL,
      (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA);
    *((_DWORD *)v4 + 3514) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v7 = (const char *)*((_QWORD *)a1 + 1);
    v8 = a1[1];
    v9 = *a1;
    v11 = *(_OWORD *)(a1 + 6);
    v6 = DISPLAYSTATECHECKER::Initialize((__int64)v4, v9, v8, v7, &v11);
    if ( v6 >= 0 )
    {
      DISPLAYSTATECHECKER::CheckPrimaryContentState((DISPLAYSTATECHECKER *)v4);
      DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
        (DISPLAYSTATECHECKER *)v4,
        *((struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)a1 + 2));
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 69LL;
    WdLogEvent5_WdError(v5);
    v6 = -1073741801;
  }
  if ( v4 )
  {
    `vector destructor iterator'(
      (char *)v4 + 40,
      3504LL,
      4LL,
      (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA);
    operator delete(v4);
  }
  return (unsigned int)v6;
}
