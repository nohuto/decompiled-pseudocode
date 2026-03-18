/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x1406B0C90
 * Callers:
 *     <none>
 * Callees:
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     MmGetNextSession @ 0x1402537E0 (MmGetNextSession.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140300270 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F7730 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x140611140 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406B0FE0 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x1406E3830 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x1408E0BBC (ObpDeregisterObject.c)
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
  __int64 v14; // rdi
  signed __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  signed __int32 v20[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v21; // [rsp+28h] [rbp-70h]
  __int128 *v22; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140C13150 )
  {
    v16 = __rdtsc();
    v17 = 41929663 * ((((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) >> 4);
    qword_140C13150 = v17;
    if ( !v17 )
      qword_140C13150 = 1LL;
    v18 = __rdtsc();
    qword_140C13158 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) >> 4)) ^ 0xC24LL;
    qword_140C13160 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C13160 )
  {
    v21 = &xmmword_140CFCC20;
    v22 = &xmmword_140CFCA60;
    NextSession = MmGetNextSession(0LL);
    v1 = NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession) >= 0 )
      {
        if ( !qword_140C13168 )
          qword_140C13168 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_140CFCA70 && (_BYTE)KdDebuggerNotPresent )
        {
          v2 = 0;
          v3 = &v22;
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
          if ( v2 != qword_140C13168 && !qword_140C13120 )
          {
            v20[8] = -2071986176;
            qword_140C13120 = (unsigned int)__ROL4__(-2071986176, 233);
            xmmword_140C13128 = 0LL;
            qword_140C13138 = 266LL;
            qword_140C13140 = v6;
          }
        }
        MmDetachSession(v1, (__int64)v23);
      }
      MmQuitNextSession(v1);
    }
    if ( qword_140C13120 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiScanQueues )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiScanQueues,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140C13148 = 3878784LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_140C13160 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
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
      v14 = *(_QWORD *)(v12 + 8);
      ObpRemoveObjectRoutine(v12, 1);
      v12 = v14;
    }
    while ( v14 && v14 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      v15 = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( v15 == 1 )
        break;
    }
  }
  _InterlockedOr(v20, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v15) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v15;
}
