/*
 * XREFs of sub_1800B13BD @ 0x1800B13BD
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 */

void __fastcall sub_1800B13BD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        LPVOID pv,
        LPVOID a9,
        _QWORD *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        __int64 a32,
        char a33,
        int a34)
{
  __int64 v34; // rcx

  if ( a34 < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 15LL, &unk_180172650, (unsigned int)a34);
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( a10 )
      (*(void (__fastcall **)(_QWORD *))(*a10 + 16LL))(a10);
    CoTaskMemFree(a9);
    if ( a7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
    if ( a6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 16LL))(a6);
    JUMPOUT(0x180061885LL);
  }
  v34 = a10[25];
  if ( a33 )
  {
    sub_18010393C(v34);
  }
  else
  {
    LOBYTE(a2) = 1;
    sub_180104404(v34, a2, 0LL);
  }
  if ( pv )
    CoTaskMemFree(pv);
  (*(void (__fastcall **)(_QWORD *))(*a10 + 16LL))(a10);
  JUMPOUT(0x180061844LL);
}
