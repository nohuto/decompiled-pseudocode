/*
 * XREFs of sub_180068150 @ 0x180068150
 * Callers:
 *     sub_180034800 @ 0x180034800 (sub_180034800.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800558F4 @ 0x1800558F4 (sub_1800558F4.c)
 *     sub_18006729C @ 0x18006729C (sub_18006729C.c)
 *     sub_18006822C @ 0x18006822C (sub_18006822C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180068150(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 *v8; // rdx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_18016E298, a2);
  }
  v12 = 0LL;
  v13 = a2;
  v6 = sub_1800558F4(&v12, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84((int)retaddr, 179, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp", v6);
    sub_18000F708(&v12);
    return v7;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v13 = a1 + 16;
    v8 = *(__int64 **)(a1 + 64);
    if ( *(__int64 **)(a1 + 72) == v8 )
    {
      sub_18006729C((__int64 **)(a1 + 56), v8, &v12);
    }
    else
    {
      v10 = v12;
      *v8 = v12;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *(_QWORD *)(a1 + 64) += 8LL;
    }
    if ( a1 != -16 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    sub_18006822C(&v12, a3);
    sub_18000F708(&v12);
    return 0LL;
  }
}
