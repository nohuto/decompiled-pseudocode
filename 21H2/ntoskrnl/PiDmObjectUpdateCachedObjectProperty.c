/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x14062BE5C
 * Callers:
 *     PiDmObjectUpdateCachedCmProperty @ 0x14062B0EC (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x14062B220 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x14062BDAC (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14062BDFC (PiDmGetCachedKeyIndex.c)
 *     PnpGetObjectProperty @ 0x14062C84C (PnpGetObjectProperty.c)
 *     PiDmCacheDataFree @ 0x14074AA44 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x14074AA90 (PiDmCacheDataEncode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int ObjectProperty; // eax
  void *v24; // rbx
  int v25; // esi
  unsigned int v26; // eax
  struct _KTHREAD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  size_t Size; // [rsp+68h] [rbp-19h] BYREF
  void *Buf1; // [rsp+70h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-9h] BYREF
  DEVPROPKEY **v34; // [rsp+80h] [rbp-1h] BYREF
  __int64 v35; // [rsp+88h] [rbp+7h]
  int v36; // [rsp+D8h] [rbp+57h] BYREF
  int v37; // [rsp+DCh] [rbp+5Bh]
  unsigned int v38; // [rsp+E0h] [rbp+5Fh] BYREF

  v37 = HIDWORD(a3);
  BugCheckParameter2 = 0LL;
  v8 = 0;
  v34 = 0LL;
  v38 = 0;
  v36 = 0;
  Buf1 = 0LL;
  LODWORD(Size) = 0;
  if ( !a4 )
  {
    PiDmGetCacheKeys(a1, &v34, &v38);
    if ( v38 )
    {
      v11 = a5;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v34, v38, a5);
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
        v35 = v16 + 112 + 8 * v17;
        v38 = v19;
        if ( v19 <= 1 )
        {
          PiDmCacheDataEncode(
            a6,
            Buf2,
            (unsigned int)NumberOfBytes,
            LODWORD(v34[v17 + 1]),
            HIDWORD(v34[v17 + 1]),
            v16 + 112 + 8 * v17);
          v8 = v38 == 0;
        }
        ExReleasePushLockEx(v16, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
        if ( !v8 )
          goto LABEL_9;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           (unsigned int)NumberOfBytes,
                           0LL,
                           0LL,
                           v11,
                           (__int64)&v36,
                           (__int64)&Buf1,
                           (__int64)&Size,
                           0x10000);
        v24 = Buf1;
        v25 = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
        {
          v36 = 0;
          v25 = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v24 = 0LL;
            Buf1 = 0LL;
          }
          v26 = 0;
        }
        else
        {
          v26 = Size;
        }
        if ( v25 < 0 || v36 != a6 || v26 != (_DWORD)NumberOfBytes )
          goto LABEL_26;
        if ( v24 )
        {
          if ( !v18 )
            goto LABEL_26;
        }
        else if ( v18 )
        {
          goto LABEL_26;
        }
        if ( !v26 )
          goto LABEL_20;
        if ( !v24 )
        {
LABEL_9:
          PiDmObjectRelease((unsigned int *)BugCheckParameter2);
          return;
        }
        if ( !memcmp(v24, v18, v26) )
        {
LABEL_20:
          if ( v24 )
            ExFreePoolWithTag(v24, 0x5A706E50u);
          goto LABEL_9;
        }
LABEL_26:
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        PiDmCacheDataFree(v35);
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
        v24 = Buf1;
        goto LABEL_20;
      }
    }
  }
}
