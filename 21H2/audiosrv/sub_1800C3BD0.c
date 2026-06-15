/*
 * XREFs of sub_1800C3BD0 @ 0x1800C3BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

HRESULT __fastcall sub_1800C3BD0(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  HRESULT result; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0xAu, (__int64)&unk_18016DE00);
  }
  v2 = *(_QWORD *)(a1 + 240);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v3 = *(_QWORD *)(a1 + 248);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  result = CoDisconnectObject((LPUNKNOWN)(a1 & -(__int64)(a1 != 8)), 0);
  if ( result < 0 )
    return sub_18006D26C((int)retaddr, 250, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp", result);
  return result;
}
