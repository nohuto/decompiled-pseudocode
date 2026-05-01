/*
 * XREFs of sub_180085694 @ 0x180085694
 * Callers:
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18003F554 @ 0x18003F554 (sub_18003F554.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800854B8 @ 0x1800854B8 (sub_1800854B8.c)
 *     sub_1800855CC @ 0x1800855CC (sub_1800855CC.c)
 */

void __fastcall sub_180085694(unsigned __int64 a1)
{
  int v2; // esi
  int v3; // r15d
  __int64 v4; // rbx
  _QWORD *v5; // rax
  DWORD TickCount; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  DWORD v10; // r14d
  char *v11; // rdx
  int v12; // edi
  CHAR v13; // dl
  unsigned int v14; // r13d
  __int64 v15; // r14
  CHAR *v16; // r12
  unsigned int v17; // ecx
  REGHANDLE v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rcx
  REGHANDLE v23; // rcx
  unsigned int v24; // [rsp+78h] [rbp-90h] BYREF
  DWORD v25; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v26; // [rsp+80h] [rbp-88h] BYREF
  ULONGLONG RegHandle; // [rsp+88h] [rbp-80h] BYREF
  int v28; // [rsp+90h] [rbp-78h] BYREF
  int v29; // [rsp+94h] [rbp-74h] BYREF
  int v30; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+9Ch] [rbp-6Ch] BYREF
  GUID ProviderId; // [rsp+A0h] [rbp-68h] BYREF
  CHAR v33[272]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = 0;
  v3 = 0;
  AcquireSRWLockExclusive(&stru_1800B5078);
  v4 = qword_1800B5080;
  if ( !qword_1800B5080 )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v4 == a1 )
      break;
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
  if ( !v4 )
  {
LABEL_5:
    v5 = LocalAlloc(0x40u, 0x20uLL);
    v4 = (__int64)v5;
    if ( !v5 )
      goto LABEL_37;
    *v5 = a1;
    TickCount = GetTickCount();
    v7 = qword_1800B5080;
    *(_DWORD *)(v4 + 8) = TickCount - 60001;
    *(_QWORD *)(v4 + 12) = 0LL;
    *(_QWORD *)(v4 + 24) = v7;
    qword_1800B5080 = v4;
  }
  ++*(_DWORD *)(v4 + 12);
  ++*(_DWORD *)(v4 + 16);
  if ( GetTickCount() - *(_DWORD *)(v4 + 8) > 0xEA60 )
  {
    *(_DWORD *)(v4 + 8) = GetTickCount();
    v25 = sub_1800855CC(v8, v33, v9, &v26, &v24);
    v10 = v25;
    if ( v25
      && a1 >= (unsigned __int64)&_ImageBase
      && (v11 = (char *)&_ImageBase + v24, v11 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v11 )
    {
      v12 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v12 = 0;
    }
    if ( *(_DWORD *)(v4 + 16) == 1 && !(unsigned int)sub_18003F554((ULONGLONG *)&dword_1800B3430, 0LL, 0LL) )
    {
      if ( dword_1800B3430 )
      {
        v13 = v33[0];
        v2 = 1;
        ProviderId.Data1 = 488056742;
        v3 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v14 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v33[0] )
        {
          v15 = 0LL;
          v16 = v33;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v15) += toupper(v13);
            ++v16;
            v17 = v14 + 1;
            v13 = *v16;
            v14 = v17 < 0x10 ? v17 : 0;
            v15 = (v15 + 1) & -(__int64)(v17 < 0x10);
          }
          while ( *v16 );
          v10 = v25;
        }
        if ( !EventRegister(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v2 = 0;
          EventUnregister(RegHandle);
        }
      }
      v18 = qword_1800B3450;
      qword_1800B3450 = 0LL;
      dword_1800B3430 = 0;
      EventUnregister(v18);
    }
    if ( !(unsigned int)sub_18003F554((ULONGLONG *)&dword_1800B3468, 0LL, 0LL) )
    {
      if ( (unsigned int)dword_1800B3468 > 5 && sub_180010470((__int64)&dword_1800B3468, 0x400000000000LL) )
      {
        v19 = *(_DWORD *)(v4 + 16);
        v20 = *(unsigned int *)(v4 + 12);
        v21 = v33;
        v25 = v2;
        v28 = v20;
        if ( !v10 )
          v21 = "<unknown>";
        v31 = v12;
        *(_QWORD *)&ProviderId.Data1 = v21;
        LODWORD(RegHandle) = 10;
        v22 = v10 != 0 ? v24 : 0;
        v24 = v19;
        v29 = v22;
        v30 = v10 != 0 ? v26 : 0;
        v26 = v3;
        sub_1800854B8(
          v22,
          byte_1800A373D,
          v20,
          (__int64)v21,
          (__int64)&RegHandle,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (void **)&ProviderId,
          (__int64)&v28,
          (__int64)&v24,
          (__int64)&v25,
          (__int64)&v26);
      }
      v23 = qword_1800B3488;
      qword_1800B3488 = 0LL;
      dword_1800B3468 = 0;
      EventUnregister(v23);
    }
    if ( v3 && v2 )
      Sleep(0x3E8u);
    *(_DWORD *)(v4 + 12) = 0;
  }
LABEL_37:
  ReleaseSRWLockExclusive(&stru_1800B5078);
}
