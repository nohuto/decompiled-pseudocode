/*
 * XREFs of XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0037C60
 * Callers:
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0037444 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToSetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src)
{
  __int64 v6; // rdi
  size_t v7; // rsi
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  void *v12; // rbp
  int v13; // ebx
  const void *v14; // rdx
  int v15; // edx
  int v16; // r9d
  char v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 16LL * a4;
  v9 = *(_QWORD *)(*(_QWORD *)v6 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v10 = v7 + 48, (int)v7 + 48 < (unsigned int)v7) )
    v10 = 0;
  Pool2 = ExAllocatePool2(64LL, v10, 1229146200LL);
  v12 = (void *)Pool2;
  if ( Pool2 )
  {
    v14 = Src;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_DWORD *)(Pool2 + 32) = 37;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 44) = a4;
    memmove((void *)(Pool2 + 48), v14, v7);
    v13 = SecureChannel_SendRequestSynchronously(v9, v12, v10, &v20, 4);
    if ( v13 >= 0 )
    {
      v13 = v20;
      if ( v20 >= 0 )
      {
        v13 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 20;
        v19 = *(_DWORD *)(v6 + 144);
        v18 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 19;
      v15 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      v19 = *(_DWORD *)(v6 + 144);
      v18 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL);
LABEL_11:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v6 + 80),
        v15,
        13,
        v16,
        (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids,
        v18,
        v19);
    }
LABEL_16:
    ExFreePoolWithTag(v12, 0x49434858u);
    return (unsigned int)v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xDu,
      0x12u,
      (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      v10);
  return (unsigned int)-1073741670;
}
