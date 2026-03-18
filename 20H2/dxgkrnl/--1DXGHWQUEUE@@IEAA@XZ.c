/*
 * XREFs of ??1DXGHWQUEUE@@IEAA@XZ @ 0x1C026B350
 * Callers:
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C0045ED4 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0002378 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGHWQUEUE::~DXGHWQUEUE(DXGHWQUEUE *this, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  DXGDEVICESYNCOBJECT *v5; // rcx
  DXGDEVICESYNCOBJECT *v6; // rcx
  unsigned int v7; // edx
  ULONG_PTR NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 96) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 34LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    NumberOfBytes = 4096LL;
    MmRotatePhysicalView(v4, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    RegionSize = 4096LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 13, &RegionSize, 0x8000u);
  }
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 9);
  if ( v5 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v5);
  v6 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
  if ( v6 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v6);
  v7 = *((_DWORD *)this + 6);
  if ( v7 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), v7);
  *((_QWORD *)this + 2) = 0LL;
}
