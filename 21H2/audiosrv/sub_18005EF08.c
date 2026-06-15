/*
 * XREFs of sub_18005EF08 @ 0x18005EF08
 * Callers:
 *     sub_180038A00 @ 0x180038A00 (sub_180038A00.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     sub_18005F6F4 @ 0x18005F6F4 (sub_18005F6F4.c)
 *     sub_18005FE78 @ 0x18005FE78 (sub_18005FE78.c)
 *     sub_18005FE9C @ 0x18005FE9C (sub_18005FE9C.c)
 *     sub_18006FC20 @ 0x18006FC20 (sub_18006FC20.c)
 *     sub_180072B00 @ 0x180072B00 (sub_180072B00.c)
 *     sub_1801372AC @ 0x1801372AC (sub_1801372AC.c)
 */

__int64 __fastcall sub_18005EF08(unsigned int *pv)
{
  int Instance; // edi
  unsigned int UniqueContext; // eax
  HANDLE v5; // rax
  signed int LastError; // eax
  __int64 v7; // rcx
  const char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  PSECURITY_DESCRIPTOR v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF

  *((_QWORD *)pv + 23) = 1LL;
  SecurityDescriptor = 0LL;
  Instance = 0;
  *((_BYTE *)pv + 552) = 0;
  if ( !*((_BYTE *)pv + 96) )
    sub_18005FE9C();
  if ( (unsigned __int8)sub_18005FE78(pv) )
  {
    if ( !*((_BYTE *)pv + 96) )
    {
      Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, (LPVOID *)pv + 27);
      if ( Instance < 0 )
        goto LABEL_24;
      Instance = sub_18005F6F4(pv);
      if ( Instance < 0 )
        goto LABEL_24;
    }
  }
  if ( !sub_180036AC8((__int64)pv) )
  {
    *((_BYTE *)pv + 96) = 1;
    return 0LL;
  }
  if ( *((_BYTE *)pv + 96) )
    goto LABEL_23;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *((_BYTE *)pv + 100) = 1;
  pv[53] = UniqueContext;
  *((_QWORD *)pv + 5) = &off_18019C528;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;GA;;;WD)(A;;GA;;;AC)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    EventAttributes.bInheritHandle = 0;
    v5 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
    *((_QWORD *)pv + 13) = v5;
    if ( v5 )
    {
      *((_BYTE *)pv + 99) = 0;
      goto LABEL_20;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v8 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v8 = "Error creating Global\\Client_Atmos_Check_Event";
  }
  sub_18005F1A8(v7, v8, (unsigned int)LastError);
LABEL_20:
  if ( !*((_BYTE *)pv + 100) )
  {
    Instance = sub_180036510((ULONGLONG)pv, 0);
    if ( Instance < 0 )
      goto LABEL_24;
  }
  sub_180048790(&v18, (__int64)pv);
  sub_180048790(&v15, v18);
  v9 = pv[53];
  v16 = 1;
  Instance = sub_180072B00(v11, v10, v9, &v15);
  sub_18006FC20(&v15);
  sub_18000F708(&v18);
LABEL_23:
  if ( Instance < 0 )
  {
LABEL_24:
    *((_BYTE *)pv + 96) = 0;
    sub_1801372AC(pv);
    v12 = (void *)*((_QWORD *)pv + 14);
    if ( v12 )
    {
      UnregisterWaitEx(v12, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)pv + 14) = 0LL;
    }
    v13 = (void *)*((_QWORD *)pv + 13);
    if ( v13 )
    {
      CloseHandle(v13);
      *((_QWORD *)pv + 13) = 0LL;
    }
  }
  v14 = SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  sub_18005F1A8(v14, "Init result", (unsigned int)Instance);
  return (unsigned int)Instance;
}
