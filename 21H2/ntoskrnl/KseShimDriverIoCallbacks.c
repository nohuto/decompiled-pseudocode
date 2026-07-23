/*
 * XREFs of KseShimDriverIoCallbacks @ 0x1407586E4
 * Callers:
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepPoolFreeNonPaged @ 0x140371494 (KsepPoolFreeNonPaged.c)
 *     memset @ 0x140414300 (memset.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KsepPoolAllocateNonPaged @ 0x1405273C4 (KsepPoolAllocateNonPaged.c)
 *     KsepGetShimCallbacksForDriver @ 0x140758810 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringFree @ 0x14075B9C0 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14075B9F4 (KsepStringDuplicateUnicode.c)
 *     KsepDriverPathTail @ 0x14075BB74 (KsepDriverPathTail.c)
 */

__int64 __fastcall KseShimDriverIoCallbacks(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int ShimCallbacksForDriver; // edi
  char *NonPaged; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // r8
  __int64 (__fastcall **v18)(__int64, IRP *); // rcx
  char *v19; // r9
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, IRP *); // rdx
  __int64 (__fastcall *v22)(__int64, IRP *); // r11
  _QWORD v23[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v24[32]; // [rsp+48h] [rbp-C0h] BYREF

  v3 = a1[6];
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  ShimCallbacksForDriver = 0;
  if ( a3 )
  {
    if ( dword_140C50624 == 2 && (KseEngine & 1) == 0 )
    {
      ShimCallbacksForDriver = KsepStringDuplicateUnicode(v23, a3);
      if ( ShimCallbacksForDriver >= 0 )
      {
        ShimCallbacksForDriver = KsepDriverPathTail(v23, &v23[2]);
        if ( ShimCallbacksForDriver >= 0 )
        {
          ShimCallbacksForDriver = KsepGetShimCallbacksForDriver(a1[3], v24);
          if ( ShimCallbacksForDriver >= 0 )
          {
            NonPaged = (char *)KsepPoolAllocateNonPaged(0x100uLL);
            if ( NonPaged )
            {
              v9 = a1[11];
              if ( v9 )
              {
                v10 = v24[0];
                if ( v24[0] )
                {
                  *(_QWORD *)NonPaged = v9;
                  a1[11] = v10;
                }
              }
              v11 = a1[12];
              if ( v11 )
              {
                v12 = v24[1];
                if ( v24[1] )
                {
                  *((_QWORD *)NonPaged + 1) = v11;
                  a1[12] = v12;
                }
              }
              v13 = a1[13];
              if ( v13 )
              {
                v14 = v24[2];
                if ( v24[2] )
                {
                  *((_QWORD *)NonPaged + 2) = v13;
                  a1[13] = v14;
                }
              }
              v15 = *(_QWORD *)(v3 + 8);
              if ( v15 )
              {
                v16 = v24[3];
                if ( v24[3] )
                {
                  *((_QWORD *)NonPaged + 3) = v15;
                  *(_QWORD *)(v3 + 8) = v16;
                }
              }
              v17 = NonPaged - (char *)a1;
              v18 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
              v19 = (char *)((char *)&v24[4] - (char *)a1);
              v20 = 28LL;
              do
              {
                v21 = *v18;
                if ( *v18 )
                {
                  if ( v21 != IopInvalidDeviceRequest )
                  {
                    v22 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + (_QWORD)v19 - 112);
                    if ( v22 )
                    {
                      *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + v17 - 80) = v21;
                      *v18 = v22;
                    }
                  }
                }
                ++v18;
                --v20;
              }
              while ( v20 );
              *(_QWORD *)(v3 + 56) = NonPaged;
              ShimCallbacksForDriver = 0;
              KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524550LL;
              if ( (KsepDebugFlag & 1) != 0 )
                KsepDebugPrint(9LL, "KSE: Hooked callbacks for driver [%ws].\n", v23[1], v19, v23[0]);
              KsepLogInfo(9LL, (__int64)"KSE: Hooked callbacks for driver [%ws].\n", v23[1], v19, v23[0]);
              goto LABEL_8;
            }
            ShimCallbacksForDriver = -1073741801;
          }
        }
      }
      KsepPoolFreeNonPaged(0LL);
    }
LABEL_8:
    KsepStringFree(v23);
    return (unsigned int)ShimCallbacksForDriver;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524436LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(0LL, "KSE: Callback shimming - missing driver object or driver name.\n");
  KsepLogInfo(0LL, (__int64)"KSE: Callback shimming - missing driver object or driver name.\n");
  return 3221225485LL;
}
