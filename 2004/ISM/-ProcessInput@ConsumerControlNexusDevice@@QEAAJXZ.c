/*
 * XREFs of ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800A394C
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800A00AC (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D310 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088FE0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800A29D8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800A374C (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800A3C0C (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::ProcessInput(ConsumerControlNexusDevice *this)
{
  char *v1; // r12
  char *i; // rbx
  size_t v4; // rax
  USHORT *v5; // rax
  USHORT *v6; // rdi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  NTSTATUS Usages; // eax
  const struct std::nothrow_t *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // r14
  unsigned __int64 j; // rax
  _DWORD *v14; // rax
  int v15; // eax
  unsigned int v16; // r15d
  const struct std::nothrow_t *v17; // rdx
  int v19; // ebx
  __int64 v20; // rdx
  ULONG ReportLength; // [rsp+40h] [rbp-C8h]
  ULONG UsageLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v23[2]; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v25[4]; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER v26; // [rsp+78h] [rbp-90h]
  int v27; // [rsp+80h] [rbp-88h]
  __int16 v28; // [rsp+8Ch] [rbp-7Ch]
  __int16 v29; // [rsp+AEh] [rbp-5Ah]
  __int64 v30; // [rsp+1B8h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v1 = (char *)this + 48;
  for ( i = (char *)*((_QWORD *)this + 6); i != v1; i = *(char **)i )
  {
    if ( !*((_DWORD *)i + 14) && *((_QWORD *)i + 8) > 1uLL )
    {
      v4 = 2LL * *((unsigned __int16 *)this + 20);
      if ( !is_mul_ok(*((unsigned __int16 *)this + 20), 2uLL) )
        v4 = -1LL;
      v5 = (USHORT *)operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      if ( !v5 )
      {
        v19 = -2147024882;
        v20 = 215LL;
        goto LABEL_23;
      }
      memset_0(v5, 0, 2LL * *((unsigned __int16 *)this + 20));
      PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 4);
      ReportLength = *((_DWORD *)i + 16);
      UsageLength[1] = *((unsigned __int16 *)this + 20);
      Usages = HidP_GetUsages(HidP_Input, 0xCu, 0, v6, &UsageLength[1], PreparsedData, i + 80, ReportLength);
      if ( Usages < 0 )
      {
        v16 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0xE5,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
                (const char *)(unsigned int)Usages);
        goto LABEL_21;
      }
      v12 = 0;
      for ( j = 0LL; j < UsageLength[1]; ++j )
      {
        v12 = v6[j] == 208;
        if ( v6[j] == 208 )
          break;
      }
      if ( v12 != *((_BYTE *)this + 104) )
      {
        if ( (unsigned int)dword_1802053F0 > 5 )
        {
          LOBYTE(UsageLength[0]) = v12;
          *(_QWORD *)v23 = "NexusButton on ConsumerControl pressed/released";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
            UsageLength[1],
            byte_1801C9E9A,
            v10,
            v11,
            (const unsigned __int16 **)v23,
            (__int64)UsageLength);
        }
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v25, 0, 0x160uLL);
        v14 = (_DWORD *)*((_QWORD *)this + 16);
        v27 = 352;
        v25[0] = 4;
        v25[1] = *v14;
        v25[2] = GetTickCount();
        v26 = PerformanceCount;
        v30 = 0x6B6579626F617264LL;
        v28 = 7;
        v29 = (v12 ^ 1) + 64;
        v15 = ConsumerControlNexusDevice::NotifyInputReport(this, (struct InputInfo *)v25);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x107,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
            (const char *)(unsigned int)v15);
LABEL_21:
          operator delete(v6, v17);
          return v16;
        }
        *((_BYTE *)this + 104) = v12;
      }
      operator delete(v6, v9);
    }
  }
  v19 = ConsumerControlNexusDevice::QueueInputBuffers(this);
  if ( v19 >= 0 )
    return 0LL;
  v20 = 275LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
