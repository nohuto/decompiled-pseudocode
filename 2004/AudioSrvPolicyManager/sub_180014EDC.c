/*
 * XREFs of sub_180014EDC @ 0x180014EDC
 * Callers:
 *     sub_180013DE0 @ 0x180013DE0 (sub_180013DE0.c)
 * Callees:
 *     sub_1800163F0 @ 0x1800163F0 (sub_1800163F0.c)
 *     sub_180016CD4 @ 0x180016CD4 (sub_180016CD4.c)
 *     sub_180017930 @ 0x180017930 (sub_180017930.c)
 *     sub_180017ABC @ 0x180017ABC (sub_180017ABC.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_180018138 @ 0x180018138 (sub_180018138.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_180014EDC(__int64 a1))()
{
  int i; // eax
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  void *v5; // rbx
  HANDLE v6; // rax
  char *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  char *v10; // r8
  char *v11; // rcx
  __int64 v12; // rcx
  char *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  char *v21; // rcx
  char *v22; // rcx
  unsigned __int64 v23; // rdx
  char *v24; // r8
  __int64 (__fastcall **result)(); // rax

  *(_QWORD *)a1 = &off_18003F208;
  *(_QWORD *)(a1 + 16) = off_18003EFD0;
  *(_QWORD *)(a1 + 24) = off_18003EFB0;
  for ( i = *(_DWORD *)(a1 + 304); i > 0; i = *(_DWORD *)(a1 + 304) )
  {
    v3 = **(void ***)(a1 + 296);
    sub_180017930(a1 + 288, 0LL);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  while ( *(int *)(a1 + 328) > 0 )
  {
    v5 = **(void ***)(a1 + 320);
    sub_180017930(a1 + 312, 0LL);
    v6 = GetProcessHeap();
    HeapFree(v6, 0, v5);
  }
  if ( *(_DWORD *)(a1 + 264) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 40LL))(*(_QWORD *)(a1 + 272));
  if ( *(_QWORD *)(a1 + 616) )
  {
    sub_180016CD4(a1);
    CloseThreadpoolTimer(*(PTP_TIMER *)(a1 + 616));
  }
  sub_1800163F0(a1, 0LL);
  v7 = *(char **)(a1 + 792);
  if ( v7 )
  {
    v8 = (*(_QWORD *)(a1 + 808) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v8 >= 0x1000 )
    {
      v9 = v8 + 39;
      v10 = (char *)*((_QWORD *)v7 - 1);
      v11 = (char *)(v7 - v10);
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
        goto LABEL_43;
      v7 = v10;
    }
    sub_180039D98(v7);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_QWORD *)(a1 + 800) = 0LL;
    *(_QWORD *)(a1 + 808) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 744));
  v12 = *(_QWORD *)(a1 + 736);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  sub_180018138(a1 + 664);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 624));
  v13 = *(char **)(a1 + 608);
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v13);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 568));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 400));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 352));
  sub_180017ABC(a1 + 312);
  sub_180017ABC(a1 + 288);
  v14 = *(_QWORD *)(a1 + 280);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *(_QWORD *)(a1 + 272);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *(volatile signed __int32 **)(a1 + 256);
  if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1LL);
  }
  v17 = *(void **)(a1 + 232);
  if ( v17 )
    CoTaskMemFree(v17);
  v18 = *(void **)(a1 + 216);
  if ( v18 )
    CoTaskMemFree(v18);
  v19 = *(void **)(a1 + 208);
  if ( v19 )
    CoTaskMemFree(v19);
  v20 = *(void **)(a1 + 200);
  if ( v20 )
    CoTaskMemFree(v20);
  v21 = *(char **)(a1 + 184);
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v21);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v22 = *(char **)(a1 + 120);
  if ( v22 )
  {
    v23 = (*(_QWORD *)(a1 + 136) - (_QWORD)v22) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v23 < 0x1000 )
    {
LABEL_41:
      sub_180039D98(v22);
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 136) = 0LL;
      goto LABEL_42;
    }
    v9 = v23 + 39;
    v24 = (char *)*((_QWORD *)v22 - 1);
    v11 = (char *)(v22 - v24);
    if ( (unsigned __int64)(v11 - 8) <= 0x1F )
    {
      v22 = v24;
      goto LABEL_41;
    }
LABEL_43:
    o__invalid_parameter_noinfo_noreturn(v11, v9);
    JUMPOUT(0x1800152AFLL);
  }
LABEL_42:
  sub_180017F24(a1 + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  result = &off_18003ED78;
  *(_QWORD *)a1 = &off_18003ED78;
  return result;
}
