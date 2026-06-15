/*
 * XREFs of sub_180062950 @ 0x180062950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180057CD4 @ 0x180057CD4 (sub_180057CD4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800628CC @ 0x1800628CC (sub_1800628CC.c)
 *     sub_180062C18 @ 0x180062C18 (sub_180062C18.c)
 *     sub_180062D08 @ 0x180062D08 (sub_180062D08.c)
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 *     sub_180064288 @ 0x180064288 (sub_180064288.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 *     sub_1800BB410 @ 0x1800BB410 (sub_1800BB410.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180062950(__int64 a1, int a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rax
  void *v7; // rax
  void *v8; // rbx
  __int64 v9; // rbx
  HRESULT v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  LPVOID ppv; // [rsp+30h] [rbp-49h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+38h] [rbp-41h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+50h] [rbp-29h] BYREF

  memset(&spc, 0, sizeof(spc));
  if ( !a2 )
  {
    v4 = (_BYTE *)sub_18006A18C(104LL, &unk_18019F848);
    v5 = v4;
    ppv = v4;
    if ( v4 )
    {
      sub_180062C18(v4);
      *(_QWORD *)v5 = off_180148E80;
      v5[96] = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v5;
    if ( !v5 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_18016D4B0);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)sub_18006A18C(160LL, &unk_18019F848);
    ppv = v6;
    if ( v6 )
      v6 = (struct _RTL_CRITICAL_SECTION *)sub_1800628CC((__int64)v6, (a1 + 80) & -(__int64)(a1 != 0));
    lpCriticalSection = v6;
    if ( v6 )
    {
      v7 = sub_180055F40(0x198uLL);
      v8 = v7;
      if ( v7 )
      {
        memset(v7, 0, 0x198uLL);
        v7 = (void *)sub_180064288(v8);
      }
      v9 = qword_18019EF88;
      qword_18019EF88 = (__int64)v7;
      if ( v9 )
      {
        sub_1800B7E08(v9);
        sub_18006A148(v9, 408LL);
      }
    }
    else if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
           && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
           && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 15LL, &unk_18016D4B0);
    }
  }
  ppv = 0LL;
  v10 = CoCreateInstance(&stru_18015D5D0, 0LL, 1u, &stru_18015CB00, &ppv);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 16LL, &unk_18016D4B0, (unsigned int)v10);
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( !v11 )
  {
    v11 = sub_180063460(a1);
    if ( !v11 )
    {
      v12 = sub_180062D08();
      v15 = v12;
      if ( v12 < 0 && (byte_18019F980 & 4) != 0 )
        sub_1800BB410(v14, v13, L"MME", (unsigned int)v12);
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = 0LL;
      EventAttributes.bInheritHandle = 0;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 17LL, &unk_18016D4B0);
      }
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
             1u,
             &EventAttributes.lpSecurityDescriptor,
             0LL) )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 18LL, &unk_18016D4B0);
        }
        hEvent = CreateEventExW(&EventAttributes, L"Global\\AudioSrv_CanAcceptMMCClient", 1u, 0x100002u);
        LocalFree(EventAttributes.lpSecurityDescriptor);
      }
      if ( v15 < 0 )
        sub_18005E8F8((__int64)"CAudioSrv::Initialize", 596, v15);
      if ( (__int64 (__fastcall *)())qword_18019E7A0 != sub_180067090 )
      {
        EnterCriticalSection(&stru_18019F7F0);
        qword_18019E7A0 = (__int64)sub_180067090;
        LeaveCriticalSection(&stru_18019F7F0);
      }
      return (unsigned int)sub_180057CD4();
    }
  }
  return v11;
}
