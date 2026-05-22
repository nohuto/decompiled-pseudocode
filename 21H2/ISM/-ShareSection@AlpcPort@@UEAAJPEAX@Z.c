/*
 * XREFs of ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800C1C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18006600C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x1800C08D0 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800C1BB8 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

signed int __fastcall AlpcPort::ShareSection(AlpcPort *this, void *a2)
{
  struct SipcPort::SectionListEntry *SectionListEntry; // rax
  struct SipcPort::SectionListEntry *v4; // rbx
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v17[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+198h] [rbp+98h] BYREF
  int v20; // [rsp+1A0h] [rbp+A0h]
  __int64 v21; // [rsp+1A8h] [rbp+A8h]
  __int64 v22; // [rsp+1B0h] [rbp+B0h]
  __int64 v23; // [rsp+1B8h] [rbp+B8h]

  SectionListEntry = SipcPort::FindSectionListEntry(this, a2);
  v4 = SectionListEntry;
  if ( !SectionListEntry )
  {
    v5 = -2147024809;
LABEL_3:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v5);
    return v5;
  }
  if ( !*((_QWORD *)SectionListEntry + 9) )
  {
    v5 = -2147467259;
    goto LABEL_3;
  }
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  v19 = 1610612736LL;
  WORD1(v17[0]) = 40;
  v7 = *((_QWORD *)SectionListEntry + 9);
  v8 = *((_QWORD *)v4 + 4);
  v9 = *((_QWORD *)v4 + 3);
  v20 = 0;
  HIDWORD(v19) = 0x40000000;
  v16 = 0LL;
  v21 = v7;
  v22 = v9;
  v10 = *((_QWORD *)this + 7);
  v23 = v8;
  v11 = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, __int64 *, _QWORD, _QWORD, _QWORD, __int64 *))NtAlpcSendWaitReceivePort)(
          v10,
          0x10000LL,
          v17,
          &v19,
          0LL,
          0LL,
          0LL,
          &v16);
  if ( v11 < 0 )
    return wil::details::NtStatusToHr((wil::details *)(unsigned int)v11);
  v12 = NtAlpcDeletePortSection(*((_QWORD *)this + 7), 0LL, *((_QWORD *)v4 + 9));
  if ( v12 < 0 )
    return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v12, v13, v14, v15);
  *((_QWORD *)v4 + 9) = 0LL;
  return 0;
}
