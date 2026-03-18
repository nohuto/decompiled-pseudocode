/*
 * XREFs of PiSwDeviceFree @ 0x140661C4C
 * Callers:
 *     PiSwDeviceDereference @ 0x140661C18 (PiSwDeviceDereference.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PiSwPnPInfoFree @ 0x140661CD8 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x140661D3C (PiSwInstanceInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x1407645E0 (PiSwFreeInterfaceList.c)
 *     PnpFreeDevPropertyArray @ 0x140779620 (PnpFreeDevPropertyArray.c)
 *     PiSwPdoAssociationFree @ 0x140953970 (PiSwPdoAssociationFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140953AB8 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax

  PiSwInstanceInfoFree(a1 + 8);
  PiSwPnPInfoFree(a1 + 24);
  v2 = *(void **)(a1 + 80);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_OWORD *)(a1 + 72) = 0LL;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    PiSwQueuedCreateInfoFree(v3);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(unsigned int *)(a1 + 176), v5, 1466986064LL);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  result = PiSwFreeInterfaceList(a1 + 184);
  v7 = (_QWORD **)(a1 + 128);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      return result;
    if ( (_QWORD **)v8[1] != v7 )
      goto LABEL_16;
    v9 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8
      || (*v7 = v9,
          v9[1] = v7,
          CurrentThread = KeGetCurrentThread(),
          --CurrentThread->KernelApcDisable,
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u),
          v11 = v8[2],
          *(_QWORD **)(v11 + 8) != v8 + 2)
      || (v12 = (_QWORD *)v8[3], (_QWORD *)*v12 != v8 + 2) )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    result = PiSwPdoAssociationFree(v8);
  }
}
