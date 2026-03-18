/*
 * XREFs of DwmSyncGetTitleBarInfo @ 0x1C0014DEC
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C0014CC0 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00152B8 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall DwmSyncGetTitleBarInfo(PVOID Object, __int64 a2, __int64 a3, ULONG *a4)
{
  signed int v8; // edi
  union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm0
  union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 v13; // xmm1
  __int128 v14; // xmm0
  union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  struct _PORT_MESSAGE v28[5]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    v8 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v28, 0, 0xC4uLL);
      v9 = *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)a3;
      v10 = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v28[1].u2.s2.Type = a2;
      v28[0].u1.Length = 12845212;
      v28[1].u1.Length = 1073741849;
      v27 = 196LL;
      v28[0].u2.s2.Type = 0x8000;
      v11 = *(_QWORD *)(a3 + 128);
      *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)((char *)&v28[1].8 + 4) = v9;
      v12 = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(&v28[1].MessageId + 1) = v10;
      v13 = *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)(a3 + 48);
      *(_OWORD *)&v28[2].u2.s2.Type = v12;
      v14 = *(_OWORD *)(a3 + 64);
      *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)((char *)&v28[2].8 + 12) = v13;
      v15 = *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)(a3 + 80);
      *(_OWORD *)(&v28[2].CallbackId + 1) = v14;
      v16 = *(_OWORD *)(a3 + 96);
      *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)((char *)&v28[3].8 + 4) = v15;
      *(_OWORD *)(&v28[3].MessageId + 1) = v16;
      *(_OWORD *)&v28[4].u2.s2.Type = *(_OWORD *)(a3 + 112);
      *(_QWORD *)((char *)&v28[4].DoNotUseThisField + 12) = v11;
      *(&v28[4].MessageId + 1) = *(_DWORD *)(a3 + 136);
      v17 = ((__int64 (__fastcall *)(PVOID, __int64, struct _PORT_MESSAGE *, struct _PORT_MESSAGE *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
              Object,
              0x20000LL,
              v28,
              v28,
              &v27,
              0LL);
      v8 = SyncLpcCheckNtStatus(v17, v28);
      if ( v8 >= 0 )
      {
        if ( HIDWORD(v28[1].DoNotUseThisField) == 140 )
        {
          v18 = *(_QWORD *)((char *)&v28[4].DoNotUseThisField + 12);
          v19 = *(_OWORD *)(&v28[1].MessageId + 1);
          *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)a3 = *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)((char *)&v28[1].8 + 4);
          v20 = *(_OWORD *)&v28[2].u2.s2.Type;
          *(_OWORD *)(a3 + 16) = v19;
          v21 = *(__int128 *)((char *)&v28[2].8 + 12);
          *(_OWORD *)(a3 + 32) = v20;
          v22 = *(_OWORD *)(&v28[2].CallbackId + 1);
          *(_OWORD *)(a3 + 48) = v21;
          v23 = *(__int128 *)((char *)&v28[3].8 + 4);
          *(_OWORD *)(a3 + 64) = v22;
          v24 = *(_OWORD *)(&v28[3].MessageId + 1);
          *(_OWORD *)(a3 + 80) = v23;
          v25 = *(_OWORD *)&v28[4].u2.s2.Type;
          *(_OWORD *)(a3 + 96) = v24;
          *(_OWORD *)(a3 + 112) = v25;
          *(_QWORD *)(a3 + 128) = v18;
          *(_DWORD *)(a3 + 136) = *(&v28[4].MessageId + 1);
          *a4 = v28[4].CallbackId;
        }
        else
        {
          v8 = -1073741453;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
