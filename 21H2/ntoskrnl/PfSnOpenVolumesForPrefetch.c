/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x1407DDABC
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406D958C (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406DBCB4 (PfSnVolumeCheckIsSdBus.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x1407DC4E4 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfMetadataRecordIsEqual @ 0x1407DC578 (PfMetadataRecordIsEqual.c)
 *     PfSnQueryVolumeInfo @ 0x1407DE074 (PfSnQueryVolumeInfo.c)
 *     PfpOpenHandleCreate @ 0x1407DFC68 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1407DFFD8 (PfpOpenHandleClose.c)
 *     PfSnIsVolumeMounted @ 0x1407E0A98 (PfSnIsVolumeMounted.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r14
  int v4; // ebx
  WCHAR *v5; // r12
  unsigned int v6; // eax
  __int64 Pool2; // rax
  unsigned int v8; // esi
  _QWORD *v9; // rdi
  int Event; // edi
  int DeviceInterfaces; // eax
  bool v12; // zf
  unsigned int v13; // edi
  const WCHAR *v14; // rsi
  __int64 v15; // r15
  int IsVolumeMounted; // eax
  int v17; // ecx
  _OWORD *v18; // rax
  _OWORD *v19; // rdi
  int v20; // eax
  __int128 v21; // xmm1
  PVOID v22; // rcx
  PVOID *v23; // rax
  wchar_t *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int *v28; // rcx
  PVOID *v29; // r9
  int v30; // r8d
  PVOID *v31; // r15
  PVOID *v32; // r9
  __int64 v33; // rcx
  wchar_t *v34; // rax
  __int16 v35; // cx
  __int64 v36; // r15
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 *v39; // rdx
  HANDLE v40; // rdx
  _QWORD *v41; // rbx
  __int64 v42; // rax
  __int64 *v44; // rcx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  int v47; // [rsp+50h] [rbp-89h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-81h] BYREF
  PVOID v49; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  __int128 v51; // [rsp+70h] [rbp-69h] BYREF
  __m256i v52; // [rsp+80h] [rbp-59h] BYREF
  __m256i v53; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v54[2]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-11h]
  __int64 v56; // [rsp+D0h] [rbp-9h]
  int v57; // [rsp+D8h] [rbp-1h]
  int v58; // [rsp+DCh] [rbp+3h]
  __int128 v59; // [rsp+E0h] [rbp+7h]
  int v60; // [rsp+140h] [rbp+67h]
  int i; // [rsp+140h] [rbp+67h]
  unsigned int cbDest; // [rsp+150h] [rbp+77h]
  size_t cbDesta; // [rsp+150h] [rbp+77h]
  __int64 v65; // [rsp+158h] [rbp+7Fh]

  v2 = *a1;
  p_P = &P;
  v54[1] = 0;
  v58 = 0;
  P = &P;
  v49 = 0LL;
  v4 = 0;
  v53.m256i_i64[3] = 0x200000000LL;
  v52.m256i_i64[3] = 0x200000000LL;
  v47 = 0;
  v51 = 0LL;
  v60 = 0;
  v5 = 0LL;
  SourceString = 0LL;
  memset(&v53, 0, 24);
  memset(&v52, 0, 24);
  Handle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v2, 1);
  if ( v2 && (v6 = *(_DWORD *)(v2 + 112), v6 < 0x4000) )
  {
    Pool2 = ExAllocatePool2(256LL, 112 * v6, 1984979779LL);
    a1[2] = Pool2;
    if ( !Pool2 )
      goto LABEL_57;
    v8 = 0;
    if ( *(_DWORD *)(v2 + 112) )
    {
      do
      {
        v9 = (_QWORD *)(a1[2] + 112LL * v8);
        memset(v9, 0, 0x70uLL);
        v9[1] = v9;
        *v9 = v9;
        ++v8;
        *((_OWORD *)v9 + 2) = 0LL;
        *((_OWORD *)v9 + 3) = 0LL;
        v9[7] |= 0x200000000uLL;
        *((_OWORD *)v9 + 4) = 0LL;
        *((_OWORD *)v9 + 5) = 0LL;
        v9[11] |= 0x200000000uLL;
      }
      while ( v8 < *(_DWORD *)(v2 + 112) );
      v4 = 0;
    }
    v54[0] = 48;
    v55 = 0LL;
    v57 = 512;
    v56 = 0LL;
    v59 = 0LL;
    Event = NtCreateEvent((unsigned __int64)&Handle, 2031619LL, (int)v54, NotificationEvent, 0);
    if ( Event < 0 )
      goto LABEL_42;
    DeviceInterfaces = IopGetDeviceInterfaces((int *)&GUID_DEVINTERFACE_VOLUME, 0LL, 0, 0, &SourceString, 0LL);
    v5 = (WCHAR *)SourceString;
    Event = DeviceInterfaces;
    if ( DeviceInterfaces < 0 )
      goto LABEL_42;
    v12 = *SourceString == 0;
    v13 = 0;
    cbDest = 0;
    v14 = SourceString;
    while ( !v12 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v14[v15] );
      SourceString = (PCWSTR)(2LL * (unsigned int)(v15 + 1));
      if ( v13 <= (unsigned __int64)SourceString )
        cbDest = 2 * v15 + 2;
      IsVolumeMounted = PfSnIsVolumeMounted(v14);
      v17 = v60;
      if ( IsVolumeMounted < 0 )
        v17 = 0;
      v60 = v17;
      if ( v17
        && (int)PfSnQueryVolumeInfo(a1[1], (_DWORD)v14, (unsigned int)&v53, (unsigned int)&v49, (__int64)&v47) >= 0 )
      {
        v18 = (_OWORD *)ExAllocatePool2(256LL, 72LL, 1984979779LL);
        v19 = v18;
        if ( !v18 )
          goto LABEL_57;
        memset(v18, 0, 0x48uLL);
        v20 = v47;
        v21 = *(_OWORD *)&v53.m256i_u64[2];
        v22 = v49;
        v19[1] = *(_OWORD *)v53.m256i_i8;
        *((_DWORD *)v19 + 15) = v20;
        *((_QWORD *)v19 + 8) = v22;
        v19[2] = v21;
        *((_QWORD *)v19 + 6) = v14;
        *((_DWORD *)v19 + 14) = v15;
        memset(&v53, 0, 24);
        v23 = p_P;
        v53.m256i_i64[3] = 0x200000000LL;
        if ( *p_P != &P )
LABEL_60:
          __fastfail(3u);
        *((_QWORD *)v19 + 1) = p_P;
        *(_QWORD *)v19 = &P;
        *v23 = v19;
        p_P = (PVOID *)v19;
      }
      v14 = (const WCHAR *)((char *)v14 + (_QWORD)SourceString);
      v13 = cbDest;
      v12 = *v14 == 0;
    }
    cbDesta = v13 + 2;
    v24 = (wchar_t *)ExAllocatePool2(256LL, cbDesta, 1984979779LL);
    if ( v24 )
    {
      v25 = v2 + *(unsigned int *)(v2 + 108);
      v26 = 0LL;
      v65 = v25;
      for ( i = 0; (unsigned int)v26 < *(_DWORD *)(v2 + 112); i = v26 )
      {
        v27 = a1[2] + 112 * v26;
        v28 = (unsigned int *)(v25 + 96 * v26);
        *(_QWORD *)(v27 + 16) = v25 + *v28;
        *(_DWORD *)(v27 + 24) = v28[1];
        *(_DWORD *)(v27 + 104) = 0;
        *(_QWORD *)(v27 + 96) = v25 + v28[7];
        v29 = (PVOID *)P;
        if ( P == &P )
          goto LABEL_58;
        while ( 1 )
        {
          v30 = *((_DWORD *)v29 + 15);
          v31 = v29;
          v49 = v29[8];
          if ( PfMetadataRecordIsEqual((__int64)v28, &v49, v30) )
            break;
          v29 = (PVOID *)*v32;
          if ( v29 == &P )
            goto LABEL_58;
        }
        RtlStringCbPrintfW(v24, cbDesta, L"%s\\", v31[6]);
        v51 = 0LL;
        v33 = 0x7FFFLL;
        v34 = v24;
        while ( *v34 )
        {
          ++v34;
          if ( !--v33 )
            goto LABEL_34;
        }
        v35 = 2 * v33;
        *((_QWORD *)&v51 + 1) = v24;
        LOWORD(v51) = -2 - v35;
        WORD1(v51) = -v35;
LABEL_34:
        v36 = (__int64)(v31 + 2);
        if ( (int)PfpOpenHandleCreate((unsigned int)&v52, a1[1], (unsigned int)&v51, 0, 1179785, 33, 128, v36) < 0 )
        {
LABEL_58:
          memset(&v52, 0, 24);
          v52.m256i_i64[3] = 0x200000000LL;
          v44 = (__int64 *)a1[4];
          if ( (__int64 *)*v44 != a1 + 3 )
            goto LABEL_60;
          *(_QWORD *)v27 = a1 + 3;
          *(_QWORD *)(v27 + 8) = v44;
          *v44 = v27;
          a1[4] = v27;
        }
        else
        {
          *(_OWORD *)(v27 + 32) = *(_OWORD *)v36;
          *(_OWORD *)(v27 + 48) = *(_OWORD *)(v36 + 16);
          v37 = *(_OWORD *)&v52.m256i_u64[2];
          v52.m256i_i64[3] = 0x200000000LL;
          *(_OWORD *)v36 = 0LL;
          *(_OWORD *)(v36 + 16) = 0LL;
          *(_QWORD *)(v36 + 24) |= 0x200000000uLL;
          v38 = *(_OWORD *)v52.m256i_i8;
          v52.m256i_i64[0] = 0LL;
          *(_OWORD *)(v27 + 64) = v38;
          *(_OWORD *)(v27 + 80) = v37;
          v39 = (__int64 *)a1[6];
          *(_OWORD *)&v52.m256i_u64[1] = 0LL;
          if ( (__int64 *)*v39 != a1 + 5 )
            goto LABEL_60;
          *(_QWORD *)v27 = a1 + 5;
          *(_QWORD *)(v27 + 8) = v39;
          *v39 = v27;
          v40 = Handle;
          a1[6] = v27;
          *(_DWORD *)(v27 + 108) ^= (*(_DWORD *)(v27 + 108) ^ PfSnVolumeCheckSeekPenalty((HANDLE *)(v27 + 32), v40)) & 1;
          if ( (*(_DWORD *)(v27 + 108) & 1) != 0 )
          {
            v4 |= 1u;
          }
          else if ( (v4 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus((HANDLE *)(v27 + 32), Handle) )
          {
            v4 |= 2u;
          }
        }
        v25 = v65;
        v26 = (unsigned int)(i + 1);
      }
      Event = 0;
      *a2 = v4;
      ExFreePoolWithTag(v24, 0);
    }
    else
    {
LABEL_57:
      Event = -1073741670;
    }
  }
  else
  {
    Event = -1073741811;
  }
LABEL_42:
  if ( (v53.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v53, a1[1]);
  while ( 1 )
  {
    v41 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_60;
    v42 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_60;
    P = *(PVOID *)P;
    *(_QWORD *)(v42 + 8) = &P;
    if ( (v41[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose(v41 + 2, a1[1]);
    ExFreePoolWithTag(v41, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Handle )
    NtClose(Handle);
  PfSnLogOpenVolumesForPrefetch(v2, 0);
  return (unsigned int)Event;
}
