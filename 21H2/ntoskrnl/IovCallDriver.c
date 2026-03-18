/*
 * XREFs of IovCallDriver @ 0x140A802F0
 * Callers:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1403B51A0 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x1403B51C4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1405FF5A0 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x140A80ACC (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140A80B3C (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x140A81184 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140A8CC6C (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x140A8D11C (VfIrpAllocateCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(struct _DEVICE_OBJECT *Object, IRP *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  char *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PFILE_OBJECT FileObject; // rax
  unsigned int *v11; // r14
  unsigned int v12; // ebp
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  Entry = 0LL;
  if ( (IovpEnabledInThePast || (MmVerifierData & 0x20) != 0)
    && (ViVerifyAllDrivers == 1 || (a2->Flags & 0x40000000) != 0) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_140D57540 = CurrentIrql;
      *(_OWORD *)&xmmword_140D57548 = 0LL;
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      BugCheckParameter1 = 16LL;
      VfBugCheckNoStackUsage();
    }
    if ( (unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
    {
      v8 = (char *)Entry;
      if ( Entry )
      {
        *((_QWORD *)Entry + 20) = Object;
        *((_QWORD *)v8 + 21) = a2;
        *((_QWORD *)v8 + 22) = a3;
        if ( **((_WORD **)v8 + 21) != 6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140D57540 = *((_QWORD *)v8 + 21);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 3LL;
          *(_OWORD *)&xmmword_140D57548 = 0LL;
          VfBugCheckNoStackUsage();
        }
        if ( !(unsigned __int8)IovpValidateDeviceObject(Object)
          && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140D57540 = *((_QWORD *)v8 + 20);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 4LL;
          *(_OWORD *)&xmmword_140D57548 = 0LL;
          VfBugCheckNoStackUsage();
        }
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        if ( !CurrentStackLocation[-1].MajorFunction )
        {
          FileObject = CurrentStackLocation[-1].FileObject;
          if ( FileObject )
          {
            if ( (FileObject->Flags & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
            {
              v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
              qword_140D57540 = *((_QWORD *)v8 + 20);
              xmmword_140D57548 = *((_QWORD *)v8 + 21);
              *(&xmmword_140D57548 + 1) = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
              *(_QWORD *)&VfBugcheckTmpData = 201LL;
              BugCheckParameter1 = 15LL;
              VfBugCheckNoStackUsage();
            }
          }
        }
        v11 = (unsigned int *)(v8 + 184);
        v12 = VfBeforeCallDriver(Object, a2, v8);
        if ( (IopFunctionPointerMask & 2) != 0 )
          v14 = IopPerfCallDriver(Object, a2, v13);
        else
          v14 = IopfCallDriver(Object, a2);
        *v11 = v14;
        VfAfterCallDriver(v8, v8 + 184, v12);
        v15 = *v11;
        ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v8);
        return v15;
      }
      else
      {
        return IovpCallDriverNoIrpTracking(Object);
      }
    }
    else
    {
      return IovpCallDriverWithStackBuffer(Object);
    }
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(Object, a2, a3);
  }
  else
  {
    return IopfCallDriver(Object, a2);
  }
}
