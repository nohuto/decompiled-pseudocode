/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0110F64
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C00063B0 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C02277B4 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9F4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C0111284 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C0157964 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C023893C (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  void *v4; // rdi
  _QWORD *v5; // rdi
  struct _SLIST_ENTRY *v6; // rcx
  _QWORD **v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  operator delete[](*((void **)this + 13));
  operator delete[](*((void **)this + 15));
  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 19));
    operator delete(v4);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v5 )
  {
    v6 = (struct _SLIST_ENTRY *)v5[1];
    if ( v6 )
      CRefCountedBuffer::RefCountedBufferRelease(v6);
    operator delete(v5);
  }
  v7 = (_QWORD **)((char *)this + 136);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 || (v3 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
      __fastfail(3u);
    v9 = v8 - 6;
    *v7 = v3;
    v3[1] = v7;
    if ( v8 != (_QWORD *)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v8 - 6));
      operator delete(v9);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 16) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v12 + 24) = 386LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v10 = (char *)*((_QWORD *)this + 21);
  if ( v10 != (char *)this + 160 )
    operator delete[](v10);
  if ( *((_DWORD *)this + 50) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v10, v2);
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 197), *((_DWORD *)this + 50));
    *((_DWORD *)this + 50) = 0;
  }
  v11 = *((_QWORD *)this + 10);
  if ( v11 )
  {
    v11 = *(_QWORD *)(v11 + 16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
  }
  if ( (*((_DWORD *)this + 3) & 0x400) != 0 )
  {
    v11 = *((_QWORD *)this + 24);
    if ( v11 )
    {
      ObfDereferenceObject((PVOID)v11);
      *((_QWORD *)this + 24) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 24) && (*((_DWORD *)this + 3) & 0x200) == 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v2);
    *(_QWORD *)(v14 + 24) = 408LL;
    WdLogEvent5_WdAssertion(v14);
  }
}
