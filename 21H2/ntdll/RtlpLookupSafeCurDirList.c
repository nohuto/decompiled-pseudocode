/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x1800DF03C
 * Callers:
 *     LdrpSearchPath @ 0x18006035C (LdrpSearchPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004B140 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180077E30 (RtlExpandEnvironmentStrings_U.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenKey @ 0x18009D880 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009D8A0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18009D920 (NtQueryValueKey.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800DEFA4 (RtlpEnsureTailingSlashAndAddToList.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  _QWORD *Heap; // rax
  _QWORD **v2; // rbx
  signed __int64 v3; // rdi
  int v4; // eax
  signed __int64 v5; // rcx
  int i; // edi
  __int64 *v7; // rdx
  int v8; // eax
  signed __int64 v9; // rdi
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  char *v16; // [rsp+50h] [rbp-B8h]
  __int64 v17; // [rsp+58h] [rbp-B0h]
  char *v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  char *v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+84h] [rbp-84h]
  int v22; // [rsp+8Ch] [rbp-7Ch]
  int v23; // [rsp+90h] [rbp-78h]
  char v24; // [rsp+94h] [rbp-74h] BYREF
  int v25; // [rsp+29Ch] [rbp+194h]
  char v26; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v27; // [rsp+4B8h] [rbp+3B0h] BYREF

  LODWORD(v19) = 34078720;
  v20 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  result = qword_1801697C0;
  LODWORD(v15) = 34078720;
  LODWORD(v17) = 0x2000000;
  if ( qword_1801697C0 == -1 )
  {
    v18 = &v24;
    v16 = &v26;
    v20 = &v27;
    Heap = (_QWORD *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 16LL);
    v2 = (_QWORD **)Heap;
    if ( Heap )
    {
      Heap[1] = Heap;
      *Heap = Heap;
      Handle = (HANDLE)qword_18016D7E0;
      v3 = qword_18016D7E0;
      if ( !qword_18016D7E0 )
      {
        v4 = NtOpenKey();
        v5 = 0LL;
        if ( v4 < 0 )
          v5 = -1LL;
        Handle = (HANDLE)v5;
        v3 = _InterlockedCompareExchange64(&qword_18016D7E0, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose((HANDLE)v5);
          Handle = (HANDLE)v3;
        }
        else
        {
          v3 = v5;
        }
      }
      if ( (v3 != -1 && (int)NtQueryValueKey() >= 0 && v13 == 16 && v21 == 1
         || (int)RtlQueryEnvironmentVariable_U(0LL, &qword_18011E508, (__int64)&v15) >= 0
         && (int)RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)&v15) >= 0)
        && Handle != (HANDLE)-1LL )
      {
        for ( i = 0; ; ++i )
        {
          v8 = ZwEnumerateValueKey();
          if ( v8 == -2147483622 )
            break;
          if ( v8 != -2147483643 )
          {
            if ( v8 < 0 )
              break;
            if ( v23 )
            {
              if ( (unsigned int)(v22 - 1) <= 1 )
              {
                LOWORD(v17) = v23;
                if ( (int)NtQueryValueKey() >= 0 && (unsigned int)(v22 - 1) <= 1 )
                {
                  v7 = &v15;
                  LOWORD(v15) = 2 * ((unsigned int)(v13 - 12) >> 1) - 2;
                  if ( v25 == 2 )
                  {
                    if ( (int)RtlExpandEnvironmentStrings_U(0LL, (unsigned __int16 *)&v15, (__int64)&v19, 0LL) < 0 )
                      continue;
                    v7 = &v19;
                  }
                  RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)v7);
                }
              }
            }
          }
        }
      }
    }
    v9 = _InterlockedCompareExchange64(&qword_1801697C0, (signed __int64)v2, -1LL);
    if ( v9 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v10 = *v2;
          if ( *v2 == v2 )
            break;
          if ( (_QWORD **)v10[1] != v2 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
            __fastfail(3u);
          v12 = LdrpHeap;
          *v2 = v11;
          v11[1] = v2;
          RtlFreeHeap(v12, 0, (__int64)v10);
        }
        RtlFreeHeap(LdrpHeap, 0, (__int64)v2);
      }
      return v9;
    }
  }
  return result;
}
