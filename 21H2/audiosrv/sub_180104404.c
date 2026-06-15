/*
 * XREFs of sub_180104404 @ 0x180104404
 * Callers:
 *     sub_1800B13BD @ 0x1800B13BD (sub_1800B13BD.c)
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 *     sub_1800FF930 @ 0x1800FF930 (sub_1800FF930.c)
 *     sub_1800FF980 @ 0x1800FF980 (sub_1800FF980.c)
 *     sub_1801004FC @ 0x1801004FC (sub_1801004FC.c)
 *     sub_1801047E0 @ 0x1801047E0 (sub_1801047E0.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_180074180 @ 0x180074180 (sub_180074180.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_180103700 @ 0x180103700 (sub_180103700.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180104404(__int64 a1, char a2, struct _TP_CALLBACK_INSTANCE *a3)
{
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  void *v13; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 56) != 6 && (!a2 || *(_DWORD *)(a1 + 56) != 5) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
    v15 = 0;
    sub_180057764((__int64)&lpCriticalSection);
    if ( *(_DWORD *)(a1 + 56) == 6 || *(_DWORD *)(a1 + 56) == 5 && a2 && *(_QWORD *)(a1 + 496) )
    {
LABEL_15:
      if ( v15 )
        LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *(_DWORD *)(a1 + 56) = 5;
    if ( a2 && *(_QWORD *)(a1 + 496) )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x15u, (__int64)&unk_1801726D0, a1);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 496));
      goto LABEL_15;
    }
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x16u, (__int64)&unk_1801726D0, a1);
    }
    v6 = *(void **)(a1 + 296);
    if ( v6 )
    {
      SetEvent(v6);
      v7 = *(void **)(a1 + 280);
      if ( v7 )
      {
        WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
        sub_180074180((void **)(a1 + 280));
      }
      sub_180074180((void **)(a1 + 296));
    }
    v8 = *(_QWORD *)(a1 + 112);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, *(_QWORD *)(a1 + 168));
      sub_180071C14((_QWORD *)(a1 + 112));
      sub_180103700((volatile signed __int32 **)(a1 + 168));
    }
    CoTaskMemFree(*(LPVOID *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0LL;
    sub_180074180((void **)(a1 + 120));
    sub_180071C14((_QWORD *)(a1 + 96));
    sub_180071C14((_QWORD *)(a1 + 80));
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    CoTaskMemFree(*(LPVOID *)(a1 + 72));
    *(_QWORD *)(a1 + 72) = 0LL;
    v10 = *(_QWORD *)(a1 + 224);
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, *(_QWORD *)(a1 + 232));
      sub_180071C14((_QWORD *)(a1 + 224));
      sub_180103700((volatile signed __int32 **)(a1 + 232));
    }
    CoTaskMemFree(*(LPVOID *)(a1 + 208));
    *(_QWORD *)(a1 + 208) = 0LL;
    sub_180074180((void **)(a1 + 240));
    sub_180071C14((_QWORD *)(a1 + 200));
    sub_180071C14((_QWORD *)(a1 + 184));
    v11 = *(_QWORD *)(a1 + 192);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 192) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    CoTaskMemFree(*(LPVOID *)(a1 + 176));
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_DWORD *)(a1 + 56) = 6;
    if ( *(_QWORD *)(a1 + 272) )
    {
      if ( a3 )
      {
        v12 = *(void **)(a1 + 272);
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x17u, (__int64)&unk_1801726D0, a1);
          v12 = *(void **)(a1 + 272);
        }
        SetEventWhenCallbackReturns(a3, v12);
      }
      else
      {
        v13 = *(void **)(a1 + 272);
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x18u, (__int64)&unk_1801726D0, a1);
          v13 = *(void **)(a1 + 272);
        }
        SetEvent(v13);
      }
    }
  }
}
