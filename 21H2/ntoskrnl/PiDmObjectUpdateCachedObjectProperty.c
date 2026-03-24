/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x14063704C
 * Callers:
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406362DC (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140636410 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 *     PiDmGetObject @ 0x140636A6C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140636F9C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140636FEC (PiDmGetCachedKeyIndex.c)
 *     PnpGetObjectProperty @ 0x140637A3C (PnpGetObjectProperty.c)
 *     PiDmCacheDataFree @ 0x14074A884 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x14074A8D0 (PiDmCacheDataEncode.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *Buf2,
        SIZE_T NumberOfBytes)
{
  bool v8; // r15
  __int64 v11; // r14
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // rdi
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v16; // r13
  __int64 v17; // rcx
  const void *v18; // rdi
  unsigned int v19; // eax
  int ObjectProperty; // eax
  void *v21; // rbx
  int v22; // esi
  unsigned int v23; // eax
  struct _KTHREAD *v24; // rax
  size_t Size; // [rsp+68h] [rbp-19h] BYREF
  void *Buf1; // [rsp+70h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-9h] BYREF
  DEVPROPKEY **v28; // [rsp+80h] [rbp-1h] BYREF
  __int64 v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+D8h] [rbp+57h] BYREF
  int v31; // [rsp+DCh] [rbp+5Bh]
  unsigned int v32; // [rsp+E0h] [rbp+5Fh] BYREF

  v31 = HIDWORD(a3);
  BugCheckParameter2 = 0LL;
  v8 = 0;
  v28 = 0LL;
  v32 = 0;
  v30 = 0;
  Buf1 = 0LL;
  LODWORD(Size) = 0;
  if ( !a4 )
  {
    PiDmGetCacheKeys(a1, &v28, &v32);
    if ( v32 )
    {
      v11 = a5;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v28, v32, a5);
      v13 = CachedKeyIndex;
      if ( CachedKeyIndex < v14 && (int)PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2) >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v16 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        v17 = 3 * v13;
        v18 = Buf2;
        v19 = *(_DWORD *)(v16 + 112 + 8 * v17);
        v29 = v16 + 112 + 8 * v17;
        v32 = v19;
        if ( v19 <= 1 )
        {
          PiDmCacheDataEncode(
            a6,
            Buf2,
            (unsigned int)NumberOfBytes,
            LODWORD(v28[v17 + 1]),
            HIDWORD(v28[v17 + 1]),
            v16 + 112 + 8 * v17);
          v8 = v32 == 0;
        }
        ExReleasePushLockEx(v16, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( !v8 )
          goto LABEL_9;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           (unsigned int)NumberOfBytes,
                           0LL,
                           0LL,
                           v11,
                           (__int64)&v30,
                           (__int64)&Buf1,
                           (__int64)&Size,
                           0x10000);
        v21 = Buf1;
        v22 = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
        {
          v30 = 0;
          v22 = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v21 = 0LL;
            Buf1 = 0LL;
          }
          v23 = 0;
        }
        else
        {
          v23 = Size;
        }
        if ( v22 < 0 || v30 != a6 || v23 != (_DWORD)NumberOfBytes )
          goto LABEL_26;
        if ( v21 )
        {
          if ( !v18 )
            goto LABEL_26;
        }
        else if ( v18 )
        {
          goto LABEL_26;
        }
        if ( !v23 )
          goto LABEL_20;
        if ( !v21 )
        {
LABEL_9:
          PiDmObjectRelease((unsigned int *)BugCheckParameter2);
          return;
        }
        if ( !memcmp(v21, v18, v23) )
        {
LABEL_20:
          if ( v21 )
            ExFreePoolWithTag(v21, 0x5A706E50u);
          goto LABEL_9;
        }
LABEL_26:
        v24 = KeGetCurrentThread();
        --v24->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        PiDmCacheDataFree(v29);
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v21 = Buf1;
        goto LABEL_20;
      }
    }
  }
}
