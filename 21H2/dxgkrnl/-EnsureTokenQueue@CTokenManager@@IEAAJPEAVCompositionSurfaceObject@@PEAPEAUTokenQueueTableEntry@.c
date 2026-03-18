/*
 * XREFs of ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C00209C8
 * Callers:
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00208C0 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C001943C (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueue(
        CTokenManager *this,
        struct CompositionSurfaceObject *a2,
        struct CTokenManager::TokenQueueTableEntry **a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *inserted; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v12; // [rsp+50h] [rbp+8h] BYREF
  struct CTokenQueue *v13; // [rsp+58h] [rbp+10h] BYREF

  v11[0] = a2;
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 200);
  v11[1] = 0LL;
  v12 = 0;
  v5 = 0;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), v11, 0x10u, &v12);
  if ( inserted )
  {
    if ( v12 )
    {
      v13 = 0LL;
      v5 = CTokenQueue::Create(&v13, v6, v8, v9);
      if ( v5 < 0 )
      {
        RtlDeleteElementGenericTable(v3, inserted);
        inserted = 0LL;
      }
      else
      {
        inserted[1] = v13;
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  if ( a3 )
    *a3 = (struct CTokenManager::TokenQueueTableEntry *)inserted;
  return (unsigned int)v5;
}
