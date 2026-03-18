/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x140A80B3C
 * Callers:
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x1403B51C4 (IopfCallDriver.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1405FF5A0 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x140A81184 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140A8CC6C (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(struct _DEVICE_OBJECT *Object, IRP *a2, __int64 a3)
{
  bool v6; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  PFILE_OBJECT FileObject; // rax
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v14[24]; // [rsp+28h] [rbp-81h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = a2->Type == 6;
  v14[20] = Object;
  v14[21] = a2;
  v14[22] = a3;
  if ( !v6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_OWORD *)&xmmword_140D57548 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 3LL;
    qword_140D57540 = (ULONG_PTR)a2;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_OWORD *)&xmmword_140D57548 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 4LL;
    qword_140D57540 = (ULONG_PTR)Object;
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
        BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        *(&xmmword_140D57548 + 1) = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_140D57540 = (ULONG_PTR)Object;
        xmmword_140D57548 = (ULONG_PTR)a2;
        VfBugCheckNoStackUsage();
      }
    }
  }
  v9 = VfBeforeCallDriver(Object, a2, v14);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v11 = IopPerfCallDriver(Object, a2, v10);
  else
    v11 = IopfCallDriver(Object, a2);
  v13 = v11;
  VfAfterCallDriver(v14, &v13, v9);
  return v13;
}
