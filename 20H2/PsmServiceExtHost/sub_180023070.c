/*
 * XREFs of sub_180023070 @ 0x180023070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007F1BC @ 0x18007F1BC (sub_18007F1BC.c)
 */

int __fastcall sub_180023070(__int64 a1, __int64 a2)
{
  DWORD v3; // esi
  _QWORD *Value; // rdi
  unsigned int v5; // ecx
  int v6; // edi
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  int result; // eax
  DWORD v10; // ebx
  __int64 v11; // rcx
  __int64 *v12; // [rsp+20h] [rbp-E8h]
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  while ( 1 )
  {
    v3 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(a2 + 576);
    *(_DWORD *)(a2 + 584) = GetCurrentThreadId();
    v5 = *(_DWORD *)(a2 + 608);
    v6 = (v5 >> 18) & 1;
    if ( ((v5 >> 17) & 1) == v6 )
      break;
    *(_DWORD *)(a2 + 608) = v5 & 0xFFFDFFFF | (v6 << 17);
    sub_180023230(a2);
    if ( (unsigned int)dword_1800B3218 > 4
      && (byte_1800B3228 & 0x40) != 0
      && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 88LL) + 160LL);
      v13 = a2 + 96;
      v12 = &v13;
      sub_18007F1BC(v11, &unk_1800A1776);
    }
    v7 = *(_QWORD *)(a2 + 88);
    v8 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(v8 - 1264) & 1) != 0 )
    {
      LODWORD(v12) = v6;
      RmRpsNotifyApplicationInterruptiveUIChange(
        *(_QWORD *)(v8 - 1272),
        a2 + 96,
        v7 + 228,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 160LL) + 88LL),
        v12);
    }
  }
  *(_DWORD *)(a2 + 608) = v5 & 0xFFF7FFFF;
  sub_180023230(a2);
  result = sub_1800274E0(a2);
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v10, 0LL);
  }
  return result;
}
