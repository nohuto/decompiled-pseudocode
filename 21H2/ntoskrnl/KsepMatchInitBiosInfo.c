/*
 * XREFs of KsepMatchInitBiosInfo @ 0x140A6A22C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A6A0D0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepLogInfo @ 0x1403717A8 (KsepLogInfo.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     wcstoul @ 0x1403D4500 (wcstoul.c)
 *     __report_rangecheckfailure @ 0x1404B646C (__report_rangecheckfailure.c)
 *     KsepDebugPrint @ 0x140526EE8 (KsepDebugPrint.c)
 *     KsepRegistryOpenKey @ 0x14075B464 (KsepRegistryOpenKey.c)
 *     KsepRegistryCloseKey @ 0x1407BE834 (KsepRegistryCloseKey.c)
 *     KsepRegistryQueryMULTISZ @ 0x1407BE910 (KsepRegistryQueryMULTISZ.c)
 *     KsepRegistryQuerySZ @ 0x1407BE940 (KsepRegistryQuerySZ.c)
 */

__int64 KsepMatchInitBiosInfo()
{
  int v0; // edi
  int v1; // eax
  HANDLE v2; // rbx
  int MULTISZ; // r14d
  __int64 v4; // rax
  _WORD *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  wchar_t v13[3]; // [rsp+40h] [rbp-20h] BYREF
  wchar_t v14[3]; // [rsp+46h] [rbp-1Ah] BYREF
  wchar_t Str[6]; // [rsp+4Ch] [rbp-14h] BYREF

  v12 = 0LL;
  KeyHandle = 0LL;
  xmmword_140C54230 = 0LL;
  qword_140C54260 = 0LL;
  v0 = -1;
  xmmword_140C54240 = 0LL;
  xmmword_140C54250 = 0LL;
  v1 = KsepRegistryOpenKey(L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  v2 = KeyHandle;
  MULTISZ = v1;
  if ( v1 >= 0 )
  {
    MULTISZ = KsepRegistryQuerySZ(KeyHandle, L"SystemBiosDate", 1, v13, 0x16uLL, &v12);
    if ( MULTISZ >= 0 )
    {
      Str[4] = 0;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655816LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosDate name [%ws] .\n", v13);
      KsepLogInfo(0LL, (__int64)"KSE: BiosDate name [%ws] .\n", v13);
      MULTISZ = KsepRegistryQueryMULTISZ(KeyHandle, L"SystemBiosVersion", (__int64)&unk_140C53FF0, 520LL, (__int64)&v12);
      word_140C541F6 = 0;
      v4 = 0LL;
      v5 = &unk_140C53FF0;
      while ( *v5 != 32 )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v5;
        if ( (unsigned int)v4 >= 0x104 )
          goto LABEL_11;
      }
      v6 = 2 * v4;
      if ( v6 >= 0x208 )
        _report_rangecheckfailure();
      *(_WORD *)((char *)&unk_140C53FF0 + v6) = 0;
LABEL_11:
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655840LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosVendor name [%ws] .\n", &unk_140C53FF0);
      KsepLogInfo(0LL, (__int64)"KSE: BiosVendor name [%ws] .\n", &unk_140C53FF0);
      v13[2] = 0;
      v14[2] = 0;
      v7 = wcstoul(Str, 0LL, 16);
      v8 = wcstoul(v13, 0LL, 16) << 8;
      v9 = v8 + wcstoul(v14, 0LL, 16);
      v2 = KeyHandle;
      v0 = v9 + ((v7 + (v7 < 0x80 ? 0x2000 : 6400)) << 16);
    }
  }
  if ( v2 )
    KsepRegistryCloseKey(v2);
  if ( MULTISZ < 0 )
  {
    DWORD2(xmmword_140C54250) = -1;
    *(_QWORD *)&xmmword_140C54230 = 0LL;
  }
  else
  {
    *(_QWORD *)&xmmword_140C54230 = &unk_140C53FF0;
    DWORD2(xmmword_140C54250) = v0;
  }
  return (unsigned int)MULTISZ;
}
