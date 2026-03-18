/*
 * XREFs of _EngMapEvent@20 @ 0x1D9EEE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PEVENT __stdcall EngMapEvent(HDEV hDev, HANDLE hUserObject, PVOID Reserved1, PVOID Reserved2, PVOID Reserved3)
{
  PEVENT result; // eax
  PEVENT v6; // esi
  NTSTATUS v7; // eax
  struct _KEVENT *v8; // ecx
  PVOID Object; // [esp+4h] [ebp-4h] BYREF

  result = (PEVENT)Win32AllocPoolNonPaged(8, 1836279364);
  v6 = result;
  if ( result )
  {
    result->pKEvent = 0;
    result->fFlags = 0;
    Object = 0;
    v7 = ObReferenceObjectByHandle(
           hUserObject,
           (ACCESS_MASK)&loc_1F0002 + 1,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Object,
           0);
    v8 = (struct _KEVENT *)Object;
    v6->pKEvent = Object;
    if ( v7 < 0 )
    {
      Win32FreePool(v6);
      v6 = 0;
    }
    else
    {
      KePulseEvent(v8, 1, 0);
      v6->fFlags |= 1u;
    }
    if ( Reserved1 )
      *(_DWORD *)Reserved1 = v6;
    return v6;
  }
  return result;
}
