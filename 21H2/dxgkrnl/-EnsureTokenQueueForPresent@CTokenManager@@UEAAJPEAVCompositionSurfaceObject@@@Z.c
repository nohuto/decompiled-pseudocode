/*
 * XREFs of ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0017C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C0017CDC (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueueForPresent(CTokenManager *this, struct CompositionSurfaceObject *a2)
{
  int v4; // edi
  _QWORD *inserted; // rbx
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+50h] [rbp+8h] BYREF
  struct CTokenQueue *v9; // [rsp+58h] [rbp+10h] BYREF

  ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
  *((_QWORD *)this + 12) = KeGetCurrentThread();
  Buffer[0] = a2;
  v4 = 0;
  Buffer[1] = 0LL;
  NewElement = 0;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), Buffer, 0x10u, &NewElement);
  if ( inserted )
  {
    if ( NewElement )
    {
      v9 = 0LL;
      v4 = CTokenQueue::Create(&v9);
      if ( v4 < 0 )
        RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), inserted);
      else
        inserted[1] = v9;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  return (unsigned int)v4;
}
