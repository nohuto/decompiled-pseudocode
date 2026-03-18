/*
 * XREFs of ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C02BC238
 * Callers:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C02BBF0C (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C378 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C02BCC64 (-RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(DXGTRACKEDWORKLOAD *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  void *v5; // rcx
  char *v6; // rcx
  char *v7; // rbx
  void *v8; // rcx

  if ( *((_BYTE *)this + 116) )
  {
    v3 = *((_QWORD *)this + 9);
    *((_BYTE *)this + 116) = 0;
    if ( v3 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v4 + 24) = 1269LL;
      WdLogEvent5_WdAssertion(v4);
    }
    DXGDEVICE::RemoveTrackedWorkloadFromList(*((DXGDEVICE **)this + 2), this);
    if ( *((_QWORD *)this + 141) )
    {
      KeSetEvent((PRKEVENT)this + 46, 0, 0);
      KeWaitForSingleObject(*((PVOID *)this + 141), Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)this + 141));
      *((_QWORD *)this + 141) = 0LL;
    }
    v5 = (void *)*((_QWORD *)this + 11);
    if ( v5 )
    {
      operator delete[](v5);
      *((_QWORD *)this + 11) = 0LL;
    }
    v6 = (char *)*((_QWORD *)this + 4);
    if ( v6 )
    {
      v7 = v6 - 8;
      `vector destructor iterator'(
        v6,
        136LL,
        *((_QWORD *)v6 - 1),
        (void (__fastcall *)(char *))DXGTRACKEDWORKLOAD::WorkloadInstancePair::~WorkloadInstancePair);
      operator delete[](v7);
      *((_QWORD *)this + 4) = 0LL;
    }
    v8 = (void *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      operator delete[](v8);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
