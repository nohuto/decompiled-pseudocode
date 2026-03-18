/*
 * XREFs of ?UmfdServerSendCompleteAndWaitReceive@@YGJPAX0K0PAK0@Z @ 0x8BBEE
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z @ 0x8BB2A (-UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z.c)
 * Callees:
 *     ?QueueWorkItem@CWorkItemQueue@@QAE_NQAVCWorkItem@1@@Z @ 0x875BA (-QueueWorkItem@CWorkItemQueue@@QAE_NQAVCWorkItem@1@@Z.c)
 *     ?WaitForWorkItem@CWorkItemQueue@@QBEPAVCWorkItem@1@_N@Z @ 0x976A2 (-WaitForWorkItem@CWorkItemQueue@@QBEPAVCWorkItem@1@_N@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge UmfdServerSendCompleteAndWaitReceive@<eax>(
        struct CWorkItemQueue::CWorkItem **a1@<edx>,
        CWorkItemQueue **a2@<ecx>,
        void *a3,
        void *a4,
        unsigned int *a5,
        struct CWorkItemQueue::CWorkItem **a6,
        unsigned int *a7,
        void *a8)
{
  struct CWorkItemQueue::CWorkItem *v9; // esi
  unsigned int *v10; // eax
  char v11; // cl
  struct CWorkItemQueue::CWorkItem *v12; // eax
  struct CWorkItemQueue::CWorkItem *v13; // esi
  unsigned int v14; // ebx
  const void *v16; // [esp-8h] [ebp-18h]
  size_t v17; // [esp-4h] [ebp-14h]

  v9 = 0;
  if ( a1 )
  {
    v9 = *a1;
    if ( *a1 )
    {
      v10 = a5;
      goto LABEL_4;
    }
    return -1073741811;
  }
  v10 = a5;
  if ( !a5 )
    return -1073741811;
LABEL_4:
  if ( a6 && a6 != a1 && *a6 )
    return -1073741811;
  v11 = (a6 == 0 ? 0 : 8) | (v10 == 0 ? 0 : 4) | (2 * (a4 != 0) + 1);
  if ( v11 != 15 )
    return -1073741811;
  if ( v9 )
  {
    *((_DWORD *)v9 + 1) = 3;
    KeSetEvent(**(PRKEVENT **)(*((_DWORD *)v9 + 5) + 4), 1, 0);
    *a1 = 0;
  }
  v12 = CWorkItemQueue::WaitForWorkItem(*a2, v11);
  v13 = v12;
  if ( !v12 )
    return -1073741823;
  v14 = *((_DWORD *)v12 + 4);
  if ( v14 > 4 )
  {
    if ( CWorkItemQueue::QueueWorkItem(*a2, v12) )
    {
      *a5 = v14;
      return -1073741789;
    }
    else
    {
      *((_DWORD *)v13 + 1) = 4;
      KeSetEvent(**(PRKEVENT **)(*((_DWORD *)v13 + 5) + 4), 1, 0);
      return -1073740032;
    }
  }
  else
  {
    v17 = *((_DWORD *)v12 + 4);
    *a6 = v12;
    v16 = (const void *)*((_DWORD *)v12 + 2);
    *a5 = v14;
    memcpy(a4, v16, v17);
    return 0;
  }
}
