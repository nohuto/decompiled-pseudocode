/*
 * XREFs of sub_18003111C @ 0x18003111C
 * Callers:
 *     sub_18002F700 @ 0x18002F700 (sub_18002F700.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003111C(__int64 a1)
{
  *(_QWORD *)(a1 + 40) = &off_180048620;
  *(_QWORD *)(a1 + 48) = &off_180048680;
  *(_QWORD *)(a1 + 56) = &off_180048680;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 80));
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 136) = 1LL;
  *(_QWORD *)a1 = off_18004CB70;
  *(_QWORD *)(a1 + 8) = off_18004CB50;
  *(_QWORD *)(a1 + 16) = off_18004CAF8;
  *(_QWORD *)(a1 + 24) = off_18004CA88;
  *(_QWORD *)(a1 + 40) = off_18004CA20;
  *(_QWORD *)(a1 + 48) = off_18004CA08;
  *(_QWORD *)(a1 + 56) = off_18004C9F0;
  *(_QWORD *)(a1 + 96) = off_18004C9C8;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *(_QWORD *)a1 = off_18004CFD0;
  *(_QWORD *)(a1 + 8) = off_18004CB50;
  *(_QWORD *)(a1 + 16) = off_18004CF78;
  *(_QWORD *)(a1 + 24) = off_18004CF08;
  *(_QWORD *)(a1 + 40) = off_18004CEA0;
  *(_QWORD *)(a1 + 48) = off_18004CA08;
  *(_QWORD *)(a1 + 56) = off_18004C9F0;
  *(_QWORD *)(a1 + 96) = off_18004C9C8;
  return a1;
}
