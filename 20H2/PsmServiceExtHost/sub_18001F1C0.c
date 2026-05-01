/*
 * XREFs of sub_18001F1C0 @ 0x18001F1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007F97C @ 0x18007F97C (sub_18007F97C.c)
 */

__int64 __fastcall sub_18001F1C0(__int64 a1, __int64 a2)
{
  DWORD v4; // esi
  __int64 v5; // rbp
  _QWORD *Value; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // esi
  __int64 v11; // rbx
  _QWORD *v12; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rdx
  int v18; // ecx
  char v19; // [rsp+50h] [rbp-58h] BYREF
  char v20; // [rsp+51h] [rbp-57h] BYREF
  _BYTE v21[6]; // [rsp+52h] [rbp-56h] BYREF
  __int64 v22; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-40h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A190B, 0, 0, 2u, &v24);
  v4 = dwTlsIndex;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( a2 == *(_QWORD *)(a1 + 16) )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v7 + 548) == 2 )
    {
      RtlQueryPerformanceCounter(*(_QWORD *)(v7 + 520) + 8LL);
      v8 = *(_QWORD *)(v7 + 80);
      *(_BYTE *)(v7 + 549) = 1;
      sub_18001BD70(v8);
      v9 = sub_180019CB0(v7);
      v10 = v9;
      if ( v9 )
      {
        if ( (unsigned int)(v9 - 8) <= 6 )
          sub_18001CC80(*(_QWORD *)(v7 + 80), 0);
      }
      else
      {
        v10 = 0;
      }
      if ( !v10 )
        LOBYTE(v10) = 0;
    }
    else
    {
      LOBYTE(v10) = 4;
    }
  }
  else
  {
    LOBYTE(v10) = 1;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( dwTlsIndex != -1 )
  {
    v12 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v12 & 2) == 0 )
      __int2c();
    if ( v12[2]-- == 1LL )
      *v12 &= ~2uLL;
  }
  *(_DWORD *)(v11 + 8) = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(unsigned __int8 *)(v17 + 548);
    v19 = *(_BYTE *)(v17 + 549);
    v20 = v18;
    v22 = a2;
    v21[0] = v10;
    v23 = *(_QWORD *)(v17 + 40);
    sub_18007F97C(
      v18,
      (unsigned int)&unk_1800A195B,
      v14,
      v15,
      (__int64)&v23,
      (__int64)v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v22);
  }
  return 0LL;
}
