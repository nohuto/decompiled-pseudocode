/*
 * XREFs of sub_18013CB88 @ 0x18013CB88
 * Callers:
 *     sub_1800741D8 @ 0x1800741D8 (sub_1800741D8.c)
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     EventUnregister @ 0x18006BAE6 (EventUnregister.c)
 *     EventRegister @ 0x18006BAF2 (EventRegister.c)
 *     sub_1800B4560 @ 0x1800B4560 (sub_1800B4560.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_18013C814 @ 0x18013C814 (sub_18013C814.c)
 *     sub_18013C928 @ 0x18013C928 (sub_18013C928.c)
 *     sub_18013CAAC @ 0x18013CAAC (sub_18013CAAC.c)
 */

void __fastcall sub_18013CB88(unsigned __int64 a1, int a2, const CHAR *a3, unsigned int a4, int a5)
{
  int v6; // esi
  int v7; // r15d
  int v9; // r13d
  __int64 v10; // rbx
  _QWORD *v11; // rax
  DWORD TickCount; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  DWORD v16; // r14d
  char *v17; // rax
  DWORD v18; // edi
  CHAR *v19; // rax
  CHAR v20; // dl
  unsigned int v21; // r13d
  __int64 v22; // r15
  CHAR *v23; // r14
  unsigned int v24; // ecx
  REGHANDLE v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const char *v28; // r10
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v31; // r9
  REGHANDLE v32; // rcx
  int v33; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  DWORD v35; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A4h] [rbp-64h] BYREF
  int v41; // [rsp+A8h] [rbp-60h] BYREF
  ULONGLONG RegHandle; // [rsp+B0h] [rbp-58h] BYREF
  const CHAR *v43; // [rsp+B8h] [rbp-50h] BYREF
  GUID ProviderId; // [rsp+C0h] [rbp-48h] BYREF
  CHAR v45[272]; // [rsp+D8h] [rbp-30h] BYREF

  v37 = a4;
  v38 = a2;
  v6 = 0;
  v7 = 0;
  v9 = a2;
  AcquireSRWLockExclusive(&stru_18019FBB0);
  v10 = qword_18019FBB8;
  if ( !qword_18019FBB8 )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v10 == a1 )
      break;
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v10 );
  if ( !v10 )
  {
LABEL_5:
    v11 = LocalAlloc(0x40u, 0x20uLL);
    v10 = (__int64)v11;
    if ( !v11 )
      goto LABEL_48;
    *v11 = a1;
    TickCount = GetTickCount();
    v13 = qword_18019FBB8;
    *(_DWORD *)(v10 + 8) = TickCount - 60001;
    *(_QWORD *)(v10 + 12) = 0LL;
    *(_QWORD *)(v10 + 24) = v13;
    qword_18019FBB8 = v10;
  }
  ++*(_DWORD *)(v10 + 12);
  ++*(_DWORD *)(v10 + 16);
  if ( GetTickCount() - *(_DWORD *)(v10 + 8) > 0xEA60 )
  {
    *(_DWORD *)(v10 + 8) = GetTickCount();
    v35 = sub_18013CAAC(v14, v45, v15, &v33, &v34);
    v16 = v35;
    if ( v35
      && a1 >= (unsigned __int64)&_ImageBase
      && (v17 = (char *)&_ImageBase + v34, v17 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v17 )
    {
      v18 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v18 = 0;
    }
    if ( !a3 )
    {
      v19 = v45;
      if ( !v35 )
        v19 = 0LL;
      a3 = v19;
    }
    if ( *(_DWORD *)(v10 + 16) == 1 && !(unsigned int)sub_1800B4560((ULONGLONG *)&dword_18019D180) )
    {
      if ( dword_18019D180 )
      {
        v20 = v45[0];
        v7 = 1;
        ProviderId.Data1 = 488056742;
        v6 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v21 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v45[0] )
        {
          v22 = 0LL;
          v23 = v45;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v22) += o_toupper((unsigned int)v20);
            ++v23;
            v24 = v21 + 1;
            v20 = *v23;
            v21 = v24 < 0x10 ? v24 : 0;
            v22 = (v22 + 1) & -(__int64)(v24 < 0x10);
          }
          while ( *v23 );
          v16 = v35;
          v7 = 1;
        }
        if ( !EventRegister(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v6 = 0;
          EventUnregister(RegHandle);
        }
        v9 = v38;
      }
      v25 = qword_18019D1A0;
      dword_18019D180 = 0;
      qword_18019D1A0 = 0LL;
      EventUnregister(v25);
    }
    if ( !(unsigned int)sub_1800B4560((ULONGLONG *)&dword_18019D1B8) )
    {
      if ( v9 )
      {
        if ( (unsigned int)dword_18019D1B8 > 5
          && __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019D1B8,
               0x400000000000uLL) )
        {
          v26 = *(unsigned int *)(v10 + 16);
          v27 = *(unsigned int *)(v10 + 12);
          v28 = v45;
          v36 = v7;
          v35 = v6;
          if ( !v16 )
            v28 = "<unknown>";
          v43 = a3;
          v38 = v26;
          *(_QWORD *)&ProviderId.Data1 = v28;
          v41 = v18;
          v39 = v16 != 0 ? v34 : 0;
          v34 = v27;
          LODWORD(RegHandle) = 10;
          v29 = v33 & (unsigned int)-(v16 != 0);
          v33 = a5;
          v40 = v29;
          sub_18013C928(
            v29,
            byte_18016CCC2,
            v26,
            v27,
            (__int64)&RegHandle,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (const CHAR **)&ProviderId,
            (__int64)&v34,
            (__int64)&v38,
            &v43,
            (__int64)&v37,
            (__int64)&v33,
            (__int64)&v35,
            (__int64)&v36);
        }
      }
      else if ( (unsigned int)dword_18019D1B8 > 5
             && __vcrt_trace_logging_provider::_TlgKeywordOn(
                  (__vcrt_trace_logging_provider *)&dword_18019D1B8,
                  0x400000000000uLL) )
      {
        v30 = *(unsigned int *)(v10 + 12);
        v31 = v45;
        v40 = *(_DWORD *)(v10 + 16);
        LODWORD(RegHandle) = v7;
        if ( !v16 )
          v31 = "<unknown>";
        v41 = v6;
        v39 = v30;
        *(_QWORD *)&ProviderId.Data1 = v31;
        v35 = v18;
        v37 = v16 != 0 ? v34 : 0;
        v36 = v16 != 0 ? v33 : 0;
        v33 = 10;
        sub_18013C814(
          v37,
          byte_18016CD80,
          v30,
          (__int64)v31,
          (__int64)&v33,
          (__int64)&v35,
          (__int64)&v36,
          (__int64)&v37,
          (const CHAR **)&ProviderId,
          (__int64)&v39,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&RegHandle);
      }
      v32 = qword_18019D1D8;
      dword_18019D1B8 = 0;
      qword_18019D1D8 = 0LL;
      EventUnregister(v32);
    }
    if ( v7 && v6 )
      Sleep(0x3E8u);
    *(_DWORD *)(v10 + 12) = 0;
  }
LABEL_48:
  ReleaseSRWLockExclusive(&stru_18019FBB0);
}
