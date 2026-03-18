/*
 * XREFs of XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0037A58
 * Callers:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0037708 (XilEndpoint_FetchStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToGetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  __int64 v5; // rdi
  size_t v7; // r14
  unsigned int v9; // ebx
  int *Pool2; // rsi
  int v11; // ebx
  int v12; // edx
  int v13; // r9d
  char v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  _BYTE v18[44]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+74h] [rbp-Ch]

  v5 = *(_QWORD *)(a1 + 32);
  v19 = 0;
  memset(&v18[4], 0, 40);
  v7 = 16LL * a4;
  v17 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v9 = v7 + 4, (int)v7 + 4 < (unsigned int)v7) )
    v9 = 0;
  Pool2 = (int *)ExAllocatePool2(64LL, v9, 1229146200LL);
  if ( Pool2 )
  {
    memset(v18, 0, 24);
    *(_QWORD *)&v18[32] = 36LL;
    *(_QWORD *)&v18[24] = a2;
    *(_DWORD *)&v18[40] = 0;
    v19 = a4;
    v11 = SecureChannel_SendRequestSynchronously(v17, v18, 48LL, Pool2, v9);
    if ( v11 >= 0 )
    {
      v11 = *Pool2;
      if ( *Pool2 >= 0 )
      {
        memmove(a5, Pool2 + 1, v7);
        v11 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 23;
        v16 = *(_DWORD *)(v5 + 144);
        v15 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 22;
      v12 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
      v16 = *(_DWORD *)(v5 + 144);
      v15 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL);
LABEL_11:
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v5 + 80),
        v12,
        13,
        v13,
        (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids,
        v15,
        v16);
    }
LABEL_16:
    ExFreePoolWithTag(Pool2, 0x49434858u);
    return (unsigned int)v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x15u,
      (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v9);
  return (unsigned int)-1073741670;
}
