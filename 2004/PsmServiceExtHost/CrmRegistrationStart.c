/*
 * XREFs of CrmRegistrationStart @ 0x180004FA4
 * Callers:
 *     CrmSrvRegister @ 0x180004E94 (CrmSrvRegister.c)
 *     CrmRegistrationStartWithActivity @ 0x180042770 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmGlobalsRegistrationAdd @ 0x180005060 (CrmGlobalsRegistrationAdd.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, void *a2, int a3)
{
  signed __int64 v5; // rax
  ULONG v6; // eax
  int v7; // ecx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  UUID *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  __int64 *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v5 = _InterlockedIncrement64(&qword_1800B3E88);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v5;
  if ( a2 )
  {
    v6 = RtlLengthSid(a2);
    memcpy_0((void *)(a1 + 72), a2, v6);
  }
  CrmGlobalsRegistrationAdd(a1);
  if ( (unsigned int)dword_1800B3250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800B3250, 2LL) )
  {
    v14 = 0;
    v17 = 0;
    v9 = 0;
    v20 = 0;
    v12 = &Uuid;
    v10 = *(_QWORD *)(a1 + 16);
    v15 = &v10;
    v18 = &v9;
    v13 = 16;
    v16 = 8;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer(v7, (int)&dword_1800A3074, 0, 0, 5u, &v11);
  }
  return 0LL;
}
