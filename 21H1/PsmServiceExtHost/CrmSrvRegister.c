/*
 * XREFs of CrmSrvRegister @ 0x180004E94
 * Callers:
 *     CrmRpcSrvRegister @ 0x180004E00 (CrmRpcSrvRegister.c)
 * Callees:
 *     CrmRegistrationStart @ 0x180004FA4 (CrmRegistrationStart.c)
 *     CrmRegistrationInitialize @ 0x180005168 (CrmRegistrationInitialize.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18002E750 (_tlgCreate1Sz_wchar_t.c)
 *     CrmRegistrationCleanup @ 0x180036074 (CrmRegistrationCleanup.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvRegister(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  PVOID Heap; // rax
  void *v9; // rbx
  int v10; // edi
  int v12; // eax
  int v13; // r10d
  int v14; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+34h] [rbp-95h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-89h] BYREF
  UUID *v17; // [rsp+60h] [rbp-69h]
  int v18; // [rsp+68h] [rbp-61h]
  int v19; // [rsp+6Ch] [rbp-5Dh]
  int *v20; // [rsp+70h] [rbp-59h]
  int v21; // [rsp+78h] [rbp-51h]
  int v22; // [rsp+7Ch] [rbp-4Dh]
  __int64 v23; // [rsp+80h] [rbp-49h]
  int v24; // [rsp+88h] [rbp-41h]
  int v25; // [rsp+8Ch] [rbp-3Dh]
  char v26[16]; // [rsp+90h] [rbp-39h] BYREF
  int *v27; // [rsp+A0h] [rbp-29h]
  int v28; // [rsp+A8h] [rbp-21h]
  int v29; // [rsp+ACh] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp-19h] BYREF
  UUID *v31; // [rsp+D0h] [rbp+7h]
  int v32; // [rsp+D8h] [rbp+Fh]
  int v33; // [rsp+DCh] [rbp+13h]

  if ( (unsigned int)dword_1800B3250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800B3250, 1LL) )
  {
    v33 = 0;
    v31 = &Uuid;
    v32 = 16;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3250, (int)&dword_1800A2BD1, 0, 0, 3u, &v30);
  }
  if ( a2 >= 305 )
  {
    v10 = -1073741811;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v9 = Heap;
    if ( Heap )
    {
      CrmRegistrationInitialize(Heap);
      v10 = CrmRegistrationStart(v9, a4, (unsigned int)a2);
      if ( v10 >= 0 )
      {
        *a1 = v9;
        v9 = 0LL;
        v10 = 0;
      }
      if ( v9 )
      {
        CrmRegistrationCleanup(v9, 1LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( (unsigned int)dword_1800B3250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800B3250, 1LL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v20 = &v14;
    v12 = *(unsigned __int8 *)(a4 + 1);
    v17 = &Uuid;
    v18 = 16;
    v14 = a2;
    v21 = 4;
    v24 = 4 * v12 + 8;
    v23 = a4;
    tlgCreate1Sz_wchar_t(v26, a3);
    v29 = 0;
    v27 = &v15;
    v15 = v10;
    v28 = v13;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3250, (int)&dword_1800A2799, 0, 0, 7u, &v16);
  }
  return (unsigned int)v10;
}
