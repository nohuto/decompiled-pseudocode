/*
 * XREFs of sub_1800E0A00 @ 0x1800E0A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E13F4 @ 0x1800E13F4 (sub_1800E13F4.c)
 */

__int64 __fastcall sub_1800E0A00(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // ebp
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // edi

  v3 = a3;
  v4 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800E13F4(*((_QWORD *)off_18019C348 + 2), a2, a3, a1, a2, a3);
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = (volatile signed __int32 *)a1[1];
  }
  LOBYTE(a3) = v3 != 0;
  LOBYTE(a2) = v4 != 0;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*a1)(*a1, a2, a3);
  if ( v6 )
    sub_180052600((std::_Ref_count_base *)v6);
  return v7;
}
