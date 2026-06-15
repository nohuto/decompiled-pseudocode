/*
 * XREFs of sub_180007520 @ 0x180007520
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180006770 @ 0x180006770 (sub_180006770.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_18002A3EC @ 0x18002A3EC (sub_18002A3EC.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 *     sub_18002A4F8 @ 0x18002A4F8 (sub_18002A4F8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007520(__int64 a1, int a2)
{
  int v2; // eax
  HKEY v3; // rbx
  unsigned int v4; // edi
  DWORD v5; // eax
  DWORD v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // r14d
  struct _RTL_CRITICAL_SECTION *v12; // rsi
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]
  int Data; // [rsp+98h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp+40h] BYREF
  HKEY phkResult; // [rsp+A8h] [rbp+48h] BYREF

  Data = a2;
  hKey = 0LL;
  v2 = sub_180006770(a1, 0LL, (__int64)&hKey);
  v3 = hKey;
  v4 = v2;
  if ( v2 < 0 )
  {
    sub_180003AB0(
      retaddr,
      527,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v2);
    goto LABEL_31;
  }
  v5 = (*(__int64 (__fastcall **)(HKEY))(*(_QWORD *)hKey + 48LL))(hKey);
  v6 = v5;
  if ( !v5 )
    goto LABEL_30;
  if ( !(unsigned int)sub_18002A3EC(v5) )
    sub_18002A46C(v6);
  if ( (unsigned int)sub_18002A4F8(v6) == Data )
    goto LABEL_30;
  v7 = RpcImpersonateClient(0LL);
  if ( v7 )
  {
    v4 = sub_18000A4C0(
           retaddr,
           544LL,
           "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           v7);
    goto LABEL_31;
  }
  phkResult = 0LL;
  v8 = RegOpenCurrentUser(0xF003Fu, &phkResult);
  if ( !v8 )
  {
    hKey = 0LL;
    v9 = RegCreateKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    if ( v9 )
    {
      v10 = 552LL;
      goto LABEL_15;
    }
    v9 = RegSetValueExW(hKey, L"AccessibilityMonoMixState", 0, 4u, (const BYTE *)&Data, 4u);
    if ( v9 )
    {
      v10 = 554LL;
LABEL_15:
      v4 = sub_18000A4C0(
             retaddr,
             v10,
             "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v9);
      if ( hKey )
        RegCloseKey(hKey);
      goto LABEL_17;
    }
    v11 = Data;
    v12 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
    if ( !(unsigned int)sub_18002880C(v6) && *(_DWORD *)(v14 + 304) )
      *(_DWORD *)(v14 + 308) = v11;
    if ( v12 )
      LeaveCriticalSection(v12);
    if ( hKey )
      RegCloseKey(hKey);
    if ( phkResult )
      RegCloseKey(phkResult);
    RpcRevertToSelf();
LABEL_30:
    v4 = 0;
    goto LABEL_31;
  }
  v4 = sub_18000A4C0(
         retaddr,
         549LL,
         "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
         v8);
LABEL_17:
  if ( phkResult )
    RegCloseKey(phkResult);
  RpcRevertToSelf();
LABEL_31:
  if ( v3 )
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
