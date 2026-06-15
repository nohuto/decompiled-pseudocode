/*
 * XREFs of sub_180128DA0 @ 0x180128DA0
 * Callers:
 *     sub_180074EB0 @ 0x180074EB0 (sub_180074EB0.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180128D30 @ 0x180128D30 (sub_180128D30.c)
 */

__int64 __fastcall sub_180128DA0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 616));
  *(_DWORD *)(a1 + 612) = -1073741823;
  v4 = *(_QWORD *)(a1 + 600);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 600) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)a1 = off_180146F18;
  sub_180128D30((_QWORD *)a1);
  if ( (a2 & 1) != 0 )
    sub_180033A70((void *)a1);
  return a1;
}
