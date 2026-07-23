/*
 * XREFs of RtlpWalkFrameChain @ 0x180052760
 * Callers:
 *     RtlWalkFrameChain @ 0x180052720 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpIsFrameInBounds @ 0x180052680 (RtlpIsFrameInBounds.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180052A64 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpVirtualUnwind @ 0x180052BF8 (RtlpVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x180052E60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180053090 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x180053270 (RtlpGetStackLimits.c)
 *     RtlLocateExtendedFeature2 @ 0x1800725D0 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009DA60 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext2 @ 0x1800A1820 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1800A28C0 (_alloca_probe.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  void (*v7)(void); // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  unsigned int v12; // ebx
  __int64 v13; // rsi
  NTSTATUS VirtualMemory; // eax
  _BYTE *v15; // rcx
  int v17; // [rsp+40h] [rbp-20h]
  _BYTE v18[4]; // [rsp+60h] [rbp+0h] BYREF
  int v19; // [rsp+64h] [rbp+4h]
  int v20; // [rsp+68h] [rbp+8h]
  ULONG ContextLength; // [rsp+6Ch] [rbp+Ch] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+18h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+88h] [rbp+28h] BYREF
  __int128 v25; // [rsp+90h] [rbp+30h]
  __int64 v26; // [rsp+A0h] [rbp+40h]
  __int64 v27; // [rsp+A8h] [rbp+48h]
  _BYTE *v28; // [rsp+B0h] [rbp+50h]
  _BYTE v29[8]; // [rsp+B8h] [rbp+58h] BYREF
  _BYTE v30[8]; // [rsp+C0h] [rbp+60h] BYREF
  __int64 ExtendedFeature2; // [rsp+C8h] [rbp+68h]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+E0h] [rbp+80h]
  unsigned __int64 v33; // [rsp+F8h] [rbp+98h]
  _BYTE MemoryInformation[48]; // [rsp+100h] [rbp+A0h] BYREF
  void (*v35)(void); // [rsp+158h] [rbp+F8h]

  if ( !(unsigned __int8)RtlpGetStackLimits(&v23, &v22) )
    return 0LL;
  MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  v7 = RtlRaiseExceptionForReturnAddressHijack;
  if ( ((_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 60) & 3) != 1 )
    v7 = 0LL;
  RtlGetExtendedContextLength2(v7 != 0LL ? 1048651 : 1048587, &ContextLength, v7 != 0LL ? 0x800 : 0);
  v8 = ContextLength + 15LL;
  if ( v8 <= ContextLength )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = alloca(v9);
  v11 = alloca(v9);
  RtlInitializeExtendedContext2((PCONTEXT)v18, v7 != 0LL ? 1048651 : 1048587, &ContextEx, v7 != 0LL ? 0x800 : 0);
  RtlpCaptureContext2(v18);
  v18[0] = 0;
  v12 = 0;
  v20 = 0;
  v25 = xmmword_180181510;
  v26 = qword_180181520;
  do
  {
    if ( !RtlpIsFrameInBounds(&v23, v33, &v22) )
      break;
    v13 = RtlpLookupFunctionEntryForStackWalks(v35);
    v27 = v13;
    if ( !v13 )
      break;
    VirtualMemory = 0;
    v19 = 0;
    v15 = (_BYTE *)(*((_QWORD *)&v25 + 1) + *(unsigned int *)(v13 + 8));
    v28 = v15;
    if ( !v15[2] && !v15[1] && (*v15 & 0x20) == 0 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        v35,
                        MemoryBasicInformation,
                        MemoryInformation,
                        0x30uLL,
                        0LL);
      v19 = VirtualMemory;
      if ( VirtualMemory < 0 )
        return v12;
      LODWORD(v15) = -1073741823;
      if ( (MemoryInformation[36] & 0x40) != 0 )
        VirtualMemory = -1073741823;
      v19 = VirtualMemory;
    }
    if ( VirtualMemory < 0 )
      break;
    v19 = RtlpVirtualUnwind(
            (_DWORD)v15,
            DWORD2(v25),
            (_DWORD)v35,
            v13,
            (__int64)v18,
            (__int64)v18,
            (__int64)v30,
            (__int64)v29,
            v17,
            (__int64)&v23,
            (__int64)&v22);
    if ( v19 < 0 )
      break;
    if ( v12 && v7 && v35 == v7 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(ContextEx, 11LL, 2147353560LL);
      v35 = *(void (**)(void))(*(_QWORD *)(ExtendedFeature2 + 8) - 8LL);
    }
    if ( !v35 )
      break;
    if ( v12 >= a4 )
      *(_QWORD *)(a1 + 8LL * (v12 - a4)) = v35;
    v20 = ++v12;
  }
  while ( v12 < a2 );
  return v12;
}
