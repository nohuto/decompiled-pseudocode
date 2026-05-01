/*
 * XREFs of sub_180042BDC @ 0x180042BDC
 * Callers:
 *     sub_18003F314 @ 0x18003F314 (sub_18003F314.c)
 * Callees:
 *     sub_18003F4AC @ 0x18003F4AC (sub_18003F4AC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180042BDC(__int64 *a1, __int64 *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = operator new(0x328uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v5 = (__int64)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &off_18004DB50;
    v4[3] = 1;
    *(_QWORD *)v4 = off_18004DC30;
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
    *(_QWORD *)v5 = off_18004DDD0;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = -1LL;
    *(_QWORD *)(v5 + 744) = 0LL;
    *(_QWORD *)(v5 + 752) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 760), 0, 0);
    *(_DWORD *)(v5 + 800) = 0;
    memset((void *)(v5 + 32), 0, 0x2C4uLL);
    v6 = sub_18003F4AC(v5, *a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
