/*
 * XREFs of sub_18000FFF0 @ 0x18000FFF0
 * Callers:
 *     sub_180010670 @ 0x180010670 (sub_180010670.c)
 * Callees:
 *     sub_180010A50 @ 0x180010A50 (sub_180010A50.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_18000FFF0(_QWORD *a1, __int64 *a2, unsigned int *a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  LPCRITICAL_SECTION v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // r15
  HRESULT Instance; // edi
  __int64 v15; // rbp
  HANDLE OwningThread; // rdx
  HRESULT v17; // [rsp+40h] [rbp-B8h] BYREF
  int v18; // [rsp+44h] [rbp-B4h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B0h]
  __int64 v20; // [rsp+50h] [rbp-A8h]
  __int64 v21[5]; // [rsp+58h] [rbp-A0h] BYREF
  GUID v22; // [rsp+80h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+90h] [rbp-68h] BYREF

  *a1 = 0LL;
  v8 = sub_18006A18C(80LL, &unk_18019F848);
  v9 = v8;
  v19 = v8;
  v21[1] = v8;
  if ( !v8 )
    return 2147942414LL;
  v21[2] = v8;
  *(_DWORD *)(v8 + 52) = 1;
  *(_QWORD *)v8 = off_180146770;
  *(_QWORD *)(v8 + 8) = off_180146720;
  *(_QWORD *)(v8 + 16) = off_180146700;
  *(_QWORD *)(v8 + 24) = off_1801466D0;
  *(_QWORD *)(v8 + 32) = off_1801466B0;
  *(_QWORD *)(v8 + 40) = off_180146690;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)v9 = off_180146668;
  *(_QWORD *)(v9 + 8) = off_180146618;
  *(_QWORD *)(v9 + 16) = off_1801465F8;
  *(_QWORD *)(v9 + 24) = off_1801465C8;
  *(_QWORD *)(v9 + 32) = off_1801465A8;
  *(_QWORD *)(v9 + 40) = off_180146588;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_QWORD *)(v9 + 64) = 0LL;
  *(_DWORD *)(v9 + 72) = 0;
  v10 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v21[3] = (__int64)v10;
  if ( ++LODWORD(v10[1].DebugInfo) == 1 )
  {
    v15 = qword_18019E640;
    EnterCriticalSection(v10);
    v21[4] = (__int64)v10;
    OwningThread = v10[3].OwningThread;
    if ( OwningThread )
    {
      (*(void (__fastcall **)(__int64, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v15 + 24LL))(
        v15,
        OwningThread,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(__int64, HANDLE, __int64))(*(_QWORD *)v15 + 32LL))(v15, v10[3].OwningThread, 1LL);
    }
    LeaveCriticalSection(v10);
    sub_180010A50(v10);
  }
  LeaveCriticalSection(v10);
  v20 = v9;
  v19 = 0LL;
  v11 = *a3;
  v12 = *a2;
  ActivityId = 0LL;
  EventActivityIdControl(1u, &ActivityId);
  Instance = CoCreateInstance(&stru_18015B258, 0LL, 0x17u, &stru_18015B268, (LPVOID *)(v9 + 56));
  if ( Instance < 0
    || (v22 = ActivityId,
        Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(v9 + 56)
                                                                                                + 24LL))(
                     *(_QWORD *)(v9 + 56),
                     &v22,
                     v12,
                     v11,
                     a4,
                     v9 + 64),
        Instance < 0) )
  {
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      v17 = Instance;
      v18 = 44;
      v21[0] = (__int64)"CAPOWrapperClient::RuntimeClassInitialize";
      sub_180109778((int)&dword_18019C4B8, (__int64)v21, (__int64)&v18, (__int64)&v17);
    }
  }
  else
  {
    Instance = (**(__int64 (__fastcall ***)(__int64, void *, _QWORD *))v9)(v9, &unk_18015B248, a1);
  }
  if ( v9 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)Instance;
}
