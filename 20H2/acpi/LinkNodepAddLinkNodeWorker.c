/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1C00917E0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     IrqLibReleaseArbiterLock @ 0x1C000EFA4 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C000EFCC (IrqLibAcquireArbiterLock.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = 0;
  *((_DWORD *)Context + 49) = 0;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v3 = (__int64 *)*((_QWORD *)Context + 90);
  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  v4 = AMLIGetNamedChild(v3, 1397310559);
  v5 = (__int64)v4;
  if ( v4 )
  {
    AMLIEvalNameSpaceObject((unsigned __int64 *)v4, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v5);
  }
  IrqLibAcquireArbiterLock(0);
  v6 = (_QWORD *)qword_1C0081618;
  v7 = Context + 216;
  if ( *(__int64 **)qword_1C0081618 != &LinkNodeListHead )
    __fastfail(3u);
  *v7 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v6;
  *v6 = v7;
  qword_1C0081618 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
