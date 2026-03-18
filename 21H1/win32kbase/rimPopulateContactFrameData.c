/*
 * XREFs of rimPopulateContactFrameData @ 0x1C0182A9C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C018341C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C017E4EC (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimExtractTransducerUsages @ 0x1C017F174 (rimExtractTransducerUsages.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0181948 (rimExtractPointerDeviceUsages.c)
 *     rimTransformGeometry @ 0x1C0183AFC (rimTransformGeometry.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // r15
  __int64 v15; // rsi
  _DWORD *v16; // r13
  struct _HIDP_PREPARSED_DATA *v17; // rax
  __int64 v18; // rdi
  int v19; // ebx
  _DWORD *v20; // r12
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // edi
  unsigned int v25; // r9d
  struct _HIDP_PREPARSED_DATA *v26; // rdx
  int v27; // edx
  int PointerDeviceUsages; // ebx
  int v29; // r9d
  bool v30; // zf
  __int64 v32; // [rsp+B0h] [rbp+8h] BYREF
  struct _HIDP_PREPARSED_DATA *v33; // [rsp+B8h] [rbp+10h]
  char *v34; // [rsp+C0h] [rbp+18h]
  unsigned int v35; // [rsp+C8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v32 = a1;
  v13 = *(_QWORD *)(a2 + 480);
  v15 = a7;
  v16 = a8;
  v17 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  v18 = *(_QWORD *)(v13 + 816);
  v19 = *(_DWORD *)(v13 + 788);
  v20 = (_DWORD *)(a7 + 2344);
  *(_DWORD *)(a7 + 2340) |= 2u;
  v33 = v17;
  v21 = a9;
  *v16 = 0;
  *v21 = 0;
  *a10 = 0;
  *a11 = 0;
  *a13 = *(_QWORD *)(v15 + 36);
  *a12 = (*(_DWORD *)(v15 + 8) >> 3) & 1;
  memset(v20, 0, 0xF0uLL);
  *v20 = *(_DWORD *)v15;
  v20[12] = a6;
  *((_WORD *)v20 + 28) = *(_WORD *)(v15 + 4);
  *((_WORD *)v20 + 29) = a5;
  v20[32] = v19;
  *((_QWORD *)v20 + 18) = v18;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    v22 = *(_QWORD *)(a2 + 24);
  else
    v22 = *(_QWORD *)(a2 + 16);
  v23 = v32;
  v24 = v35;
  v25 = v35;
  v26 = v33;
  *((_QWORD *)v20 + 10) = v22;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          v13,
                          v26,
                          v34,
                          v25,
                          *(_QWORD *)(v23 + 640) == 0LL,
                          *(unsigned __int8 *)(v23 + 849),
                          (__int64)v20,
                          v16,
                          a9,
                          a10,
                          a11);
  if ( PointerDeviceUsages >= 0 )
  {
    v30 = *v16 == 0;
    v32 = *(_QWORD *)(v20 + 1);
    if ( v30 )
    {
      *(_DWORD *)(v15 + 2340) ^= (*(_DWORD *)(v15 + 2340) ^ ~(v20[19] >> 22)) & 4;
      rimTransformGeometry((struct tagHID_POINTER_DEVICE_INFO *)v13, (__int64)a12);
    }
    if ( (unsigned int)(*(_DWORD *)(v13 + 24) - 5) > 1
      || (PointerDeviceUsages = rimExtractTransducerUsages(a2, a5, v34, v24, v15), PointerDeviceUsages >= 0) )
    {
      InputTraceLogging::RIM::PopulateContact(
        a2,
        *(_DWORD *)(v13 + 24),
        *((_WORD *)v20 + 28),
        (__int64)&v32,
        (__int64)(v20 + 14),
        0);
      return (unsigned int)PointerDeviceUsages;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = 59;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = 58;
LABEL_7:
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v27, 1, v29, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  return (unsigned int)PointerDeviceUsages;
}
