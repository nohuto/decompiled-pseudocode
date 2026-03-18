/*
 * XREFs of NtConfigureInputSpace @ 0x1C012DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C000C4A8 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C000C8B0 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C000CE30 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01AFE00 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1C01B0248 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 */

__int64 __fastcall NtConfigureInputSpace(ULONG64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // r14d
  char *v9; // rdi
  __int64 v10; // rcx
  ULONG64 v11; // rcx
  __int64 v12; // r15
  CInputConfig *v13; // rcx
  int v14; // r14d
  char *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+40h] [rbp-8C8h] BYREF
  int v23; // [rsp+48h] [rbp-8C0h]
  __int64 v24; // [rsp+50h] [rbp-8B8h]
  int v25; // [rsp+58h] [rbp-8B0h]
  _OWORD v26[12]; // [rsp+70h] [rbp-898h] BYREF
  __int64 v27; // [rsp+130h] [rbp-7D8h]
  _BYTE v28[504]; // [rsp+138h] [rbp-7D0h] BYREF
  __int64 v29; // [rsp+330h] [rbp-5D8h] BYREF
  int v30; // [rsp+338h] [rbp-5D0h]

  v3 = a3;
  v6 = 1;
  EnterCrit(0LL, 1);
  v22 = 0LL;
  v23 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v29, (const struct INPUT_SPACE *)&v22, 0);
  v8 = 0;
  v9 = 0LL;
  if ( (_DWORD)v3 )
  {
    v8 = 200 * v3;
    if ( (unsigned __int64)(200 * v3) > 0xFFFFFFFF )
    {
LABEL_5:
      v10 = 87LL;
      goto LABEL_6;
    }
    v9 = (char *)Win32AllocPoolWithQuota(v8, 0x63736955u);
    if ( !v9 )
    {
      v10 = 8LL;
LABEL_6:
      v6 = 0;
LABEL_7:
      UserSetLastError(v10, v7);
      goto LABEL_26;
    }
  }
  v11 = a1 + 12;
  if ( a1 + 12 < a1 || v11 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v24 = *(_QWORD *)a1;
  v25 = *(_DWORD *)(a1 + 8);
  v29 = v24;
  v30 = v25;
  if ( (_DWORD)v3 )
  {
    v12 = 200 * v3;
    if ( 200 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v12] > MmUserProbeAddress || &a2[v12] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v9, a2, v8);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v29, (const struct INPUT_SPACE_REGION *)v9, v3) )
    goto LABEL_5;
  if ( (_DWORD)v3 )
  {
    v14 = 0;
    do
    {
      v15 = &v9[200 * v14];
      v26[0] = *(_OWORD *)v15;
      v26[1] = *((_OWORD *)v15 + 1);
      v26[2] = *((_OWORD *)v15 + 2);
      v26[3] = *((_OWORD *)v15 + 3);
      v26[4] = *((_OWORD *)v15 + 4);
      v26[5] = *((_OWORD *)v15 + 5);
      v26[6] = *((_OWORD *)v15 + 6);
      v26[7] = *((_OWORD *)v15 + 7);
      v15 += 128;
      v26[8] = *(_OWORD *)v15;
      v26[9] = *((_OWORD *)v15 + 1);
      v26[10] = *((_OWORD *)v15 + 2);
      v26[11] = *((_OWORD *)v15 + 3);
      v27 = *((_QWORD *)v15 + 8);
      memset(v28, 0, 289);
      memset(&v28[296], 0, 0xC8uLL);
      v16 = CInputSpace::AddRegion((CInputSpace *)&v29, (const struct CInputSpaceRegion *)v26, 0LL);
      if ( v16 < 0 )
        goto LABEL_25;
    }
    while ( ++v14 != (_DWORD)v3 );
  }
  v16 = CInputConfig::ConfigureInputSpace(v13, (struct CInputSpace *)&v29);
  if ( v16 < 0 )
  {
LABEL_25:
    v6 = 0;
    v10 = RtlNtStatusToDosError(v16);
    goto LABEL_7;
  }
LABEL_26:
  CInputSpace::FreeRegions((CInputSpace *)&v29);
  if ( v9 )
    Win32FreePool((__int64)v9);
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v6;
}
