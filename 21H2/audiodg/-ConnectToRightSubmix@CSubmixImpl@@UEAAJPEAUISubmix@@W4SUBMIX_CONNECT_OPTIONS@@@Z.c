/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000F960
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F1E0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FC60 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14003DDCC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x14004EAF8 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectToRightSubmix(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(__int64, GUID *, __int64 *),
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  __int64 (__fastcall **v7)(__int64, GUID *, __int64 *); // rax
  int v8; // eax
  int v9; // edi
  void *v10; // rcx
  unsigned int v11; // edx
  CPipeInstance *v12; // rcx
  void *v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  void *v16; // rcx
  const struct tWAVEFORMATEX *v18; // rdi
  __int64 v19; // rax
  struct tWAVEFORMATEX *v20; // rdi
  __int64 v21; // rax
  int FormatConverterPipe; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-28h]
  void *v25; // [rsp+28h] [rbp-20h] BYREF
  char v26; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 v28; // [rsp+70h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+40h] BYREF

  if ( *((_BYTE *)a1 + 313) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v24);
    return 2147549183LL;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 22));
  v7 = *a2;
  v28 = 0LL;
  v8 = (*v7)((__int64)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v28);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x371,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8,
      v24);
  }
  else if ( a1[38] )
  {
    v9 = -2005139410;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x376,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C002ELL,
      v24);
  }
  else
  {
    if ( (a3 & 1) != 0 || a1[29] >= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 56LL))(v28) )
    {
      pv = 0LL;
      v25 = 0LL;
      v26 = 1;
      v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v28 + 72LL))(v28, &v25);
      if ( v26 )
      {
        v10 = pv;
        pv = v25;
        if ( v10 )
          CoTaskMemFree(v10);
      }
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v9,
          (int)&pv);
      }
      else
      {
        if ( (unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a1[27], (const struct tWAVEFORMATEX *)pv) )
        {
          v12 = (CPipeInstance *)a1[34];
          if ( v12 )
            CPipeInstance::`scalar deleting destructor'(v12, v11);
          a1[34] = 0LL;
          v13 = (void *)a1[35];
          a1[35] = 0LL;
          if ( v13 )
            CoTaskMemFree(v13);
          *((_BYTE *)a1 + 296) = 0;
          goto LABEL_16;
        }
        v18 = (const struct tWAVEFORMATEX *)pv;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 56LL))(v28);
        if ( a1[34] && a1[36] == v19 && (unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a1[35], v18)
          || (v20 = (struct tWAVEFORMATEX *)pv,
              v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 56LL))(v28),
              FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, v20, v21),
              v9 = FormatConverterPipe,
              FormatConverterPipe >= 0) )
        {
LABEL_16:
          v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 144LL))(a1, v28, 0LL);
          v9 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x399,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v14,
              (int)&pv);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 152LL))(a1, v28);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 80LL))(v28, a1);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 136LL))(a1)
              && (v23 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 96LL))(v28, a1),
                  v9 = v23,
                  v23 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3AB,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                (const char *)(unsigned int)v23,
                (int)&pv);
              (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 88LL))(v28, a1);
            }
            else
            {
              v15 = a1[38];
              a1[38] = a2;
              ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a2)[1])(a2);
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              PublishDeviceGraphWnfState();
              v9 = 0;
            }
          }
          goto LABEL_21;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x388,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)FormatConverterPipe,
          (int)&pv);
      }
LABEL_21:
      v16 = pv;
      pv = 0LL;
      if ( v16 )
        CoTaskMemFree(v16);
      goto LABEL_23;
    }
    v9 = -2005139386;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C0046LL,
      v24);
  }
LABEL_23:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
