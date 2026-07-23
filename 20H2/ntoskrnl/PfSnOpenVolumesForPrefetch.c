/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x1406E7EB4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406E75F0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14020AEFC (RtlStringCbPrintfW.c)
 *     memset @ 0x140411300 (memset.c)
 *     NtCreateEvent @ 0x140601020 (NtCreateEvent.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     PfpOpenHandleCreate @ 0x140634688 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140634820 (PfpOpenHandleClose.c)
 *     PfSnQueryVolumeInfo @ 0x1406E8494 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1406E85D0 (PfSnIsVolumeMounted.c)
 *     PfMetadataRecordIsEqual @ 0x1406E86F4 (PfMetadataRecordIsEqual.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x1406E8714 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406E87A8 (PfSnVolumeCheckSeekPenalty.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E321C (PfSnVolumeCheckIsSdBus.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r14
  WCHAR *v4; // r12
  int v5; // ebx
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax
  unsigned int i; // esi
  _QWORD *v9; // rdi
  NTSTATUS v10; // edi
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
  __int64 v30; // r8
  PVOID *v31; // r15
  wchar_t *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r15
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 *v38; // rdx
  HANDLE v39; // rdx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 *v43; // rcx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  int v46; // [rsp+50h] [rbp-89h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-81h] BYREF
  PVOID v48; // [rsp+60h] [rbp-79h] BYREF
  HANDLE EventHandle; // [rsp+68h] [rbp-71h] BYREF
  __int128 v50; // [rsp+70h] [rbp-69h] BYREF
  __m256i v51; // [rsp+80h] [rbp-59h] BYREF
  __m256i v52; // [rsp+A0h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-19h] BYREF
  int v54; // [rsp+140h] [rbp+67h]
  int j; // [rsp+140h] [rbp+67h]
  _DWORD *v56; // [rsp+148h] [rbp+6Fh]
  unsigned int cbDest; // [rsp+150h] [rbp+77h]
  size_t cbDesta; // [rsp+150h] [rbp+77h]
  __int64 v59; // [rsp+158h] [rbp+7Fh]

  v56 = a2;
  v2 = *a1;
  p_P = &P;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  P = &P;
  v48 = 0LL;
  LOBYTE(a2) = 1;
  v52.m256i_i64[3] = 0x200000000LL;
  v51.m256i_i64[3] = 0x200000000LL;
  v50 = 0LL;
  v46 = 0;
  v4 = 0LL;
  v54 = 0;
  v5 = 0;
  SourceString = 0LL;
  memset(&v52, 0, 24);
  memset(&v51, 0, 24);
  EventHandle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v2, a2);
  if ( v2 && (v6 = *(_DWORD *)(v2 + 112), v6 < 0x4000) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112 * v6, 0x76506343u);
    a1[2] = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_55;
    for ( i = 0; i < *(_DWORD *)(v2 + 112); v9[11] |= 0x200000000uLL )
    {
      v9 = (_QWORD *)(a1[2] + 112LL * i);
      memset(v9, 0, 0x70uLL);
      v9[1] = v9;
      *v9 = v9;
      ++i;
      *((_OWORD *)v9 + 2) = 0LL;
      *((_OWORD *)v9 + 3) = 0LL;
      v9[7] |= 0x200000000uLL;
      *((_OWORD *)v9 + 4) = 0LL;
      *((_OWORD *)v9 + 5) = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v10 < 0 )
      goto LABEL_39;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)&GUID_DEVINTERFACE_VOLUME,
                         0,
                         0,
                         0,
                         (__int64)&SourceString,
                         0LL);
    v4 = (WCHAR *)SourceString;
    v10 = DeviceInterfaces;
    if ( DeviceInterfaces < 0 )
      goto LABEL_39;
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
      v17 = v54;
      if ( IsVolumeMounted < 0 )
        v17 = 0;
      v54 = v17;
      if ( v17
        && (int)PfSnQueryVolumeInfo(a1[1], (_DWORD)v14, (unsigned int)&v52, (unsigned int)&v48, (__int64)&v46) >= 0 )
      {
        v18 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x76506343u);
        v19 = v18;
        if ( !v18 )
          goto LABEL_55;
        memset(v18, 0, 0x48uLL);
        v20 = v46;
        v21 = *(_OWORD *)&v52.m256i_u64[2];
        v22 = v48;
        v19[1] = *(_OWORD *)v52.m256i_i8;
        *((_DWORD *)v19 + 15) = v20;
        *((_QWORD *)v19 + 8) = v22;
        v19[2] = v21;
        *((_QWORD *)v19 + 6) = v14;
        *((_DWORD *)v19 + 14) = v15;
        memset(&v52, 0, 24);
        v23 = p_P;
        v52.m256i_i64[3] = 0x200000000LL;
        if ( *p_P != &P )
LABEL_59:
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
    v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDesta, 0x76506343u);
    if ( v24 )
    {
      v25 = v2 + *(unsigned int *)(v2 + 108);
      v26 = 0LL;
      v59 = v25;
      for ( j = 0; (unsigned int)v26 < *(_DWORD *)(v2 + 112); j = v26 )
      {
        v27 = a1[2] + 112 * v26;
        v28 = (unsigned int *)(v25 + 96 * v26);
        *(_QWORD *)(v27 + 16) = v25 + *v28;
        *(_DWORD *)(v27 + 24) = v28[1];
        *(_DWORD *)(v27 + 104) = 0;
        *(_QWORD *)(v27 + 96) = v25 + v28[7];
        v29 = (PVOID *)P;
        if ( P == &P )
          goto LABEL_52;
        do
        {
          v30 = *((unsigned int *)v29 + 15);
          v31 = v29;
          v48 = v29[8];
          if ( (unsigned __int8)PfMetadataRecordIsEqual(v28, &v48, v30) )
            break;
          v29 = (PVOID *)*v29;
        }
        while ( v29 != &P );
        if ( v29 == &P )
          goto LABEL_52;
        RtlStringCbPrintfW(v24, cbDesta, L"%s\\", v31[6]);
        v32 = v24;
        v50 = 0LL;
        v33 = 0x7FFFLL;
        do
        {
          if ( !*v32 )
            break;
          ++v32;
          --v33;
        }
        while ( v33 );
        v34 = (0x7FFF - v33) & ((unsigned __int128)-(__int128)(unsigned __int64)v33 >> 64);
        if ( v33 )
        {
          *((_QWORD *)&v50 + 1) = v24;
          LOWORD(v50) = 2 * v34;
          WORD1(v50) = 2 * v34 + 2;
        }
        v35 = (__int64)(v31 + 2);
        if ( (int)PfpOpenHandleCreate((__int64)&v51, a1[1], (__int64)&v50, 0LL, 1179785, 0x21u, 0x80u, v35) < 0 )
        {
LABEL_52:
          memset(&v51, 0, 24);
          v51.m256i_i64[3] = 0x200000000LL;
          v43 = (__int64 *)a1[4];
          if ( (__int64 *)*v43 != a1 + 3 )
            goto LABEL_59;
          *(_QWORD *)v27 = a1 + 3;
          *(_QWORD *)(v27 + 8) = v43;
          *v43 = v27;
          a1[4] = v27;
        }
        else
        {
          *(_OWORD *)(v27 + 32) = *(_OWORD *)v35;
          *(_OWORD *)(v27 + 48) = *(_OWORD *)(v35 + 16);
          v36 = *(_OWORD *)&v51.m256i_u64[2];
          v51.m256i_i64[3] = 0x200000000LL;
          *(_OWORD *)v35 = 0LL;
          *(_OWORD *)(v35 + 16) = 0LL;
          *(_QWORD *)(v35 + 24) |= 0x200000000uLL;
          v37 = *(_OWORD *)v51.m256i_i8;
          v51.m256i_i64[0] = 0LL;
          *(_OWORD *)(v27 + 64) = v37;
          *(_OWORD *)(v27 + 80) = v36;
          v38 = (__int64 *)a1[6];
          *(_OWORD *)&v51.m256i_u64[1] = 0LL;
          if ( (__int64 *)*v38 != a1 + 5 )
            goto LABEL_59;
          *(_QWORD *)v27 = a1 + 5;
          *(_QWORD *)(v27 + 8) = v38;
          *v38 = v27;
          v39 = EventHandle;
          a1[6] = v27;
          *(_DWORD *)(v27 + 108) ^= (*(_DWORD *)(v27 + 108) ^ PfSnVolumeCheckSeekPenalty(v27 + 32, v39)) & 1;
          if ( (*(_DWORD *)(v27 + 108) & 1) != 0 )
          {
            v5 |= 1u;
          }
          else if ( (v5 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v27 + 32, EventHandle) )
          {
            v5 |= 2u;
          }
        }
        v25 = v59;
        v26 = (unsigned int)(j + 1);
      }
      v10 = 0;
      *v56 = v5;
      ExFreePoolWithTag(v24, 0);
    }
    else
    {
LABEL_55:
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_39:
  if ( (v52.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v52, a1[1]);
  while ( 1 )
  {
    v40 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_59;
    v41 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_59;
    P = *(PVOID *)P;
    *(_QWORD *)(v41 + 8) = &P;
    if ( (v40[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose(v40 + 2, a1[1]);
    ExFreePoolWithTag(v40, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v2, 0LL);
  return (unsigned int)v10;
}
