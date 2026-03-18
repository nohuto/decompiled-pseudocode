/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x14074CD70
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x14074CD20 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x1407FC9D0 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x14080AE10 (IoCreateStreamFileObject.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x1402A38B4 (IopGetSetSpecificExtension.c)
 *     IopIncrementVpbRefCount @ 0x1402A3EAC (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402A6E00 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402A7190 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

NTSTATUS __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, PVOID *a4, HANDLE *a5)
{
  HANDLE *v5; // r14
  __int16 v6; // r12
  ULONG_PTR v8; // r15
  int SetSpecificExtension; // edi
  _QWORD *v11; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  struct _SLIST_ENTRY *v14; // rdx
  ULONG_PTR v15; // rcx
  NTSTATUS result; // eax
  PVOID v17; // rcx
  PVOID *NewObject; // [rsp+20h] [rbp-60h]
  _DWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  __int128 v24; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  Object = 0LL;
  v19[1] = 0;
  v8 = a3;
  v23 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return -1073741637;
  }
  if ( v6 && v5 )
    goto LABEL_33;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    goto LABEL_8;
  }
  if ( !a3 )
  {
LABEL_33:
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return -1073741811;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v8, 1);
  v19[0] = 48;
  v20 = 0LL;
  v22 = 512;
  v21 = 0LL;
  v24 = 0LL;
  LOWORD(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(
                           0,
                           IoFileObjectType,
                           (int)v19,
                           0,
                           (__int64)NewObject,
                           216,
                           216,
                           0,
                           &Object,
                           (__int64)&a5);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v8, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return SetSpecificExtension;
  }
  memset(Object, 0, 0xD8uLL);
  *(_WORD *)Object = 5;
  *((_WORD *)Object + 1) = 216;
  *((_QWORD *)Object + 1) = v8;
  *((_DWORD *)Object + 20) = 256;
  KeInitializeEvent((PRKEVENT)((char *)Object + 152), SynchronizationEvent, 0);
  *((_QWORD *)Object + 23) = 0LL;
  v11 = (char *)Object + 192;
  *((_QWORD *)Object + 25) = (char *)Object + 192;
  *v11 = v11;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    v14 = (struct _SLIST_ENTRY *)*((_QWORD *)Object - 2);
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v14);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v14);
    }
    *((_QWORD *)Object - 2) = 0LL;
LABEL_13:
    *((_DWORD *)Object + 20) |= 0x40000u;
    v15 = *(_QWORD *)(v8 + 56);
    if ( v15 )
      IopIncrementVpbRefCount(v15, 1);
    if ( !v6 )
    {
      if ( v5 )
      {
        v17 = Object;
        *v5 = Handle;
        ObfDereferenceObject(v17);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      a5 = 0LL;
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)Object, 1u, 0x20u, 1, &a5, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v5 )
        {
          ObCloseHandle(*v5, 0);
          *v5 = 0LL;
        }
        else
        {
          ObfDereferenceObject(Object);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return SetSpecificExtension;
      }
      *a5 = *(HANDLE *)(a1 + 8);
    }
    *a4 = Object;
    return SetSpecificExtension;
  }
  result = ObInsertObject(Object, 0LL, 1u, 1u, &Object, &Handle);
  SetSpecificExtension = result;
  if ( result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
