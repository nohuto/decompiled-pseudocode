/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x1402046B0
 * Callers:
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     IoRegisterPlugPlayNotification @ 0x1406B3480 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag)
{
  signed __int64 BugCheckParameter4; // rbx

  if ( !ObjectType )
  {
    if ( !AccessMode )
      goto LABEL_3;
    return -1073741788;
  }
  if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] != ObjectType )
    return -1073741788;
LABEL_3:
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)Object - 6);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 0x10uLL, BugCheckParameter4);
  return 0;
}
