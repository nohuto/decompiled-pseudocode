/*
 * XREFs of CrmRegistrationCreateActivity @ 0x18002FE98
 * Callers:
 *     CrmSrvActivityAllocate @ 0x18002F840 (CrmSrvActivityAllocate.c)
 *     CrmRegistrationStartWithActivity @ 0x180042770 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmActivityDereference @ 0x18002FAA4 (CrmActivityDereference.c)
 *     CrmActivityInitialize @ 0x18002FE08 (CrmActivityInitialize.c)
 *     CrmRegistrationAddActivity @ 0x18002FF5C (CrmRegistrationAddActivity.c)
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 */

__int64 __fastcall CrmRegistrationCreateActivity(__int64 a1, unsigned int a2, volatile signed __int64 **a3)
{
  volatile signed __int64 *Heap; // rax
  volatile signed __int64 *v7; // rbx
  int v8; // edi

  Heap = (volatile signed __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xD8uLL);
  v7 = Heap;
  if ( Heap )
  {
    CrmActivityInitialize((__int64)Heap, a1);
    v8 = CrmActivityStart(v7, a1, a2, a1 + 72);
    if ( v8 >= 0 )
    {
      CrmRegistrationAddActivity(a1, v7);
      if ( a3 )
      {
        if ( _InterlockedIncrement64(v7 + 2) <= 1 )
          __fastfail(0xEu);
        *a3 = v7;
      }
      v7 = 0LL;
      v8 = 0;
    }
    if ( v7 )
      CrmActivityDereference(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
