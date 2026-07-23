/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1405E2E40
 * Callers:
 *     <none>
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14021471C (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1405E3190 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x140622350 (MmQuitNextSession.c)
 *     ObpRemoveObjectRoutine @ 0x140707820 (ObpRemoveObjectRoutine.c)
 *     ObpDeregisterObject @ 0x1408DE4DC (ObpDeregisterObject.c)
 */

int ObpProcessRemoveObjectQueue()
{
  ULONG_PTR NextSession; // rax
  __int64 v1; // rbx
  int v2; // r8d
  __int128 **v3; // r11
  int v4; // r10d
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r9d
  int *v9; // r14
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  signed __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  signed __int32 v21[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v22; // [rsp+28h] [rbp-70h]
  __int128 *v23; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140C13310 )
  {
    v17 = __rdtsc();
    v18 = 41929663 * ((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4);
    qword_140C13310 = v18;
    if ( !v18 )
      qword_140C13310 = 1LL;
    v19 = __rdtsc();
    qword_140C13318 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) >> 4)) ^ 0xC24LL;
    qword_140C13320 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C13320 )
  {
    v22 = &xmmword_140CFCC20;
    v23 = &xmmword_140CFCA60;
    NextSession = MmGetNextSession(0LL);
    v1 = NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession) >= 0 )
      {
        if ( !qword_140C13328 )
          qword_140C13328 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_140CFCA70 && (_BYTE)KdDebuggerNotPresent )
        {
          v2 = 0;
          v3 = &v23;
          v4 = 2;
          do
          {
            v5 = 0;
            v6 = *(_QWORD *)*v3;
            v7 = *((_DWORD *)*v3 + 4);
            v8 = v2 + v6 + (unsigned int)*v3;
            if ( v7 )
            {
              v9 = *(int **)*v3;
              do
              {
                v10 = *v9;
                ++v5;
                v11 = *v9++;
                v8 = v5 * ((v10 + *(_DWORD *)((v11 >> 4) + v6)) ^ v8);
              }
              while ( v5 < v7 );
            }
            --v3;
            v2 += 2 * v8;
            --v4;
          }
          while ( v4 );
          if ( v2 != qword_140C13328 && !qword_140C132E0 )
          {
            v21[8] = -2071986176;
            qword_140C132E0 = (unsigned int)__ROL4__(-2071986176, 233);
            xmmword_140C132E8 = 0LL;
            qword_140C132F8 = 266LL;
            qword_140C13300 = v6;
          }
        }
        MmDetachSession(v1, (__int64)v24);
      }
      MmQuitNextSession(v1);
    }
    if ( qword_140C132E0 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiScanQueues )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiScanQueues,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140C13308 = 3878784LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_140C13320 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  while ( 1 )
  {
    v12 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v13 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v12);
      if ( v13 )
        ObpHandleRevocationBlockRemoveObject(v13);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v12);
      v15 = *(_QWORD *)(v12 + 8);
      LOBYTE(v14) = 1;
      ObpRemoveObjectRoutine(v12, v14);
      v12 = v15;
    }
    while ( v15 && v15 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      v16 = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( v16 == 1 )
        break;
    }
  }
  _InterlockedOr(v21, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v16) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v16;
}
